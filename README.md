# 2017-vmcai

This repository supports my paper submission to VMCAI 2017.

If you think that something is missing, please open a pull request.

## CIL formalization and inference algorithm

See _EBAinfer.pdf_.

## Setup for evaluation

I have run on a machine running Ubuntu 14.04.5 LTS (GNU/Linux 3.19.0-25-generic x86_64).
Some fine installation details given here may be different if you are using a different operating system.

Install some basic packages:

    sudo apt-get install build-essential autoconf pkg-config

Get Linux 4.7-rc1 and gunzip it:

    wget https://github.com/torvalds/linux/archive/v4.7-rc1.tar.gz

You may need to install a few packages ...

    sudo apt-get install libelf-dev libssl-dev

... before configuring the kernel with _allyesconfig_:

    make allyesconfig

Get EBA and follow follow the installation instructions (see _README.md_):

    git clone https://github.com/models-team/eba.git

When EBA is invoked by Kbuild, we need a wrapper that "simulates" GCC, this is _bin/eba-gcc.hs_.
Install the Haskell Platform and compile the script:

    sudo apt-get install haskell-platform
    ghc -O2 eba-gcc.hs

If you want to run EBA over already preprocessed files, in paralell, you should use the _bin/eba-linux.sh_ script.
You must install _parallel_:

    sudo apt-get install parallel

Get Smatch and follow the [installation instructions](http://smatch.sourceforge.net), essentially:

    git clone git://repo.or.cz/smatch.git
    cd smatch
    git checkout 78b2ea64f3dc

I had to install a few extra packages to compile Smatch:

    sudo apt-get install sqlite3 libsqlite3-dev python-pysqlite2 libdbd-sqlite3-perl

Get Coccinelle and follow the installation instructions (see _install.txt_):

    git clone https://github.com/coccinelle/coccinelle.git
    cd coccinelle
    git checkout 99f1de0f8cad

I had to install a few extra packages to compile Coccinelle:

    sudo apt-get install python-dev libpcre3-dev

Coccinelle also depends on some OCaml packages that you can easily install through [OPAM](http://opam.ocaml.org):

    opam install --deps-only coccinelle

## Comparison on benchmark of historical Linux bugs

The preprocessed files for running EBA and Smatch are located in _5.1/cpped_, the raw unpreprocessed files for running Coccinelle are located in _5.1/raw_.

Running EBA:

    eba -L --all-locks --externs-do-nothing path/to/cpped/file.c 2>/dev/null

Running Smatch:

    smatch -p=kernel path/to/cpped/file.c |& grep -i " lock"

Running Coccinelle:

    spatch --very-quiet --sp-file path/to/linux/scripts/coccinelle/locks/double_lock.cocci -D report path/to/raw/file.c

## Finding bugs in Linux device drivers

You can find my scripts in _5.2/_, just put all of them in your _$PATH_.
Some of the scripts have recognize _--help_.

To run EBA:

    eba-linux-make-drivers 16 # to run 16 jobs in parallel

All the bug warnings are placed in _eba.warns_.

To run Smatch:

    smatch-test-kernel-drivers

All the bug warnings are placed in *smatch_warns.txt*.

To run Coccinelle:

    make coccicheck COCCI=scripts/coccinelle/locks/double_lock.cocci MODE=report M=drivers/

