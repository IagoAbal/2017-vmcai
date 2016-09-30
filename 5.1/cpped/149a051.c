# 1 "block/as-iosched.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./include/linux/autoconf.h" 1
# 1 "<command-line>" 2
# 1 "block/as-iosched.c"







# 1 "include/linux/kernel.h" 1
# 10 "include/linux/kernel.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 98 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 11 "include/linux/kernel.h" 2
# 1 "include/linux/linkage.h" 1



# 1 "include/asm/linkage.h" 1



# 1 "include/asm/linkage_64.h" 1
# 5 "include/asm/linkage.h" 2
# 5 "include/linux/linkage.h" 2
# 12 "include/linux/kernel.h" 2
# 1 "include/linux/stddef.h" 1



# 1 "include/linux/compiler.h" 1
# 40 "include/linux/compiler.h"
# 1 "include/linux/compiler-gcc4.h" 1





# 1 "include/linux/compiler-gcc.h" 1
# 7 "include/linux/compiler-gcc4.h" 2
# 41 "include/linux/compiler.h" 2
# 5 "include/linux/stddef.h" 2
# 15 "include/linux/stddef.h"
enum {
 false = 0,
 true = 1
};
# 13 "include/linux/kernel.h" 2
# 1 "include/linux/types.h" 1
# 11 "include/linux/types.h"
# 1 "include/linux/posix_types.h" 1
# 36 "include/linux/posix_types.h"
typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "include/asm/posix_types.h" 1




# 1 "include/asm/posix_types_64.h" 1
# 10 "include/asm/posix_types_64.h"
typedef unsigned long __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
typedef unsigned long __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;
typedef unsigned long __kernel_size_t;
typedef long __kernel_ssize_t;
typedef long __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;


typedef long long __kernel_loff_t;


typedef struct {
 int val[2];
} __kernel_fsid_t;

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef __kernel_uid_t __kernel_uid32_t;
typedef __kernel_gid_t __kernel_gid32_t;

typedef unsigned long __kernel_old_dev_t;




static __inline__ __attribute__((always_inline)) void __FD_SET(unsigned long fd, __kernel_fd_set *fdsetp)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 fdsetp->fds_bits[_tmp] |= (1UL<<_rem);
}


static __inline__ __attribute__((always_inline)) void __FD_CLR(unsigned long fd, __kernel_fd_set *fdsetp)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 fdsetp->fds_bits[_tmp] &= ~(1UL<<_rem);
}


static __inline__ __attribute__((always_inline)) int __FD_ISSET(unsigned long fd, __const__ __kernel_fd_set *p)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 return (p->fds_bits[_tmp] & (1UL<<_rem)) != 0;
}






static __inline__ __attribute__((always_inline)) void __FD_ZERO(__kernel_fd_set *p)
{
 unsigned long *tmp = p->fds_bits;
 int i;

 if (__builtin_constant_p((1024/(8 * sizeof(unsigned long))))) {
  switch ((1024/(8 * sizeof(unsigned long)))) {
   case 32:
     tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
     tmp[ 4] = 0; tmp[ 5] = 0; tmp[ 6] = 0; tmp[ 7] = 0;
     tmp[ 8] = 0; tmp[ 9] = 0; tmp[10] = 0; tmp[11] = 0;
     tmp[12] = 0; tmp[13] = 0; tmp[14] = 0; tmp[15] = 0;
     tmp[16] = 0; tmp[17] = 0; tmp[18] = 0; tmp[19] = 0;
     tmp[20] = 0; tmp[21] = 0; tmp[22] = 0; tmp[23] = 0;
     tmp[24] = 0; tmp[25] = 0; tmp[26] = 0; tmp[27] = 0;
     tmp[28] = 0; tmp[29] = 0; tmp[30] = 0; tmp[31] = 0;
     return;
   case 16:
     tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
     tmp[ 4] = 0; tmp[ 5] = 0; tmp[ 6] = 0; tmp[ 7] = 0;
     tmp[ 8] = 0; tmp[ 9] = 0; tmp[10] = 0; tmp[11] = 0;
     tmp[12] = 0; tmp[13] = 0; tmp[14] = 0; tmp[15] = 0;
     return;
   case 8:
     tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
     tmp[ 4] = 0; tmp[ 5] = 0; tmp[ 6] = 0; tmp[ 7] = 0;
     return;
   case 4:
     tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
     return;
  }
 }
 i = (1024/(8 * sizeof(unsigned long)));
 while (i) {
  i--;
  *tmp = 0;
  tmp++;
 }
}
# 6 "include/asm/posix_types.h" 2
# 48 "include/linux/posix_types.h" 2
# 12 "include/linux/types.h" 2
# 1 "include/asm/types.h" 1





typedef unsigned short umode_t;






typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;







typedef __signed__ long long __s64;
typedef unsigned long long __u64;
# 47 "include/asm/types.h"
typedef signed char s8;
typedef unsigned char u8;

typedef signed short s16;
typedef unsigned short u16;

typedef signed int s32;
typedef unsigned int u32;

typedef signed long long s64;
typedef unsigned long long u64;

typedef u64 dma64_addr_t;


typedef u64 dma_addr_t;
# 13 "include/linux/types.h" 2



typedef __u32 __kernel_dev_t;

typedef __kernel_fd_set fd_set;
typedef __kernel_dev_t dev_t;
typedef __kernel_ino_t ino_t;
typedef __kernel_mode_t mode_t;
typedef __kernel_nlink_t nlink_t;
typedef __kernel_off_t off_t;
typedef __kernel_pid_t pid_t;
typedef __kernel_daddr_t daddr_t;
typedef __kernel_key_t key_t;
typedef __kernel_suseconds_t suseconds_t;
typedef __kernel_timer_t timer_t;
typedef __kernel_clockid_t clockid_t;
typedef __kernel_mqd_t mqd_t;


typedef _Bool bool;

typedef __kernel_uid32_t uid_t;
typedef __kernel_gid32_t gid_t;
typedef __kernel_uid16_t uid16_t;
typedef __kernel_gid16_t gid16_t;

typedef unsigned long uintptr_t;



typedef __kernel_old_uid_t old_uid_t;
typedef __kernel_old_gid_t old_gid_t;
# 57 "include/linux/types.h"
typedef __kernel_loff_t loff_t;
# 66 "include/linux/types.h"
typedef __kernel_size_t size_t;




typedef __kernel_ssize_t ssize_t;




typedef __kernel_ptrdiff_t ptrdiff_t;




typedef __kernel_time_t time_t;




typedef __kernel_clock_t clock_t;




typedef __kernel_caddr_t caddr_t;



typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;


typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;




typedef __u8 u_int8_t;
typedef __s8 int8_t;
typedef __u16 u_int16_t;
typedef __s16 int16_t;
typedef __u32 u_int32_t;
typedef __s32 int32_t;



typedef __u8 uint8_t;
typedef __u16 uint16_t;
typedef __u32 uint32_t;


typedef __u64 uint64_t;
typedef __u64 u_int64_t;
typedef __s64 int64_t;
# 142 "include/linux/types.h"
typedef unsigned long sector_t;
# 151 "include/linux/types.h"
typedef unsigned long blkcnt_t;
# 180 "include/linux/types.h"
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;

typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;


typedef unsigned gfp_t;


typedef u64 resource_size_t;






struct ustat {
 __kernel_daddr_t f_tfree;
 __kernel_ino_t f_tinode;
 char f_fname[6];
 char f_fpack[6];
};
# 14 "include/linux/kernel.h" 2

# 1 "include/linux/bitops.h" 1
# 17 "include/linux/bitops.h"
# 1 "include/asm/bitops.h" 1



# 1 "include/asm/bitops_64.h" 1
# 12 "include/asm/bitops_64.h"
# 1 "include/asm/alternative.h" 1



# 1 "include/asm/alternative_64.h" 1
# 43 "include/asm/alternative_64.h"
# 1 "include/asm/cpufeature.h" 1



# 1 "include/asm/cpufeature_64.h" 1
# 10 "include/asm/cpufeature_64.h"
# 1 "include/asm/cpufeature_32.h" 1
# 11 "include/asm/cpufeature_32.h"
# 1 "include/linux/bitops.h" 1
# 12 "include/asm/cpufeature_32.h" 2

# 1 "include/asm/required-features.h" 1
# 14 "include/asm/cpufeature_32.h" 2
# 11 "include/asm/cpufeature_64.h" 2
# 5 "include/asm/cpufeature.h" 2
# 44 "include/asm/alternative_64.h" 2

struct alt_instr {
 u8 *instr;
 u8 *replacement;
 u8 cpuid;
 u8 instrlen;
 u8 replacementlen;
 u8 pad[5];
};

extern void alternative_instructions(void);
extern void apply_alternatives(struct alt_instr *start, struct alt_instr *end);

struct module;


extern void alternatives_smp_module_add(struct module *mod, char *name,
     void *locks, void *locks_end,
     void *text, void *text_end);
extern void alternatives_smp_module_del(struct module *mod);
extern void alternatives_smp_switch(int smp);
# 146 "include/asm/alternative_64.h"
struct paravirt_patch;



static inline __attribute__((always_inline)) void
apply_paravirt(struct paravirt_patch *start, struct paravirt_patch *end)
{}




extern void text_poke(void *addr, unsigned char *opcode, int len);
# 5 "include/asm/alternative.h" 2
# 13 "include/asm/bitops_64.h" 2
# 32 "include/asm/bitops_64.h"
static inline __attribute__((always_inline)) void set_bit(int nr, volatile void *addr)
{
 __asm__ __volatile__( ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; "
  "btsl %1,%0"
  :"+m" (*(volatile long *) addr)
  :"dIr" (nr) : "memory");
}
# 49 "include/asm/bitops_64.h"
static inline __attribute__((always_inline)) void __set_bit(int nr, volatile void *addr)
{
 __asm__ volatile(
  "btsl %1,%0"
  :"+m" (*(volatile long *) addr)
  :"dIr" (nr) : "memory");
}
# 67 "include/asm/bitops_64.h"
static inline __attribute__((always_inline)) void clear_bit(int nr, volatile void *addr)
{
 __asm__ __volatile__( ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; "
  "btrl %1,%0"
  :"+m" (*(volatile long *) addr)
  :"dIr" (nr));
}
# 83 "include/asm/bitops_64.h"
static inline __attribute__((always_inline)) void clear_bit_unlock(unsigned long nr, volatile unsigned long *addr)
{
 __asm__ __volatile__("": : :"memory");
 clear_bit(nr, addr);
}

static inline __attribute__((always_inline)) void __clear_bit(int nr, volatile void *addr)
{
 __asm__ __volatile__(
  "btrl %1,%0"
  :"+m" (*(volatile long *) addr)
  :"dIr" (nr));
}
# 109 "include/asm/bitops_64.h"
static inline __attribute__((always_inline)) void __clear_bit_unlock(unsigned long nr, volatile unsigned long *addr)
{
 __asm__ __volatile__("": : :"memory");
 __clear_bit(nr, addr);
}
# 127 "include/asm/bitops_64.h"
static inline __attribute__((always_inline)) void __change_bit(int nr, volatile void *addr)
{
 __asm__ __volatile__(
  "btcl %1,%0"
  :"+m" (*(volatile long *) addr)
  :"dIr" (nr));
}
# 144 "include/asm/bitops_64.h"
static inline __attribute__((always_inline)) void change_bit(int nr, volatile void *addr)
{
 __asm__ __volatile__( ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; "
  "btcl %1,%0"
  :"+m" (*(volatile long *) addr)
  :"dIr" (nr));
}
# 160 "include/asm/bitops_64.h"
static inline __attribute__((always_inline)) int test_and_set_bit(int nr, volatile void *addr)
{
 int oldbit;

 __asm__ __volatile__( ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; "
  "btsl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" (*(volatile long *) addr)
  :"dIr" (nr) : "memory");
 return oldbit;
}
# 178 "include/asm/bitops_64.h"
static inline __attribute__((always_inline)) int test_and_set_bit_lock(int nr, volatile void *addr)
{
 return test_and_set_bit(nr, addr);
}
# 192 "include/asm/bitops_64.h"
static inline __attribute__((always_inline)) int __test_and_set_bit(int nr, volatile void *addr)
{
 int oldbit;

 __asm__(
  "btsl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" (*(volatile long *) addr)
  :"dIr" (nr));
 return oldbit;
}
# 211 "include/asm/bitops_64.h"
static inline __attribute__((always_inline)) int test_and_clear_bit(int nr, volatile void *addr)
{
 int oldbit;

 __asm__ __volatile__( ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; "
  "btrl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" (*(volatile long *) addr)
  :"dIr" (nr) : "memory");
 return oldbit;
}
# 231 "include/asm/bitops_64.h"
static inline __attribute__((always_inline)) int __test_and_clear_bit(int nr, volatile void *addr)
{
 int oldbit;

 __asm__(
  "btrl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" (*(volatile long *) addr)
  :"dIr" (nr));
 return oldbit;
}


static inline __attribute__((always_inline)) int __test_and_change_bit(int nr, volatile void *addr)
{
 int oldbit;

 __asm__ __volatile__(
  "btcl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" (*(volatile long *) addr)
  :"dIr" (nr) : "memory");
 return oldbit;
}
# 262 "include/asm/bitops_64.h"
static inline __attribute__((always_inline)) int test_and_change_bit(int nr, volatile void *addr)
{
 int oldbit;

 __asm__ __volatile__( ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; "
  "btcl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" (*(volatile long *) addr)
  :"dIr" (nr) : "memory");
 return oldbit;
}
# 282 "include/asm/bitops_64.h"
static inline __attribute__((always_inline)) int constant_test_bit(int nr, const volatile void *addr)
{
 return ((1UL << (nr & 31)) & (((const volatile unsigned int *) addr)[nr >> 5])) != 0;
}

static inline __attribute__((always_inline)) int variable_test_bit(int nr, volatile const void *addr)
{
 int oldbit;

 __asm__ __volatile__(
  "btl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit)
  :"m" (*(volatile long *)addr),"dIr" (nr));
 return oldbit;
}
# 305 "include/asm/bitops_64.h"
extern long find_first_zero_bit(const unsigned long *addr, unsigned long size);
extern long find_next_zero_bit(const unsigned long *addr, long size, long offset);
extern long find_first_bit(const unsigned long *addr, unsigned long size);
extern long find_next_bit(const unsigned long *addr, long size, long offset);


static inline __attribute__((always_inline)) long __scanbit(unsigned long val, unsigned long max)
{
 asm("bsfq %1,%0 ; cmovz %2,%0" : "=&r" (val) : "r" (val), "r" (max));
 return val;
}
# 340 "include/asm/bitops_64.h"
extern unsigned long
find_next_zero_string(unsigned long *bitmap, long start, long nbits, int len);

static inline __attribute__((always_inline)) void set_bit_string(unsigned long *bitmap, unsigned long i,
      int len)
{
 unsigned long end = i + len;
 while (i < end) {
  __set_bit(i, bitmap);
  i++;
 }
}

static inline __attribute__((always_inline)) void __clear_bit_string(unsigned long *bitmap, unsigned long i,
        int len)
{
 unsigned long end = i + len;
 while (i < end) {
  __clear_bit(i, bitmap);
  i++;
 }
}







static inline __attribute__((always_inline)) unsigned long ffz(unsigned long word)
{
 __asm__("bsfq %1,%0"
  :"=r" (word)
  :"r" (~word));
 return word;
}







static inline __attribute__((always_inline)) unsigned long __ffs(unsigned long word)
{
 __asm__("bsfq %1,%0"
  :"=r" (word)
  :"rm" (word));
 return word;
}







static inline __attribute__((always_inline)) unsigned long __fls(unsigned long word)
{
 __asm__("bsrq %1,%0"
  :"=r" (word)
  :"rm" (word));
 return word;
}



# 1 "include/asm-generic/bitops/sched.h" 1
# 12 "include/asm-generic/bitops/sched.h"
static inline __attribute__((always_inline)) int sched_find_first_bit(const unsigned long *b)
{

 if (b[0])
  return __ffs(b[0]);
 return __ffs(b[1]) + 64;
# 29 "include/asm-generic/bitops/sched.h"
}
# 408 "include/asm/bitops_64.h" 2
# 417 "include/asm/bitops_64.h"
static inline __attribute__((always_inline)) int ffs(int x)
{
 int r;

 __asm__("bsfl %1,%0\n\t"
  "cmovzl %2,%0"
  : "=r" (r) : "rm" (x), "r" (-1));
 return r+1;
}







static inline __attribute__((always_inline)) int fls64(__u64 x)
{
 if (x == 0)
  return 0;
 return __fls(x) + 1;
}







static inline __attribute__((always_inline)) int fls(int x)
{
 int r;

 __asm__("bsrl %1,%0\n\t"
  "cmovzl %2,%0"
  : "=&r" (r) : "rm" (x), "rm" (-1));
 return r+1;
}



# 1 "include/asm-generic/bitops/hweight.h" 1





extern unsigned int hweight32(unsigned int w);
extern unsigned int hweight16(unsigned int w);
extern unsigned int hweight8(unsigned int w);
extern unsigned long hweight64(__u64 w);
# 459 "include/asm/bitops_64.h" 2





# 1 "include/asm-generic/bitops/ext2-non-atomic.h" 1



# 1 "include/asm-generic/bitops/le.h" 1




# 1 "include/asm/byteorder.h" 1
# 46 "include/asm/byteorder.h"
static __inline__ __attribute__((always_inline)) __attribute__((__const__)) __u64 ___arch__swab64(__u64 x)
{
 __asm__("bswapq %0" : "=r" (x) : "0" (x));
 return x;
}

static __inline__ __attribute__((always_inline)) __attribute__((__const__)) __u32 ___arch__swab32(__u32 x)
{
 __asm__("bswapl %0" : "=r" (x) : "0" (x));
 return x;
}
# 70 "include/asm/byteorder.h"
# 1 "include/linux/byteorder/little_endian.h" 1
# 12 "include/linux/byteorder/little_endian.h"
# 1 "include/linux/byteorder/swab.h" 1
# 64 "include/linux/byteorder/swab.h"
static __inline__ __attribute__((always_inline)) __attribute__((__const__)) __u16 ___swab16(__u16 x)
{
 return x<<8 | x>>8;
}
static __inline__ __attribute__((always_inline)) __attribute__((__const__)) __u32 ___swab32(__u32 x)
{
 return x<<24 | x>>24 |
  (x & (__u32)0x0000ff00UL)<<8 |
  (x & (__u32)0x00ff0000UL)>>8;
}
static __inline__ __attribute__((always_inline)) __attribute__((__const__)) __u64 ___swab64(__u64 x)
{
 return x<<56 | x>>56 |
  (x & (__u64)0x000000000000ff00ULL)<<40 |
  (x & (__u64)0x0000000000ff0000ULL)<<24 |
  (x & (__u64)0x00000000ff000000ULL)<< 8 |
         (x & (__u64)0x000000ff00000000ULL)>> 8 |
  (x & (__u64)0x0000ff0000000000ULL)>>24 |
  (x & (__u64)0x00ff000000000000ULL)>>40;
}
# 163 "include/linux/byteorder/swab.h"
static __inline__ __attribute__((always_inline)) __attribute__((__const__)) __u16 __fswab16(__u16 x)
{
 return ___swab16(x);
}
static __inline__ __attribute__((always_inline)) __u16 __swab16p(const __u16 *x)
{
 return ___swab16(*(x));
}
static __inline__ __attribute__((always_inline)) void __swab16s(__u16 *addr)
{
 ((void)(*(addr) = ___swab16(*(addr))));
}

static __inline__ __attribute__((always_inline)) __attribute__((__const__)) __u32 __fswab32(__u32 x)
{
 return ___arch__swab32(x);
}
static __inline__ __attribute__((always_inline)) __u32 __swab32p(const __u32 *x)
{
 return ___arch__swab32(*(x));
}
static __inline__ __attribute__((always_inline)) void __swab32s(__u32 *addr)
{
 ((void)(*(addr) = ___arch__swab32(*(addr))));
}


static __inline__ __attribute__((always_inline)) __attribute__((__const__)) __u64 __fswab64(__u64 x)
{





 return ___arch__swab64(x);

}
static __inline__ __attribute__((always_inline)) __u64 __swab64p(const __u64 *x)
{
 return ___arch__swab64(*(x));
}
static __inline__ __attribute__((always_inline)) void __swab64s(__u64 *addr)
{
 ((void)(*(addr) = ___arch__swab64(*(addr))));
}
# 13 "include/linux/byteorder/little_endian.h" 2
# 43 "include/linux/byteorder/little_endian.h"
static inline __attribute__((always_inline)) __le64 __cpu_to_le64p(const __u64 *p)
{
 return ( __le64)*p;
}
static inline __attribute__((always_inline)) __u64 __le64_to_cpup(const __le64 *p)
{
 return ( __u64)*p;
}
static inline __attribute__((always_inline)) __le32 __cpu_to_le32p(const __u32 *p)
{
 return ( __le32)*p;
}
static inline __attribute__((always_inline)) __u32 __le32_to_cpup(const __le32 *p)
{
 return ( __u32)*p;
}
static inline __attribute__((always_inline)) __le16 __cpu_to_le16p(const __u16 *p)
{
 return ( __le16)*p;
}
static inline __attribute__((always_inline)) __u16 __le16_to_cpup(const __le16 *p)
{
 return ( __u16)*p;
}
static inline __attribute__((always_inline)) __be64 __cpu_to_be64p(const __u64 *p)
{
 return ( __be64)__swab64p(p);
}
static inline __attribute__((always_inline)) __u64 __be64_to_cpup(const __be64 *p)
{
 return __swab64p((__u64 *)p);
}
static inline __attribute__((always_inline)) __be32 __cpu_to_be32p(const __u32 *p)
{
 return ( __be32)__swab32p(p);
}
static inline __attribute__((always_inline)) __u32 __be32_to_cpup(const __be32 *p)
{
 return __swab32p((__u32 *)p);
}
static inline __attribute__((always_inline)) __be16 __cpu_to_be16p(const __u16 *p)
{
 return ( __be16)__swab16p(p);
}
static inline __attribute__((always_inline)) __u16 __be16_to_cpup(const __be16 *p)
{
 return __swab16p((__u16 *)p);
}
# 104 "include/linux/byteorder/little_endian.h"
# 1 "include/linux/byteorder/generic.h" 1
# 105 "include/linux/byteorder/little_endian.h" 2
# 71 "include/asm/byteorder.h" 2
# 6 "include/asm-generic/bitops/le.h" 2
# 5 "include/asm-generic/bitops/ext2-non-atomic.h" 2
# 465 "include/asm/bitops_64.h" 2






# 1 "include/asm-generic/bitops/minix.h" 1
# 472 "include/asm/bitops_64.h" 2
# 5 "include/asm/bitops.h" 2
# 18 "include/linux/bitops.h" 2







static __inline__ __attribute__((always_inline)) int get_bitmask_order(unsigned int count)
{
 int order;

 order = fls(count);
 return order;
}

static __inline__ __attribute__((always_inline)) int get_count_order(unsigned int count)
{
 int order;

 order = fls(count) - 1;
 if (count & (count - 1))
  order++;
 return order;
}

static inline __attribute__((always_inline)) unsigned long hweight_long(unsigned long w)
{
 return sizeof(w) == 4 ? hweight32(w) : hweight64(w);
}






static inline __attribute__((always_inline)) __u32 rol32(__u32 word, unsigned int shift)
{
 return (word << shift) | (word >> (32 - shift));
}






static inline __attribute__((always_inline)) __u32 ror32(__u32 word, unsigned int shift)
{
 return (word >> shift) | (word << (32 - shift));
}

static inline __attribute__((always_inline)) unsigned fls_long(unsigned long l)
{
 if (sizeof(l) == 4)
  return fls(l);
 return fls64(l);
}
# 16 "include/linux/kernel.h" 2
# 1 "include/linux/log2.h" 1
# 21 "include/linux/log2.h"
extern __attribute__((const, noreturn))
int ____ilog2_NaN(void);
# 31 "include/linux/log2.h"
static inline __attribute__((always_inline)) __attribute__((const))
int __ilog2_u32(u32 n)
{
 return fls(n) - 1;
}



static inline __attribute__((always_inline)) __attribute__((const))
int __ilog2_u64(u64 n)
{
 return fls64(n) - 1;
}







static inline __attribute__((always_inline)) __attribute__((const))
bool is_power_of_2(unsigned long n)
{
 return (n != 0 && ((n & (n - 1)) == 0));
}




static inline __attribute__((always_inline)) __attribute__((const))
unsigned long __roundup_pow_of_two(unsigned long n)
{
 return 1UL << fls_long(n - 1);
}




static inline __attribute__((always_inline)) __attribute__((const))
unsigned long __rounddown_pow_of_two(unsigned long n)
{
 return 1UL << (fls_long(n) - 1);
}
# 17 "include/linux/kernel.h" 2

# 1 "include/asm/bug.h" 1
# 36 "include/asm/bug.h"
void out_of_line_bug(void);




# 1 "include/asm-generic/bug.h" 1
# 10 "include/asm-generic/bug.h"
struct bug_entry {
 unsigned long bug_addr;

 const char *file;
 unsigned short line;

 unsigned short flags;
};
# 42 "include/asm/bug.h" 2
# 19 "include/linux/kernel.h" 2

extern const char linux_banner[];
extern const char linux_proc_banner[];
# 86 "include/linux/kernel.h"
extern int console_printk[];






struct completion;
struct pt_regs;
struct user;
# 108 "include/linux/kernel.h"
extern int _cond_resched(void);
# 129 "include/linux/kernel.h"
extern struct atomic_notifier_head panic_notifier_list;
extern long (*panic_blink)(long time);
 void panic(const char * fmt, ...)
 __attribute__ ((noreturn, format (printf, 1, 2))) __attribute__((__cold__));
extern void oops_enter(void);
extern void oops_exit(void);
extern int oops_may_print(void);
 void do_exit(long error_code)
 __attribute__((noreturn));
 void complete_and_exit(struct completion *, long)
 __attribute__((noreturn));
extern unsigned long simple_strtoul(const char *,char **,unsigned int);
extern long simple_strtol(const char *,char **,unsigned int);
extern unsigned long long simple_strtoull(const char *,char **,unsigned int);
extern long long simple_strtoll(const char *,char **,unsigned int);
extern int sprintf(char * buf, const char * fmt, ...)
 __attribute__ ((format (printf, 2, 3)));
extern int vsprintf(char *buf, const char *, va_list)
 __attribute__ ((format (printf, 2, 0)));
extern int snprintf(char * buf, size_t size, const char * fmt, ...)
 __attribute__ ((format (printf, 3, 4)));
extern int vsnprintf(char *buf, size_t size, const char *fmt, va_list args)
 __attribute__ ((format (printf, 3, 0)));
extern int scnprintf(char * buf, size_t size, const char * fmt, ...)
 __attribute__ ((format (printf, 3, 4)));
extern int vscnprintf(char *buf, size_t size, const char *fmt, va_list args)
 __attribute__ ((format (printf, 3, 0)));
extern char *kasprintf(gfp_t gfp, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3)));
extern char *kvasprintf(gfp_t gfp, const char *fmt, va_list args);

extern int sscanf(const char *, const char *, ...)
 __attribute__ ((format (scanf, 2, 3)));
extern int vsscanf(const char *, const char *, va_list)
 __attribute__ ((format (scanf, 2, 0)));

extern int get_option(char **str, int *pint);
extern char *get_options(const char *str, int nints, int *ints);
extern unsigned long long memparse(char *ptr, char **retptr);

extern int core_kernel_text(unsigned long addr);
extern int __kernel_text_address(unsigned long addr);
extern int kernel_text_address(unsigned long addr);
struct pid;
extern struct pid *session_of_pgrp(struct pid *pgrp);

extern void dump_thread(struct pt_regs *regs, struct user *dump);


 int vprintk(const char *fmt, va_list args)
 __attribute__ ((format (printf, 1, 0)));
 int printk(const char * fmt, ...)
 __attribute__ ((format (printf, 1, 2))) __attribute__((__cold__));
extern int log_buf_get_len(void);
extern int log_buf_read(int idx);
extern int log_buf_copy(char *dest, int idx, int len);
# 197 "include/linux/kernel.h"
unsigned long int_sqrt(unsigned long);

extern int printk_ratelimit(void);
extern int __printk_ratelimit(int ratelimit_jiffies, int ratelimit_burst);
extern bool printk_timed_ratelimit(unsigned long *caller_jiffies,
    unsigned int interval_msec);

static inline __attribute__((always_inline)) void console_silent(void)
{
 (console_printk[0]) = 0;
}

static inline __attribute__((always_inline)) void console_verbose(void)
{
 if ((console_printk[0]))
  (console_printk[0]) = 15;
}

extern void bust_spinlocks(int yes);
extern void wake_up_klogd(void);
extern int oops_in_progress;
extern int panic_timeout;
extern int panic_on_oops;
extern int panic_on_unrecovered_nmi;
extern int tainted;
extern const char *print_tainted(void);
extern void add_taint(unsigned);


extern enum system_states {
 SYSTEM_BOOTING,
 SYSTEM_RUNNING,
 SYSTEM_HALT,
 SYSTEM_POWER_OFF,
 SYSTEM_RESTART,
 SYSTEM_SUSPEND_DISK,
} system_state;
# 244 "include/linux/kernel.h"
extern void dump_stack(void) __attribute__((__cold__));

enum {
 DUMP_PREFIX_NONE,
 DUMP_PREFIX_ADDRESS,
 DUMP_PREFIX_OFFSET
};
extern void hex_dump_to_buffer(const void *buf, size_t len,
    int rowsize, int groupsize,
    char *linebuf, size_t linebuflen, bool ascii);
extern void print_hex_dump(const char *level, const char *prefix_str,
    int prefix_type, int rowsize, int groupsize,
    const void *buf, size_t len, bool ascii);
extern void print_hex_dump_bytes(const char *prefix_str, int prefix_type,
   const void *buf, size_t len);
# 281 "include/linux/kernel.h"
static inline __attribute__((always_inline)) int __attribute__ ((format (printf, 1, 2))) pr_debug(const char * fmt, ...)
{
 return 0;
}
# 382 "include/linux/kernel.h"
struct sysinfo;
extern int do_sysinfo(struct sysinfo *info);




struct sysinfo {
 long uptime;
 unsigned long loads[3];
 unsigned long totalram;
 unsigned long freeram;
 unsigned long sharedram;
 unsigned long bufferram;
 unsigned long totalswap;
 unsigned long freeswap;
 unsigned short procs;
 unsigned short pad;
 unsigned long totalhigh;
 unsigned long freehigh;
 unsigned int mem_unit;
 char _f[20-2*sizeof(long)-sizeof(int)];
};
# 9 "block/as-iosched.c" 2
# 1 "include/linux/fs.h" 1
# 9 "include/linux/fs.h"
# 1 "include/linux/limits.h" 1
# 10 "include/linux/fs.h" 2
# 1 "include/linux/ioctl.h" 1



# 1 "include/asm/ioctl.h" 1
# 1 "include/asm-generic/ioctl.h" 1
# 51 "include/asm-generic/ioctl.h"
extern unsigned int __invalid_size_argument_for_IOC;
# 1 "include/asm/ioctl.h" 2
# 5 "include/linux/ioctl.h" 2
# 11 "include/linux/fs.h" 2
# 36 "include/linux/fs.h"
struct files_stat_struct {
 int nr_files;
 int nr_free_files;
 int max_files;
};
extern struct files_stat_struct files_stat;
extern int get_max_files(void);

struct inodes_stat_t {
 int nr_inodes;
 int nr_unused;
 int dummy[5];
};
extern struct inodes_stat_t inodes_stat;

extern int leases_enable, lease_break_time;


extern int dir_notify_enable;
# 275 "include/linux/fs.h"
# 1 "include/linux/wait.h" 1
# 22 "include/linux/wait.h"
# 1 "include/linux/list.h" 1






# 1 "include/linux/poison.h" 1
# 8 "include/linux/list.h" 2
# 1 "include/linux/prefetch.h" 1
# 14 "include/linux/prefetch.h"
# 1 "include/asm/processor.h" 1



# 1 "include/asm/processor_64.h" 1
# 10 "include/asm/processor_64.h"
# 1 "include/asm/segment.h" 1



# 1 "include/asm/segment_64.h" 1



# 1 "include/asm/cache.h" 1
# 5 "include/asm/segment_64.h" 2
# 5 "include/asm/segment.h" 2
# 11 "include/asm/processor_64.h" 2
# 1 "include/asm/page.h" 1




# 1 "include/asm/page_64.h" 1



# 1 "include/linux/const.h" 1
# 5 "include/asm/page_64.h" 2
# 43 "include/asm/page_64.h"
extern unsigned long end_pfn;

void clear_page(void *);
void copy_page(void *, void *);
# 57 "include/asm/page_64.h"
typedef struct { unsigned long pte; } pte_t;
typedef struct { unsigned long pmd; } pmd_t;
typedef struct { unsigned long pud; } pud_t;
typedef struct { unsigned long pgd; } pgd_t;


typedef struct { unsigned long pgprot; } pgprot_t;

extern unsigned long phys_base;
# 114 "include/asm/page_64.h"
extern unsigned long __phys_addr(unsigned long);
# 139 "include/asm/page_64.h"
# 1 "include/asm-generic/memory_model.h" 1
# 74 "include/asm-generic/memory_model.h"
struct page;

extern struct page *pfn_to_page(unsigned long pfn);
extern unsigned long page_to_pfn(struct page *page);
# 140 "include/asm/page_64.h" 2
# 1 "include/asm-generic/page.h" 1
# 10 "include/asm-generic/page.h"
static __inline__ __attribute__((always_inline)) __attribute__((__const__)) int get_order(unsigned long size)
{
 int order;

 size = (size - 1) >> (12 - 1);
 order = -1;
 do {
  size >>= 1;
  order++;
 } while (size);
 return order;
}
# 141 "include/asm/page_64.h" 2
# 6 "include/asm/page.h" 2
# 12 "include/asm/processor_64.h" 2

# 1 "include/asm/sigcontext.h" 1
# 91 "include/asm/sigcontext.h"
struct _fpstate {
 __u16 cwd;
 __u16 swd;
 __u16 twd;
 __u16 fop;
 __u64 rip;
 __u64 rdp;
 __u32 mxcsr;
 __u32 mxcsr_mask;
 __u32 st_space[32];
 __u32 xmm_space[64];
 __u32 reserved2[24];
};

struct sigcontext {
 unsigned long r8;
 unsigned long r9;
 unsigned long r10;
 unsigned long r11;
 unsigned long r12;
 unsigned long r13;
 unsigned long r14;
 unsigned long r15;
 unsigned long rdi;
 unsigned long rsi;
 unsigned long rbp;
 unsigned long rbx;
 unsigned long rdx;
 unsigned long rax;
 unsigned long rcx;
 unsigned long rsp;
 unsigned long rip;
 unsigned long eflags;
 unsigned short cs;
 unsigned short gs;
 unsigned short fs;
 unsigned short __pad0;
 unsigned long err;
 unsigned long trapno;
 unsigned long oldmask;
 unsigned long cr2;
 struct _fpstate *fpstate;
 unsigned long reserved1[8];
};
# 14 "include/asm/processor_64.h" 2
# 1 "include/asm/cpufeature.h" 1
# 15 "include/asm/processor_64.h" 2
# 1 "include/linux/threads.h" 1
# 16 "include/asm/processor_64.h" 2
# 1 "include/asm/msr.h" 1



# 1 "include/asm/msr-index.h" 1
# 5 "include/asm/msr.h" 2
# 171 "include/asm/msr.h"
# 1 "include/linux/errno.h" 1



# 1 "include/asm/errno.h" 1
# 1 "include/asm-generic/errno.h" 1



# 1 "include/asm-generic/errno-base.h" 1
# 5 "include/asm-generic/errno.h" 2
# 1 "include/asm/errno.h" 2
# 5 "include/linux/errno.h" 2
# 172 "include/asm/msr.h" 2
# 229 "include/asm/msr.h"
static inline __attribute__((always_inline)) void cpuid(int op, unsigned int *eax, unsigned int *ebx,
    unsigned int *ecx, unsigned int *edx)
{
 __asm__("cpuid"
  : "=a" (*eax),
    "=b" (*ebx),
    "=c" (*ecx),
    "=d" (*edx)
  : "0" (op));
}


static inline __attribute__((always_inline)) void cpuid_count(int op, int count, int *eax, int *ebx, int *ecx,
          int *edx)
{
 __asm__("cpuid"
  : "=a" (*eax),
    "=b" (*ebx),
    "=c" (*ecx),
    "=d" (*edx)
  : "0" (op), "c" (count));
}




static inline __attribute__((always_inline)) unsigned int cpuid_eax(unsigned int op)
{
 unsigned int eax;

 __asm__("cpuid"
  : "=a" (eax)
  : "0" (op)
  : "bx", "cx", "dx");
 return eax;
}
static inline __attribute__((always_inline)) unsigned int cpuid_ebx(unsigned int op)
{
 unsigned int eax, ebx;

 __asm__("cpuid"
  : "=a" (eax), "=b" (ebx)
  : "0" (op)
  : "cx", "dx" );
 return ebx;
}
static inline __attribute__((always_inline)) unsigned int cpuid_ecx(unsigned int op)
{
 unsigned int eax, ecx;

 __asm__("cpuid"
  : "=a" (eax), "=c" (ecx)
  : "0" (op)
  : "bx", "dx" );
 return ecx;
}
static inline __attribute__((always_inline)) unsigned int cpuid_edx(unsigned int op)
{
 unsigned int eax, edx;

 __asm__("cpuid"
  : "=a" (eax), "=d" (edx)
  : "0" (op)
  : "bx", "cx");
 return edx;
}
# 331 "include/asm/msr.h"
void rdmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 *l, u32 *h);
void wrmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h);
int rdmsr_safe_on_cpu(unsigned int cpu, u32 msr_no, u32 *l, u32 *h);
int wrmsr_safe_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h);
# 17 "include/asm/processor_64.h" 2
# 1 "include/asm/current.h" 1



# 1 "include/asm/current_64.h" 1




struct task_struct;

# 1 "include/asm/pda.h" 1






# 1 "include/linux/cache.h" 1
# 8 "include/asm/pda.h" 2
# 1 "include/asm/page.h" 1
# 9 "include/asm/pda.h" 2


struct x8664_pda {
 struct task_struct *pcurrent;
 unsigned long data_offset;

 unsigned long kernelstack;
 unsigned long oldrsp;
        int irqcount;
 int cpunumber;





 char *irqstackptr;
 int nodenumber;
 unsigned int __softirq_pending;
 unsigned int __nmi_count;
 short mmu_state;
 short isidle;
 struct mm_struct *active_mm;
 unsigned apic_timer_irqs;
 unsigned irq0_irqs;
 unsigned irq_resched_count;
 unsigned irq_call_count;
 unsigned irq_tlb_count;
 unsigned irq_thermal_count;
 unsigned irq_threshold_count;
 unsigned irq_spurious_count;
} __attribute__((__aligned__((1 << (7)))));

extern struct x8664_pda *_cpu_pda[];
extern struct x8664_pda boot_cpu_pda[];







extern void __bad_pda_field(void) __attribute__((noreturn));





extern struct x8664_pda _proxy_pda;
# 8 "include/asm/current_64.h" 2

static inline __attribute__((always_inline)) struct task_struct *get_current(void)
{
 struct task_struct *t = ({ typeof(_proxy_pda.pcurrent) ret__; switch (sizeof(_proxy_pda.pcurrent)) { case 2: asm("mov" "w %%gs:%c1,%0" : "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,pcurrent)), "m" (_proxy_pda.pcurrent)); break; case 4: asm("mov" "l %%gs:%c1,%0": "=r" (ret__): "i" (__builtin_offsetof(struct x8664_pda,pcurrent)), "m" (_proxy_pda.pcurrent)); break; case 8: asm("mov" "q %%gs:%c1,%0": "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,pcurrent)), "m" (_proxy_pda.pcurrent)); break; default: __bad_pda_field(); } ret__; });
 return t;
}
# 5 "include/asm/current.h" 2
# 18 "include/asm/processor_64.h" 2
# 1 "include/asm/system.h" 1



# 1 "include/asm/system_64.h" 1




# 1 "include/asm/segment.h" 1
# 6 "include/asm/system_64.h" 2
# 1 "include/asm/cmpxchg.h" 1



# 1 "include/asm/cmpxchg_64.h" 1



# 1 "include/asm/alternative.h" 1
# 5 "include/asm/cmpxchg_64.h" 2





static inline __attribute__((always_inline)) void set_64bit(volatile unsigned long *ptr, unsigned long val)
{
 *ptr = val;
}
# 22 "include/asm/cmpxchg_64.h"
static inline __attribute__((always_inline)) unsigned long __xchg(unsigned long x, volatile void * ptr, int size)
{
 switch (size) {
  case 1:
   __asm__ __volatile__("xchgb %b0,%1"
    :"=q" (x)
    :"m" (*((volatile long *)(ptr))), "0" (x)
    :"memory");
   break;
  case 2:
   __asm__ __volatile__("xchgw %w0,%1"
    :"=r" (x)
    :"m" (*((volatile long *)(ptr))), "0" (x)
    :"memory");
   break;
  case 4:
   __asm__ __volatile__("xchgl %k0,%1"
    :"=r" (x)
    :"m" (*((volatile long *)(ptr))), "0" (x)
    :"memory");
   break;
  case 8:
   __asm__ __volatile__("xchgq %0,%1"
    :"=r" (x)
    :"m" (*((volatile long *)(ptr))), "0" (x)
    :"memory");
   break;
 }
 return x;
}
# 61 "include/asm/cmpxchg_64.h"
static inline __attribute__((always_inline)) unsigned long __cmpxchg(volatile void *ptr, unsigned long old,
          unsigned long new, int size)
{
 unsigned long prev;
 switch (size) {
 case 1:
  __asm__ __volatile__(".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "cmpxchgb %b1,%2"
         : "=a"(prev)
         : "q"(new), "m"(*((volatile long *)(ptr))), "0"(old)
         : "memory");
  return prev;
 case 2:
  __asm__ __volatile__(".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "cmpxchgw %w1,%2"
         : "=a"(prev)
         : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
         : "memory");
  return prev;
 case 4:
  __asm__ __volatile__(".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "cmpxchgl %k1,%2"
         : "=a"(prev)
         : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
         : "memory");
  return prev;
 case 8:
  __asm__ __volatile__(".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "cmpxchgq %1,%2"
         : "=a"(prev)
         : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
         : "memory");
  return prev;
 }
 return old;
}

static inline __attribute__((always_inline)) unsigned long __cmpxchg_local(volatile void *ptr,
   unsigned long old, unsigned long new, int size)
{
 unsigned long prev;
 switch (size) {
 case 1:
  __asm__ __volatile__("cmpxchgb %b1,%2"
         : "=a"(prev)
         : "q"(new), "m"(*((volatile long *)(ptr))), "0"(old)
         : "memory");
  return prev;
 case 2:
  __asm__ __volatile__("cmpxchgw %w1,%2"
         : "=a"(prev)
         : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
         : "memory");
  return prev;
 case 4:
  __asm__ __volatile__("cmpxchgl %k1,%2"
         : "=a"(prev)
         : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
         : "memory");
  return prev;
 case 8:
  __asm__ __volatile__("cmpxchgq %1,%2"
         : "=a"(prev)
         : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
         : "memory");
  return prev;
 }
 return old;
}
# 5 "include/asm/cmpxchg.h" 2
# 7 "include/asm/system_64.h" 2
# 50 "include/asm/system_64.h"
extern void load_gs_index(unsigned);
# 77 "include/asm/system_64.h"
static inline __attribute__((always_inline)) unsigned long read_cr0(void)
{
 unsigned long cr0;
 asm volatile("movq %%cr0,%0" : "=r" (cr0));
 return cr0;
}

static inline __attribute__((always_inline)) void write_cr0(unsigned long val)
{
 asm volatile("movq %0,%%cr0" :: "r" (val));
}

static inline __attribute__((always_inline)) unsigned long read_cr2(void)
{
 unsigned long cr2;
 asm volatile("movq %%cr2,%0" : "=r" (cr2));
 return cr2;
}

static inline __attribute__((always_inline)) void write_cr2(unsigned long val)
{
 asm volatile("movq %0,%%cr2" :: "r" (val));
}

static inline __attribute__((always_inline)) unsigned long read_cr3(void)
{
 unsigned long cr3;
 asm volatile("movq %%cr3,%0" : "=r" (cr3));
 return cr3;
}

static inline __attribute__((always_inline)) void write_cr3(unsigned long val)
{
 asm volatile("movq %0,%%cr3" :: "r" (val) : "memory");
}

static inline __attribute__((always_inline)) unsigned long read_cr4(void)
{
 unsigned long cr4;
 asm volatile("movq %%cr4,%0" : "=r" (cr4));
 return cr4;
}

static inline __attribute__((always_inline)) void write_cr4(unsigned long val)
{
 asm volatile("movq %0,%%cr4" :: "r" (val) : "memory");
}

static inline __attribute__((always_inline)) unsigned long read_cr8(void)
{
 unsigned long cr8;
 asm volatile("movq %%cr8,%0" : "=r" (cr8));
 return cr8;
}

static inline __attribute__((always_inline)) void write_cr8(unsigned long val)
{
 asm volatile("movq %0,%%cr8" :: "r" (val) : "memory");
}
# 144 "include/asm/system_64.h"
static inline __attribute__((always_inline)) void clflush(volatile void *__p)
{
 asm volatile("clflush %0" : "+m" (*(char *)__p));
}
# 178 "include/asm/system_64.h"
# 1 "include/linux/irqflags.h" 1
# 46 "include/linux/irqflags.h"
# 1 "include/asm/irqflags.h" 1



# 1 "include/asm/irqflags_64.h" 1
# 12 "include/asm/irqflags_64.h"
# 1 "include/asm/processor-flags.h" 1
# 13 "include/asm/irqflags_64.h" 2






static inline __attribute__((always_inline)) unsigned long __raw_local_save_flags(void)
{
 unsigned long flags;

 __asm__ __volatile__(
  "# __raw_save_flags\n\t"
  "pushfq ; popq %q0"
  : "=g" (flags)
  :
  : "memory"
 );

 return flags;
}




static inline __attribute__((always_inline)) void raw_local_irq_restore(unsigned long flags)
{
 __asm__ __volatile__(
  "pushq %0 ; popfq"
  :
  :"g" (flags)
  :"memory", "cc"
 );
}
# 74 "include/asm/irqflags_64.h"
static inline __attribute__((always_inline)) void raw_local_irq_disable(void)
{
 __asm__ __volatile__("cli" : : : "memory");
}

static inline __attribute__((always_inline)) void raw_local_irq_enable(void)
{
 __asm__ __volatile__("sti" : : : "memory");
}

static inline __attribute__((always_inline)) int raw_irqs_disabled_flags(unsigned long flags)
{
 return !(flags & 0x00000200);
}







static inline __attribute__((always_inline)) unsigned long __raw_local_irq_save(void)
{
 unsigned long flags = __raw_local_save_flags();

 raw_local_irq_disable();

 return flags;
}




static inline __attribute__((always_inline)) int raw_irqs_disabled(void)
{
 unsigned long flags = __raw_local_save_flags();

 return raw_irqs_disabled_flags(flags);
}







static inline __attribute__((always_inline)) void trace_hardirqs_fixup_flags(unsigned long flags)
{
 if (raw_irqs_disabled_flags(flags))
  do { } while (0);
 else
  do { } while (0);
}

static inline __attribute__((always_inline)) void trace_hardirqs_fixup(void)
{
 unsigned long flags = __raw_local_save_flags();

 trace_hardirqs_fixup_flags(flags);
}




static inline __attribute__((always_inline)) void raw_safe_halt(void)
{
 __asm__ __volatile__("sti; hlt" : : : "memory");
}





static inline __attribute__((always_inline)) void halt(void)
{
 __asm__ __volatile__("hlt": : :"memory");
}
# 5 "include/asm/irqflags.h" 2
# 47 "include/linux/irqflags.h" 2
# 179 "include/asm/system_64.h" 2

void cpu_idle_wait(void);

extern unsigned long arch_align_stack(unsigned long sp);
extern void free_init_pages(char *what, unsigned long begin, unsigned long end);
# 5 "include/asm/system.h" 2
# 19 "include/asm/processor_64.h" 2
# 1 "include/asm/mmsegment.h" 1



typedef struct {
 unsigned long seg;
} mm_segment_t;
# 20 "include/asm/processor_64.h" 2
# 1 "include/asm/percpu.h" 1



# 1 "include/asm/percpu_64.h" 1
# 48 "include/asm/percpu_64.h"
extern void setup_per_cpu_areas(void);
# 5 "include/asm/percpu.h" 2
# 21 "include/asm/processor_64.h" 2
# 1 "include/linux/personality.h" 1
# 10 "include/linux/personality.h"
struct exec_domain;
struct pt_regs;

extern int register_exec_domain(struct exec_domain *);
extern int unregister_exec_domain(struct exec_domain *);
extern int __set_personality(unsigned long);
# 24 "include/linux/personality.h"
enum {
 ADDR_NO_RANDOMIZE = 0x0040000,
 FDPIC_FUNCPTRS = 0x0080000,


 MMAP_PAGE_ZERO = 0x0100000,
 ADDR_COMPAT_LAYOUT = 0x0200000,
 READ_IMPLIES_EXEC = 0x0400000,
 ADDR_LIMIT_32BIT = 0x0800000,
 SHORT_INODE = 0x1000000,
 WHOLE_SECONDS = 0x2000000,
 STICKY_TIMEOUTS = 0x4000000,
 ADDR_LIMIT_3GB = 0x8000000,
};
# 51 "include/linux/personality.h"
enum {
 PER_LINUX = 0x0000,
 PER_LINUX_32BIT = 0x0000 | ADDR_LIMIT_32BIT,
 PER_LINUX_FDPIC = 0x0000 | FDPIC_FUNCPTRS,
 PER_SVR4 = 0x0001 | STICKY_TIMEOUTS | MMAP_PAGE_ZERO,
 PER_SVR3 = 0x0002 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_SCOSVR3 = 0x0003 | STICKY_TIMEOUTS |
      WHOLE_SECONDS | SHORT_INODE,
 PER_OSR5 = 0x0003 | STICKY_TIMEOUTS | WHOLE_SECONDS,
 PER_WYSEV386 = 0x0004 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_ISCR4 = 0x0005 | STICKY_TIMEOUTS,
 PER_BSD = 0x0006,
 PER_SUNOS = 0x0006 | STICKY_TIMEOUTS,
 PER_XENIX = 0x0007 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_LINUX32 = 0x0008,
 PER_LINUX32_3GB = 0x0008 | ADDR_LIMIT_3GB,
 PER_IRIX32 = 0x0009 | STICKY_TIMEOUTS,
 PER_IRIXN32 = 0x000a | STICKY_TIMEOUTS,
 PER_IRIX64 = 0x000b | STICKY_TIMEOUTS,
 PER_RISCOS = 0x000c,
 PER_SOLARIS = 0x000d | STICKY_TIMEOUTS,
 PER_UW7 = 0x000e | STICKY_TIMEOUTS | MMAP_PAGE_ZERO,
 PER_OSF4 = 0x000f,
 PER_HPUX = 0x0010,
 PER_MASK = 0x00ff,
};
# 86 "include/linux/personality.h"
typedef void (*handler_t)(int, struct pt_regs *);

struct exec_domain {
 const char *name;
 handler_t handler;
 unsigned char pers_low;
 unsigned char pers_high;
 unsigned long *signal_map;
 unsigned long *signal_invmap;
 struct map_segment *err_map;
 struct map_segment *socktype_map;
 struct map_segment *sockopt_map;
 struct map_segment *af_map;
 struct module *module;
 struct exec_domain *next;
};
# 22 "include/asm/processor_64.h" 2
# 1 "include/linux/cpumask.h" 1
# 86 "include/linux/cpumask.h"
# 1 "include/linux/bitmap.h" 1







# 1 "include/linux/string.h" 1
# 14 "include/linux/string.h"
extern char *strndup_user(const char *, long);




# 1 "include/asm/string.h" 1



# 1 "include/asm/string_64.h" 1
# 9 "include/asm/string_64.h"
static inline __attribute__((always_inline)) __attribute__((always_inline)) void *
__inline_memcpy(void * to, const void * from, size_t n)
{
unsigned long d0, d1, d2;
__asm__ __volatile__(
 "rep ; movsl\n\t"
 "testb $2,%b4\n\t"
 "je 1f\n\t"
 "movsw\n"
 "1:\ttestb $1,%b4\n\t"
 "je 2f\n\t"
 "movsb\n"
 "2:"
 : "=&c" (d0), "=&D" (d1), "=&S" (d2)
 :"0" (n/4), "q" (n),"1" ((long) to),"2" ((long) from)
 : "memory");
return (to);
}






extern void *memcpy(void *to, const void *from, size_t len);
# 47 "include/asm/string_64.h"
void *memset(void *s, int c, size_t n);


void * memmove(void * dest,const void *src,size_t count);

int memcmp(const void * cs,const void * ct,size_t count);
size_t strlen(const char * s);
char *strcpy(char * dest,const char *src);
char *strcat(char * dest, const char * src);
int strcmp(const char * cs,const char * ct);
# 5 "include/asm/string.h" 2
# 20 "include/linux/string.h" 2


extern char * strcpy(char *,const char *);


extern char * strncpy(char *,const char *, __kernel_size_t);


size_t strlcpy(char *, const char *, size_t);


extern char * strcat(char *, const char *);


extern char * strncat(char *, const char *, __kernel_size_t);


extern size_t strlcat(char *, const char *, __kernel_size_t);


extern int strcmp(const char *,const char *);


extern int strncmp(const char *,const char *,__kernel_size_t);


extern int strnicmp(const char *, const char *, __kernel_size_t);


extern int strcasecmp(const char *s1, const char *s2);


extern int strncasecmp(const char *s1, const char *s2, size_t n);


extern char * strchr(const char *,int);


extern char * strnchr(const char *, size_t, int);


extern char * strrchr(const char *,int);

extern char * strstrip(char *);

extern char * strstr(const char *,const char *);


extern __kernel_size_t strlen(const char *);


extern __kernel_size_t strnlen(const char *,__kernel_size_t);


extern char * strpbrk(const char *,const char *);


extern char * strsep(char **,const char *);


extern __kernel_size_t strspn(const char *,const char *);


extern __kernel_size_t strcspn(const char *,const char *);
# 96 "include/linux/string.h"
extern void * memscan(void *,int,__kernel_size_t);


extern int memcmp(const void *,const void *,__kernel_size_t);


extern void * memchr(const void *,int,__kernel_size_t);


extern char *kstrdup(const char *s, gfp_t gfp);
extern char *kstrndup(const char *s, size_t len, gfp_t gfp);
extern void *kmemdup(const void *src, size_t len, gfp_t gfp);

extern char **argv_split(gfp_t gfp, const char *str, int *argcp);
extern void argv_free(char **argv);
# 9 "include/linux/bitmap.h" 2
# 85 "include/linux/bitmap.h"
extern int __bitmap_empty(const unsigned long *bitmap, int bits);
extern int __bitmap_full(const unsigned long *bitmap, int bits);
extern int __bitmap_equal(const unsigned long *bitmap1,
                 const unsigned long *bitmap2, int bits);
extern void __bitmap_complement(unsigned long *dst, const unsigned long *src,
   int bits);
extern void __bitmap_shift_right(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_shift_left(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_and(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_or(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_xor(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_andnot(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_intersects(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_subset(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_weight(const unsigned long *bitmap, int bits);

extern int bitmap_scnprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int __bitmap_parse(const char *buf, unsigned int buflen, int is_user,
   unsigned long *dst, int nbits);
extern int bitmap_parse_user(const char *ubuf, unsigned int ulen,
   unsigned long *dst, int nbits);
extern int bitmap_scnlistprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int bitmap_parselist(const char *buf, unsigned long *maskp,
   int nmaskbits);
extern void bitmap_remap(unsigned long *dst, const unsigned long *src,
  const unsigned long *old, const unsigned long *new, int bits);
extern int bitmap_bitremap(int oldbit,
  const unsigned long *old, const unsigned long *new, int bits);
extern int bitmap_find_free_region(unsigned long *bitmap, int bits, int order);
extern void bitmap_release_region(unsigned long *bitmap, int pos, int order);
extern int bitmap_allocate_region(unsigned long *bitmap, int pos, int order);







static inline __attribute__((always_inline)) void bitmap_zero(unsigned long *dst, int nbits)
{
 if (nbits <= 64)
  *dst = 0UL;
 else {
  int len = (((nbits) + (64) - 1) / (64)) * sizeof(unsigned long);
  memset(dst, 0, len);
 }
}

static inline __attribute__((always_inline)) void bitmap_fill(unsigned long *dst, int nbits)
{
 size_t nlongs = (((nbits) + (64) - 1) / (64));
 if (nlongs > 1) {
  int len = (nlongs - 1) * sizeof(unsigned long);
  memset(dst, 0xff, len);
 }
 dst[nlongs - 1] = ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
}

static inline __attribute__((always_inline)) void bitmap_copy(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if (nbits <= 64)
  *dst = *src;
 else {
  int len = (((nbits) + (64) - 1) / (64)) * sizeof(unsigned long);
  memcpy(dst, src, len);
 }
}

static inline __attribute__((always_inline)) void bitmap_and(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 & *src2;
 else
  __bitmap_and(dst, src1, src2, nbits);
}

static inline __attribute__((always_inline)) void bitmap_or(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 | *src2;
 else
  __bitmap_or(dst, src1, src2, nbits);
}

static inline __attribute__((always_inline)) void bitmap_xor(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 ^ *src2;
 else
  __bitmap_xor(dst, src1, src2, nbits);
}

static inline __attribute__((always_inline)) void bitmap_andnot(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 & ~(*src2);
 else
  __bitmap_andnot(dst, src1, src2, nbits);
}

static inline __attribute__((always_inline)) void bitmap_complement(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if (nbits <= 64)
  *dst = ~(*src) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
 else
  __bitmap_complement(dst, src, nbits);
}

static inline __attribute__((always_inline)) int bitmap_equal(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  return ! ((*src1 ^ *src2) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_equal(src1, src2, nbits);
}

static inline __attribute__((always_inline)) int bitmap_intersects(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  return ((*src1 & *src2) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL )) != 0;
 else
  return __bitmap_intersects(src1, src2, nbits);
}

static inline __attribute__((always_inline)) int bitmap_subset(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  return ! ((*src1 & ~(*src2)) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_subset(src1, src2, nbits);
}

static inline __attribute__((always_inline)) int bitmap_empty(const unsigned long *src, int nbits)
{
 if (nbits <= 64)
  return ! (*src & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_empty(src, nbits);
}

static inline __attribute__((always_inline)) int bitmap_full(const unsigned long *src, int nbits)
{
 if (nbits <= 64)
  return ! (~(*src) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_full(src, nbits);
}

static inline __attribute__((always_inline)) int bitmap_weight(const unsigned long *src, int nbits)
{
 if (nbits <= 64)
  return hweight_long(*src & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 return __bitmap_weight(src, nbits);
}

static inline __attribute__((always_inline)) void bitmap_shift_right(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if (nbits <= 64)
  *dst = *src >> n;
 else
  __bitmap_shift_right(dst, src, n, nbits);
}

static inline __attribute__((always_inline)) void bitmap_shift_left(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if (nbits <= 64)
  *dst = (*src << n) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
 else
  __bitmap_shift_left(dst, src, n, nbits);
}

static inline __attribute__((always_inline)) int bitmap_parse(const char *buf, unsigned int buflen,
   unsigned long *maskp, int nmaskbits)
{
 return __bitmap_parse(buf, buflen, 0, maskp, nmaskbits);
}
# 87 "include/linux/cpumask.h" 2

typedef struct { unsigned long bits[(((32) + (64) - 1) / (64))]; } cpumask_t;
extern cpumask_t _unused_cpumask_arg_;


static inline __attribute__((always_inline)) void __cpu_set(int cpu, volatile cpumask_t *dstp)
{
 set_bit(cpu, dstp->bits);
}


static inline __attribute__((always_inline)) void __cpu_clear(int cpu, volatile cpumask_t *dstp)
{
 clear_bit(cpu, dstp->bits);
}


static inline __attribute__((always_inline)) void __cpus_setall(cpumask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline __attribute__((always_inline)) void __cpus_clear(cpumask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}





static inline __attribute__((always_inline)) int __cpu_test_and_set(int cpu, cpumask_t *addr)
{
 return test_and_set_bit(cpu, addr->bits);
}


static inline __attribute__((always_inline)) void __cpus_and(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) void __cpus_or(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) void __cpus_xor(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) void __cpus_andnot(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) void __cpus_complement(cpumask_t *dstp,
     const cpumask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_equal(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_intersects(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_subset(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_empty(const cpumask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_full(const cpumask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_weight(const cpumask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline __attribute__((always_inline)) void __cpus_shift_right(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline __attribute__((always_inline)) void __cpus_shift_left(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}


int __first_cpu(const cpumask_t *srcp);

int __next_cpu(int n, const cpumask_t *srcp);
# 270 "include/linux/cpumask.h"
static inline __attribute__((always_inline)) int __cpumask_scnprintf(char *buf, int len,
     const cpumask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline __attribute__((always_inline)) int __cpumask_parse_user(const char *buf, int len,
     cpumask_t *dstp, int nbits)
{
 return bitmap_parse_user(buf, len, dstp->bits, nbits);
}



static inline __attribute__((always_inline)) int __cpulist_scnprintf(char *buf, int len,
     const cpumask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpulist_parse(const char *buf, cpumask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline __attribute__((always_inline)) int __cpu_remap(int oldbit,
  const cpumask_t *oldp, const cpumask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline __attribute__((always_inline)) void __cpus_remap(cpumask_t *dstp, const cpumask_t *srcp,
  const cpumask_t *oldp, const cpumask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}
# 380 "include/linux/cpumask.h"
extern cpumask_t cpu_possible_map;
extern cpumask_t cpu_online_map;
extern cpumask_t cpu_present_map;
# 403 "include/linux/cpumask.h"
extern int nr_cpu_ids;

int __any_online_cpu(const cpumask_t *mask);
# 23 "include/asm/processor_64.h" 2
# 51 "include/asm/processor_64.h"
struct cpuinfo_x86 {
 __u8 x86;
 __u8 x86_vendor;
 __u8 x86_model;
 __u8 x86_mask;
 int cpuid_level;
 __u32 x86_capability[8];
 char x86_vendor_id[16];
 char x86_model_id[64];
 int x86_cache_size;
 int x86_clflush_size;
 int x86_cache_alignment;
 int x86_tlbsize;
        __u8 x86_virt_bits, x86_phys_bits;
 __u8 x86_max_cores;
        __u32 x86_power;
 __u32 extended_cpuid_level;
 unsigned long loops_per_jiffy;

 cpumask_t llc_shared_map;

 __u8 apicid;

 __u8 booted_cores;
 __u8 phys_proc_id;
 __u8 cpu_core_id;
 __u8 cpu_index;

} __attribute__((__aligned__((1 << (7)))));
# 92 "include/asm/processor_64.h"
extern __typeof__(struct cpuinfo_x86) per_cpu__cpu_info;







extern char ignore_irq13;

extern void identify_cpu(struct cpuinfo_x86 *);
extern void print_cpu_info(struct cpuinfo_x86 *);
extern void init_scattered_cpuid_features(struct cpuinfo_x86 *c);
extern unsigned int init_intel_cacheinfo(struct cpuinfo_x86 *c);
extern unsigned short num_cache_leaves;







extern unsigned long mmu_cr4_features;

static inline __attribute__((always_inline)) void set_in_cr4 (unsigned long mask)
{
 mmu_cr4_features |= mask;
 __asm__("movq %%cr4,%%rax\n\t"
  "orq %0,%%rax\n\t"
  "movq %%rax,%%cr4\n"
  : : "irg" (mask)
  :"ax");
}

static inline __attribute__((always_inline)) void clear_in_cr4 (unsigned long mask)
{
 mmu_cr4_features &= ~mask;
 __asm__("movq %%cr4,%%rax\n\t"
  "andq %0,%%rax\n\t"
  "movq %%rax,%%cr4\n"
  : : "irg" (~mask)
  :"ax");
}
# 161 "include/asm/processor_64.h"
struct i387_fxsave_struct {
 u16 cwd;
 u16 swd;
 u16 twd;
 u16 fop;
 u64 rip;
 u64 rdp;
 u32 mxcsr;
 u32 mxcsr_mask;
 u32 st_space[32];
 u32 xmm_space[64];
 u32 padding[24];
} __attribute__ ((aligned (16)));

union i387_union {
 struct i387_fxsave_struct fxsave;
};

struct tss_struct {
 u32 reserved1;
 u64 rsp0;
 u64 rsp1;
 u64 rsp2;
 u64 reserved2;
 u64 ist[7];
 u32 reserved3;
 u32 reserved4;
 u16 reserved5;
 u16 io_bitmap_base;
# 199 "include/asm/processor_64.h"
 unsigned long io_bitmap[((65536/8)/sizeof(long)) + 1];
} __attribute__((packed)) __attribute__((__aligned__((1 << (7)))));


extern struct cpuinfo_x86 boot_cpu_data;
extern __typeof__(struct tss_struct) per_cpu__init_tss;

struct orig_ist {
 unsigned long ist[7];
};
extern __typeof__(struct orig_ist) per_cpu__orig_ist;
# 219 "include/asm/processor_64.h"
struct thread_struct {
 unsigned long rsp0;
 unsigned long rsp;
 unsigned long userrsp;
 unsigned long fs;
 unsigned long gs;
 unsigned short es, ds, fsindex, gsindex;

 unsigned long debugreg0;
 unsigned long debugreg1;
 unsigned long debugreg2;
 unsigned long debugreg3;
 unsigned long debugreg6;
 unsigned long debugreg7;

 unsigned long cr2, trap_no, error_code;

 union i387_union i387 __attribute__((aligned(16)));


 int ioperm;
 unsigned long *io_bitmap_ptr;
 unsigned io_bitmap_max;

 u64 tls_array[3];
} __attribute__((aligned(16)));
# 277 "include/asm/processor_64.h"
struct task_struct;
struct mm_struct;


extern void release_thread(struct task_struct *);


extern void prepare_to_copy(struct task_struct *tsk);




extern long kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);







extern unsigned long get_wchan(struct task_struct *p);





struct microcode_header {
 unsigned int hdrver;
 unsigned int rev;
 unsigned int date;
 unsigned int sig;
 unsigned int cksum;
 unsigned int ldrver;
 unsigned int pf;
 unsigned int datasize;
 unsigned int totalsize;
 unsigned int reserved[3];
};

struct microcode {
 struct microcode_header hdr;
 unsigned int bits[0];
};

typedef struct microcode microcode_t;
typedef struct microcode_header microcode_header_t;


struct extended_signature {
 unsigned int sig;
 unsigned int pf;
 unsigned int cksum;
};

struct extended_sigtable {
 unsigned int count;
 unsigned int cksum;
 unsigned int reserved[3];
 struct extended_signature sigs[0];
};
# 383 "include/asm/processor_64.h"
static inline __attribute__((always_inline)) void rep_nop(void)
{
 __asm__ __volatile__("rep;nop": : :"memory");
}


static inline __attribute__((always_inline)) void sync_core(void)
{
 int tmp;
 asm volatile("cpuid" : "=a" (tmp) : "0" (1) : "ebx","ecx","edx","memory");
}


static inline __attribute__((always_inline)) void prefetchw(void *x)
{
 asm volatile ("661:\n\t" "prefetcht0 (%1)" "\n662:\n" ".section .altinstructions,\"a\"\n" "  .align 8\n" "  .quad 661b\n" "  .quad 663f\n" "  .byte %c0\n" "  .byte 662b-661b\n" "  .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "prefetchw (%1)" "\n664:\n" ".previous" :: "i" ((1*32+31)), "r" (x))


             ;
}







static inline __attribute__((always_inline)) void __monitor(const void *eax, unsigned long ecx,
  unsigned long edx)
{

 asm volatile(
  ".byte 0x0f,0x01,0xc8;"
  : :"a" (eax), "c" (ecx), "d"(edx));
}

static inline __attribute__((always_inline)) void __mwait(unsigned long eax, unsigned long ecx)
{

 asm volatile(
  ".byte 0x0f,0x01,0xc9;"
  : :"a" (eax), "c" (ecx));
}

static inline __attribute__((always_inline)) void __sti_mwait(unsigned long eax, unsigned long ecx)
{

 asm volatile(
  "sti; .byte 0x0f,0x01,0xc9;"
  : :"a" (eax), "c" (ecx));
}

extern void mwait_idle_with_hints(unsigned long eax, unsigned long ecx);
# 446 "include/asm/processor_64.h"
extern unsigned long boot_option_idle_override;

extern int bootloader_type;
# 5 "include/asm/processor.h" 2
# 15 "include/linux/prefetch.h" 2
# 53 "include/linux/prefetch.h"
static inline __attribute__((always_inline)) void prefetch_range(void *addr, size_t len)
{







}
# 9 "include/linux/list.h" 2
# 1 "include/asm/system.h" 1
# 10 "include/linux/list.h" 2
# 21 "include/linux/list.h"
struct list_head {
 struct list_head *next, *prev;
};






static inline __attribute__((always_inline)) void INIT_LIST_HEAD(struct list_head *list)
{
 list->next = list;
 list->prev = list;
}
# 43 "include/linux/list.h"
static inline __attribute__((always_inline)) void __list_add(struct list_head *new,
         struct list_head *prev,
         struct list_head *next)
{
 next->prev = new;
 new->next = next;
 new->prev = prev;
 prev->next = new;
}
# 67 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_add(struct list_head *new, struct list_head *head)
{
 __list_add(new, head, head->next);
}
# 84 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_add_tail(struct list_head *new, struct list_head *head)
{
 __list_add(new, head->prev, head);
}







static inline __attribute__((always_inline)) void __list_add_rcu(struct list_head * new,
  struct list_head * prev, struct list_head * next)
{
 new->next = next;
 new->prev = prev;
 __asm__ __volatile__("": : :"memory");
 next->prev = new;
 prev->next = new;
}
# 121 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_add_rcu(struct list_head *new, struct list_head *head)
{
 __list_add_rcu(new, head, head->next);
}
# 142 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_add_tail_rcu(struct list_head *new,
     struct list_head *head)
{
 __list_add_rcu(new, head->prev, head);
}
# 155 "include/linux/list.h"
static inline __attribute__((always_inline)) void __list_del(struct list_head * prev, struct list_head * next)
{
 next->prev = prev;
 prev->next = next;
}
# 168 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_del(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->next = ((void *) 0x00100100);
 entry->prev = ((void *) 0x00200200);
}
# 202 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_del_rcu(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->prev = ((void *) 0x00200200);
}
# 215 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_replace(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->next->prev = new;
 new->prev = old->prev;
 new->prev->next = new;
}

static inline __attribute__((always_inline)) void list_replace_init(struct list_head *old,
     struct list_head *new)
{
 list_replace(old, new);
 INIT_LIST_HEAD(old);
}
# 239 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_replace_rcu(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->prev = old->prev;
 __asm__ __volatile__("": : :"memory");
 new->next->prev = new;
 new->prev->next = new;
 old->prev = ((void *) 0x00200200);
}





static inline __attribute__((always_inline)) void list_del_init(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 INIT_LIST_HEAD(entry);
}






static inline __attribute__((always_inline)) void list_move(struct list_head *list, struct list_head *head)
{
 __list_del(list->prev, list->next);
 list_add(list, head);
}






static inline __attribute__((always_inline)) void list_move_tail(struct list_head *list,
      struct list_head *head)
{
 __list_del(list->prev, list->next);
 list_add_tail(list, head);
}






static inline __attribute__((always_inline)) int list_is_last(const struct list_head *list,
    const struct list_head *head)
{
 return list->next == head;
}





static inline __attribute__((always_inline)) int list_empty(const struct list_head *head)
{
 return head->next == head;
}
# 316 "include/linux/list.h"
static inline __attribute__((always_inline)) int list_empty_careful(const struct list_head *head)
{
 struct list_head *next = head->next;
 return (next == head) && (next == head->prev);
}

static inline __attribute__((always_inline)) void __list_splice(struct list_head *list,
     struct list_head *head)
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;
 struct list_head *at = head->next;

 first->prev = head;
 head->next = first;

 last->next = at;
 at->prev = last;
}






static inline __attribute__((always_inline)) void list_splice(struct list_head *list, struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head);
}
# 354 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_splice_init(struct list_head *list,
        struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head);
  INIT_LIST_HEAD(list);
 }
}
# 380 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_splice_init_rcu(struct list_head *list,
     struct list_head *head,
     void (*sync)(void))
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;
 struct list_head *at = head->next;

 if (list_empty(head))
  return;



 INIT_LIST_HEAD(list);
# 402 "include/linux/list.h"
 sync();
# 412 "include/linux/list.h"
 last->next = at;
 __asm__ __volatile__("": : :"memory");
 head->next = first;
 first->prev = head;
 at->prev = last;
}
# 700 "include/linux/list.h"
struct hlist_head {
 struct hlist_node *first;
};

struct hlist_node {
 struct hlist_node *next, **pprev;
};




static inline __attribute__((always_inline)) void INIT_HLIST_NODE(struct hlist_node *h)
{
 h->next = ((void *)0);
 h->pprev = ((void *)0);
}

static inline __attribute__((always_inline)) int hlist_unhashed(const struct hlist_node *h)
{
 return !h->pprev;
}

static inline __attribute__((always_inline)) int hlist_empty(const struct hlist_head *h)
{
 return !h->first;
}

static inline __attribute__((always_inline)) void __hlist_del(struct hlist_node *n)
{
 struct hlist_node *next = n->next;
 struct hlist_node **pprev = n->pprev;
 *pprev = next;
 if (next)
  next->pprev = pprev;
}

static inline __attribute__((always_inline)) void hlist_del(struct hlist_node *n)
{
 __hlist_del(n);
 n->next = ((void *) 0x00100100);
 n->pprev = ((void *) 0x00200200);
}
# 762 "include/linux/list.h"
static inline __attribute__((always_inline)) void hlist_del_rcu(struct hlist_node *n)
{
 __hlist_del(n);
 n->pprev = ((void *) 0x00200200);
}

static inline __attribute__((always_inline)) void hlist_del_init(struct hlist_node *n)
{
 if (!hlist_unhashed(n)) {
  __hlist_del(n);
  INIT_HLIST_NODE(n);
 }
}
# 783 "include/linux/list.h"
static inline __attribute__((always_inline)) void hlist_replace_rcu(struct hlist_node *old,
     struct hlist_node *new)
{
 struct hlist_node *next = old->next;

 new->next = next;
 new->pprev = old->pprev;
 __asm__ __volatile__("": : :"memory");
 if (next)
  new->next->pprev = &new->next;
 *new->pprev = new;
 old->pprev = ((void *) 0x00200200);
}

static inline __attribute__((always_inline)) void hlist_add_head(struct hlist_node *n, struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 if (first)
  first->pprev = &n->next;
 h->first = n;
 n->pprev = &h->first;
}
# 827 "include/linux/list.h"
static inline __attribute__((always_inline)) void hlist_add_head_rcu(struct hlist_node *n,
     struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 n->pprev = &h->first;
 __asm__ __volatile__("": : :"memory");
 if (first)
  first->pprev = &n->next;
 h->first = n;
}


static inline __attribute__((always_inline)) void hlist_add_before(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 next->pprev = &n->next;
 *(n->pprev) = n;
}

static inline __attribute__((always_inline)) void hlist_add_after(struct hlist_node *n,
     struct hlist_node *next)
{
 next->next = n->next;
 n->next = next;
 next->pprev = &n->next;

 if(next->next)
  next->next->pprev = &next->next;
}
# 878 "include/linux/list.h"
static inline __attribute__((always_inline)) void hlist_add_before_rcu(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 __asm__ __volatile__("": : :"memory");
 next->pprev = &n->next;
 *(n->pprev) = n;
}
# 906 "include/linux/list.h"
static inline __attribute__((always_inline)) void hlist_add_after_rcu(struct hlist_node *prev,
           struct hlist_node *n)
{
 n->next = prev->next;
 n->pprev = &prev->next;
 __asm__ __volatile__("": : :"memory");
 prev->next = n;
 if (n->next)
  n->next->pprev = &n->next;
}
# 23 "include/linux/wait.h" 2

# 1 "include/linux/spinlock.h" 1
# 49 "include/linux/spinlock.h"
# 1 "include/linux/preempt.h" 1
# 9 "include/linux/preempt.h"
# 1 "include/linux/thread_info.h" 1
# 15 "include/linux/thread_info.h"
struct restart_block {
 long (*fn)(struct restart_block *);
 union {
  struct {
   unsigned long arg0, arg1, arg2, arg3;
  };

  struct {
   u32 *uaddr;
   u32 val;
   u32 flags;
   u64 time;
  } futex;
 };
};

extern long do_no_restart_syscall(struct restart_block *parm);


# 1 "include/asm/thread_info.h" 1



# 1 "include/asm/thread_info_64.h" 1
# 12 "include/asm/thread_info_64.h"
# 1 "include/asm/page.h" 1
# 13 "include/asm/thread_info_64.h" 2
# 22 "include/asm/thread_info_64.h"
struct task_struct;
struct exec_domain;


struct thread_info {
 struct task_struct *task;
 struct exec_domain *exec_domain;
 __u32 flags;
 __u32 status;
 __u32 cpu;
 int preempt_count;

 mm_segment_t addr_limit;
 struct restart_block restart_block;
};
# 60 "include/asm/thread_info_64.h"
static inline __attribute__((always_inline)) struct thread_info *current_thread_info(void)
{
 struct thread_info *ti;
 ti = (void *)(({ typeof(_proxy_pda.kernelstack) ret__; switch (sizeof(_proxy_pda.kernelstack)) { case 2: asm("mov" "w %%gs:%c1,%0" : "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,kernelstack)), "m" (_proxy_pda.kernelstack)); break; case 4: asm("mov" "l %%gs:%c1,%0": "=r" (ret__): "i" (__builtin_offsetof(struct x8664_pda,kernelstack)), "m" (_proxy_pda.kernelstack)); break; case 8: asm("mov" "q %%gs:%c1,%0": "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,kernelstack)), "m" (_proxy_pda.kernelstack)); break; default: __bad_pda_field(); } ret__; }) + (5*8) - (((1UL) << 12) << 1));
 return ti;
}


static inline __attribute__((always_inline)) struct thread_info *stack_thread_info(void)
{
 struct thread_info *ti;
 __asm__("andq %%rsp,%0; ":"=r" (ti) : "0" (~((((1UL) << 12) << 1) - 1)));
 return ti;
}
# 5 "include/asm/thread_info.h" 2
# 35 "include/linux/thread_info.h" 2
# 43 "include/linux/thread_info.h"
static inline __attribute__((always_inline)) void set_ti_thread_flag(struct thread_info *ti, int flag)
{
 set_bit(flag,&ti->flags);
}

static inline __attribute__((always_inline)) void clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 clear_bit(flag,&ti->flags);
}

static inline __attribute__((always_inline)) int test_and_set_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_set_bit(flag,&ti->flags);
}

static inline __attribute__((always_inline)) int test_and_clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_clear_bit(flag,&ti->flags);
}

static inline __attribute__((always_inline)) int test_ti_thread_flag(struct thread_info *ti, int flag)
{
 return (__builtin_constant_p(flag) ? constant_test_bit((flag),(&ti->flags)) : variable_test_bit((flag),(&ti->flags)));
}
# 10 "include/linux/preempt.h" 2
# 50 "include/linux/spinlock.h" 2




# 1 "include/linux/stringify.h" 1
# 55 "include/linux/spinlock.h" 2
# 1 "include/linux/bottom_half.h" 1



extern void local_bh_disable(void);
extern void __local_bh_enable(void);
extern void _local_bh_enable(void);
extern void local_bh_enable(void);
extern void local_bh_enable_ip(unsigned long ip);
# 56 "include/linux/spinlock.h" 2

# 1 "include/asm/system.h" 1
# 58 "include/linux/spinlock.h" 2
# 79 "include/linux/spinlock.h"
# 1 "include/linux/spinlock_types.h" 1
# 13 "include/linux/spinlock_types.h"
# 1 "include/asm/spinlock_types.h" 1







typedef struct {
 unsigned int slock;
} raw_spinlock_t;



typedef struct {
 unsigned int lock;
} raw_rwlock_t;
# 14 "include/linux/spinlock_types.h" 2




# 1 "include/linux/lockdep.h" 1
# 12 "include/linux/lockdep.h"
struct task_struct;
struct lockdep_map;
# 313 "include/linux/lockdep.h"
static inline __attribute__((always_inline)) void lockdep_off(void)
{
}

static inline __attribute__((always_inline)) void lockdep_on(void)
{
}
# 340 "include/linux/lockdep.h"
struct lock_class_key { };
# 373 "include/linux/lockdep.h"
static inline __attribute__((always_inline)) void early_init_irq_lock_class(void)
{
}







static inline __attribute__((always_inline)) void early_boot_irqs_off(void)
{
}
static inline __attribute__((always_inline)) void early_boot_irqs_on(void)
{
}
static inline __attribute__((always_inline)) void print_irqtrace_events(struct task_struct *curr)
{
}
# 19 "include/linux/spinlock_types.h" 2

typedef struct {
 raw_spinlock_t raw_lock;
# 32 "include/linux/spinlock_types.h"
} spinlock_t;



typedef struct {
 raw_rwlock_t raw_lock;
# 48 "include/linux/spinlock_types.h"
} rwlock_t;
# 80 "include/linux/spinlock.h" 2

extern int __attribute__((section(".spinlock.text"))) generic__raw_read_trylock(raw_rwlock_t *lock);





# 1 "include/asm/spinlock.h" 1



# 1 "include/asm/spinlock_64.h" 1



# 1 "include/asm/atomic.h" 1



# 1 "include/asm/atomic_64.h" 1



# 1 "include/asm/alternative.h" 1
# 5 "include/asm/atomic_64.h" 2
# 1 "include/asm/cmpxchg.h" 1
# 6 "include/asm/atomic_64.h" 2
# 25 "include/asm/atomic_64.h"
typedef struct { int counter; } atomic_t;
# 53 "include/asm/atomic_64.h"
static __inline__ __attribute__((always_inline)) void atomic_add(int i, atomic_t *v)
{
 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "addl %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}
# 68 "include/asm/atomic_64.h"
static __inline__ __attribute__((always_inline)) void atomic_sub(int i, atomic_t *v)
{
 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "subl %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}
# 85 "include/asm/atomic_64.h"
static __inline__ __attribute__((always_inline)) int atomic_sub_and_test(int i, atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "subl %2,%0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"ir" (i), "m" (v->counter) : "memory");
 return c;
}







static __inline__ __attribute__((always_inline)) void atomic_inc(atomic_t *v)
{
 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "incl %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}







static __inline__ __attribute__((always_inline)) void atomic_dec(atomic_t *v)
{
 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "decl %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}
# 132 "include/asm/atomic_64.h"
static __inline__ __attribute__((always_inline)) int atomic_dec_and_test(atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "decl %0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"m" (v->counter) : "memory");
 return c != 0;
}
# 151 "include/asm/atomic_64.h"
static __inline__ __attribute__((always_inline)) int atomic_inc_and_test(atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "incl %0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"m" (v->counter) : "memory");
 return c != 0;
}
# 171 "include/asm/atomic_64.h"
static __inline__ __attribute__((always_inline)) int atomic_add_negative(int i, atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "addl %2,%0; sets %1"
  :"=m" (v->counter), "=qm" (c)
  :"ir" (i), "m" (v->counter) : "memory");
 return c;
}
# 189 "include/asm/atomic_64.h"
static __inline__ __attribute__((always_inline)) int atomic_add_return(int i, atomic_t *v)
{
 int __i = i;
 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "xaddl %0, %1"
  :"+r" (i), "+m" (v->counter)
  : : "memory");
 return i + __i;
}

static __inline__ __attribute__((always_inline)) int atomic_sub_return(int i, atomic_t *v)
{
 return atomic_add_return(-i,v);
}






typedef struct { long counter; } atomic64_t;
# 238 "include/asm/atomic_64.h"
static __inline__ __attribute__((always_inline)) void atomic64_add(long i, atomic64_t *v)
{
 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "addq %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}
# 253 "include/asm/atomic_64.h"
static __inline__ __attribute__((always_inline)) void atomic64_sub(long i, atomic64_t *v)
{
 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "subq %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}
# 270 "include/asm/atomic_64.h"
static __inline__ __attribute__((always_inline)) int atomic64_sub_and_test(long i, atomic64_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "subq %2,%0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"ir" (i), "m" (v->counter) : "memory");
 return c;
}







static __inline__ __attribute__((always_inline)) void atomic64_inc(atomic64_t *v)
{
 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "incq %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}







static __inline__ __attribute__((always_inline)) void atomic64_dec(atomic64_t *v)
{
 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "decq %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}
# 317 "include/asm/atomic_64.h"
static __inline__ __attribute__((always_inline)) int atomic64_dec_and_test(atomic64_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "decq %0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"m" (v->counter) : "memory");
 return c != 0;
}
# 336 "include/asm/atomic_64.h"
static __inline__ __attribute__((always_inline)) int atomic64_inc_and_test(atomic64_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "incq %0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"m" (v->counter) : "memory");
 return c != 0;
}
# 356 "include/asm/atomic_64.h"
static __inline__ __attribute__((always_inline)) int atomic64_add_negative(long i, atomic64_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "addq %2,%0; sets %1"
  :"=m" (v->counter), "=qm" (c)
  :"ir" (i), "m" (v->counter) : "memory");
 return c;
}
# 374 "include/asm/atomic_64.h"
static __inline__ __attribute__((always_inline)) long atomic64_add_return(long i, atomic64_t *v)
{
 long __i = i;
 __asm__ __volatile__(
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "xaddq %0, %1;"
  :"+r" (i), "+m" (v->counter)
  : : "memory");
 return i + __i;
}

static __inline__ __attribute__((always_inline)) long atomic64_sub_return(long i, atomic64_t *v)
{
 return atomic64_add_return(-i,v);
}
# 407 "include/asm/atomic_64.h"
static __inline__ __attribute__((always_inline)) int atomic_add_unless(atomic_t *v, int a, int u)
{
 int c, old;
 c = ((v)->counter);
 for (;;) {
  if (__builtin_expect(!!(c == (u)), 0))
   break;
  old = (((__typeof__(*(&(((v))->counter))))__cmpxchg((&(((v))->counter)),(unsigned long)(c), (unsigned long)(c + (a)),sizeof(*(&(((v))->counter))))));
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return c != (u);
}
# 433 "include/asm/atomic_64.h"
static __inline__ __attribute__((always_inline)) int atomic64_add_unless(atomic64_t *v, long a, long u)
{
 long c, old;
 c = ((v)->counter);
 for (;;) {
  if (__builtin_expect(!!(c == (u)), 0))
   break;
  old = (((__typeof__(*(&(((v))->counter))))__cmpxchg((&(((v))->counter)),(unsigned long)(c), (unsigned long)(c + (a)),sizeof(*(&(((v))->counter))))));
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return c != (u);
}
# 465 "include/asm/atomic_64.h"
# 1 "include/asm-generic/atomic.h" 1
# 23 "include/asm-generic/atomic.h"
typedef atomic64_t atomic_long_t;



static inline __attribute__((always_inline)) long atomic_long_read(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)((v)->counter);
}

static inline __attribute__((always_inline)) void atomic_long_set(atomic_long_t *l, long i)
{
 atomic64_t *v = (atomic64_t *)l;

 (((v)->counter) = (i));
}

static inline __attribute__((always_inline)) void atomic_long_inc(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_inc(v);
}

static inline __attribute__((always_inline)) void atomic_long_dec(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_dec(v);
}

static inline __attribute__((always_inline)) void atomic_long_add(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_add(i, v);
}

static inline __attribute__((always_inline)) void atomic_long_sub(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_sub(i, v);
}

static inline __attribute__((always_inline)) int atomic_long_sub_and_test(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_sub_and_test(i, v);
}

static inline __attribute__((always_inline)) int atomic_long_dec_and_test(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_dec_and_test(v);
}

static inline __attribute__((always_inline)) int atomic_long_inc_and_test(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_inc_and_test(v);
}

static inline __attribute__((always_inline)) int atomic_long_add_negative(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_add_negative(i, v);
}

static inline __attribute__((always_inline)) long atomic_long_add_return(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_add_return(i, v);
}

static inline __attribute__((always_inline)) long atomic_long_sub_return(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_sub_return(i, v);
}

static inline __attribute__((always_inline)) long atomic_long_inc_return(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)(atomic64_add_return(1,v));
}

static inline __attribute__((always_inline)) long atomic_long_dec_return(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)(atomic64_sub_return(1,v));
}

static inline __attribute__((always_inline)) long atomic_long_add_unless(atomic_long_t *l, long a, long u)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_add_unless(v, a, u);
}
# 466 "include/asm/atomic_64.h" 2
# 5 "include/asm/atomic.h" 2
# 5 "include/asm/spinlock_64.h" 2
# 1 "include/asm/rwlock.h" 1
# 6 "include/asm/spinlock_64.h" 2
# 1 "include/asm/page.h" 1
# 7 "include/asm/spinlock_64.h" 2
# 1 "include/asm/processor.h" 1
# 8 "include/asm/spinlock_64.h" 2
# 20 "include/asm/spinlock_64.h"
static inline __attribute__((always_inline)) int __raw_spin_is_locked(raw_spinlock_t *lock)
{
 return *(volatile signed int *)(&(lock)->slock) <= 0;
}

static inline __attribute__((always_inline)) void __raw_spin_lock(raw_spinlock_t *lock)
{
 asm volatile(
  "\n1:\t"
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " " ; decl %0\n\t"
  "jns 2f\n"
  "3:\n"
  "rep;nop\n\t"
  "cmpl $0,%0\n\t"
  "jle 3b\n\t"
  "jmp 1b\n"
  "2:\t" : "=m" (lock->slock) : : "memory");
}





static inline __attribute__((always_inline)) void __raw_spin_lock_flags(raw_spinlock_t *lock, unsigned long flags)
{
 asm volatile(
  "\n1:\t"
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " " ; decl %0\n\t"
  "jns 5f\n"
  "testl $0x200, %1\n\t"
  "jz 4f\n\t"
         "sti\n"
  "3:\t"
  "rep;nop\n\t"
  "cmpl $0, %0\n\t"
  "jle 3b\n\t"
  "cli\n\t"
  "jmp 1b\n"
  "4:\t"
  "rep;nop\n\t"
  "cmpl $0, %0\n\t"
  "jg 1b\n\t"
  "jmp 4b\n"
  "5:\n\t"
  : "+m" (lock->slock) : "r" ((unsigned)flags) : "memory");
}


static inline __attribute__((always_inline)) int __raw_spin_trylock(raw_spinlock_t *lock)
{
 int oldval;

 asm volatile(
  "xchgl %0,%1"
  :"=q" (oldval), "=m" (lock->slock)
  :"0" (0) : "memory");

 return oldval > 0;
}

static inline __attribute__((always_inline)) void __raw_spin_unlock(raw_spinlock_t *lock)
{
 asm volatile("movl $1,%0" :"=m" (lock->slock) :: "memory");
}

static inline __attribute__((always_inline)) void __raw_spin_unlock_wait(raw_spinlock_t *lock)
{
 while (__raw_spin_is_locked(lock))
  rep_nop();
}
# 105 "include/asm/spinlock_64.h"
static inline __attribute__((always_inline)) int __raw_read_can_lock(raw_rwlock_t *lock)
{
 return (int)(lock)->lock > 0;
}

static inline __attribute__((always_inline)) int __raw_write_can_lock(raw_rwlock_t *lock)
{
 return (lock)->lock == 0x01000000;
}

static inline __attribute__((always_inline)) void __raw_read_lock(raw_rwlock_t *rw)
{
 asm volatile(".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "subl $1,(%0)\n\t"
       "jns 1f\n"
       "call __read_lock_failed\n"
       "1:\n"
       ::"D" (rw), "i" (0x01000000) : "memory");
}

static inline __attribute__((always_inline)) void __raw_write_lock(raw_rwlock_t *rw)
{
 asm volatile(".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "subl %1,(%0)\n\t"
       "jz 1f\n"
       "\tcall __write_lock_failed\n\t"
       "1:\n"
       ::"D" (rw), "i" (0x01000000) : "memory");
}

static inline __attribute__((always_inline)) int __raw_read_trylock(raw_rwlock_t *lock)
{
 atomic_t *count = (atomic_t *)lock;
 atomic_dec(count);
 if (((count)->counter) >= 0)
  return 1;
 atomic_inc(count);
 return 0;
}

static inline __attribute__((always_inline)) int __raw_write_trylock(raw_rwlock_t *lock)
{
 atomic_t *count = (atomic_t *)lock;
 if (atomic_sub_and_test(0x01000000, count))
  return 1;
 atomic_add(0x01000000, count);
 return 0;
}

static inline __attribute__((always_inline)) void __raw_read_unlock(raw_rwlock_t *rw)
{
 asm volatile(".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " " ; incl %0" :"=m" (rw->lock) : : "memory");
}

static inline __attribute__((always_inline)) void __raw_write_unlock(raw_rwlock_t *rw)
{
 asm volatile(".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " " ; addl $" "0x01000000" ",%0"
    : "=m" (rw->lock) : : "memory");
}
# 5 "include/asm/spinlock.h" 2
# 88 "include/linux/spinlock.h" 2
# 133 "include/linux/spinlock.h"
# 1 "include/linux/spinlock_api_smp.h" 1
# 18 "include/linux/spinlock_api_smp.h"
int in_lock_functions(unsigned long addr);



void __attribute__((section(".spinlock.text"))) _spin_lock(spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _spin_lock_nested(spinlock_t *lock, int subclass)
       ;
void __attribute__((section(".spinlock.text"))) _read_lock(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _write_lock(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _spin_lock_bh(spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _read_lock_bh(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _write_lock_bh(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _spin_lock_irq(spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _read_lock_irq(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _write_lock_irq(rwlock_t *lock) ;
unsigned long __attribute__((section(".spinlock.text"))) _spin_lock_irqsave(spinlock_t *lock)
       ;
unsigned long __attribute__((section(".spinlock.text"))) _spin_lock_irqsave_nested(spinlock_t *lock, int subclass)
       ;
unsigned long __attribute__((section(".spinlock.text"))) _read_lock_irqsave(rwlock_t *lock)
       ;
unsigned long __attribute__((section(".spinlock.text"))) _write_lock_irqsave(rwlock_t *lock)
       ;
int __attribute__((section(".spinlock.text"))) _spin_trylock(spinlock_t *lock);
int __attribute__((section(".spinlock.text"))) _read_trylock(rwlock_t *lock);
int __attribute__((section(".spinlock.text"))) _write_trylock(rwlock_t *lock);
int __attribute__((section(".spinlock.text"))) _spin_trylock_bh(spinlock_t *lock);
void __attribute__((section(".spinlock.text"))) _spin_unlock(spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _read_unlock(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _write_unlock(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _spin_unlock_bh(spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _read_unlock_bh(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _write_unlock_bh(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _spin_unlock_irq(spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _read_unlock_irq(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _write_unlock_irq(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _spin_unlock_irqrestore(spinlock_t *lock, unsigned long flags)
       ;
void __attribute__((section(".spinlock.text"))) _read_unlock_irqrestore(rwlock_t *lock, unsigned long flags)
       ;
void __attribute__((section(".spinlock.text"))) _write_unlock_irqrestore(rwlock_t *lock, unsigned long flags)
       ;
# 134 "include/linux/spinlock.h" 2
# 296 "include/linux/spinlock.h"
static inline __attribute__((always_inline)) void double_spin_lock(spinlock_t *l1, spinlock_t *l2,
        bool l1_first)


{
 if (l1_first) {
  _spin_lock(l1);
  _spin_lock(l2);
 } else {
  _spin_lock(l2);
  _spin_lock(l1);
 }
}






static inline __attribute__((always_inline)) void double_spin_unlock(spinlock_t *l1, spinlock_t *l2,
          bool l1_taken_first)


{
 if (l1_taken_first) {
  do {__raw_spin_unlock(&(l2)->raw_lock); (void)0; } while (0);
  do {__raw_spin_unlock(&(l1)->raw_lock); (void)0; } while (0);
 } else {
  do {__raw_spin_unlock(&(l1)->raw_lock); (void)0; } while (0);
  do {__raw_spin_unlock(&(l2)->raw_lock); (void)0; } while (0);
 }
}





# 1 "include/asm/atomic.h" 1
# 334 "include/linux/spinlock.h" 2





extern int _atomic_dec_and_lock(atomic_t *atomic, spinlock_t *lock);
# 25 "include/linux/wait.h" 2
# 1 "include/asm/system.h" 1
# 26 "include/linux/wait.h" 2
# 1 "include/asm/current.h" 1
# 27 "include/linux/wait.h" 2

typedef struct __wait_queue wait_queue_t;
typedef int (*wait_queue_func_t)(wait_queue_t *wait, unsigned mode, int sync, void *key);
int default_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);

struct __wait_queue {
 unsigned int flags;

 void *private;
 wait_queue_func_t func;
 struct list_head task_list;
};

struct wait_bit_key {
 void *flags;
 int bit_nr;
};

struct wait_bit_queue {
 struct wait_bit_key key;
 wait_queue_t wait;
};

struct __wait_queue_head {
 spinlock_t lock;
 struct list_head task_list;
};
typedef struct __wait_queue_head wait_queue_head_t;

struct task_struct;
# 80 "include/linux/wait.h"
extern void init_waitqueue_head(wait_queue_head_t *q);
# 91 "include/linux/wait.h"
static inline __attribute__((always_inline)) void init_waitqueue_entry(wait_queue_t *q, struct task_struct *p)
{
 q->flags = 0;
 q->private = p;
 q->func = default_wake_function;
}

static inline __attribute__((always_inline)) void init_waitqueue_func_entry(wait_queue_t *q,
     wait_queue_func_t func)
{
 q->flags = 0;
 q->private = ((void *)0);
 q->func = func;
}

static inline __attribute__((always_inline)) int waitqueue_active(wait_queue_head_t *q)
{
 return !list_empty(&q->task_list);
}
# 120 "include/linux/wait.h"
extern void add_wait_queue(wait_queue_head_t *q, wait_queue_t * wait);
extern void add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t * wait);
extern void remove_wait_queue(wait_queue_head_t *q, wait_queue_t * wait);

static inline __attribute__((always_inline)) void __add_wait_queue(wait_queue_head_t *head, wait_queue_t *new)
{
 list_add(&new->task_list, &head->task_list);
}




static inline __attribute__((always_inline)) void __add_wait_queue_tail(wait_queue_head_t *head,
      wait_queue_t *new)
{
 list_add_tail(&new->task_list, &head->task_list);
}

static inline __attribute__((always_inline)) void __remove_wait_queue(wait_queue_head_t *head,
       wait_queue_t *old)
{
 list_del(&old->task_list);
}

void __wake_up(wait_queue_head_t *q, unsigned int mode, int nr, void *key);
extern void __wake_up_locked(wait_queue_head_t *q, unsigned int mode);
extern void __wake_up_sync(wait_queue_head_t *q, unsigned int mode, int nr);
void __wake_up_bit(wait_queue_head_t *, void *, int);
int __wait_on_bit(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
int __wait_on_bit_lock(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
void wake_up_bit(void *, int);
int out_of_line_wait_on_bit(void *, int, int (*)(void *), unsigned);
int out_of_line_wait_on_bit_lock(void *, int, int (*)(void *), unsigned);
wait_queue_head_t *bit_waitqueue(void *, int);
# 351 "include/linux/wait.h"
static inline __attribute__((always_inline)) void add_wait_queue_exclusive_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 wait->flags |= 0x01;
 __add_wait_queue_tail(q, wait);
}




static inline __attribute__((always_inline)) void remove_wait_queue_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 __remove_wait_queue(q, wait);
}






extern void sleep_on(wait_queue_head_t *q);
extern long sleep_on_timeout(wait_queue_head_t *q,
          signed long timeout);
extern void interruptible_sleep_on(wait_queue_head_t *q);
extern long interruptible_sleep_on_timeout(wait_queue_head_t *q,
        signed long timeout);




void prepare_to_wait(wait_queue_head_t *q, wait_queue_t *wait, int state)
                                   ;
void prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state)
                                   ;
void finish_wait(wait_queue_head_t *q, wait_queue_t *wait);
int autoremove_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
int wake_bit_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
# 429 "include/linux/wait.h"
static inline __attribute__((always_inline)) int wait_on_bit(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!(__builtin_constant_p(bit) ? constant_test_bit((bit),(word)) : variable_test_bit((bit),(word))))
  return 0;
 return out_of_line_wait_on_bit(word, bit, action, mode);
}
# 453 "include/linux/wait.h"
static inline __attribute__((always_inline)) int wait_on_bit_lock(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!test_and_set_bit(bit, word))
  return 0;
 return out_of_line_wait_on_bit_lock(word, bit, action, mode);
}
# 276 "include/linux/fs.h" 2

# 1 "include/linux/kdev_t.h" 1
# 21 "include/linux/kdev_t.h"
static inline __attribute__((always_inline)) int old_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < 256 && ((unsigned int) ((dev) & ((1U << 20) - 1))) < 256;
}

static inline __attribute__((always_inline)) u16 old_encode_dev(dev_t dev)
{
 return (((unsigned int) ((dev) >> 20)) << 8) | ((unsigned int) ((dev) & ((1U << 20) - 1)));
}

static inline __attribute__((always_inline)) dev_t old_decode_dev(u16 val)
{
 return ((((val >> 8) & 255) << 20) | (val & 255));
}

static inline __attribute__((always_inline)) int new_valid_dev(dev_t dev)
{
 return 1;
}

static inline __attribute__((always_inline)) u32 new_encode_dev(dev_t dev)
{
 unsigned major = ((unsigned int) ((dev) >> 20));
 unsigned minor = ((unsigned int) ((dev) & ((1U << 20) - 1)));
 return (minor & 0xff) | (major << 8) | ((minor & ~0xff) << 12);
}

static inline __attribute__((always_inline)) dev_t new_decode_dev(u32 dev)
{
 unsigned major = (dev & 0xfff00) >> 8;
 unsigned minor = (dev & 0xff) | ((dev >> 12) & 0xfff00);
 return (((major) << 20) | (minor));
}

static inline __attribute__((always_inline)) int huge_valid_dev(dev_t dev)
{
 return 1;
}

static inline __attribute__((always_inline)) u64 huge_encode_dev(dev_t dev)
{
 return new_encode_dev(dev);
}

static inline __attribute__((always_inline)) dev_t huge_decode_dev(u64 dev)
{
 return new_decode_dev(dev);
}

static inline __attribute__((always_inline)) int sysv_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < (1<<14) && ((unsigned int) ((dev) & ((1U << 20) - 1))) < (1<<18);
}

static inline __attribute__((always_inline)) u32 sysv_encode_dev(dev_t dev)
{
 return ((unsigned int) ((dev) & ((1U << 20) - 1))) | (((unsigned int) ((dev) >> 20)) << 18);
}

static inline __attribute__((always_inline)) unsigned sysv_major(u32 dev)
{
 return (dev >> 18) & 0x3fff;
}

static inline __attribute__((always_inline)) unsigned sysv_minor(u32 dev)
{
 return dev & 0x3ffff;
}
# 278 "include/linux/fs.h" 2
# 1 "include/linux/dcache.h" 1





# 1 "include/asm/atomic.h" 1
# 7 "include/linux/dcache.h" 2



# 1 "include/linux/rcupdate.h" 1
# 41 "include/linux/rcupdate.h"
# 1 "include/linux/percpu.h" 1




# 1 "include/linux/slab.h" 1
# 14 "include/linux/slab.h"
# 1 "include/linux/gfp.h" 1



# 1 "include/linux/mmzone.h" 1
# 13 "include/linux/mmzone.h"
# 1 "include/linux/numa.h" 1
# 14 "include/linux/mmzone.h" 2
# 1 "include/linux/init.h" 1
# 135 "include/linux/init.h"
typedef int (*initcall_t)(void);
typedef void (*exitcall_t)(void);

extern initcall_t __con_initcall_start[], __con_initcall_end[];
extern initcall_t __security_initcall_start[], __security_initcall_end[];


extern char __attribute__ ((__section__(".init.data"))) boot_command_line[];
extern char *saved_command_line;
extern unsigned int reset_devices;


void setup_arch(char **);
void prepare_namespace(void);
# 207 "include/linux/init.h"
struct obs_kernel_param {
 const char *str;
 int (*setup_func)(char *);
 int early;
};
# 238 "include/linux/init.h"
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) parse_early_param(void);
# 15 "include/linux/mmzone.h" 2
# 1 "include/linux/seqlock.h" 1
# 32 "include/linux/seqlock.h"
typedef struct {
 unsigned sequence;
 spinlock_t lock;
} seqlock_t;
# 60 "include/linux/seqlock.h"
static inline __attribute__((always_inline)) void write_seqlock(seqlock_t *sl)
{
 _spin_lock(&sl->lock);
 ++sl->sequence;
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((always_inline)) void write_sequnlock(seqlock_t *sl)
{
 __asm__ __volatile__("": : :"memory");
 sl->sequence++;
 do {__raw_spin_unlock(&(&sl->lock)->raw_lock); (void)0; } while (0);
}

static inline __attribute__((always_inline)) int write_tryseqlock(seqlock_t *sl)
{
 int ret = (_spin_trylock(&sl->lock));

 if (ret) {
  ++sl->sequence;
  __asm__ __volatile__("": : :"memory");
 }
 return ret;
}


static inline __attribute__((always_inline)) __attribute__((always_inline)) unsigned read_seqbegin(const seqlock_t *sl)
{
 unsigned ret = sl->sequence;
 __asm__ __volatile__("": : :"memory");
 return ret;
}
# 101 "include/linux/seqlock.h"
static inline __attribute__((always_inline)) __attribute__((always_inline)) int read_seqretry(const seqlock_t *sl, unsigned iv)
{
 __asm__ __volatile__("": : :"memory");
 return (iv & 1) | (sl->sequence ^ iv);
}
# 115 "include/linux/seqlock.h"
typedef struct seqcount {
 unsigned sequence;
} seqcount_t;





static inline __attribute__((always_inline)) unsigned read_seqcount_begin(const seqcount_t *s)
{
 unsigned ret = s->sequence;
 __asm__ __volatile__("": : :"memory");
 return ret;
}






static inline __attribute__((always_inline)) int read_seqcount_retry(const seqcount_t *s, unsigned iv)
{
 __asm__ __volatile__("": : :"memory");
 return (iv & 1) | (s->sequence ^ iv);
}






static inline __attribute__((always_inline)) void write_seqcount_begin(seqcount_t *s)
{
 s->sequence++;
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((always_inline)) void write_seqcount_end(seqcount_t *s)
{
 __asm__ __volatile__("": : :"memory");
 s->sequence++;
}
# 16 "include/linux/mmzone.h" 2
# 1 "include/linux/nodemask.h" 1
# 88 "include/linux/nodemask.h"
typedef struct { unsigned long bits[((((1 << 6)) + (64) - 1) / (64))]; } nodemask_t;
extern nodemask_t _unused_nodemask_arg_;


static inline __attribute__((always_inline)) void __node_set(int node, volatile nodemask_t *dstp)
{
 set_bit(node, dstp->bits);
}


static inline __attribute__((always_inline)) void __node_clear(int node, volatile nodemask_t *dstp)
{
 clear_bit(node, dstp->bits);
}


static inline __attribute__((always_inline)) void __nodes_setall(nodemask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline __attribute__((always_inline)) void __nodes_clear(nodemask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}






static inline __attribute__((always_inline)) int __node_test_and_set(int node, nodemask_t *addr)
{
 return test_and_set_bit(node, addr->bits);
}



static inline __attribute__((always_inline)) void __nodes_and(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_or(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_xor(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_andnot(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_complement(nodemask_t *dstp,
     const nodemask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}



static inline __attribute__((always_inline)) int __nodes_equal(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) int __nodes_intersects(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) int __nodes_subset(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) int __nodes_empty(const nodemask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __nodes_full(const nodemask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __nodes_weight(const nodemask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_shift_right(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline __attribute__((always_inline)) void __nodes_shift_left(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}





static inline __attribute__((always_inline)) int __first_node(const nodemask_t *srcp)
{
 return ({ int __x = ((1 << 6)); int __y = (((__builtin_constant_p((1 << 6)) && ((1 << 6)) <= 64 ? (__scanbit(*(unsigned long *)srcp->bits,((1 << 6)))) : find_first_bit(srcp->bits,(1 << 6))))); __x < __y ? __x: __y; });
}


static inline __attribute__((always_inline)) int __next_node(int n, const nodemask_t *srcp)
{
 return ({ int __x = ((1 << 6)); int __y = (((__builtin_constant_p((1 << 6)) && ((1 << 6)) <= 64 ? ((n+1) + (__scanbit((*(unsigned long *)srcp->bits) >> (n+1),((1 << 6))-(n+1)))) : find_next_bit(srcp->bits,(1 << 6),n+1)))); __x < __y ? __x: __y; });
}
# 251 "include/linux/nodemask.h"
static inline __attribute__((always_inline)) int __first_unset_node(const nodemask_t *maskp)
{
 return ({ int __x = ((1 << 6)); int __y = (((__builtin_constant_p((1 << 6)) && ((1 << 6)) <= 64 ? (__scanbit(~*(unsigned long *)maskp->bits,((1 << 6)))) : find_first_zero_bit(maskp->bits,(1 << 6))))); __x < __y ? __x: __y; })
                                                  ;
}
# 285 "include/linux/nodemask.h"
static inline __attribute__((always_inline)) int __nodemask_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline __attribute__((always_inline)) int __nodemask_parse_user(const char *buf, int len,
     nodemask_t *dstp, int nbits)
{
 return bitmap_parse_user(buf, len, dstp->bits, nbits);
}



static inline __attribute__((always_inline)) int __nodelist_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __nodelist_parse(const char *buf, nodemask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline __attribute__((always_inline)) int __node_remap(int oldbit,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_remap(nodemask_t *dstp, const nodemask_t *srcp,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}
# 343 "include/linux/nodemask.h"
enum node_states {
 N_POSSIBLE,
 N_ONLINE,
 N_NORMAL_MEMORY,



 N_HIGH_MEMORY = N_NORMAL_MEMORY,

 N_CPU,
 NR_NODE_STATES
};






extern nodemask_t node_states[NR_NODE_STATES];


static inline __attribute__((always_inline)) int node_state(int node, enum node_states state)
{
 return (__builtin_constant_p((node)) ? constant_test_bit(((node)),((node_states[state]).bits)) : variable_test_bit(((node)),((node_states[state]).bits)));
}

static inline __attribute__((always_inline)) void node_set_state(int node, enum node_states state)
{
 __node_set(node, &node_states[state]);
}

static inline __attribute__((always_inline)) void node_clear_state(int node, enum node_states state)
{
 __node_clear(node, &node_states[state]);
}

static inline __attribute__((always_inline)) int num_node_state(enum node_states state)
{
 return __nodes_weight(&(node_states[state]), (1 << 6));
}







extern int nr_node_ids;
# 17 "include/linux/mmzone.h" 2
# 1 "include/linux/pageblock-flags.h" 1
# 33 "include/linux/pageblock-flags.h"
enum pageblock_bits {
 PB_migrate, PB_migrate_end = (PB_migrate + 3) - 1,
 NR_PAGEBLOCK_BITS
};
# 62 "include/linux/pageblock-flags.h"
struct page;


unsigned long get_pageblock_flags_group(struct page *page,
     int start_bitidx, int end_bitidx);
void set_pageblock_flags_group(struct page *page, unsigned long flags,
     int start_bitidx, int end_bitidx);
# 18 "include/linux/mmzone.h" 2
# 1 "include/asm/atomic.h" 1
# 19 "include/linux/mmzone.h" 2
# 1 "include/asm/page.h" 1
# 20 "include/linux/mmzone.h" 2
# 48 "include/linux/mmzone.h"
extern int page_group_by_mobility_disabled;

static inline __attribute__((always_inline)) int get_pageblock_migratetype(struct page *page)
{
 if (__builtin_expect(!!(page_group_by_mobility_disabled), 0))
  return 0;

 return get_pageblock_flags_group(page, PB_migrate, PB_migrate_end);
}

struct free_area {
 struct list_head free_list[5];
 unsigned long nr_free;
};

struct pglist_data;
# 72 "include/linux/mmzone.h"
struct zone_padding {
 char x[0];
} __attribute__((__aligned__(1 << ((7)))));





enum zone_stat_item {

 NR_FREE_PAGES,
 NR_INACTIVE,
 NR_ACTIVE,
 NR_ANON_PAGES,
 NR_FILE_MAPPED,

 NR_FILE_PAGES,
 NR_FILE_DIRTY,
 NR_WRITEBACK,

 NR_SLAB_RECLAIMABLE,
 NR_SLAB_UNRECLAIMABLE,
 NR_PAGETABLE,
 NR_UNSTABLE_NFS,
 NR_BOUNCE,
 NR_VMSCAN_WRITE,

 NUMA_HIT,
 NUMA_MISS,
 NUMA_FOREIGN,
 NUMA_INTERLEAVE_HIT,
 NUMA_LOCAL,
 NUMA_OTHER,

 NR_VM_ZONE_STAT_ITEMS };

struct per_cpu_pages {
 int count;
 int high;
 int batch;
 struct list_head list;
};

struct per_cpu_pageset {
 struct per_cpu_pages pcp[2];

 s8 expire;


 s8 stat_threshold;
 s8 vm_stat_diff[NR_VM_ZONE_STAT_ITEMS];

} __attribute__((__aligned__((1 << (7)))));







enum zone_type {
# 152 "include/linux/mmzone.h"
 ZONE_DMA,







 ZONE_DMA32,






 ZONE_NORMAL,
# 179 "include/linux/mmzone.h"
 ZONE_MOVABLE,
 MAX_NR_ZONES
};
# 214 "include/linux/mmzone.h"
struct zone {

 unsigned long pages_min, pages_low, pages_high;
# 225 "include/linux/mmzone.h"
 unsigned long lowmem_reserve[MAX_NR_ZONES];


 int node;



 unsigned long min_unmapped_pages;
 unsigned long min_slab_pages;
 struct per_cpu_pageset *pageset[32];






 spinlock_t lock;




 struct free_area free_area[11];






 unsigned long *pageblock_flags;



 struct zone_padding _pad1_;


 spinlock_t lru_lock;
 struct list_head active_list;
 struct list_head inactive_list;
 unsigned long nr_scan_active;
 unsigned long nr_scan_inactive;
 unsigned long pages_scanned;
 unsigned long flags;


 atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];
# 284 "include/linux/mmzone.h"
 int prev_priority;


 struct zone_padding _pad2_;
# 314 "include/linux/mmzone.h"
 wait_queue_head_t * wait_table;
 unsigned long wait_table_hash_nr_entries;
 unsigned long wait_table_bits;




 struct pglist_data *zone_pgdat;

 unsigned long zone_start_pfn;
# 335 "include/linux/mmzone.h"
 unsigned long spanned_pages;
 unsigned long present_pages;




 const char *name;
} __attribute__((__aligned__(1 << ((7)))));

typedef enum {
 ZONE_ALL_UNRECLAIMABLE,
 ZONE_RECLAIM_LOCKED,
 ZONE_OOM_LOCKED,
} zone_flags_t;

static inline __attribute__((always_inline)) void zone_set_flag(struct zone *zone, zone_flags_t flag)
{
 set_bit(flag, &zone->flags);
}

static inline __attribute__((always_inline)) int zone_test_and_set_flag(struct zone *zone, zone_flags_t flag)
{
 return test_and_set_bit(flag, &zone->flags);
}

static inline __attribute__((always_inline)) void zone_clear_flag(struct zone *zone, zone_flags_t flag)
{
 clear_bit(flag, &zone->flags);
}

static inline __attribute__((always_inline)) int zone_is_all_unreclaimable(const struct zone *zone)
{
 return (__builtin_constant_p(ZONE_ALL_UNRECLAIMABLE) ? constant_test_bit((ZONE_ALL_UNRECLAIMABLE),(&zone->flags)) : variable_test_bit((ZONE_ALL_UNRECLAIMABLE),(&zone->flags)));
}

static inline __attribute__((always_inline)) int zone_is_reclaim_locked(const struct zone *zone)
{
 return (__builtin_constant_p(ZONE_RECLAIM_LOCKED) ? constant_test_bit((ZONE_RECLAIM_LOCKED),(&zone->flags)) : variable_test_bit((ZONE_RECLAIM_LOCKED),(&zone->flags)));
}

static inline __attribute__((always_inline)) int zone_is_oom_locked(const struct zone *zone)
{
 return (__builtin_constant_p(ZONE_OOM_LOCKED) ? constant_test_bit((ZONE_OOM_LOCKED),(&zone->flags)) : variable_test_bit((ZONE_OOM_LOCKED),(&zone->flags)));
}
# 461 "include/linux/mmzone.h"
struct zonelist_cache {
 unsigned short z_to_n[((1 << 6) * MAX_NR_ZONES)];
 unsigned long fullzones[(((((1 << 6) * MAX_NR_ZONES)) + (64) - 1) / (64))];
 unsigned long last_full_zap;
};
# 481 "include/linux/mmzone.h"
struct zonelist {
 struct zonelist_cache *zlcache_ptr;
 struct zone *zones[((1 << 6) * MAX_NR_ZONES) + 1];

 struct zonelist_cache zlcache;

};
# 496 "include/linux/mmzone.h"
static inline __attribute__((always_inline)) int alloc_should_filter_zonelist(struct zonelist *zonelist)
{
 return !zonelist->zlcache_ptr;
}
# 508 "include/linux/mmzone.h"
struct node_active_region {
 unsigned long start_pfn;
 unsigned long end_pfn;
 int nid;
};
# 531 "include/linux/mmzone.h"
struct bootmem_data;
typedef struct pglist_data {
 struct zone node_zones[MAX_NR_ZONES];
 struct zonelist node_zonelists[(2 * MAX_NR_ZONES)];
 int nr_zones;

 struct page *node_mem_map;

 struct bootmem_data *bdata;
# 550 "include/linux/mmzone.h"
 unsigned long node_start_pfn;
 unsigned long node_present_pages;
 unsigned long node_spanned_pages;

 int node_id;
 wait_queue_head_t kswapd_wait;
 struct task_struct *kswapd;
 int kswapd_max_order;
} pg_data_t;
# 569 "include/linux/mmzone.h"
# 1 "include/linux/memory_hotplug.h" 1



# 1 "include/linux/mmzone.h" 1
# 5 "include/linux/memory_hotplug.h" 2

# 1 "include/linux/notifier.h" 1
# 13 "include/linux/notifier.h"
# 1 "include/linux/mutex.h" 1
# 18 "include/linux/mutex.h"
# 1 "include/asm/atomic.h" 1
# 19 "include/linux/mutex.h" 2
# 48 "include/linux/mutex.h"
struct mutex {

 atomic_t count;
 spinlock_t wait_lock;
 struct list_head wait_list;
# 61 "include/linux/mutex.h"
};





struct mutex_waiter {
 struct list_head list;
 struct task_struct *task;




};
# 106 "include/linux/mutex.h"
extern void __mutex_init(struct mutex *lock, const char *name,
    struct lock_class_key *key);







static inline __attribute__((always_inline)) int mutex_is_locked(struct mutex *lock)
{
 return ((&lock->count)->counter) != 1;
}
# 132 "include/linux/mutex.h"
extern void mutex_lock(struct mutex *lock);
extern int mutex_lock_interruptible(struct mutex *lock);
# 143 "include/linux/mutex.h"
extern int mutex_trylock(struct mutex *lock);
extern void mutex_unlock(struct mutex *lock);
# 14 "include/linux/notifier.h" 2
# 1 "include/linux/rwsem.h" 1
# 16 "include/linux/rwsem.h"
# 1 "include/asm/system.h" 1
# 17 "include/linux/rwsem.h" 2
# 1 "include/asm/atomic.h" 1
# 18 "include/linux/rwsem.h" 2

struct rw_semaphore;


# 1 "include/linux/rwsem-spinlock.h" 1
# 22 "include/linux/rwsem-spinlock.h"
struct rwsem_waiter;
# 31 "include/linux/rwsem-spinlock.h"
struct rw_semaphore {
 __s32 activity;
 spinlock_t wait_lock;
 struct list_head wait_list;



};
# 53 "include/linux/rwsem-spinlock.h"
extern void __init_rwsem(struct rw_semaphore *sem, const char *name,
    struct lock_class_key *key);
# 63 "include/linux/rwsem-spinlock.h"
extern void __down_read(struct rw_semaphore *sem);
extern int __down_read_trylock(struct rw_semaphore *sem);
extern void __down_write(struct rw_semaphore *sem);
extern void __down_write_nested(struct rw_semaphore *sem, int subclass);
extern int __down_write_trylock(struct rw_semaphore *sem);
extern void __up_read(struct rw_semaphore *sem);
extern void __up_write(struct rw_semaphore *sem);
extern void __downgrade_write(struct rw_semaphore *sem);

static inline __attribute__((always_inline)) int rwsem_is_locked(struct rw_semaphore *sem)
{
 return (sem->activity != 0);
}
# 23 "include/linux/rwsem.h" 2







extern void down_read(struct rw_semaphore *sem);




extern int down_read_trylock(struct rw_semaphore *sem);




extern void down_write(struct rw_semaphore *sem);




extern int down_write_trylock(struct rw_semaphore *sem);




extern void up_read(struct rw_semaphore *sem);




extern void up_write(struct rw_semaphore *sem);




extern void downgrade_write(struct rw_semaphore *sem);
# 15 "include/linux/notifier.h" 2
# 1 "include/linux/srcu.h" 1
# 30 "include/linux/srcu.h"
struct srcu_struct_array {
 int c[2];
};

struct srcu_struct {
 int completed;
 struct srcu_struct_array *per_cpu_ref;
 struct mutex mutex;
};







int init_srcu_struct(struct srcu_struct *sp);
void cleanup_srcu_struct(struct srcu_struct *sp);
int srcu_read_lock(struct srcu_struct *sp) ;
void srcu_read_unlock(struct srcu_struct *sp, int idx) ;
void synchronize_srcu(struct srcu_struct *sp);
long srcu_batches_completed(struct srcu_struct *sp);
# 16 "include/linux/notifier.h" 2
# 50 "include/linux/notifier.h"
struct notifier_block {
 int (*notifier_call)(struct notifier_block *, unsigned long, void *);
 struct notifier_block *next;
 int priority;
};

struct atomic_notifier_head {
 spinlock_t lock;
 struct notifier_block *head;
};

struct blocking_notifier_head {
 struct rw_semaphore rwsem;
 struct notifier_block *head;
};

struct raw_notifier_head {
 struct notifier_block *head;
};

struct srcu_notifier_head {
 struct mutex mutex;
 struct srcu_struct srcu;
 struct notifier_block *head;
};
# 89 "include/linux/notifier.h"
extern void srcu_init_notifier_head(struct srcu_notifier_head *nh);
# 115 "include/linux/notifier.h"
extern int atomic_notifier_chain_register(struct atomic_notifier_head *nh,
  struct notifier_block *nb);
extern int blocking_notifier_chain_register(struct blocking_notifier_head *nh,
  struct notifier_block *nb);
extern int raw_notifier_chain_register(struct raw_notifier_head *nh,
  struct notifier_block *nb);
extern int srcu_notifier_chain_register(struct srcu_notifier_head *nh,
  struct notifier_block *nb);

extern int atomic_notifier_chain_unregister(struct atomic_notifier_head *nh,
  struct notifier_block *nb);
extern int blocking_notifier_chain_unregister(struct blocking_notifier_head *nh,
  struct notifier_block *nb);
extern int raw_notifier_chain_unregister(struct raw_notifier_head *nh,
  struct notifier_block *nb);
extern int srcu_notifier_chain_unregister(struct srcu_notifier_head *nh,
  struct notifier_block *nb);

extern int atomic_notifier_call_chain(struct atomic_notifier_head *nh,
  unsigned long val, void *v);
extern int __atomic_notifier_call_chain(struct atomic_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int blocking_notifier_call_chain(struct blocking_notifier_head *nh,
  unsigned long val, void *v);
extern int __blocking_notifier_call_chain(struct blocking_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int raw_notifier_call_chain(struct raw_notifier_head *nh,
  unsigned long val, void *v);
extern int __raw_notifier_call_chain(struct raw_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int srcu_notifier_call_chain(struct srcu_notifier_head *nh,
  unsigned long val, void *v);
extern int __srcu_notifier_call_chain(struct srcu_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
# 161 "include/linux/notifier.h"
static inline __attribute__((always_inline)) int notifier_from_errno(int err)
{
 return 0x8000 | (0x0001 - err);
}


static inline __attribute__((always_inline)) int notifier_to_errno(int ret)
{
 ret &= ~0x8000;
 return ret > 0x0001 ? 0x0001 - ret : 0;
}
# 241 "include/linux/notifier.h"
extern struct blocking_notifier_head reboot_notifier_list;
# 7 "include/linux/memory_hotplug.h" 2

struct page;
struct zone;
struct pglist_data;
# 149 "include/linux/memory_hotplug.h"
static inline __attribute__((always_inline)) void pgdat_resize_lock(struct pglist_data *p, unsigned long *f) {}
static inline __attribute__((always_inline)) void pgdat_resize_unlock(struct pglist_data *p, unsigned long *f) {}
static inline __attribute__((always_inline)) void pgdat_resize_init(struct pglist_data *pgdat) {}

static inline __attribute__((always_inline)) unsigned zone_span_seqbegin(struct zone *zone)
{
 return 0;
}
static inline __attribute__((always_inline)) int zone_span_seqretry(struct zone *zone, unsigned iv)
{
 return 0;
}
static inline __attribute__((always_inline)) void zone_span_writelock(struct zone *zone) {}
static inline __attribute__((always_inline)) void zone_span_writeunlock(struct zone *zone) {}
static inline __attribute__((always_inline)) void zone_seqlock_init(struct zone *zone) {}

static inline __attribute__((always_inline)) int mhp_notimplemented(const char *func)
{
 printk("<4>" "%s() called, with CONFIG_MEMORY_HOTPLUG disabled\n", func);
 dump_stack();
 return -38;
}



extern int add_memory(int nid, u64 start, u64 size);
extern int arch_add_memory(int nid, u64 start, u64 size);
extern int remove_memory(u64 start, u64 size);
extern int sparse_add_one_section(struct zone *zone, unsigned long start_pfn,
        int nr_pages);
# 570 "include/linux/mmzone.h" 2

void get_zone_counts(unsigned long *active, unsigned long *inactive,
   unsigned long *free);
void build_all_zonelists(void);
void wakeup_kswapd(struct zone *zone, int order);
int zone_watermark_ok(struct zone *z, int order, unsigned long mark,
  int classzone_idx, int alloc_flags);
enum memmap_context {
 MEMMAP_EARLY,
 MEMMAP_HOTPLUG,
};
extern int init_currently_empty_zone(struct zone *zone, unsigned long start_pfn,
         unsigned long size,
         enum memmap_context context);




static inline __attribute__((always_inline)) void memory_present(int nid, unsigned long start, unsigned long end) {}
# 600 "include/linux/mmzone.h"
static inline __attribute__((always_inline)) int populated_zone(struct zone *zone)
{
 return (!!zone->present_pages);
}

extern int movable_zone;

static inline __attribute__((always_inline)) int zone_movable_is_highmem(void)
{



 return 0;

}

static inline __attribute__((always_inline)) int is_highmem_idx(enum zone_type idx)
{




 return 0;

}

static inline __attribute__((always_inline)) int is_normal_idx(enum zone_type idx)
{
 return (idx == ZONE_NORMAL);
}







static inline __attribute__((always_inline)) int is_highmem(struct zone *zone)
{





 return 0;

}

static inline __attribute__((always_inline)) int is_normal(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + ZONE_NORMAL;
}

static inline __attribute__((always_inline)) int is_dma32(struct zone *zone)
{

 return zone == zone->zone_pgdat->node_zones + ZONE_DMA32;



}

static inline __attribute__((always_inline)) int is_dma(struct zone *zone)
{

 return zone == zone->zone_pgdat->node_zones + ZONE_DMA;



}


struct ctl_table;
struct file;
int min_free_kbytes_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
extern int sysctl_lowmem_reserve_ratio[MAX_NR_ZONES-1];
int lowmem_reserve_ratio_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
int percpu_pagelist_fraction_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
int sysctl_min_unmapped_ratio_sysctl_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);
int sysctl_min_slab_ratio_sysctl_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);

extern int numa_zonelist_order_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);
extern char numa_zonelist_order[];


# 1 "include/linux/topology.h" 1
# 33 "include/linux/topology.h"
# 1 "include/linux/smp.h" 1
# 11 "include/linux/smp.h"
extern void cpu_idle(void);







# 1 "include/asm/smp.h" 1



# 1 "include/asm/smp_64.h" 1
# 11 "include/asm/smp_64.h"
extern int disable_apic;

# 1 "include/asm/mpspec.h" 1



# 1 "include/asm/mpspec_64.h" 1
# 21 "include/asm/mpspec_64.h"
struct intel_mp_floating
{
 char mpf_signature[4];
 unsigned int mpf_physptr;
 unsigned char mpf_length;
 unsigned char mpf_specification;
 unsigned char mpf_checksum;
 unsigned char mpf_feature1;
 unsigned char mpf_feature2;
 unsigned char mpf_feature3;
 unsigned char mpf_feature4;
 unsigned char mpf_feature5;
};

struct mp_config_table
{
 char mpc_signature[4];

 unsigned short mpc_length;
 char mpc_spec;
 char mpc_checksum;
 char mpc_oem[8];
 char mpc_productid[12];
 unsigned int mpc_oemptr;
 unsigned short mpc_oemsize;
 unsigned short mpc_oemcount;
 unsigned int mpc_lapic;
 unsigned int reserved;
};
# 59 "include/asm/mpspec_64.h"
struct mpc_config_processor
{
 unsigned char mpc_type;
 unsigned char mpc_apicid;
 unsigned char mpc_apicver;
 unsigned char mpc_cpuflag;


 unsigned int mpc_cpufeature;



 unsigned int mpc_featureflag;
 unsigned int mpc_reserved[2];
};

struct mpc_config_bus
{
 unsigned char mpc_type;
 unsigned char mpc_busid;
 unsigned char mpc_bustype[6];
};
# 102 "include/asm/mpspec_64.h"
struct mpc_config_ioapic
{
 unsigned char mpc_type;
 unsigned char mpc_apicid;
 unsigned char mpc_apicver;
 unsigned char mpc_flags;

 unsigned int mpc_apicaddr;
};

struct mpc_config_intsrc
{
 unsigned char mpc_type;
 unsigned char mpc_irqtype;
 unsigned short mpc_irqflag;
 unsigned char mpc_srcbus;
 unsigned char mpc_srcbusirq;
 unsigned char mpc_dstapic;
 unsigned char mpc_dstirq;
};

enum mp_irq_source_types {
 mp_INT = 0,
 mp_NMI = 1,
 mp_SMI = 2,
 mp_ExtINT = 3
};






struct mpc_config_lintsrc
{
 unsigned char mpc_type;
 unsigned char mpc_irqtype;
 unsigned short mpc_irqflag;
 unsigned char mpc_srcbusid;
 unsigned char mpc_srcbusirq;
 unsigned char mpc_destapic;

 unsigned char mpc_destapiclint;
};
# 162 "include/asm/mpspec_64.h"
extern unsigned long mp_bus_not_pci[(((256) + (64) - 1) / (64))];
extern int mp_bus_id_to_pci_bus [256];

extern unsigned int boot_cpu_physical_apicid;
extern int smp_found_config;
extern void find_smp_config (void);
extern void get_smp_config (void);
extern int nr_ioapics;
extern unsigned char apic_version [255];
extern int mp_irq_entries;
extern struct mpc_config_intsrc mp_irqs [(256 * 4)];
extern int mpc_default_type;
extern unsigned long mp_lapic_addr;


extern void mp_register_lapic (u8 id, u8 enabled);
extern void mp_register_lapic_address (u64 address);

extern void mp_register_ioapic (u8 id, u32 address, u32 gsi_base);
extern void mp_override_legacy_irq (u8 bus_irq, u8 polarity, u8 trigger, u32 gsi);
extern void mp_config_acpi_legacy_irqs (void);
extern int mp_register_gsi (u32 gsi, int triggering, int polarity);


extern int using_apic_timer;



struct physid_mask
{
 unsigned long mask[(((255) + (64) - 1) / (64))];
};

typedef struct physid_mask physid_mask_t;
# 230 "include/asm/mpspec_64.h"
extern physid_mask_t phys_cpu_present_map;
# 5 "include/asm/mpspec.h" 2
# 14 "include/asm/smp_64.h" 2
# 1 "include/asm/apic.h" 1



# 1 "include/asm/apic_64.h" 1



# 1 "include/linux/pm.h" 1
# 27 "include/linux/pm.h"
# 1 "include/asm/atomic.h" 1
# 28 "include/linux/pm.h" 2
# 1 "include/asm/errno.h" 1
# 29 "include/linux/pm.h" 2






typedef int pm_request_t;
# 44 "include/linux/pm.h"
typedef int pm_dev_t;
# 57 "include/linux/pm.h"
enum
{
 PM_SYS_UNKNOWN = 0x00000000,
 PM_SYS_KBC = 0x41d00303,
 PM_SYS_COM = 0x41d00500,
 PM_SYS_IRDA = 0x41d00510,
 PM_SYS_FDC = 0x41d00700,
 PM_SYS_VGA = 0x41d00900,
 PM_SYS_PCMCIA = 0x41d00e00,
};
# 76 "include/linux/pm.h"
struct pm_dev;

typedef int (*pm_callback)(struct pm_dev *dev, pm_request_t rqst, void *data);




struct pm_dev
{
 pm_dev_t type;
 unsigned long id;
 pm_callback callback;
 void *data;

 unsigned long flags;
 unsigned long state;
 unsigned long prev_state;

 struct list_head entry;
};







extern void (*pm_idle)(void);
extern void (*pm_power_off)(void);
extern void (*pm_power_off_prepare)(void);





struct device;

typedef struct pm_message {
 int event;
} pm_message_t;
# 176 "include/linux/pm.h"
struct dev_pm_info {
 pm_message_t power_state;
 unsigned can_wakeup:1;

 unsigned should_wakeup:1;
 struct list_head entry;

};

extern int device_power_down(pm_message_t state);
extern void device_power_up(void);
extern void device_resume(void);


extern int device_suspend(pm_message_t state);
extern int device_prepare_suspend(pm_message_t state);






extern void __suspend_report_result(const char *function, void *fn, int ret);
# 210 "include/linux/pm.h"
extern int (*platform_enable_wakeup)(struct device *dev, int is_on);

static inline __attribute__((always_inline)) int call_platform_enable_wakeup(struct device *dev, int is_on)
{
 if (platform_enable_wakeup)
  return (*platform_enable_wakeup)(dev, is_on);
 return 0;
}
# 253 "include/linux/pm.h"
extern unsigned int pm_flags;
# 5 "include/asm/apic_64.h" 2
# 1 "include/linux/delay.h" 1
# 10 "include/linux/delay.h"
extern unsigned long loops_per_jiffy;

# 1 "include/asm/delay.h" 1
# 11 "include/asm/delay.h"
extern void __bad_udelay(void);
extern void __bad_ndelay(void);

extern void __udelay(unsigned long usecs);
extern void __ndelay(unsigned long nsecs);
extern void __const_udelay(unsigned long usecs);
extern void __delay(unsigned long loops);
# 29 "include/asm/delay.h"
void use_tsc_delay(void);
# 13 "include/linux/delay.h" 2
# 38 "include/linux/delay.h"
void calibrate_delay(void);
void msleep(unsigned int msecs);
unsigned long msleep_interruptible(unsigned int msecs);

static inline __attribute__((always_inline)) void ssleep(unsigned int seconds)
{
 msleep(seconds * 1000);
}
# 6 "include/asm/apic_64.h" 2
# 1 "include/asm/fixmap.h" 1



# 1 "include/asm/fixmap_64.h" 1
# 15 "include/asm/fixmap_64.h"
# 1 "include/asm/apicdef.h" 1



# 1 "include/asm/apicdef_64.h" 1
# 140 "include/asm/apicdef_64.h"
struct local_apic {

        struct { unsigned int __reserved[4]; } __reserved_01;

        struct { unsigned int __reserved[4]; } __reserved_02;

        struct {
  unsigned int __reserved_1 : 24,
   phys_apic_id : 4,
   __reserved_2 : 4;
  unsigned int __reserved[3];
 } id;

        const
 struct {
  unsigned int version : 8,
   __reserved_1 : 8,
   max_lvt : 8,
   __reserved_2 : 8;
  unsigned int __reserved[3];
 } version;

        struct { unsigned int __reserved[4]; } __reserved_03;

        struct { unsigned int __reserved[4]; } __reserved_04;

        struct { unsigned int __reserved[4]; } __reserved_05;

        struct { unsigned int __reserved[4]; } __reserved_06;

        struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } tpr;

        const
 struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } apr;

        const
 struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } ppr;

        struct {
  unsigned int eoi;
  unsigned int __reserved[3];
 } eoi;

        struct { unsigned int __reserved[4]; } __reserved_07;

        struct {
  unsigned int __reserved_1 : 24,
   logical_dest : 8;
  unsigned int __reserved_2[3];
 } ldr;

        struct {
  unsigned int __reserved_1 : 28,
   model : 4;
  unsigned int __reserved_2[3];
 } dfr;

        struct {
  unsigned int spurious_vector : 8,
   apic_enabled : 1,
   focus_cpu : 1,
   __reserved_2 : 22;
  unsigned int __reserved_3[3];
 } svr;

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } isr [8];

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } tmr [8];

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } irr [8];

        union {
  struct {
   unsigned int send_cs_error : 1,
    receive_cs_error : 1,
    send_accept_error : 1,
    receive_accept_error : 1,
    __reserved_1 : 1,
    send_illegal_vector : 1,
    receive_illegal_vector : 1,
    illegal_register_address : 1,
    __reserved_2 : 24;
   unsigned int __reserved_3[3];
  } error_bits;
  struct {
   unsigned int errors;
   unsigned int __reserved_3[3];
  } all_errors;
 } esr;

        struct { unsigned int __reserved[4]; } __reserved_08;

        struct { unsigned int __reserved[4]; } __reserved_09;

        struct { unsigned int __reserved[4]; } __reserved_10;

        struct { unsigned int __reserved[4]; } __reserved_11;

        struct { unsigned int __reserved[4]; } __reserved_12;

        struct { unsigned int __reserved[4]; } __reserved_13;

        struct { unsigned int __reserved[4]; } __reserved_14;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   destination_mode : 1,
   delivery_status : 1,
   __reserved_1 : 1,
   level : 1,
   trigger : 1,
   __reserved_2 : 2,
   shorthand : 2,
   __reserved_3 : 12;
  unsigned int __reserved_4[3];
 } icr1;

        struct {
  union {
   unsigned int __reserved_1 : 24,
    phys_dest : 4,
    __reserved_2 : 4;
   unsigned int __reserved_3 : 24,
    logical_dest : 8;
  } dest;
  unsigned int __reserved_4[3];
 } icr2;

        struct {
  unsigned int vector : 8,
   __reserved_1 : 4,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   timer_mode : 1,
   __reserved_3 : 14;
  unsigned int __reserved_4[3];
 } lvt_timer;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_thermal;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_pc;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   polarity : 1,
   remote_irr : 1,
   trigger : 1,
   mask : 1,
   __reserved_2 : 15;
  unsigned int __reserved_3[3];
 } lvt_lint0;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   polarity : 1,
   remote_irr : 1,
   trigger : 1,
   mask : 1,
   __reserved_2 : 15;
  unsigned int __reserved_3[3];
 } lvt_lint1;

        struct {
  unsigned int vector : 8,
   __reserved_1 : 4,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_error;

        struct {
  unsigned int initial_count;
  unsigned int __reserved_2[3];
 } timer_icr;

        const
 struct {
  unsigned int curr_count;
  unsigned int __reserved_2[3];
 } timer_ccr;

        struct { unsigned int __reserved[4]; } __reserved_16;

        struct { unsigned int __reserved[4]; } __reserved_17;

        struct { unsigned int __reserved[4]; } __reserved_18;

        struct { unsigned int __reserved[4]; } __reserved_19;

        struct {
  unsigned int divisor : 4,
   __reserved_1 : 28;
  unsigned int __reserved_2[3];
 } timer_dcr;

        struct { unsigned int __reserved[4]; } __reserved_20;

} __attribute__ ((packed));
# 5 "include/asm/apicdef.h" 2
# 16 "include/asm/fixmap_64.h" 2
# 1 "include/asm/page.h" 1
# 17 "include/asm/fixmap_64.h" 2
# 1 "include/asm/vsyscall.h" 1



enum vsyscall_num {
 __NR_vgettimeofday,
 __NR_vtime,
 __NR_vgetcpu,
};
# 32 "include/asm/vsyscall.h"
extern int __vgetcpu_mode;
extern volatile unsigned long __jiffies;


extern int vgetcpu_mode;
extern struct timezone sys_tz;
# 18 "include/asm/fixmap_64.h" 2
# 34 "include/asm/fixmap_64.h"
enum fixed_addresses {
 VSYSCALL_LAST_PAGE,
 VSYSCALL_FIRST_PAGE = VSYSCALL_LAST_PAGE + (((-2UL << 20)-(-10UL << 20)) >> 12) - 1,
 VSYSCALL_HPET,
 FIX_DBGP_BASE,
 FIX_EARLYCON_MEM_BASE,
 FIX_HPET_BASE,
 FIX_APIC_BASE,
 FIX_IO_APIC_BASE_0,
 FIX_IO_APIC_BASE_END = FIX_IO_APIC_BASE_0 + 128 -1,
 __end_of_fixed_addresses
};

extern void __set_fixmap (enum fixed_addresses idx,
     unsigned long phys, pgprot_t flags);
# 68 "include/asm/fixmap_64.h"
extern void __this_fixmap_does_not_exist(void);






static inline __attribute__((always_inline)) __attribute__((always_inline)) unsigned long fix_to_virt(const unsigned int idx)
{
# 86 "include/asm/fixmap_64.h"
 if (idx >= __end_of_fixed_addresses)
  __this_fixmap_does_not_exist();

 return (((-2UL << 20)-((1UL) << 12)) - ((idx) << 12));
}
# 5 "include/asm/fixmap.h" 2
# 7 "include/asm/apic_64.h" 2
# 1 "include/asm/apicdef.h" 1
# 8 "include/asm/apic_64.h" 2
# 1 "include/asm/system.h" 1
# 9 "include/asm/apic_64.h" 2
# 19 "include/asm/apic_64.h"
extern int apic_verbosity;
extern int apic_runs_main_timer;
extern int ioapic_force;
extern int disable_apic_timer;
# 35 "include/asm/apic_64.h"
struct pt_regs;





static __inline __attribute__((always_inline)) void apic_write(unsigned long reg, unsigned int v)
{
 *((volatile unsigned int *)((fix_to_virt(FIX_APIC_BASE))+reg)) = v;
}

static __inline __attribute__((always_inline)) unsigned int apic_read(unsigned long reg)
{
 return *((volatile unsigned int *)((fix_to_virt(FIX_APIC_BASE))+reg));
}

extern void apic_wait_icr_idle(void);
extern unsigned int safe_apic_wait_icr_idle(void);

static inline __attribute__((always_inline)) void ack_APIC_irq(void)
{
# 64 "include/asm/apic_64.h"
 apic_write(0xB0, 0);
}

extern int get_maxlvt (void);
extern void clear_local_APIC (void);
extern void connect_bsp_APIC (void);
extern void disconnect_bsp_APIC (int virt_wire_setup);
extern void disable_local_APIC (void);
extern void lapic_shutdown (void);
extern int verify_local_APIC (void);
extern void cache_APIC_registers (void);
extern void sync_Arb_IDs (void);
extern void init_bsp_APIC (void);
extern void setup_local_APIC (void);
extern void init_apic_mappings (void);
extern void smp_local_timer_interrupt (void);
extern void setup_boot_APIC_clock (void);
extern void setup_secondary_APIC_clock (void);
extern int APIC_init_uniprocessor (void);
extern void setup_apic_routing(void);

extern void setup_APIC_extended_lvt(unsigned char lvt_off, unsigned char vector,
        unsigned char msg_type, unsigned char mask);

extern int apic_is_clustered_box(void);
# 99 "include/asm/apic_64.h"
extern unsigned boot_cpu_id;
extern int local_apic_timer_c2_ok;
# 5 "include/asm/apic.h" 2
# 15 "include/asm/smp_64.h" 2
# 1 "include/asm/io_apic.h" 1



# 1 "include/asm/io_apic_64.h" 1




# 1 "include/asm/mpspec.h" 1
# 6 "include/asm/io_apic_64.h" 2
# 1 "include/asm/apicdef.h" 1
# 7 "include/asm/io_apic_64.h" 2
# 19 "include/asm/io_apic_64.h"
union IO_APIC_reg_00 {
 u32 raw;
 struct {
  u32 __reserved_2 : 14,
   LTS : 1,
   delivery_type : 1,
   __reserved_1 : 8,
   ID : 8;
 } __attribute__ ((packed)) bits;
};

union IO_APIC_reg_01 {
 u32 raw;
 struct {
  u32 version : 8,
  __reserved_2 : 7,
  PRQ : 1,
  entries : 8,
  __reserved_1 : 8;
 } __attribute__ ((packed)) bits;
};

union IO_APIC_reg_02 {
 u32 raw;
 struct {
  u32 __reserved_2 : 24,
  arbitration : 4,
  __reserved_1 : 4;
 } __attribute__ ((packed)) bits;
};

union IO_APIC_reg_03 {
 u32 raw;
 struct {
  u32 boot_DT : 1,
   __reserved_1 : 31;
 } __attribute__ ((packed)) bits;
};




extern int nr_ioapics;
extern int nr_ioapic_registers[128];

enum ioapic_irq_destination_types {
 dest_Fixed = 0,
 dest_LowestPrio = 1,
 dest_SMI = 2,
 dest__reserved_1 = 3,
 dest_NMI = 4,
 dest_INIT = 5,
 dest__reserved_2 = 6,
 dest_ExtINT = 7
};

struct IO_APIC_route_entry {
 __u32 vector : 8,
  delivery_mode : 3,



  dest_mode : 1,
  delivery_status : 1,
  polarity : 1,
  irr : 1,
  trigger : 1,
  mask : 1,
  __reserved_2 : 15;

 __u32 __reserved_3 : 24,
  dest : 8;
} __attribute__ ((packed));






extern struct mpc_config_ioapic mp_ioapics[128];


extern int mp_irq_entries;


extern struct mpc_config_intsrc mp_irqs[(256 * 4)];


extern int mpc_default_type;


extern int skip_ioapic_setup;

static inline __attribute__((always_inline)) void disable_ioapic_setup(void)
{
 skip_ioapic_setup = 1;
}
# 125 "include/asm/io_apic_64.h"
extern int io_apic_get_version (int ioapic);
extern int io_apic_get_redir_entries (int ioapic);
extern int io_apic_set_pci_routing (int ioapic, int pin, int irq, int, int);


extern int sis_apic_bug;

void enable_NMI_through_LVT0 (void * dummy);

extern spinlock_t i8259A_lock;

extern int timer_over_8254;
# 5 "include/asm/io_apic.h" 2
# 16 "include/asm/smp_64.h" 2
# 1 "include/asm/thread_info.h" 1
# 17 "include/asm/smp_64.h" 2





struct pt_regs;

extern cpumask_t cpu_present_mask;
extern cpumask_t cpu_possible_map;
extern cpumask_t cpu_online_map;
extern cpumask_t cpu_callout_map;
extern cpumask_t cpu_initialized;





extern void smp_alloc_memory(void);
extern volatile unsigned long smp_invalidate_needed;
extern void lock_ipi_call_lock(void);
extern void unlock_ipi_call_lock(void);
extern int smp_num_siblings;
extern void smp_send_reschedule(int cpu);
extern int smp_call_function_mask(cpumask_t mask, void (*func)(void *),
      void *info, int wait);
# 50 "include/asm/smp_64.h"
extern __typeof__(cpumask_t) per_cpu__cpu_sibling_map;
extern __typeof__(cpumask_t) per_cpu__cpu_core_map;
extern __typeof__(u8) per_cpu__cpu_llc_id;
# 62 "include/asm/smp_64.h"
static inline __attribute__((always_inline)) int num_booting_cpus(void)
{
 return __cpus_weight(&(cpu_callout_map), 32);
}



extern int __cpu_disable(void);
extern void __cpu_die(unsigned int cpu);
extern void prefill_possible_map(void);
extern unsigned num_processors;
extern unsigned __attribute__ ((__section__(".cpuinit.data"))) disabled_cpus;







static inline __attribute__((always_inline)) int hard_smp_processor_id(void)
{

 return (((*(unsigned int *)((fix_to_virt(FIX_APIC_BASE))+0x20))>>24)&0xFFu);
}





extern u8 __attribute__ ((__section__(".init.data"))) x86_cpu_to_apicid_init[];
extern void *x86_cpu_to_apicid_ptr;
extern __typeof__(u8) per_cpu__x86_cpu_to_apicid;
extern u8 bios_cpu_apicid[];

static inline __attribute__((always_inline)) int cpu_present_to_apicid(int mps_cpu)
{
 if (mps_cpu < 32)
  return (int)bios_cpu_apicid[mps_cpu];
 else
  return 0xFFu;
}





# 1 "include/asm/thread_info.h" 1
# 109 "include/asm/smp_64.h" 2
# 117 "include/asm/smp_64.h"
static __inline __attribute__((always_inline)) int logical_smp_processor_id(void)
{

 return (((*(unsigned long *)((fix_to_virt(FIX_APIC_BASE))+0xD0))>>24)&0xFFu);
}
# 5 "include/asm/smp.h" 2
# 20 "include/linux/smp.h" 2
# 29 "include/linux/smp.h"
extern void smp_send_stop(void);




extern void smp_send_reschedule(int cpu);





extern void smp_prepare_cpus(unsigned int max_cpus);




extern int __cpu_up(unsigned int cpunum);




extern void smp_cpus_done(unsigned int max_cpus);




int smp_call_function(void(*func)(void *info), void *info, int retry, int wait);

int smp_call_function_single(int cpuid, void (*func) (void *info), void *info,
    int retry, int wait);




int on_each_cpu(void (*func) (void *info), void *info, int retry, int wait);
# 79 "include/linux/smp.h"
void smp_prepare_boot_cpu(void);
# 142 "include/linux/smp.h"
void smp_setup_processor_id(void);
# 34 "include/linux/topology.h" 2
# 1 "include/asm/topology.h" 1



# 1 "include/asm/topology_64.h" 1






# 1 "include/asm/mpspec.h" 1
# 8 "include/asm/topology_64.h" 2


extern cpumask_t cpu_online_map;

extern unsigned char cpu_to_node[];
extern cpumask_t node_to_cpumask[];


extern int __node_distance(int, int);
# 67 "include/asm/topology_64.h"
# 1 "include/asm-generic/topology.h" 1
# 68 "include/asm/topology_64.h" 2

extern cpumask_t cpu_coregroup_map(int cpu);
# 5 "include/asm/topology.h" 2
# 35 "include/linux/topology.h" 2
# 692 "include/linux/mmzone.h" 2
# 706 "include/linux/mmzone.h"
# 1 "include/asm/mmzone.h" 1



# 1 "include/asm/mmzone_64.h" 1
# 12 "include/asm/mmzone_64.h"
# 1 "include/asm/smp.h" 1
# 13 "include/asm/mmzone_64.h" 2


struct memnode {
 int shift;
 unsigned int mapsize;
 u8 *map;
 u8 embedded_map[64-16];
} __attribute__((__aligned__((1 << (7)))));
extern struct memnode memnode;




extern struct pglist_data *node_data[];

static inline __attribute__((always_inline)) __attribute__((pure)) int phys_to_nid(unsigned long addr)
{
 unsigned nid;
 ;
 ;
 nid = memnode.map[addr >> memnode.shift];
 ;
 return nid;
}
# 47 "include/asm/mmzone_64.h"
extern int pfn_valid(unsigned long pfn);
# 5 "include/asm/mmzone.h" 2
# 707 "include/linux/mmzone.h" 2



extern struct pglist_data *first_online_pgdat(void);
extern struct pglist_data *next_online_pgdat(struct pglist_data *pgdat);
extern struct zone *next_zone(struct zone *zone);
# 927 "include/linux/mmzone.h"
void memory_present(int nid, unsigned long start, unsigned long end);
unsigned long __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) node_memmap_size_bytes(int, unsigned long, unsigned long);
# 5 "include/linux/gfp.h" 2



struct vm_area_struct;
# 108 "include/linux/gfp.h"
static inline __attribute__((always_inline)) int allocflags_to_migratetype(gfp_t gfp_flags)
{
 ({ int __ret_warn_on = !!((gfp_flags & ((( gfp_t)0x80000u)|(( gfp_t)0x100000u))) == ((( gfp_t)0x80000u)|(( gfp_t)0x100000u))); if (__builtin_expect(!!(__ret_warn_on), 0)) { printk("WARNING: at %s:%d %s()\n", "include/linux/gfp.h", 110, (__func__)); dump_stack(); } __builtin_expect(!!(__ret_warn_on), 0); });

 if (__builtin_expect(!!(page_group_by_mobility_disabled), 0))
  return 0;


 return (((gfp_flags & (( gfp_t)0x100000u)) != 0) << 1) |
  ((gfp_flags & (( gfp_t)0x80000u)) != 0);
}

static inline __attribute__((always_inline)) enum zone_type gfp_zone(gfp_t flags)
{
 int base = 0;


 if (flags & (( gfp_t)0x40000u))
  base = MAX_NR_ZONES;



 if (flags & (( gfp_t)0x01u))
  return base + ZONE_DMA;


 if (flags & (( gfp_t)0x04u))
  return base + ZONE_DMA32;

 if ((flags & ((( gfp_t)0x02u) | (( gfp_t)0x100000u))) ==
   ((( gfp_t)0x02u) | (( gfp_t)0x100000u)))
  return base + ZONE_MOVABLE;




 return base + ZONE_NORMAL;
}

static inline __attribute__((always_inline)) gfp_t set_migrateflags(gfp_t gfp, gfp_t migrate_flags)
{
 do { if (__builtin_expect(!!((gfp & ((( gfp_t)0x80000u)|(( gfp_t)0x100000u))) == ((( gfp_t)0x80000u)|(( gfp_t)0x100000u))), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/gfp.h"), "i" (149), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0);
 return (gfp & ~(((( gfp_t)0x80000u)|(( gfp_t)0x100000u)))) | migrate_flags;
}
# 169 "include/linux/gfp.h"
static inline __attribute__((always_inline)) void arch_free_page(struct page *page, int order) { }


static inline __attribute__((always_inline)) void arch_alloc_page(struct page *page, int order) { }


extern struct page *
__alloc_pages(gfp_t, unsigned int, struct zonelist *);

static inline __attribute__((always_inline)) struct page *alloc_pages_node(int nid, gfp_t gfp_mask,
      unsigned int order)
{
 if (__builtin_expect(!!(order >= 11), 0))
  return ((void *)0);


 if (nid < 0)
  nid = ({ typeof(_proxy_pda.nodenumber) ret__; switch (sizeof(_proxy_pda.nodenumber)) { case 2: asm("mov" "w %%gs:%c1,%0" : "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,nodenumber)), "m" (_proxy_pda.nodenumber)); break; case 4: asm("mov" "l %%gs:%c1,%0": "=r" (ret__): "i" (__builtin_offsetof(struct x8664_pda,nodenumber)), "m" (_proxy_pda.nodenumber)); break; case 8: asm("mov" "q %%gs:%c1,%0": "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,nodenumber)), "m" (_proxy_pda.nodenumber)); break; default: __bad_pda_field(); } ret__; });

 return __alloc_pages(gfp_mask, order,
  (node_data[nid])->node_zonelists + gfp_zone(gfp_mask));
}


extern struct page *alloc_pages_current(gfp_t gfp_mask, unsigned order);

static inline __attribute__((always_inline)) struct page *
alloc_pages(gfp_t gfp_mask, unsigned int order)
{
 if (__builtin_expect(!!(order >= 11), 0))
  return ((void *)0);

 return alloc_pages_current(gfp_mask, order);
}
extern struct page *alloc_page_vma(gfp_t gfp_mask,
   struct vm_area_struct *vma, unsigned long addr);







extern unsigned long __get_free_pages(gfp_t gfp_mask, unsigned int order);
extern unsigned long get_zeroed_page(gfp_t gfp_mask);







extern void __free_pages(struct page *page, unsigned int order);
extern void free_pages(unsigned long addr, unsigned int order);
extern void free_hot_page(struct page *page);
extern void free_cold_page(struct page *page);




void page_alloc_init(void);
void drain_zone_pages(struct zone *zone, struct per_cpu_pages *pcp);
# 15 "include/linux/slab.h" 2
# 51 "include/linux/slab.h"
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) kmem_cache_init(void);
int slab_is_available(void);

struct kmem_cache *kmem_cache_create(const char *, size_t, size_t,
   unsigned long,
   void (*)(struct kmem_cache *, void *));
void kmem_cache_destroy(struct kmem_cache *);
int kmem_cache_shrink(struct kmem_cache *);
void kmem_cache_free(struct kmem_cache *, void *);
unsigned int kmem_cache_size(struct kmem_cache *);
const char *kmem_cache_name(struct kmem_cache *);
int kmem_ptr_validate(struct kmem_cache *cachep, const void *ptr);
# 94 "include/linux/slab.h"
void * krealloc(const void *, size_t, gfp_t);
void kfree(const void *);
size_t ksize(const void *);
# 122 "include/linux/slab.h"
# 1 "include/linux/slab_def.h" 1
# 14 "include/linux/slab_def.h"
# 1 "include/asm/page.h" 1
# 15 "include/linux/slab_def.h" 2




struct cache_sizes {
 size_t cs_size;
 struct kmem_cache *cs_cachep;

 struct kmem_cache *cs_dmacachep;

};
extern struct cache_sizes malloc_sizes[];

void *kmem_cache_alloc(struct kmem_cache *, gfp_t);
void *__kmalloc(size_t size, gfp_t flags);

static inline __attribute__((always_inline)) void *kmalloc(size_t size, gfp_t flags)
{
 if (__builtin_constant_p(size)) {
  int i = 0;

  if (!size)
   return ((void *)16);






# 1 "include/linux/kmalloc_sizes.h" 1

 if (size <= 32) goto found; else i++;

 if (size <= 64) goto found; else i++;



 if (size <= 128) goto found; else i++;



 if (size <= 256) goto found; else i++;
 if (size <= 512) goto found; else i++;
 if (size <= 1024) goto found; else i++;
 if (size <= 2048) goto found; else i++;
 if (size <= 4096) goto found; else i++;
 if (size <= 8192) goto found; else i++;
 if (size <= 16384) goto found; else i++;
 if (size <= 32768) goto found; else i++;
 if (size <= 65536) goto found; else i++;
 if (size <= 131072) goto found; else i++;

 if (size <= 262144) goto found; else i++;


 if (size <= 524288) goto found; else i++;


 if (size <= 1048576) goto found; else i++;


 if (size <= 2097152) goto found; else i++;


 if (size <= 4194304) goto found; else i++;
# 45 "include/linux/slab_def.h" 2

  {
   extern void __you_cannot_kmalloc_that_much(void);
   __you_cannot_kmalloc_that_much();
  }
found:

  if (flags & (( gfp_t)0x01u))
   return kmem_cache_alloc(malloc_sizes[i].cs_dmacachep,
      flags);

  return kmem_cache_alloc(malloc_sizes[i].cs_cachep, flags);
 }
 return __kmalloc(size, flags);
}


extern void *__kmalloc_node(size_t size, gfp_t flags, int node);
extern void *kmem_cache_alloc_node(struct kmem_cache *, gfp_t flags, int node);

static inline __attribute__((always_inline)) void *kmalloc_node(size_t size, gfp_t flags, int node)
{
 if (__builtin_constant_p(size)) {
  int i = 0;

  if (!size)
   return ((void *)16);






# 1 "include/linux/kmalloc_sizes.h" 1

 if (size <= 32) goto found; else i++;

 if (size <= 64) goto found; else i++;



 if (size <= 128) goto found; else i++;



 if (size <= 256) goto found; else i++;
 if (size <= 512) goto found; else i++;
 if (size <= 1024) goto found; else i++;
 if (size <= 2048) goto found; else i++;
 if (size <= 4096) goto found; else i++;
 if (size <= 8192) goto found; else i++;
 if (size <= 16384) goto found; else i++;
 if (size <= 32768) goto found; else i++;
 if (size <= 65536) goto found; else i++;
 if (size <= 131072) goto found; else i++;

 if (size <= 262144) goto found; else i++;


 if (size <= 524288) goto found; else i++;


 if (size <= 1048576) goto found; else i++;


 if (size <= 2097152) goto found; else i++;


 if (size <= 4194304) goto found; else i++;
# 79 "include/linux/slab_def.h" 2

  {
   extern void __you_cannot_kmalloc_that_much(void);
   __you_cannot_kmalloc_that_much();
  }
found:

  if (flags & (( gfp_t)0x01u))
   return kmem_cache_alloc_node(malloc_sizes[i].cs_dmacachep,
      flags, node);

  return kmem_cache_alloc_node(malloc_sizes[i].cs_cachep,
      flags, node);
 }
 return __kmalloc_node(size, flags, node);
}
# 123 "include/linux/slab.h" 2
# 176 "include/linux/slab.h"
static inline __attribute__((always_inline)) void *kcalloc(size_t n, size_t size, gfp_t flags)
{
 if (n != 0 && size > (~0UL) / n)
  return ((void *)0);
 return __kmalloc(n * size, flags | (( gfp_t)0x8000u));
}
# 259 "include/linux/slab.h"
static inline __attribute__((always_inline)) void *kmem_cache_zalloc(struct kmem_cache *k, gfp_t flags)
{
 return kmem_cache_alloc(k, flags | (( gfp_t)0x8000u));
}






static inline __attribute__((always_inline)) void *kzalloc(size_t size, gfp_t flags)
{
 return kmalloc(size, flags | (( gfp_t)0x8000u));
}


extern const struct seq_operations slabinfo_op;
ssize_t slabinfo_write(struct file *, const char *, size_t, loff_t *);
# 6 "include/linux/percpu.h" 2




# 1 "include/asm/percpu.h" 1
# 11 "include/linux/percpu.h" 2
# 36 "include/linux/percpu.h"
struct percpu_data {
 void *ptrs[32];
};
# 52 "include/linux/percpu.h"
extern void *percpu_populate(void *__pdata, size_t size, gfp_t gfp, int cpu);
extern void percpu_depopulate(void *__pdata, int cpu);
extern int __percpu_populate_mask(void *__pdata, size_t size, gfp_t gfp,
      cpumask_t *mask);
extern void __percpu_depopulate_mask(void *__pdata, cpumask_t *mask);
extern void *__percpu_alloc_mask(size_t size, gfp_t gfp, cpumask_t *mask);
extern void percpu_free(void *__pdata);
# 42 "include/linux/rcupdate.h" 2
# 51 "include/linux/rcupdate.h"
struct rcu_head {
 struct rcu_head *next;
 void (*func)(struct rcu_head *head);
};


# 1 "include/linux/rcuclassic.h" 1
# 47 "include/linux/rcuclassic.h"
struct rcu_ctrlblk {
 long cur;
 long completed;
 int next_pending;

 int signaled;

 spinlock_t lock __attribute__((__aligned__(1 << ((7)))));
 cpumask_t cpumask;

} __attribute__((__aligned__(1 << ((7)))));


static inline __attribute__((always_inline)) int rcu_batch_before(long a, long b)
{
 return (a - b) < 0;
}


static inline __attribute__((always_inline)) int rcu_batch_after(long a, long b)
{
 return (a - b) > 0;
}






struct rcu_data {

 long quiescbatch;
 int passed_quiesc;
 int qs_pending;


 long batch;
 struct rcu_head *nxtlist;
 struct rcu_head **nxttail;
 long qlen;
 struct rcu_head *curlist;
 struct rcu_head **curtail;
 struct rcu_head *donelist;
 struct rcu_head **donetail;
 long blimit;
 int cpu;
 struct rcu_head barrier;
};

extern __typeof__(struct rcu_data) per_cpu__rcu_data;
extern __typeof__(struct rcu_data) per_cpu__rcu_bh_data;







static inline __attribute__((always_inline)) void rcu_qsctr_inc(int cpu)
{
 struct rcu_data *rdp = &(*({ extern int simple_identifier_rcu_data(void); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"(&per_cpu__rcu_data)); (typeof(&per_cpu__rcu_data)) (__ptr + (((_cpu_pda[cpu])->data_offset))); }); }));
 rdp->passed_quiesc = 1;
}
static inline __attribute__((always_inline)) void rcu_bh_qsctr_inc(int cpu)
{
 struct rcu_data *rdp = &(*({ extern int simple_identifier_rcu_bh_data(void); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"(&per_cpu__rcu_bh_data)); (typeof(&per_cpu__rcu_bh_data)) (__ptr + (((_cpu_pda[cpu])->data_offset))); }); }));
 rdp->passed_quiesc = 1;
}

extern int rcu_pending(int cpu);
extern int rcu_needs_cpu(int cpu);
# 156 "include/linux/rcuclassic.h"
extern void __rcu_init(void);
extern void rcu_check_callbacks(int cpu, int user);
extern void rcu_restart_cpu(int cpu);

extern long rcu_batches_completed(void);
extern long rcu_batches_completed_bh(void);
# 58 "include/linux/rcupdate.h" 2
# 211 "include/linux/rcupdate.h"
extern void call_rcu(struct rcu_head *head,
         void (*func)(struct rcu_head *head));
# 232 "include/linux/rcupdate.h"
extern void call_rcu_bh(struct rcu_head *head,
   void (*func)(struct rcu_head *head));


extern void synchronize_rcu(void);
extern void rcu_barrier(void);
extern long rcu_batches_completed(void);
extern long rcu_batches_completed_bh(void);


extern void rcu_init(void);
extern int rcu_needs_cpu(int cpu);
# 11 "include/linux/dcache.h" 2

struct nameidata;
struct vfsmount;
# 33 "include/linux/dcache.h"
struct qstr {
 unsigned int hash;
 unsigned int len;
 const unsigned char *name;
};

struct dentry_stat_t {
 int nr_dentry;
 int nr_unused;
 int age_limit;
 int want_pages;
 int dummy[2];
};
extern struct dentry_stat_t dentry_stat;






static inline __attribute__((always_inline)) unsigned long
partial_name_hash(unsigned long c, unsigned long prevhash)
{
 return (prevhash + (c << 4) + (c >> 4)) * 11;
}





static inline __attribute__((always_inline)) unsigned long end_name_hash(unsigned long hash)
{
 return (unsigned int) hash;
}


static inline __attribute__((always_inline)) unsigned int
full_name_hash(const unsigned char *name, unsigned int len)
{
 unsigned long hash = 0;
 while (len--)
  hash = partial_name_hash(*name++, hash);
 return end_name_hash(hash);
}

struct dcookie_struct;



struct dentry {
 atomic_t d_count;
 unsigned int d_flags;
 spinlock_t d_lock;
 struct inode *d_inode;





 struct hlist_node d_hash;
 struct dentry *d_parent;
 struct qstr d_name;

 struct list_head d_lru;



 union {
  struct list_head d_child;
   struct rcu_head d_rcu;
 } d_u;
 struct list_head d_subdirs;
 struct list_head d_alias;
 unsigned long d_time;
 struct dentry_operations *d_op;
 struct super_block *d_sb;
 void *d_fsdata;

 struct dcookie_struct *d_cookie;

 int d_mounted;
 unsigned char d_iname[36];
};







enum dentry_d_lock_class
{
 DENTRY_D_LOCK_NORMAL,
 DENTRY_D_LOCK_NESTED
};

struct dentry_operations {
 int (*d_revalidate)(struct dentry *, struct nameidata *);
 int (*d_hash) (struct dentry *, struct qstr *);
 int (*d_compare) (struct dentry *, struct qstr *, struct qstr *);
 int (*d_delete)(struct dentry *);
 void (*d_release)(struct dentry *);
 void (*d_iput)(struct dentry *, struct inode *);
 char *(*d_dname)(struct dentry *, char *, int);
};
# 180 "include/linux/dcache.h"
extern spinlock_t dcache_lock;
extern seqlock_t rename_lock;
# 199 "include/linux/dcache.h"
static inline __attribute__((always_inline)) void __d_drop(struct dentry *dentry)
{
 if (!(dentry->d_flags & 0x0010)) {
  dentry->d_flags |= 0x0010;
  hlist_del_rcu(&dentry->d_hash);
 }
}

static inline __attribute__((always_inline)) void d_drop(struct dentry *dentry)
{
 _spin_lock(&dcache_lock);
 _spin_lock(&dentry->d_lock);
  __d_drop(dentry);
 do {__raw_spin_unlock(&(&dentry->d_lock)->raw_lock); (void)0; } while (0);
 do {__raw_spin_unlock(&(&dcache_lock)->raw_lock); (void)0; } while (0);
}

static inline __attribute__((always_inline)) int dname_external(struct dentry *dentry)
{
 return dentry->d_name.name != dentry->d_iname;
}




extern void d_instantiate(struct dentry *, struct inode *);
extern struct dentry * d_instantiate_unique(struct dentry *, struct inode *);
extern struct dentry * d_materialise_unique(struct dentry *, struct inode *);
extern void d_delete(struct dentry *);


extern struct dentry * d_alloc(struct dentry *, const struct qstr *);
extern struct dentry * d_alloc_anon(struct inode *);
extern struct dentry * d_splice_alias(struct inode *, struct dentry *);
extern void shrink_dcache_sb(struct super_block *);
extern void shrink_dcache_parent(struct dentry *);
extern void shrink_dcache_for_umount(struct super_block *);
extern int d_invalidate(struct dentry *);


extern struct dentry * d_alloc_root(struct inode *);


extern void d_genocide(struct dentry *);

extern struct dentry *d_find_alias(struct inode *);
extern void d_prune_aliases(struct inode *);


extern int have_submounts(struct dentry *);




extern void d_rehash(struct dentry *);
# 264 "include/linux/dcache.h"
static inline __attribute__((always_inline)) void d_add(struct dentry *entry, struct inode *inode)
{
 d_instantiate(entry, inode);
 d_rehash(entry);
}
# 278 "include/linux/dcache.h"
static inline __attribute__((always_inline)) struct dentry *d_add_unique(struct dentry *entry, struct inode *inode)
{
 struct dentry *res;

 res = d_instantiate_unique(entry, inode);
 d_rehash(res != ((void *)0) ? res : entry);
 return res;
}


extern void d_move(struct dentry *, struct dentry *);


extern struct dentry * d_lookup(struct dentry *, struct qstr *);
extern struct dentry * __d_lookup(struct dentry *, struct qstr *);
extern struct dentry * d_hash_and_lookup(struct dentry *, struct qstr *);


extern int d_validate(struct dentry *, struct dentry *);




extern char *dynamic_dname(struct dentry *, char *, int, const char *, ...);

extern char * d_path(struct dentry *, struct vfsmount *, char *, int);
# 320 "include/linux/dcache.h"
static inline __attribute__((always_inline)) struct dentry *dget(struct dentry *dentry)
{
 if (dentry) {
  do { if (__builtin_expect(!!(!((&dentry->d_count)->counter)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/dcache.h"), "i" (323), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0);
  atomic_inc(&dentry->d_count);
 }
 return dentry;
}

extern struct dentry * dget_locked(struct dentry *);
# 338 "include/linux/dcache.h"
static inline __attribute__((always_inline)) int d_unhashed(struct dentry *dentry)
{
 return (dentry->d_flags & 0x0010);
}

static inline __attribute__((always_inline)) struct dentry *dget_parent(struct dentry *dentry)
{
 struct dentry *ret;

 _spin_lock(&dentry->d_lock);
 ret = dget(dentry->d_parent);
 do {__raw_spin_unlock(&(&dentry->d_lock)->raw_lock); (void)0; } while (0);
 return ret;
}

extern void dput(struct dentry *);

static inline __attribute__((always_inline)) int d_mountpoint(struct dentry *dentry)
{
 return dentry->d_mounted;
}

extern struct vfsmount *lookup_mnt(struct vfsmount *, struct dentry *);
extern struct vfsmount *__lookup_mnt(struct vfsmount *, struct dentry *, int);
extern struct dentry *lookup_create(struct nameidata *nd, int is_dir);

extern int sysctl_vfs_cache_pressure;
# 279 "include/linux/fs.h" 2
# 1 "include/linux/namei.h" 1






struct vfsmount;

struct open_intent {
 int flags;
 int create_mode;
 struct file *file;
};

enum { MAX_NESTED_LINKS = 8 };

struct nameidata {
 struct dentry *dentry;
 struct vfsmount *mnt;
 struct qstr last;
 unsigned int flags;
 int last_type;
 unsigned depth;
 char *saved_names[MAX_NESTED_LINKS + 1];


 union {
  struct open_intent open;
 } intent;
};

struct path {
 struct vfsmount *mnt;
 struct dentry *dentry;
};




enum {LAST_NORM, LAST_ROOT, LAST_DOT, LAST_DOTDOT, LAST_BIND};
# 65 "include/linux/namei.h"
extern int __user_walk(const char *, unsigned, struct nameidata *);
extern int __user_walk_fd(int dfd, const char *, unsigned, struct nameidata *);




extern int path_lookup(const char *, unsigned, struct nameidata *);
extern int vfs_path_lookup(struct dentry *, struct vfsmount *,
      const char *, unsigned int, struct nameidata *);
extern void path_release(struct nameidata *);
extern void path_release_on_umount(struct nameidata *);

extern int __user_path_lookup_open(const char *, unsigned lookup_flags, struct nameidata *nd, int open_flags);
extern int path_lookup_open(int dfd, const char *name, unsigned lookup_flags, struct nameidata *, int open_flags);
extern struct file *lookup_instantiate_filp(struct nameidata *nd, struct dentry *dentry,
  int (*open)(struct inode *, struct file *));
extern struct file *nameidata_to_filp(struct nameidata *nd, int flags);
extern void release_open_intent(struct nameidata *);

extern struct dentry *lookup_one_len(const char *, struct dentry *, int);
extern struct dentry *lookup_one_noperm(const char *, struct dentry *);

extern int follow_down(struct vfsmount **, struct dentry **);
extern int follow_up(struct vfsmount **, struct dentry **);

extern struct dentry *lock_rename(struct dentry *, struct dentry *);
extern void unlock_rename(struct dentry *, struct dentry *);

static inline __attribute__((always_inline)) void nd_set_link(struct nameidata *nd, char *path)
{
 nd->saved_names[nd->depth] = path;
}

static inline __attribute__((always_inline)) char *nd_get_link(struct nameidata *nd)
{
 return nd->saved_names[nd->depth];
}
# 280 "include/linux/fs.h" 2
# 1 "include/linux/stat.h" 1





# 1 "include/asm/stat.h" 1
# 68 "include/asm/stat.h"
struct stat {
 unsigned long st_dev;
 unsigned long st_ino;
 unsigned long st_nlink;

 unsigned int st_mode;
 unsigned int st_uid;
 unsigned int st_gid;
 unsigned int __pad0;
 unsigned long st_rdev;
 long st_size;
 long st_blksize;
 long st_blocks;

 unsigned long st_atime;
 unsigned long st_atime_nsec;
 unsigned long st_mtime;
 unsigned long st_mtime_nsec;
 unsigned long st_ctime;
 unsigned long st_ctime_nsec;
 long __unused[3];
};



struct __old_kernel_stat {
 unsigned short st_dev;
 unsigned short st_ino;
 unsigned short st_mode;
 unsigned short st_nlink;
 unsigned short st_uid;
 unsigned short st_gid;
 unsigned short st_rdev;






 unsigned int st_size;
 unsigned int st_atime;
 unsigned int st_mtime;
 unsigned int st_ctime;

};
# 7 "include/linux/stat.h" 2
# 60 "include/linux/stat.h"
# 1 "include/linux/time.h" 1
# 13 "include/linux/time.h"
struct timespec {
 time_t tv_sec;
 long tv_nsec;
};


struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};

struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 40 "include/linux/time.h"
static inline __attribute__((always_inline)) int timespec_equal(const struct timespec *a,
                                 const struct timespec *b)
{
 return (a->tv_sec == b->tv_sec) && (a->tv_nsec == b->tv_nsec);
}






static inline __attribute__((always_inline)) int timespec_compare(const struct timespec *lhs, const struct timespec *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_nsec - rhs->tv_nsec;
}

static inline __attribute__((always_inline)) int timeval_compare(const struct timeval *lhs, const struct timeval *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_usec - rhs->tv_usec;
}

extern unsigned long mktime(const unsigned int year, const unsigned int mon,
       const unsigned int day, const unsigned int hour,
       const unsigned int min, const unsigned int sec);

extern void set_normalized_timespec(struct timespec *ts, time_t sec, long nsec);




static inline __attribute__((always_inline)) struct timespec timespec_sub(struct timespec lhs,
      struct timespec rhs)
{
 struct timespec ts_delta;
 set_normalized_timespec(&ts_delta, lhs.tv_sec - rhs.tv_sec,
    lhs.tv_nsec - rhs.tv_nsec);
 return ts_delta;
}







extern struct timespec xtime;
extern struct timespec wall_to_monotonic;
extern seqlock_t xtime_lock;

extern unsigned long read_persistent_clock(void);
extern int update_persistent_clock(struct timespec now);
extern int no_sync_cmos_clock __attribute__((__section__(".data.read_mostly")));
void timekeeping_init(void);

unsigned long get_seconds(void);
struct timespec current_kernel_time(void);




extern void do_gettimeofday(struct timeval *tv);
extern int do_settimeofday(struct timespec *tv);
extern int do_sys_settimeofday(struct timespec *tv, struct timezone *tz);

extern long do_utimes(int dfd, char *filename, struct timespec *times, int flags);
struct itimerval;
extern int do_setitimer(int which, struct itimerval *value,
   struct itimerval *ovalue);
extern unsigned int alarm_setitimer(unsigned int seconds);
extern int do_getitimer(int which, struct itimerval *value);
extern void getnstimeofday(struct timespec *tv);
extern void getboottime(struct timespec *ts);
extern void monotonic_to_bootbased(struct timespec *ts);

extern struct timespec timespec_trunc(struct timespec t, unsigned gran);
extern int timekeeping_is_continuous(void);
extern void update_wall_time(void);
# 133 "include/linux/time.h"
static inline __attribute__((always_inline)) s64 timespec_to_ns(const struct timespec *ts)
{
 return ((s64) ts->tv_sec * 1000000000L) + ts->tv_nsec;
}
# 145 "include/linux/time.h"
static inline __attribute__((always_inline)) s64 timeval_to_ns(const struct timeval *tv)
{
 return ((s64) tv->tv_sec * 1000000000L) +
  tv->tv_usec * 1000L;
}







extern struct timespec ns_to_timespec(const s64 nsec);







extern struct timeval ns_to_timeval(const s64 nsec);






static inline __attribute__((always_inline)) void timespec_add_ns(struct timespec *a, u64 ns)
{
 ns += a->tv_nsec;
 while(__builtin_expect(!!(ns >= 1000000000L), 0)) {
  ns -= 1000000000L;
  a->tv_sec++;
 }
 a->tv_nsec = ns;
}
# 199 "include/linux/time.h"
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};

struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 61 "include/linux/stat.h" 2

struct kstat {
 u64 ino;
 dev_t dev;
 umode_t mode;
 unsigned int nlink;
 uid_t uid;
 gid_t gid;
 dev_t rdev;
 loff_t size;
 struct timespec atime;
 struct timespec mtime;
 struct timespec ctime;
 unsigned long blksize;
 unsigned long long blocks;
};
# 281 "include/linux/fs.h" 2

# 1 "include/linux/kobject.h" 1
# 23 "include/linux/kobject.h"
# 1 "include/linux/sysfs.h" 1
# 18 "include/linux/sysfs.h"
# 1 "include/asm/atomic.h" 1
# 19 "include/linux/sysfs.h" 2

struct kobject;
struct module;





struct attribute {
 const char *name;
 struct module *owner;
 mode_t mode;
};

struct attribute_group {
 const char *name;
 int (*is_visible)(struct kobject *,
           struct attribute *, int);
 struct attribute **attrs;
};
# 62 "include/linux/sysfs.h"
struct vm_area_struct;

struct bin_attribute {
 struct attribute attr;
 size_t size;
 void *private;
 ssize_t (*read)(struct kobject *, struct bin_attribute *,
   char *, loff_t, size_t);
 ssize_t (*write)(struct kobject *, struct bin_attribute *,
    char *, loff_t, size_t);
 int (*mmap)(struct kobject *, struct bin_attribute *attr,
      struct vm_area_struct *vma);
};

struct sysfs_ops {
 ssize_t (*show)(struct kobject *, struct attribute *,char *);
 ssize_t (*store)(struct kobject *,struct attribute *,const char *, size_t);
};



int sysfs_schedule_callback(struct kobject *kobj, void (*func)(void *),
       void *data, struct module *owner);

int sysfs_create_dir(struct kobject *kobj);
void sysfs_remove_dir(struct kobject *kobj);
int sysfs_rename_dir(struct kobject *kobj, const char *new_name);
int sysfs_move_dir(struct kobject *kobj,
    struct kobject *new_parent_kobj);

int sysfs_create_file(struct kobject *kobj,
       const struct attribute *attr);
int sysfs_chmod_file(struct kobject *kobj, struct attribute *attr,
      mode_t mode);
void sysfs_remove_file(struct kobject *kobj, const struct attribute *attr);

int sysfs_create_bin_file(struct kobject *kobj,
           struct bin_attribute *attr);
void sysfs_remove_bin_file(struct kobject *kobj, struct bin_attribute *attr);

int sysfs_create_link(struct kobject *kobj, struct kobject *target,
       const char *name);
void sysfs_remove_link(struct kobject *kobj, const char *name);

int sysfs_create_group(struct kobject *kobj,
        const struct attribute_group *grp);
void sysfs_remove_group(struct kobject *kobj,
   const struct attribute_group *grp);
int sysfs_add_file_to_group(struct kobject *kobj,
   const struct attribute *attr, const char *group);
void sysfs_remove_file_from_group(struct kobject *kobj,
   const struct attribute *attr, const char *group);

void sysfs_notify(struct kobject *kobj, char *dir, char *attr);

extern int sysfs_init(void);
# 24 "include/linux/kobject.h" 2


# 1 "include/linux/kref.h" 1
# 21 "include/linux/kref.h"
# 1 "include/asm/atomic.h" 1
# 22 "include/linux/kref.h" 2

struct kref {
 atomic_t refcount;
};

void kref_set(struct kref *kref, int num);
void kref_init(struct kref *kref);
void kref_get(struct kref *kref);
int kref_put(struct kref *kref, void (*release) (struct kref *kref));
# 27 "include/linux/kobject.h" 2


# 1 "include/asm/atomic.h" 1
# 30 "include/linux/kobject.h" 2







extern char uevent_helper[];


extern u64 uevent_seqnum;
# 52 "include/linux/kobject.h"
enum kobject_action {
 KOBJ_ADD,
 KOBJ_REMOVE,
 KOBJ_CHANGE,
 KOBJ_MOVE,
 KOBJ_ONLINE,
 KOBJ_OFFLINE,
 KOBJ_MAX
};

struct kobject {
 const char *name;
 struct kref kref;
 struct list_head entry;
 struct kobject *parent;
 struct kset *kset;
 struct kobj_type *ktype;
 struct sysfs_dirent *sd;
 unsigned int state_initialized:1;
 unsigned int state_in_sysfs:1;
 unsigned int state_add_uevent_sent:1;
 unsigned int state_remove_uevent_sent:1;
};

extern int kobject_set_name(struct kobject *kobj, const char *name, ...)
       __attribute__((format(printf, 2, 3)));

static inline __attribute__((always_inline)) const char *kobject_name(const struct kobject *kobj)
{
 return kobj->name;
}

extern void kobject_init(struct kobject *kobj, struct kobj_type *ktype);
extern int kobject_add(struct kobject *kobj,
        struct kobject *parent,
        const char *fmt, ...);
extern int kobject_init_and_add(struct kobject *kobj,
          struct kobj_type *ktype,
          struct kobject *parent,
          const char *fmt, ...);

extern void kobject_del(struct kobject *kobj);

extern struct kobject * kobject_create(void);
extern struct kobject * kobject_create_and_add(const char *name,
      struct kobject *parent);

extern int kobject_rename(struct kobject *, const char *new_name);
extern int kobject_move(struct kobject *, struct kobject *);

extern struct kobject *kobject_get(struct kobject *kobj);
extern void kobject_put(struct kobject *kobj);

extern char *kobject_get_path(struct kobject *kobj, gfp_t flag);

struct kobj_type {
 void (*release)(struct kobject *kobj);
 struct sysfs_ops *sysfs_ops;
 struct attribute **default_attrs;
};

struct kobj_uevent_env {
 char *envp[32];
 int envp_idx;
 char buf[2048];
 int buflen;
};

struct kset_uevent_ops {
 int (*filter)(struct kset *kset, struct kobject *kobj);
 const char *(*name)(struct kset *kset, struct kobject *kobj);
 int (*uevent)(struct kset *kset, struct kobject *kobj,
        struct kobj_uevent_env *env);
};

struct kobj_attribute {
 struct attribute attr;
 ssize_t (*show)(struct kobject *kobj, struct kobj_attribute *attr,
   char *buf);
 ssize_t (*store)(struct kobject *kobj, struct kobj_attribute *attr,
    const char *buf, size_t count);
};

extern struct sysfs_ops kobj_sysfs_ops;
# 154 "include/linux/kobject.h"
struct kset {
 struct list_head list;
 spinlock_t list_lock;
 struct kobject kobj;
 struct kset_uevent_ops *uevent_ops;
};

extern void kset_init(struct kset *kset);
extern int kset_register(struct kset *kset);
extern void kset_unregister(struct kset *kset);
extern struct kset * kset_create_and_add(const char *name,
      struct kset_uevent_ops *u,
      struct kobject *parent_kobj);

static inline __attribute__((always_inline)) struct kset *to_kset(struct kobject *kobj)
{
 return kobj ? ({ const typeof( ((struct kset *)0)->kobj ) *__mptr = (kobj); (struct kset *)( (char *)__mptr - __builtin_offsetof(struct kset,kobj) );}) : ((void *)0);
}

static inline __attribute__((always_inline)) struct kset *kset_get(struct kset *k)
{
 return k ? to_kset(kobject_get(&k->kobj)) : ((void *)0);
}

static inline __attribute__((always_inline)) void kset_put(struct kset *k)
{
 kobject_put(&k->kobj);
}

static inline __attribute__((always_inline)) struct kobj_type *get_ktype(struct kobject *kobj)
{
 return kobj->ktype;
}

extern struct kobject *kset_find_obj(struct kset *, const char *);


extern struct kobject *kernel_kobj;

extern struct kobject *hypervisor_kobj;

extern struct kobject *power_kobj;

extern struct kobject *firmware_kobj;


int kobject_uevent(struct kobject *kobj, enum kobject_action action);
int kobject_uevent_env(struct kobject *kobj, enum kobject_action action,
   char *envp[]);

int add_uevent_var(struct kobj_uevent_env *env, const char *format, ...)
 __attribute__((format (printf, 2, 3)));

int kobject_action_type(const char *buf, size_t count,
   enum kobject_action *type);
# 283 "include/linux/fs.h" 2

# 1 "include/linux/radix-tree.h" 1
# 41 "include/linux/radix-tree.h"
static inline __attribute__((always_inline)) void *radix_tree_ptr_to_indirect(void *ptr)
{
 return (void *)((unsigned long)ptr | 1);
}

static inline __attribute__((always_inline)) void *radix_tree_indirect_to_ptr(void *ptr)
{
 return (void *)((unsigned long)ptr & ~1);
}

static inline __attribute__((always_inline)) int radix_tree_is_indirect_ptr(void *ptr)
{
 return (int)((unsigned long)ptr & 1);
}






struct radix_tree_root {
 unsigned int height;
 gfp_t gfp_mask;
 struct radix_tree_node *rnode;
};
# 134 "include/linux/radix-tree.h"
static inline __attribute__((always_inline)) void *radix_tree_deref_slot(void **pslot)
{
 void *ret = *pslot;
 if (__builtin_expect(!!(radix_tree_is_indirect_ptr(ret)), 0))
  ret = ((void *)-1UL);
 return ret;
}
# 149 "include/linux/radix-tree.h"
static inline __attribute__((always_inline)) void radix_tree_replace_slot(void **pslot, void *item)
{
 do { if (__builtin_expect(!!(radix_tree_is_indirect_ptr(item)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/radix-tree.h"), "i" (151), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0);
 ({ __asm__ __volatile__("": : :"memory"); (*pslot) = (item); });
}

int radix_tree_insert(struct radix_tree_root *, unsigned long, void *);
void *radix_tree_lookup(struct radix_tree_root *, unsigned long);
void **radix_tree_lookup_slot(struct radix_tree_root *, unsigned long);
void *radix_tree_delete(struct radix_tree_root *, unsigned long);
unsigned int
radix_tree_gang_lookup(struct radix_tree_root *root, void **results,
   unsigned long first_index, unsigned int max_items);
unsigned long radix_tree_next_hole(struct radix_tree_root *root,
    unsigned long index, unsigned long max_scan);
int radix_tree_preload(gfp_t gfp_mask);
void radix_tree_init(void);
void *radix_tree_tag_set(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
void *radix_tree_tag_clear(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
int radix_tree_tag_get(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
unsigned int
radix_tree_gang_lookup_tag(struct radix_tree_root *root, void **results,
  unsigned long first_index, unsigned int max_items,
  unsigned int tag);
int radix_tree_tagged(struct radix_tree_root *root, unsigned int tag);

static inline __attribute__((always_inline)) void radix_tree_preload_end(void)
{
 do { } while (0);
}
# 285 "include/linux/fs.h" 2
# 1 "include/linux/prio_tree.h" 1
# 14 "include/linux/prio_tree.h"
struct raw_prio_tree_node {
 struct prio_tree_node *left;
 struct prio_tree_node *right;
 struct prio_tree_node *parent;
};

struct prio_tree_node {
 struct prio_tree_node *left;
 struct prio_tree_node *right;
 struct prio_tree_node *parent;
 unsigned long start;
 unsigned long last;
};

struct prio_tree_root {
 struct prio_tree_node *prio_tree_node;
 unsigned short index_bits;
 unsigned short raw;




};

struct prio_tree_iter {
 struct prio_tree_node *cur;
 unsigned long mask;
 unsigned long value;
 int size_level;

 struct prio_tree_root *root;
 unsigned long r_index;
 unsigned long h_index;
};

static inline __attribute__((always_inline)) void prio_tree_iter_init(struct prio_tree_iter *iter,
  struct prio_tree_root *root, unsigned long r_index, unsigned long h_index)
{
 iter->root = root;
 iter->r_index = r_index;
 iter->h_index = h_index;
 iter->cur = ((void *)0);
}
# 84 "include/linux/prio_tree.h"
static inline __attribute__((always_inline)) int prio_tree_empty(const struct prio_tree_root *root)
{
 return root->prio_tree_node == ((void *)0);
}

static inline __attribute__((always_inline)) int prio_tree_root(const struct prio_tree_node *node)
{
 return node->parent == node;
}

static inline __attribute__((always_inline)) int prio_tree_left_empty(const struct prio_tree_node *node)
{
 return node->left == node;
}

static inline __attribute__((always_inline)) int prio_tree_right_empty(const struct prio_tree_node *node)
{
 return node->right == node;
}


struct prio_tree_node *prio_tree_replace(struct prio_tree_root *root,
                struct prio_tree_node *old, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_insert(struct prio_tree_root *root,
                struct prio_tree_node *node);
void prio_tree_remove(struct prio_tree_root *root, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_next(struct prio_tree_iter *iter);
# 286 "include/linux/fs.h" 2

# 1 "include/linux/pid.h" 1





enum pid_type
{
 PIDTYPE_PID,
 PIDTYPE_PGID,
 PIDTYPE_SID,
 PIDTYPE_MAX
};
# 50 "include/linux/pid.h"
struct upid {

 int nr;
 struct pid_namespace *ns;
 struct hlist_node pid_chain;
};

struct pid
{
 atomic_t count;

 struct hlist_head tasks[PIDTYPE_MAX];
 struct rcu_head rcu;
 int level;
 struct upid numbers[1];
};

extern struct pid init_struct_pid;

struct pid_link
{
 struct hlist_node node;
 struct pid *pid;
};

static inline __attribute__((always_inline)) struct pid *get_pid(struct pid *pid)
{
 if (pid)
  atomic_inc(&pid->count);
 return pid;
}

extern void put_pid(struct pid *pid);
extern struct task_struct *pid_task(struct pid *pid, enum pid_type);
extern struct task_struct *get_pid_task(struct pid *pid, enum pid_type)
                     ;

extern struct pid *get_task_pid(struct task_struct *task, enum pid_type type);





extern int attach_pid(struct task_struct *task, enum pid_type type, struct pid *pid)
                                         ;
extern void detach_pid(struct task_struct *task, enum pid_type);
extern void transfer_pid(struct task_struct *old, struct task_struct *new, enum pid_type)
                                              ;

struct pid_namespace;
extern struct pid_namespace init_pid_ns;
# 112 "include/linux/pid.h"
extern struct pid *find_pid_ns(int nr, struct pid_namespace *ns);
extern struct pid *find_vpid(int nr);
extern struct pid *find_pid(int nr);




extern struct pid *find_get_pid(int nr);
extern struct pid *find_ge_pid(int nr, struct pid_namespace *);

extern struct pid *alloc_pid(struct pid_namespace *ns);
extern void free_pid(struct pid *pid);
extern void zap_pid_ns_processes(struct pid_namespace *pid_ns);
# 138 "include/linux/pid.h"
static inline __attribute__((always_inline)) pid_t pid_nr(struct pid *pid)
{
 pid_t nr = 0;
 if (pid)
  nr = pid->numbers[0].nr;
 return nr;
}

pid_t pid_nr_ns(struct pid *pid, struct pid_namespace *ns);

static inline __attribute__((always_inline)) pid_t pid_vnr(struct pid *pid)
{
 pid_t nr = 0;
 if (pid)
  nr = pid->numbers[pid->level].nr;
 return nr;
}
# 288 "include/linux/fs.h" 2

# 1 "include/linux/capability.h" 1
# 19 "include/linux/capability.h"
struct task_struct;
# 34 "include/linux/capability.h"
typedef struct __user_cap_header_struct {
 __u32 version;
 int pid;
} *cap_user_header_t;

typedef struct __user_cap_data_struct {
        __u32 effective;
        __u32 permitted;
        __u32 inheritable;
} *cap_user_data_t;
# 57 "include/linux/capability.h"
struct vfs_cap_data {
 __u32 magic_etc;
 __u32 permitted;
 __u32 inheritable;
};
# 75 "include/linux/capability.h"
typedef __u32 kernel_cap_t;
# 338 "include/linux/capability.h"
static inline __attribute__((always_inline)) kernel_cap_t cap_combine(kernel_cap_t a, kernel_cap_t b)
{
     kernel_cap_t dest;
     (dest) = (a) | (b);
     return dest;
}

static inline __attribute__((always_inline)) kernel_cap_t cap_intersect(kernel_cap_t a, kernel_cap_t b)
{
     kernel_cap_t dest;
     (dest) = (a) & (b);
     return dest;
}

static inline __attribute__((always_inline)) kernel_cap_t cap_drop(kernel_cap_t a, kernel_cap_t drop)
{
     kernel_cap_t dest;
     (dest) = (a) & ~(drop);
     return dest;
}

static inline __attribute__((always_inline)) kernel_cap_t cap_invert(kernel_cap_t c)
{
     kernel_cap_t dest;
     (dest) = ~(c);
     return dest;
}
# 375 "include/linux/capability.h"
int capable(int cap);
int __capable(struct task_struct *t, int cap);
# 290 "include/linux/fs.h" 2

# 1 "include/asm/atomic.h" 1
# 292 "include/linux/fs.h" 2
# 1 "include/asm/semaphore.h" 1



# 1 "include/asm/semaphore_64.h" 1
# 39 "include/asm/semaphore_64.h"
# 1 "include/asm/system.h" 1
# 40 "include/asm/semaphore_64.h" 2
# 1 "include/asm/atomic.h" 1
# 41 "include/asm/semaphore_64.h" 2





struct semaphore {
 atomic_t count;
 int sleepers;
 wait_queue_head_t wait;
};
# 64 "include/asm/semaphore_64.h"
static inline __attribute__((always_inline)) void sema_init (struct semaphore *sem, int val)
{






 (((&sem->count)->counter) = (val));
 sem->sleepers = 0;
 init_waitqueue_head(&sem->wait);
}

static inline __attribute__((always_inline)) void init_MUTEX (struct semaphore *sem)
{
 sema_init(sem, 1);
}

static inline __attribute__((always_inline)) void init_MUTEX_LOCKED (struct semaphore *sem)
{
 sema_init(sem, 0);
}

 void __down_failed(void );
 int __down_failed_interruptible(void );
 int __down_failed_trylock(void );
 void __up_wakeup(void );

 void __down(struct semaphore * sem);
 int __down_interruptible(struct semaphore * sem);
 int __down_trylock(struct semaphore * sem);
 void __up(struct semaphore * sem);






static inline __attribute__((always_inline)) void down(struct semaphore * sem)
{
 do { _cond_resched(); } while (0);

 __asm__ __volatile__(
  "# atomic down operation\n\t"
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "decl %0\n\t"
  "jns 1f\n\t"
  "call __down_failed\n"
  "1:"
  :"=m" (sem->count)
  :"D" (sem)
  :"memory");
}





static inline __attribute__((always_inline)) int down_interruptible(struct semaphore * sem)
{
 int result;

 do { _cond_resched(); } while (0);

 __asm__ __volatile__(
  "# atomic interruptible down operation\n\t"
  "xorl %0,%0\n\t"
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "decl %1\n\t"
  "jns 2f\n\t"
  "call __down_failed_interruptible\n"
  "2:\n"
  :"=&a" (result), "=m" (sem->count)
  :"D" (sem)
  :"memory");
 return result;
}





static inline __attribute__((always_inline)) int down_trylock(struct semaphore * sem)
{
 int result;

 __asm__ __volatile__(
  "# atomic interruptible down operation\n\t"
  "xorl %0,%0\n\t"
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "decl %1\n\t"
  "jns 2f\n\t"
  "call __down_failed_trylock\n\t"
  "2:\n"
  :"=&a" (result), "=m" (sem->count)
  :"D" (sem)
  :"memory","cc");
 return result;
}







static inline __attribute__((always_inline)) void up(struct semaphore * sem)
{
 __asm__ __volatile__(
  "# atomic up operation\n\t"
  ".section .smp_locks,\"a\"\n" "  .align 8\n" "  .quad 661f\n" ".previous\n" "661:\n\tlock; " "incl %0\n\t"
  "jg 1f\n\t"
  "call __up_wakeup\n"
  "1:"
  :"=m" (sem->count)
  :"D" (sem)
  :"memory");
}
# 5 "include/asm/semaphore.h" 2
# 293 "include/linux/fs.h" 2


struct export_operations;
struct hd_geometry;
struct iovec;
struct nameidata;
struct kiocb;
struct pipe_inode_info;
struct poll_table_struct;
struct kstatfs;
struct vm_area_struct;
struct vfsmount;

extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) inode_init(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) inode_init_early(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) mnt_init(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) files_init(unsigned long);

struct buffer_head;
typedef int (get_block_t)(struct inode *inode, sector_t iblock,
   struct buffer_head *bh_result, int create);
typedef void (dio_iodone_t)(struct kiocb *iocb, loff_t offset,
   ssize_t bytes, void *private);
# 347 "include/linux/fs.h"
struct iattr {
 unsigned int ia_valid;
 umode_t ia_mode;
 uid_t ia_uid;
 gid_t ia_gid;
 loff_t ia_size;
 struct timespec ia_atime;
 struct timespec ia_mtime;
 struct timespec ia_ctime;






 struct file *ia_file;
};




# 1 "include/linux/quota.h" 1
# 44 "include/linux/quota.h"
typedef __kernel_uid32_t qid_t;
typedef __u64 qsize_t;
# 103 "include/linux/quota.h"
struct if_dqblk {
 __u64 dqb_bhardlimit;
 __u64 dqb_bsoftlimit;
 __u64 dqb_curspace;
 __u64 dqb_ihardlimit;
 __u64 dqb_isoftlimit;
 __u64 dqb_curinodes;
 __u64 dqb_btime;
 __u64 dqb_itime;
 __u32 dqb_valid;
};
# 124 "include/linux/quota.h"
struct if_dqinfo {
 __u64 dqi_bgrace;
 __u64 dqi_igrace;
 __u32 dqi_flags;
 __u32 dqi_valid;
};
# 142 "include/linux/quota.h"
enum {
 QUOTA_NL_C_UNSPEC,
 QUOTA_NL_C_WARNING,
 __QUOTA_NL_C_MAX,
};


enum {
 QUOTA_NL_A_UNSPEC,
 QUOTA_NL_A_QTYPE,
 QUOTA_NL_A_EXCESS_ID,
 QUOTA_NL_A_WARNING,
 QUOTA_NL_A_DEV_MAJOR,
 QUOTA_NL_A_DEV_MINOR,
 QUOTA_NL_A_CAUSED_ID,
 __QUOTA_NL_A_MAX,
};
# 167 "include/linux/quota.h"
# 1 "include/linux/dqblk_xfs.h" 1
# 50 "include/linux/dqblk_xfs.h"
typedef struct fs_disk_quota {
 __s8 d_version;
 __s8 d_flags;
 __u16 d_fieldmask;
 __u32 d_id;
 __u64 d_blk_hardlimit;
 __u64 d_blk_softlimit;
 __u64 d_ino_hardlimit;
 __u64 d_ino_softlimit;
 __u64 d_bcount;
 __u64 d_icount;
 __s32 d_itimer;

 __s32 d_btimer;
 __u16 d_iwarns;
 __u16 d_bwarns;
 __s32 d_padding2;
 __u64 d_rtb_hardlimit;
 __u64 d_rtb_softlimit;
 __u64 d_rtbcount;
 __s32 d_rtbtimer;
 __u16 d_rtbwarns;
 __s16 d_padding3;
 char d_padding4[8];
} fs_disk_quota_t;
# 137 "include/linux/dqblk_xfs.h"
typedef struct fs_qfilestat {
 __u64 qfs_ino;
 __u64 qfs_nblks;
 __u32 qfs_nextents;
} fs_qfilestat_t;

typedef struct fs_quota_stat {
 __s8 qs_version;
 __u16 qs_flags;
 __s8 qs_pad;
 fs_qfilestat_t qs_uquota;
 fs_qfilestat_t qs_gquota;
 __u32 qs_incoredqs;
 __s32 qs_btimelimit;
 __s32 qs_itimelimit;
 __s32 qs_rtbtimelimit;
 __u16 qs_bwarnlimit;
 __u16 qs_iwarnlimit;
} fs_quota_stat_t;
# 168 "include/linux/quota.h" 2
# 1 "include/linux/dqblk_v1.h" 1
# 21 "include/linux/dqblk_v1.h"
struct v1_mem_dqinfo {
};
# 169 "include/linux/quota.h" 2
# 1 "include/linux/dqblk_v2.h" 1
# 20 "include/linux/dqblk_v2.h"
struct v2_mem_dqinfo {
 unsigned int dqi_blocks;
 unsigned int dqi_free_blk;
 unsigned int dqi_free_entry;
};
# 170 "include/linux/quota.h" 2

extern spinlock_t dq_data_lock;
# 183 "include/linux/quota.h"
struct mem_dqblk {
 __u32 dqb_bhardlimit;
 __u32 dqb_bsoftlimit;
 qsize_t dqb_curspace;
 __u32 dqb_ihardlimit;
 __u32 dqb_isoftlimit;
 __u32 dqb_curinodes;
 time_t dqb_btime;
 time_t dqb_itime;
};




struct quota_format_type;

struct mem_dqinfo {
 struct quota_format_type *dqi_format;
 struct list_head dqi_dirty_list;
 unsigned long dqi_flags;
 unsigned int dqi_bgrace;
 unsigned int dqi_igrace;
 union {
  struct v1_mem_dqinfo v1_i;
  struct v2_mem_dqinfo v2_i;
 } u;
};

struct super_block;





extern void mark_info_dirty(struct super_block *sb, int type);







struct dqstats {
 int lookups;
 int drops;
 int reads;
 int writes;
 int cache_hits;
 int allocated_dquots;
 int free_dquots;
 int syncs;
};

extern struct dqstats dqstats;
# 245 "include/linux/quota.h"
struct dquot {
 struct hlist_node dq_hash;
 struct list_head dq_inuse;
 struct list_head dq_free;
 struct list_head dq_dirty;
 struct mutex dq_lock;
 atomic_t dq_count;
 wait_queue_head_t dq_wait_unused;
 struct super_block *dq_sb;
 unsigned int dq_id;
 loff_t dq_off;
 unsigned long dq_flags;
 short dq_type;
 struct mem_dqblk dq_dqb;
};







struct quota_format_ops {
 int (*check_quota_file)(struct super_block *sb, int type);
 int (*read_file_info)(struct super_block *sb, int type);
 int (*write_file_info)(struct super_block *sb, int type);
 int (*free_file_info)(struct super_block *sb, int type);
 int (*read_dqblk)(struct dquot *dquot);
 int (*commit_dqblk)(struct dquot *dquot);
 int (*release_dqblk)(struct dquot *dquot);
};


struct dquot_operations {
 int (*initialize) (struct inode *, int);
 int (*drop) (struct inode *);
 int (*alloc_space) (struct inode *, qsize_t, int);
 int (*alloc_inode) (const struct inode *, unsigned long);
 int (*free_space) (struct inode *, qsize_t);
 int (*free_inode) (const struct inode *, unsigned long);
 int (*transfer) (struct inode *, struct iattr *);
 int (*write_dquot) (struct dquot *);
 int (*acquire_dquot) (struct dquot *);
 int (*release_dquot) (struct dquot *);
 int (*mark_dirty) (struct dquot *);
 int (*write_info) (struct super_block *, int);
};


struct quotactl_ops {
 int (*quota_on)(struct super_block *, int, int, char *);
 int (*quota_off)(struct super_block *, int);
 int (*quota_sync)(struct super_block *, int);
 int (*get_info)(struct super_block *, int, struct if_dqinfo *);
 int (*set_info)(struct super_block *, int, struct if_dqinfo *);
 int (*get_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*set_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*get_xstate)(struct super_block *, struct fs_quota_stat *);
 int (*set_xstate)(struct super_block *, unsigned int, int);
 int (*get_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
 int (*set_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
};

struct quota_format_type {
 int qf_fmt_id;
 struct quota_format_ops *qf_ops;
 struct module *qf_owner;
 struct quota_format_type *qf_next;
};




struct quota_info {
 unsigned int flags;
 struct mutex dqio_mutex;
 struct mutex dqonoff_mutex;
 struct rw_semaphore dqptr_sem;
 struct inode *files[2];
 struct mem_dqinfo info[2];
 struct quota_format_ops *ops[2];
};


int mark_dquot_dirty(struct dquot *dquot);
# 339 "include/linux/quota.h"
int register_quota_format(struct quota_format_type *fmt);
void unregister_quota_format(struct quota_format_type *fmt);

struct quota_module_name {
 int qm_fmt_id;
 char *qm_mod_name;
};
# 369 "include/linux/fs.h" 2
# 396 "include/linux/fs.h"
enum positive_aop_returns {
 AOP_WRITEPAGE_ACTIVATE = 0x80000,
 AOP_TRUNCATED_PAGE = 0x80001,
};







struct page;
struct address_space;
struct writeback_control;

struct iov_iter {
 const struct iovec *iov;
 unsigned long nr_segs;
 size_t iov_offset;
 size_t count;
};

size_t iov_iter_copy_from_user_atomic(struct page *page,
  struct iov_iter *i, unsigned long offset, size_t bytes);
size_t iov_iter_copy_from_user(struct page *page,
  struct iov_iter *i, unsigned long offset, size_t bytes);
void iov_iter_advance(struct iov_iter *i, size_t bytes);
int iov_iter_fault_in_readable(struct iov_iter *i, size_t bytes);
size_t iov_iter_single_seg_count(struct iov_iter *i);

static inline __attribute__((always_inline)) void iov_iter_init(struct iov_iter *i,
   const struct iovec *iov, unsigned long nr_segs,
   size_t count, size_t written)
{
 i->iov = iov;
 i->nr_segs = nr_segs;
 i->iov_offset = 0;
 i->count = count + written;

 iov_iter_advance(i, written);
}

static inline __attribute__((always_inline)) size_t iov_iter_count(struct iov_iter *i)
{
 return i->count;
}


struct address_space_operations {
 int (*writepage)(struct page *page, struct writeback_control *wbc);
 int (*readpage)(struct file *, struct page *);
 void (*sync_page)(struct page *);


 int (*writepages)(struct address_space *, struct writeback_control *);


 int (*set_page_dirty)(struct page *page);

 int (*readpages)(struct file *filp, struct address_space *mapping,
   struct list_head *pages, unsigned nr_pages);





 int (*prepare_write)(struct file *, struct page *, unsigned, unsigned);
 int (*commit_write)(struct file *, struct page *, unsigned, unsigned);

 int (*write_begin)(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned flags,
    struct page **pagep, void **fsdata);
 int (*write_end)(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned copied,
    struct page *page, void *fsdata);


 sector_t (*bmap)(struct address_space *, sector_t);
 void (*invalidatepage) (struct page *, unsigned long);
 int (*releasepage) (struct page *, gfp_t);
 ssize_t (*direct_IO)(int, struct kiocb *, const struct iovec *iov,
   loff_t offset, unsigned long nr_segs);
 struct page* (*get_xip_page)(struct address_space *, sector_t,
   int);

 int (*migratepage) (struct address_space *,
   struct page *, struct page *);
 int (*launder_page) (struct page *);
};





int pagecache_write_begin(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned flags,
    struct page **pagep, void **fsdata);

int pagecache_write_end(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned copied,
    struct page *page, void *fsdata);

struct backing_dev_info;
struct address_space {
 struct inode *host;
 struct radix_tree_root page_tree;
 rwlock_t tree_lock;
 unsigned int i_mmap_writable;
 struct prio_tree_root i_mmap;
 struct list_head i_mmap_nonlinear;
 spinlock_t i_mmap_lock;
 unsigned int truncate_count;
 unsigned long nrpages;
 unsigned long writeback_index;
 const struct address_space_operations *a_ops;
 unsigned long flags;
 struct backing_dev_info *backing_dev_info;
 spinlock_t private_lock;
 struct list_head private_list;
 struct address_space *assoc_mapping;
} __attribute__((aligned(sizeof(long))));






struct block_device {
 dev_t bd_dev;
 struct inode * bd_inode;
 int bd_openers;
 struct mutex bd_mutex;
 struct semaphore bd_mount_sem;
 struct list_head bd_inodes;
 void * bd_holder;
 int bd_holders;

 struct list_head bd_holder_list;

 struct block_device * bd_contains;
 unsigned bd_block_size;
 struct hd_struct * bd_part;

 unsigned bd_part_count;
 int bd_invalidated;
 struct gendisk * bd_disk;
 struct list_head bd_list;
 struct backing_dev_info *bd_inode_backing_dev_info;






 unsigned long bd_private;
};
# 560 "include/linux/fs.h"
int mapping_tagged(struct address_space *mapping, int tag);




static inline __attribute__((always_inline)) int mapping_mapped(struct address_space *mapping)
{
 return !prio_tree_empty(&mapping->i_mmap) ||
  !list_empty(&mapping->i_mmap_nonlinear);
}







static inline __attribute__((always_inline)) int mapping_writably_mapped(struct address_space *mapping)
{
 return mapping->i_mmap_writable != 0;
}
# 593 "include/linux/fs.h"
struct inode {
 struct hlist_node i_hash;
 struct list_head i_list;
 struct list_head i_sb_list;
 struct list_head i_dentry;
 unsigned long i_ino;
 atomic_t i_count;
 unsigned int i_nlink;
 uid_t i_uid;
 gid_t i_gid;
 dev_t i_rdev;
 u64 i_version;
 loff_t i_size;



 struct timespec i_atime;
 struct timespec i_mtime;
 struct timespec i_ctime;
 unsigned int i_blkbits;
 blkcnt_t i_blocks;
 unsigned short i_bytes;
 umode_t i_mode;
 spinlock_t i_lock;
 struct mutex i_mutex;
 struct rw_semaphore i_alloc_sem;
 const struct inode_operations *i_op;
 const struct file_operations *i_fop;
 struct super_block *i_sb;
 struct file_lock *i_flock;
 struct address_space *i_mapping;
 struct address_space i_data;



 struct list_head i_devices;
 union {
  struct pipe_inode_info *i_pipe;
  struct block_device *i_bdev;
  struct cdev *i_cdev;
 };
 int i_cindex;

 __u32 i_generation;


 unsigned long i_dnotify_mask;
 struct dnotify_struct *i_dnotify;



 struct list_head inotify_watches;
 struct mutex inotify_mutex;


 unsigned long i_state;
 unsigned long dirtied_when;

 unsigned int i_flags;

 atomic_t i_writecount;



 void *i_private;
};
# 671 "include/linux/fs.h"
enum inode_i_mutex_lock_class
{
 I_MUTEX_NORMAL,
 I_MUTEX_PARENT,
 I_MUTEX_CHILD,
 I_MUTEX_XATTR,
 I_MUTEX_QUOTA
};

extern void inode_double_lock(struct inode *inode1, struct inode *inode2);
extern void inode_double_unlock(struct inode *inode1, struct inode *inode2);
# 693 "include/linux/fs.h"
static inline __attribute__((always_inline)) loff_t i_size_read(const struct inode *inode)
{
# 712 "include/linux/fs.h"
 return inode->i_size;

}






static inline __attribute__((always_inline)) void i_size_write(struct inode *inode, loff_t i_size)
{
# 732 "include/linux/fs.h"
 inode->i_size = i_size;

}

static inline __attribute__((always_inline)) unsigned iminor(const struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) & ((1U << 20) - 1)));
}

static inline __attribute__((always_inline)) unsigned imajor(const struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) >> 20));
}

extern struct block_device *I_BDEV(struct inode *inode);

struct fown_struct {
 rwlock_t lock;
 struct pid *pid;
 enum pid_type pid_type;
 uid_t uid, euid;
 int signum;
};




struct file_ra_state {
 unsigned long start;
 unsigned int size;
 unsigned int async_size;


 unsigned int ra_pages;
 int mmap_miss;
 loff_t prev_pos;
};




static inline __attribute__((always_inline)) int ra_has_index(struct file_ra_state *ra, unsigned long index)
{
 return (index >= ra->start &&
  index < ra->start + ra->size);
}

struct file {




 union {
  struct list_head fu_list;
  struct rcu_head fu_rcuhead;
 } f_u;
 struct path f_path;


 const struct file_operations *f_op;
 atomic_t f_count;
 unsigned int f_flags;
 mode_t f_mode;
 loff_t f_pos;
 struct fown_struct f_owner;
 unsigned int f_uid, f_gid;
 struct file_ra_state f_ra;

 u64 f_version;




 void *private_data;



 struct list_head f_ep_links;
 spinlock_t f_ep_lock;

 struct address_space *f_mapping;
};
extern spinlock_t files_lock;
# 846 "include/linux/fs.h"
typedef struct files_struct *fl_owner_t;

struct file_lock_operations {
 void (*fl_insert)(struct file_lock *);
 void (*fl_remove)(struct file_lock *);
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
};

struct lock_manager_operations {
 int (*fl_compare_owner)(struct file_lock *, struct file_lock *);
 void (*fl_notify)(struct file_lock *);
 int (*fl_grant)(struct file_lock *, struct file_lock *, int);
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
 void (*fl_break)(struct file_lock *);
 int (*fl_mylease)(struct file_lock *, struct file_lock *);
 int (*fl_change)(struct file_lock **, int);
};


# 1 "include/linux/nfs_fs_i.h" 1





# 1 "include/linux/nfs.h" 1
# 39 "include/linux/nfs.h"
 enum nfs_stat {
 NFS_OK = 0,
 NFSERR_PERM = 1,
 NFSERR_NOENT = 2,
 NFSERR_IO = 5,
 NFSERR_NXIO = 6,
 NFSERR_EAGAIN = 11,
 NFSERR_ACCES = 13,
 NFSERR_EXIST = 17,
 NFSERR_XDEV = 18,
 NFSERR_NODEV = 19,
 NFSERR_NOTDIR = 20,
 NFSERR_ISDIR = 21,
 NFSERR_INVAL = 22,
 NFSERR_FBIG = 27,
 NFSERR_NOSPC = 28,
 NFSERR_ROFS = 30,
 NFSERR_MLINK = 31,
 NFSERR_OPNOTSUPP = 45,
 NFSERR_NAMETOOLONG = 63,
 NFSERR_NOTEMPTY = 66,
 NFSERR_DQUOT = 69,
 NFSERR_STALE = 70,
 NFSERR_REMOTE = 71,
 NFSERR_WFLUSH = 99,
 NFSERR_BADHANDLE = 10001,
 NFSERR_NOT_SYNC = 10002,
 NFSERR_BAD_COOKIE = 10003,
 NFSERR_NOTSUPP = 10004,
 NFSERR_TOOSMALL = 10005,
 NFSERR_SERVERFAULT = 10006,
 NFSERR_BADTYPE = 10007,
 NFSERR_JUKEBOX = 10008,
 NFSERR_SAME = 10009,
 NFSERR_DENIED = 10010,
 NFSERR_EXPIRED = 10011,
 NFSERR_LOCKED = 10012,
 NFSERR_GRACE = 10013,
 NFSERR_FHEXPIRED = 10014,
 NFSERR_SHARE_DENIED = 10015,
 NFSERR_WRONGSEC = 10016,
 NFSERR_CLID_INUSE = 10017,
 NFSERR_RESOURCE = 10018,
 NFSERR_MOVED = 10019,
 NFSERR_NOFILEHANDLE = 10020,
 NFSERR_MINOR_VERS_MISMATCH = 10021,
 NFSERR_STALE_CLIENTID = 10022,
 NFSERR_STALE_STATEID = 10023,
 NFSERR_OLD_STATEID = 10024,
 NFSERR_BAD_STATEID = 10025,
 NFSERR_BAD_SEQID = 10026,
 NFSERR_NOT_SAME = 10027,
 NFSERR_LOCK_RANGE = 10028,
 NFSERR_SYMLINK = 10029,
 NFSERR_RESTOREFH = 10030,
 NFSERR_LEASE_MOVED = 10031,
 NFSERR_ATTRNOTSUPP = 10032,
 NFSERR_NO_GRACE = 10033,
 NFSERR_RECLAIM_BAD = 10034,
 NFSERR_RECLAIM_CONFLICT = 10035,
 NFSERR_BAD_XDR = 10036,
 NFSERR_LOCKS_HELD = 10037,
 NFSERR_OPENMODE = 10038,
 NFSERR_BADOWNER = 10039,
 NFSERR_BADCHAR = 10040,
 NFSERR_BADNAME = 10041,
 NFSERR_BAD_RANGE = 10042,
 NFSERR_LOCK_NOTSUPP = 10043,
 NFSERR_OP_ILLEGAL = 10044,
 NFSERR_DEADLOCK = 10045,
 NFSERR_FILE_OPEN = 10046,
 NFSERR_ADMIN_REVOKED = 10047,
 NFSERR_CB_PATH_DOWN = 10048,
 NFSERR_REPLAY_ME = 10049
};



enum nfs_ftype {
 NFNON = 0,
 NFREG = 1,
 NFDIR = 2,
 NFBLK = 3,
 NFCHR = 4,
 NFLNK = 5,
 NFSOCK = 6,
 NFBAD = 7,
 NFFIFO = 8
};


# 1 "include/linux/sunrpc/msg_prot.h" 1
# 18 "include/linux/sunrpc/msg_prot.h"
typedef u32 rpc_authflavor_t;

enum rpc_auth_flavors {
 RPC_AUTH_NULL = 0,
 RPC_AUTH_UNIX = 1,
 RPC_AUTH_SHORT = 2,
 RPC_AUTH_DES = 3,
 RPC_AUTH_KRB = 4,
 RPC_AUTH_GSS = 6,
 RPC_AUTH_MAXFLAVOR = 8,

 RPC_AUTH_GSS_KRB5 = 390003,
 RPC_AUTH_GSS_KRB5I = 390004,
 RPC_AUTH_GSS_KRB5P = 390005,
 RPC_AUTH_GSS_LKEY = 390006,
 RPC_AUTH_GSS_LKEYI = 390007,
 RPC_AUTH_GSS_LKEYP = 390008,
 RPC_AUTH_GSS_SPKM = 390009,
 RPC_AUTH_GSS_SPKMI = 390010,
 RPC_AUTH_GSS_SPKMP = 390011,
};




enum rpc_msg_type {
 RPC_CALL = 0,
 RPC_REPLY = 1
};

enum rpc_reply_stat {
 RPC_MSG_ACCEPTED = 0,
 RPC_MSG_DENIED = 1
};

enum rpc_accept_stat {
 RPC_SUCCESS = 0,
 RPC_PROG_UNAVAIL = 1,
 RPC_PROG_MISMATCH = 2,
 RPC_PROC_UNAVAIL = 3,
 RPC_GARBAGE_ARGS = 4,
 RPC_SYSTEM_ERR = 5,

 RPC_DROP_REPLY = 60000,
};

enum rpc_reject_stat {
 RPC_MISMATCH = 0,
 RPC_AUTH_ERROR = 1
};

enum rpc_auth_stat {
 RPC_AUTH_OK = 0,
 RPC_AUTH_BADCRED = 1,
 RPC_AUTH_REJECTEDCRED = 2,
 RPC_AUTH_BADVERF = 3,
 RPC_AUTH_REJECTEDVERF = 4,
 RPC_AUTH_TOOWEAK = 5,

 RPCSEC_GSS_CREDPROBLEM = 13,
 RPCSEC_GSS_CTXPROBLEM = 14
};
# 102 "include/linux/sunrpc/msg_prot.h"
typedef __be32 rpc_fraghdr;
# 131 "include/linux/nfs.h" 2






struct nfs_fh {
 unsigned short size;
 unsigned char data[128];
};





static inline __attribute__((always_inline)) int nfs_compare_fh(const struct nfs_fh *a, const struct nfs_fh *b)
{
 return a->size != b->size || memcmp(a->data, b->data, a->size) != 0;
}

static inline __attribute__((always_inline)) void nfs_copy_fh(struct nfs_fh *target, const struct nfs_fh *source)
{
 target->size = source->size;
 memcpy(target->data, source->data, source->size);
}
# 165 "include/linux/nfs.h"
enum nfs3_stable_how {
 NFS_UNSTABLE = 0,
 NFS_DATA_SYNC = 1,
 NFS_FILE_SYNC = 2
};
# 7 "include/linux/nfs_fs_i.h" 2

struct nlm_lockowner;




struct nfs_lock_info {
 u32 state;
 struct nlm_lockowner *owner;
 struct list_head list;
};

struct nfs4_lock_state;
struct nfs4_lock_info {
 struct nfs4_lock_state *owner;
};
# 868 "include/linux/fs.h" 2

struct file_lock {
 struct file_lock *fl_next;
 struct list_head fl_link;
 struct list_head fl_block;
 fl_owner_t fl_owner;
 unsigned int fl_pid;
 wait_queue_head_t fl_wait;
 struct file *fl_file;
 unsigned char fl_flags;
 unsigned char fl_type;
 loff_t fl_start;
 loff_t fl_end;

 struct fasync_struct * fl_fasync;
 unsigned long fl_break_time;

 struct file_lock_operations *fl_ops;
 struct lock_manager_operations *fl_lmops;
 union {
  struct nfs_lock_info nfs_fl;
  struct nfs4_lock_info nfs4_fl;
  struct {
   struct list_head link;
   int state;
  } afs;
 } fl_u;
};
# 904 "include/linux/fs.h"
# 1 "include/linux/fcntl.h" 1



# 1 "include/asm/fcntl.h" 1
# 1 "include/asm-generic/fcntl.h" 1
# 117 "include/asm-generic/fcntl.h"
struct flock {
 short l_type;
 short l_whence;
 off_t l_start;
 off_t l_len;
 pid_t l_pid;

};
# 1 "include/asm/fcntl.h" 2
# 5 "include/linux/fcntl.h" 2
# 905 "include/linux/fs.h" 2

extern int fcntl_getlk(struct file *, struct flock *);
extern int fcntl_setlk(unsigned int, struct file *, unsigned int,
   struct flock *);







extern void send_sigio(struct fown_struct *fown, int fd, int band);
extern int fcntl_setlease(unsigned int fd, struct file *filp, long arg);
extern int fcntl_getlease(struct file *filp);


extern int do_sync_mapping_range(struct address_space *mapping, loff_t offset,
   loff_t endbyte, unsigned int flags);


extern void locks_init_lock(struct file_lock *);
extern void locks_copy_lock(struct file_lock *, struct file_lock *);
extern void locks_remove_posix(struct file *, fl_owner_t);
extern void locks_remove_flock(struct file *);
extern void posix_test_lock(struct file *, struct file_lock *);
extern int posix_lock_file(struct file *, struct file_lock *, struct file_lock *);
extern int posix_lock_file_wait(struct file *, struct file_lock *);
extern int posix_unblock_lock(struct file *, struct file_lock *);
extern int vfs_test_lock(struct file *, struct file_lock *);
extern int vfs_lock_file(struct file *, unsigned int, struct file_lock *, struct file_lock *);
extern int vfs_cancel_lock(struct file *filp, struct file_lock *fl);
extern int flock_lock_file_wait(struct file *filp, struct file_lock *fl);
extern int __break_lease(struct inode *inode, unsigned int flags);
extern void lease_get_mtime(struct inode *, struct timespec *time);
extern int generic_setlease(struct file *, long, struct file_lock **);
extern int vfs_setlease(struct file *, long, struct file_lock **);
extern int lease_modify(struct file_lock **, int);
extern int lock_may_read(struct inode *, loff_t start, unsigned long count);
extern int lock_may_write(struct inode *, loff_t start, unsigned long count);
extern struct seq_operations locks_seq_operations;

struct fasync_struct {
 int magic;
 int fa_fd;
 struct fasync_struct *fa_next;
 struct file *fa_file;
};




extern int fasync_helper(int, struct file *, int, struct fasync_struct **);

extern void kill_fasync(struct fasync_struct **, int, int);

extern void __kill_fasync(struct fasync_struct *, int, int);

extern int __f_setown(struct file *filp, struct pid *, enum pid_type, int force);
extern int f_setown(struct file *filp, unsigned long arg, int force);
extern void f_delown(struct file *filp);
extern pid_t f_getown(struct file *filp);
extern int send_sigurg(struct fown_struct *fown);
# 976 "include/linux/fs.h"
extern struct list_head super_blocks;
extern spinlock_t sb_lock;



struct super_block {
 struct list_head s_list;
 dev_t s_dev;
 unsigned long s_blocksize;
 unsigned char s_blocksize_bits;
 unsigned char s_dirt;
 unsigned long long s_maxbytes;
 struct file_system_type *s_type;
 const struct super_operations *s_op;
 struct dquot_operations *dq_op;
  struct quotactl_ops *s_qcop;
 const struct export_operations *s_export_op;
 unsigned long s_flags;
 unsigned long s_magic;
 struct dentry *s_root;
 struct rw_semaphore s_umount;
 struct mutex s_lock;
 int s_count;
 int s_syncing;
 int s_need_sync_fs;
 atomic_t s_active;



 struct xattr_handler **s_xattr;

 struct list_head s_inodes;
 struct list_head s_dirty;
 struct list_head s_io;
 struct list_head s_more_io;
 struct hlist_head s_anon;
 struct list_head s_files;

 struct block_device *s_bdev;
 struct mtd_info *s_mtd;
 struct list_head s_instances;
 struct quota_info s_dquot;

 int s_frozen;
 wait_queue_head_t s_wait_unfrozen;

 char s_id[32];

 void *s_fs_info;





 struct mutex s_vfs_rename_mutex;



 u32 s_time_gran;





 char *s_subtype;
};

extern struct timespec current_fs_time(struct super_block *sb);




enum {
 SB_UNFROZEN = 0,
 SB_FREEZE_WRITE = 1,
 SB_FREEZE_TRANS = 2,
};
# 1065 "include/linux/fs.h"
extern void lock_super(struct super_block *);
extern void unlock_super(struct super_block *);




extern int vfs_permission(struct nameidata *, int);
extern int vfs_create(struct inode *, struct dentry *, int, struct nameidata *);
extern int vfs_mkdir(struct inode *, struct dentry *, int);
extern int vfs_mknod(struct inode *, struct dentry *, int, dev_t);
extern int vfs_symlink(struct inode *, struct dentry *, const char *, int);
extern int vfs_link(struct dentry *, struct inode *, struct dentry *);
extern int vfs_rmdir(struct inode *, struct dentry *);
extern int vfs_unlink(struct inode *, struct dentry *);
extern int vfs_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);




extern void dentry_unhash(struct dentry *dentry);




extern int file_permission(struct file *, int);
# 1110 "include/linux/fs.h"
int generic_osync_inode(struct inode *, struct address_space *, int);







typedef int (*filldir_t)(void *, const char *, int, loff_t, u64, unsigned);

struct block_device_operations {
 int (*open) (struct inode *, struct file *);
 int (*release) (struct inode *, struct file *);
 int (*ioctl) (struct inode *, struct file *, unsigned, unsigned long);
 long (*unlocked_ioctl) (struct file *, unsigned, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned, unsigned long);
 int (*direct_access) (struct block_device *, sector_t, unsigned long *);
 int (*media_changed) (struct gendisk *);
 int (*revalidate_disk) (struct gendisk *);
 int (*getgeo)(struct block_device *, struct hd_geometry *);
 struct module *owner;
};
# 1142 "include/linux/fs.h"
typedef struct {
 size_t written;
 size_t count;
 union {
  char * buf;
  void *data;
 } arg;
 int error;
} read_descriptor_t;

typedef int (*read_actor_t)(read_descriptor_t *, struct page *, unsigned long, unsigned long);
# 1165 "include/linux/fs.h"
struct file_operations {
 struct module *owner;
 loff_t (*llseek) (struct file *, loff_t, int);
 ssize_t (*read) (struct file *, char *, size_t, loff_t *);
 ssize_t (*write) (struct file *, const char *, size_t, loff_t *);
 ssize_t (*aio_read) (struct kiocb *, const struct iovec *, unsigned long, loff_t);
 ssize_t (*aio_write) (struct kiocb *, const struct iovec *, unsigned long, loff_t);
 int (*readdir) (struct file *, void *, filldir_t);
 unsigned int (*poll) (struct file *, struct poll_table_struct *);
 int (*ioctl) (struct inode *, struct file *, unsigned int, unsigned long);
 long (*unlocked_ioctl) (struct file *, unsigned int, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned int, unsigned long);
 int (*mmap) (struct file *, struct vm_area_struct *);
 int (*open) (struct inode *, struct file *);
 int (*flush) (struct file *, fl_owner_t id);
 int (*release) (struct inode *, struct file *);
 int (*fsync) (struct file *, struct dentry *, int datasync);
 int (*aio_fsync) (struct kiocb *, int datasync);
 int (*fasync) (int, struct file *, int);
 int (*lock) (struct file *, int, struct file_lock *);
 ssize_t (*sendpage) (struct file *, struct page *, int, size_t, loff_t *, int);
 unsigned long (*get_unmapped_area)(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);
 int (*check_flags)(int);
 int (*dir_notify)(struct file *filp, unsigned long arg);
 int (*flock) (struct file *, int, struct file_lock *);
 ssize_t (*splice_write)(struct pipe_inode_info *, struct file *, loff_t *, size_t, unsigned int);
 ssize_t (*splice_read)(struct file *, loff_t *, struct pipe_inode_info *, size_t, unsigned int);
 int (*setlease)(struct file *, long, struct file_lock **);
};

struct inode_operations {
 int (*create) (struct inode *,struct dentry *,int, struct nameidata *);
 struct dentry * (*lookup) (struct inode *,struct dentry *, struct nameidata *);
 int (*link) (struct dentry *,struct inode *,struct dentry *);
 int (*unlink) (struct inode *,struct dentry *);
 int (*symlink) (struct inode *,struct dentry *,const char *);
 int (*mkdir) (struct inode *,struct dentry *,int);
 int (*rmdir) (struct inode *,struct dentry *);
 int (*mknod) (struct inode *,struct dentry *,int,dev_t);
 int (*rename) (struct inode *, struct dentry *,
   struct inode *, struct dentry *);
 int (*readlink) (struct dentry *, char *,int);
 void * (*follow_link) (struct dentry *, struct nameidata *);
 void (*put_link) (struct dentry *, struct nameidata *, void *);
 void (*truncate) (struct inode *);
 int (*permission) (struct inode *, int, struct nameidata *);
 int (*setattr) (struct dentry *, struct iattr *);
 int (*getattr) (struct vfsmount *mnt, struct dentry *, struct kstat *);
 int (*setxattr) (struct dentry *, const char *,const void *,size_t,int);
 ssize_t (*getxattr) (struct dentry *, const char *, void *, size_t);
 ssize_t (*listxattr) (struct dentry *, char *, size_t);
 int (*removexattr) (struct dentry *, const char *);
 void (*truncate_range)(struct inode *, loff_t, loff_t);
 long (*fallocate)(struct inode *inode, int mode, loff_t offset,
     loff_t len);
};

struct seq_file;

ssize_t rw_copy_check_uvector(int type, const struct iovec * uvector,
    unsigned long nr_segs, unsigned long fast_segs,
    struct iovec *fast_pointer,
    struct iovec **ret_pointer);

extern ssize_t vfs_read(struct file *, char *, size_t, loff_t *);
extern ssize_t vfs_write(struct file *, const char *, size_t, loff_t *);
extern ssize_t vfs_readv(struct file *, const struct iovec *,
  unsigned long, loff_t *);
extern ssize_t vfs_writev(struct file *, const struct iovec *,
  unsigned long, loff_t *);





struct super_operations {
    struct inode *(*alloc_inode)(struct super_block *sb);
 void (*destroy_inode)(struct inode *);

 void (*read_inode) (struct inode *);

    void (*dirty_inode) (struct inode *);
 int (*write_inode) (struct inode *, int);
 void (*put_inode) (struct inode *);
 void (*drop_inode) (struct inode *);
 void (*delete_inode) (struct inode *);
 void (*put_super) (struct super_block *);
 void (*write_super) (struct super_block *);
 int (*sync_fs)(struct super_block *sb, int wait);
 void (*write_super_lockfs) (struct super_block *);
 void (*unlockfs) (struct super_block *);
 int (*statfs) (struct dentry *, struct kstatfs *);
 int (*remount_fs) (struct super_block *, int *, char *);
 void (*clear_inode) (struct inode *);
 void (*umount_begin) (struct vfsmount *, int);

 int (*show_options)(struct seq_file *, struct vfsmount *);
 int (*show_stats)(struct seq_file *, struct vfsmount *);




};
# 1334 "include/linux/fs.h"
extern void __mark_inode_dirty(struct inode *, int);
static inline __attribute__((always_inline)) void mark_inode_dirty(struct inode *inode)
{
 __mark_inode_dirty(inode, (1 | 2 | 4));
}

static inline __attribute__((always_inline)) void mark_inode_dirty_sync(struct inode *inode)
{
 __mark_inode_dirty(inode, 1);
}
# 1353 "include/linux/fs.h"
static inline __attribute__((always_inline)) void inc_nlink(struct inode *inode)
{
 inode->i_nlink++;
}

static inline __attribute__((always_inline)) void inode_inc_link_count(struct inode *inode)
{
 inc_nlink(inode);
 mark_inode_dirty(inode);
}
# 1375 "include/linux/fs.h"
static inline __attribute__((always_inline)) void drop_nlink(struct inode *inode)
{
 inode->i_nlink--;
}
# 1388 "include/linux/fs.h"
static inline __attribute__((always_inline)) void clear_nlink(struct inode *inode)
{
 inode->i_nlink = 0;
}

static inline __attribute__((always_inline)) void inode_dec_link_count(struct inode *inode)
{
 drop_nlink(inode);
 mark_inode_dirty(inode);
}
# 1407 "include/linux/fs.h"
static inline __attribute__((always_inline)) void inode_inc_iversion(struct inode *inode)
{
       _spin_lock(&inode->i_lock);
       inode->i_version++;
       do {__raw_spin_unlock(&(&inode->i_lock)->raw_lock); (void)0; } while (0);
}

extern void touch_atime(struct vfsmount *mnt, struct dentry *dentry);
static inline __attribute__((always_inline)) void file_accessed(struct file *file)
{
 if (!(file->f_flags & 01000000))
  touch_atime(file->f_path.mnt, file->f_path.dentry);
}

int sync_inode(struct inode *inode, struct writeback_control *wbc);

struct file_system_type {
 const char *name;
 int fs_flags;
 int (*get_sb) (struct file_system_type *, int,
         const char *, void *, struct vfsmount *);
 void (*kill_sb) (struct super_block *);
 struct module *owner;
 struct file_system_type * next;
 struct list_head fs_supers;

 struct lock_class_key s_lock_key;
 struct lock_class_key s_umount_key;

 struct lock_class_key i_lock_key;
 struct lock_class_key i_mutex_key;
 struct lock_class_key i_mutex_dir_key;
 struct lock_class_key i_alloc_sem_key;
};

extern int get_sb_bdev(struct file_system_type *fs_type,
 int flags, const char *dev_name, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
extern int get_sb_single(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
extern int get_sb_nodev(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
void generic_shutdown_super(struct super_block *sb);
void kill_block_super(struct super_block *sb);
void kill_anon_super(struct super_block *sb);
void kill_litter_super(struct super_block *sb);
void deactivate_super(struct super_block *sb);
int set_anon_super(struct super_block *s, void *data);
struct super_block *sget(struct file_system_type *type,
   int (*test)(struct super_block *,void *),
   int (*set)(struct super_block *,void *),
   void *data);
extern int get_sb_pseudo(struct file_system_type *, char *,
 const struct super_operations *ops, unsigned long,
 struct vfsmount *mnt);
extern int simple_set_mnt(struct vfsmount *mnt, struct super_block *sb);
int __put_super(struct super_block *sb);
int __put_super_and_need_restart(struct super_block *sb);
void unnamed_dev_init(void);







extern int register_filesystem(struct file_system_type *);
extern int unregister_filesystem(struct file_system_type *);
extern struct vfsmount *kern_mount_data(struct file_system_type *, void *data);

extern int may_umount_tree(struct vfsmount *);
extern int may_umount(struct vfsmount *);
extern void umount_tree(struct vfsmount *, int, struct list_head *);
extern void release_mounts(struct list_head *);
extern long do_mount(char *, char *, char *, unsigned long, void *);
extern struct vfsmount *copy_tree(struct vfsmount *, struct dentry *, int);
extern void mnt_set_mountpoint(struct vfsmount *, struct dentry *,
      struct vfsmount *);
extern struct vfsmount *collect_mounts(struct vfsmount *, struct dentry *);
extern void drop_collected_mounts(struct vfsmount *);

extern int vfs_statfs(struct dentry *, struct kstatfs *);


extern struct kobject *fs_kobj;




extern int locks_mandatory_locked(struct inode *);
extern int locks_mandatory_area(int, struct inode *, struct file *, loff_t, size_t);






static inline __attribute__((always_inline)) int __mandatory_lock(struct inode *ino)
{
 return (ino->i_mode & (0002000 | 00010)) == 0002000;
}






static inline __attribute__((always_inline)) int mandatory_lock(struct inode *ino)
{
 return ((ino)->i_sb->s_flags & (64)) && __mandatory_lock(ino);
}

static inline __attribute__((always_inline)) int locks_verify_locked(struct inode *inode)
{
 if (mandatory_lock(inode))
  return locks_mandatory_locked(inode);
 return 0;
}

extern int rw_verify_area(int, struct file *, loff_t *, size_t);

static inline __attribute__((always_inline)) int locks_verify_truncate(struct inode *inode,
        struct file *filp,
        loff_t size)
{
 if (inode->i_flock && mandatory_lock(inode))
  return locks_mandatory_area(
   2, inode, filp,
   size < inode->i_size ? size : inode->i_size,
   (size < inode->i_size ? inode->i_size - size
    : size - inode->i_size)
  );
 return 0;
}

static inline __attribute__((always_inline)) int break_lease(struct inode *inode, unsigned int mode)
{
 if (inode->i_flock)
  return __break_lease(inode, mode);
 return 0;
}



extern int do_truncate(struct dentry *, loff_t start, unsigned int time_attrs,
         struct file *filp);
extern long do_sys_open(int dfd, const char *filename, int flags,
   int mode);
extern struct file *filp_open(const char *, int, int);
extern struct file * dentry_open(struct dentry *, struct vfsmount *, int);
extern int filp_close(struct file *, fl_owner_t id);
extern char * getname(const char *);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) vfs_caches_init_early(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) vfs_caches_init(unsigned long);

extern struct kmem_cache *names_cachep;
# 1580 "include/linux/fs.h"
extern int register_blkdev(unsigned int, const char *);
extern void unregister_blkdev(unsigned int, const char *);
extern struct block_device *bdget(dev_t);
extern void bd_set_size(struct block_device *, loff_t size);
extern void bd_forget(struct inode *inode);
extern void bdput(struct block_device *);
extern struct block_device *open_by_devnum(dev_t, unsigned);
extern const struct address_space_operations def_blk_aops;



extern const struct file_operations def_blk_fops;
extern const struct file_operations def_chr_fops;
extern const struct file_operations bad_sock_fops;
extern const struct file_operations def_fifo_fops;

extern int ioctl_by_bdev(struct block_device *, unsigned, unsigned long);
extern int blkdev_ioctl(struct inode *, struct file *, unsigned, unsigned long);
extern int blkdev_driver_ioctl(struct inode *inode, struct file *file,
          struct gendisk *disk, unsigned cmd,
          unsigned long arg);
extern long compat_blkdev_ioctl(struct file *, unsigned, unsigned long);
extern int blkdev_get(struct block_device *, mode_t, unsigned);
extern int blkdev_put(struct block_device *);
extern int bd_claim(struct block_device *, void *);
extern void bd_release(struct block_device *);

extern int bd_claim_by_disk(struct block_device *, void *, struct gendisk *);
extern void bd_release_from_disk(struct block_device *, struct gendisk *);
# 1617 "include/linux/fs.h"
extern int alloc_chrdev_region(dev_t *, unsigned, unsigned, const char *);
extern int register_chrdev_region(dev_t, unsigned, const char *);
extern int register_chrdev(unsigned int, const char *,
      const struct file_operations *);
extern void unregister_chrdev(unsigned int, const char *);
extern void unregister_chrdev_region(dev_t, unsigned);
extern int chrdev_open(struct inode *, struct file *);
extern void chrdev_show(struct seq_file *,off_t);






extern const char *__bdevname(dev_t, char *buffer);
extern const char *bdevname(struct block_device *bdev, char *buffer);
extern struct block_device *lookup_bdev(const char *);
extern struct block_device *open_bdev_excl(const char *, int, void *);
extern void close_bdev_excl(struct block_device *);
extern void blkdev_show(struct seq_file *,off_t);




extern void init_special_inode(struct inode *, umode_t, dev_t);


extern void make_bad_inode(struct inode *);
extern int is_bad_inode(struct inode *);

extern const struct file_operations read_fifo_fops;
extern const struct file_operations write_fifo_fops;
extern const struct file_operations rdwr_fifo_fops;

extern int fs_may_remount_ro(struct super_block *);
# 1664 "include/linux/fs.h"
extern int check_disk_change(struct block_device *);
extern int __invalidate_device(struct block_device *);
extern int invalidate_partition(struct gendisk *, int);

extern int invalidate_inodes(struct super_block *);
unsigned long __invalidate_mapping_pages(struct address_space *mapping,
     unsigned long start, unsigned long end,
     bool be_atomic);
unsigned long invalidate_mapping_pages(struct address_space *mapping,
     unsigned long start, unsigned long end);

static inline __attribute__((always_inline)) unsigned long __attribute__((deprecated))
invalidate_inode_pages(struct address_space *mapping)
{
 return invalidate_mapping_pages(mapping, 0, ~0UL);
}

static inline __attribute__((always_inline)) void invalidate_remote_inode(struct inode *inode)
{
 if ((((inode->i_mode) & 00170000) == 0100000) || (((inode->i_mode) & 00170000) == 0040000) ||
     (((inode->i_mode) & 00170000) == 0120000))
  invalidate_mapping_pages(inode->i_mapping, 0, -1);
}
extern int invalidate_inode_pages2(struct address_space *mapping);
extern int invalidate_inode_pages2_range(struct address_space *mapping,
      unsigned long start, unsigned long end);
extern int write_inode_now(struct inode *, int);
extern int filemap_fdatawrite(struct address_space *);
extern int filemap_flush(struct address_space *);
extern int filemap_fdatawait(struct address_space *);
extern int filemap_write_and_wait(struct address_space *mapping);
extern int filemap_write_and_wait_range(struct address_space *mapping,
            loff_t lstart, loff_t lend);
extern int wait_on_page_writeback_range(struct address_space *mapping,
    unsigned long start, unsigned long end);
extern int __filemap_fdatawrite_range(struct address_space *mapping,
    loff_t start, loff_t end, int sync_mode);

extern long do_fsync(struct file *file, int datasync);
extern void sync_supers(void);
extern void sync_filesystems(int wait);
extern void __fsync_super(struct super_block *sb);
extern void emergency_sync(void);
extern void emergency_remount(void);
extern int do_remount_sb(struct super_block *sb, int flags,
    void *data, int force);

extern sector_t bmap(struct inode *, sector_t);

extern int notify_change(struct dentry *, struct iattr *);
extern int permission(struct inode *, int, struct nameidata *);
extern int generic_permission(struct inode *, int,
  int (*check_acl)(struct inode *, int));

extern int get_write_access(struct inode *);
extern int deny_write_access(struct file *);
static inline __attribute__((always_inline)) void put_write_access(struct inode * inode)
{
 atomic_dec(&inode->i_writecount);
}
static inline __attribute__((always_inline)) void allow_write_access(struct file *file)
{
 if (file)
  atomic_inc(&file->f_path.dentry->d_inode->i_writecount);
}
extern int do_pipe(int *);
extern struct file *create_read_pipe(struct file *f);
extern struct file *create_write_pipe(void);
extern void free_write_pipe(struct file *);

extern int open_namei(int dfd, const char *, int, int, struct nameidata *);
extern int may_open(struct nameidata *, int, int);

extern int kernel_read(struct file *, unsigned long, char *, unsigned long);
extern struct file * open_exec(const char *);


extern int is_subdir(struct dentry *, struct dentry *);
extern ino_t find_inode_number(struct dentry *, struct qstr *);

# 1 "include/linux/err.h" 1





# 1 "include/asm/errno.h" 1
# 7 "include/linux/err.h" 2
# 22 "include/linux/err.h"
static inline __attribute__((always_inline)) void *ERR_PTR(long error)
{
 return (void *) error;
}

static inline __attribute__((always_inline)) long PTR_ERR(const void *ptr)
{
 return (long) ptr;
}

static inline __attribute__((always_inline)) long IS_ERR(const void *ptr)
{
 return __builtin_expect(!!(((unsigned long)ptr) >= (unsigned long)-4095), 0);
}
# 1745 "include/linux/fs.h" 2


extern loff_t default_llseek(struct file *file, loff_t offset, int origin);

extern loff_t vfs_llseek(struct file *file, loff_t offset, int origin);

extern void inode_init_once(struct inode *);
extern void iput(struct inode *);
extern struct inode * igrab(struct inode *);
extern ino_t iunique(struct super_block *, ino_t);
extern int inode_needs_sync(struct inode *inode);
extern void generic_delete_inode(struct inode *inode);
extern void generic_drop_inode(struct inode *inode);

extern struct inode *ilookup5_nowait(struct super_block *sb,
  unsigned long hashval, int (*test)(struct inode *, void *),
  void *data);
extern struct inode *ilookup5(struct super_block *sb, unsigned long hashval,
  int (*test)(struct inode *, void *), void *data);
extern struct inode *ilookup(struct super_block *sb, unsigned long ino);

extern struct inode * iget5_locked(struct super_block *, unsigned long, int (*test)(struct inode *, void *), int (*set)(struct inode *, void *), void *);
extern struct inode * iget_locked(struct super_block *, unsigned long);
extern void unlock_new_inode(struct inode *);

static inline __attribute__((always_inline)) struct inode *iget(struct super_block *sb, unsigned long ino)
{
 struct inode *inode = iget_locked(sb, ino);

 if (inode && (inode->i_state & 8)) {
  sb->s_op->read_inode(inode);
  unlock_new_inode(inode);
 }

 return inode;
}

extern void __iget(struct inode * inode);
extern void clear_inode(struct inode *);
extern void destroy_inode(struct inode *);
extern struct inode *new_inode(struct super_block *);
extern int __remove_suid(struct dentry *, int);
extern int should_remove_suid(struct dentry *);
extern int remove_suid(struct dentry *);

extern void __insert_inode_hash(struct inode *, unsigned long hashval);
extern void remove_inode_hash(struct inode *);
static inline __attribute__((always_inline)) void insert_inode_hash(struct inode *inode) {
 __insert_inode_hash(inode, inode->i_ino);
}

extern struct file * get_empty_filp(void);
extern void file_move(struct file *f, struct list_head *list);
extern void file_kill(struct file *f);

struct bio;
extern void submit_bio(int, struct bio *);
extern int bdev_read_only(struct block_device *);

extern int set_blocksize(struct block_device *, int);
extern int sb_set_blocksize(struct super_block *, int);
extern int sb_min_blocksize(struct super_block *, int);
extern int sb_has_dirty_inodes(struct super_block *);

extern int generic_file_mmap(struct file *, struct vm_area_struct *);
extern int generic_file_readonly_mmap(struct file *, struct vm_area_struct *);
extern int file_read_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
int generic_write_checks(struct file *file, loff_t *pos, size_t *count, int isblk);
extern ssize_t generic_file_aio_read(struct kiocb *, const struct iovec *, unsigned long, loff_t);
extern ssize_t generic_file_aio_write(struct kiocb *, const struct iovec *, unsigned long, loff_t);
extern ssize_t generic_file_aio_write_nolock(struct kiocb *, const struct iovec *,
  unsigned long, loff_t);
extern ssize_t generic_file_direct_write(struct kiocb *, const struct iovec *,
  unsigned long *, loff_t, loff_t *, size_t, size_t);
extern ssize_t generic_file_buffered_write(struct kiocb *, const struct iovec *,
  unsigned long, loff_t, loff_t *, size_t, ssize_t);
extern ssize_t do_sync_read(struct file *filp, char *buf, size_t len, loff_t *ppos);
extern ssize_t do_sync_write(struct file *filp, const char *buf, size_t len, loff_t *ppos);
extern void do_generic_mapping_read(struct address_space *mapping,
        struct file_ra_state *, struct file *,
        loff_t *, read_descriptor_t *, read_actor_t);
extern int generic_segment_checks(const struct iovec *iov,
  unsigned long *nr_segs, size_t *count, int access_flags);


extern ssize_t generic_file_splice_read(struct file *, loff_t *,
  struct pipe_inode_info *, size_t, unsigned int);
extern ssize_t generic_file_splice_write(struct pipe_inode_info *,
  struct file *, loff_t *, size_t, unsigned int);
extern ssize_t generic_file_splice_write_nolock(struct pipe_inode_info *,
  struct file *, loff_t *, size_t, unsigned int);
extern ssize_t generic_splice_sendpage(struct pipe_inode_info *pipe,
  struct file *out, loff_t *, size_t len, unsigned int flags);
extern long do_splice_direct(struct file *in, loff_t *ppos, struct file *out,
  size_t len, unsigned int flags);

extern void
file_ra_state_init(struct file_ra_state *ra, struct address_space *mapping);
extern loff_t no_llseek(struct file *file, loff_t offset, int origin);
extern loff_t generic_file_llseek(struct file *file, loff_t offset, int origin);
extern loff_t remote_llseek(struct file *file, loff_t offset, int origin);
extern int generic_file_open(struct inode * inode, struct file * filp);
extern int nonseekable_open(struct inode * inode, struct file * filp);
# 1857 "include/linux/fs.h"
static inline __attribute__((always_inline)) int xip_truncate_page(struct address_space *mapping, loff_t from)
{
 return 0;
}


static inline __attribute__((always_inline)) void do_generic_file_read(struct file * filp, loff_t *ppos,
     read_descriptor_t * desc,
     read_actor_t actor)
{
 do_generic_mapping_read(filp->f_mapping,
    &filp->f_ra,
    filp,
    ppos,
    desc,
    actor);
}


ssize_t __blockdev_direct_IO(int rw, struct kiocb *iocb, struct inode *inode,
 struct block_device *bdev, const struct iovec *iov, loff_t offset,
 unsigned long nr_segs, get_block_t get_block, dio_iodone_t end_io,
 int lock_type);

enum {
 DIO_LOCKING = 1,
 DIO_NO_LOCKING,
 DIO_OWN_LOCKING,
};

static inline __attribute__((always_inline)) ssize_t blockdev_direct_IO(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_LOCKING);
}

static inline __attribute__((always_inline)) ssize_t blockdev_direct_IO_no_locking(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_NO_LOCKING);
}

static inline __attribute__((always_inline)) ssize_t blockdev_direct_IO_own_locking(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_OWN_LOCKING);
}


extern const struct file_operations generic_ro_fops;



extern int vfs_readlink(struct dentry *, char *, int, const char *);
extern int vfs_follow_link(struct nameidata *, const char *);
extern int page_readlink(struct dentry *, char *, int);
extern void *page_follow_link_light(struct dentry *, struct nameidata *);
extern void page_put_link(struct dentry *, struct nameidata *, void *);
extern int __page_symlink(struct inode *inode, const char *symname, int len,
  gfp_t gfp_mask);
extern int page_symlink(struct inode *inode, const char *symname, int len);
extern const struct inode_operations page_symlink_inode_operations;
extern int generic_readlink(struct dentry *, char *, int);
extern void generic_fillattr(struct inode *, struct kstat *);
extern int vfs_getattr(struct vfsmount *, struct dentry *, struct kstat *);
void inode_add_bytes(struct inode *inode, loff_t bytes);
void inode_sub_bytes(struct inode *inode, loff_t bytes);
loff_t inode_get_bytes(struct inode *inode);
void inode_set_bytes(struct inode *inode, loff_t bytes);

extern int vfs_readdir(struct file *, filldir_t, void *);

extern int vfs_stat(char *, struct kstat *);
extern int vfs_lstat(char *, struct kstat *);
extern int vfs_stat_fd(int dfd, char *, struct kstat *);
extern int vfs_lstat_fd(int dfd, char *, struct kstat *);
extern int vfs_fstat(unsigned int, struct kstat *);

extern int vfs_ioctl(struct file *, unsigned int, unsigned int, unsigned long);

extern void get_filesystem(struct file_system_type *fs);
extern void put_filesystem(struct file_system_type *fs);
extern struct file_system_type *get_fs_type(const char *name);
extern struct super_block *get_super(struct block_device *);
extern struct super_block *user_get_super(dev_t);
extern void drop_super(struct super_block *sb);

extern int dcache_dir_open(struct inode *, struct file *);
extern int dcache_dir_close(struct inode *, struct file *);
extern loff_t dcache_dir_lseek(struct file *, loff_t, int);
extern int dcache_readdir(struct file *, void *, filldir_t);
extern int simple_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int simple_statfs(struct dentry *, struct kstatfs *);
extern int simple_link(struct dentry *, struct inode *, struct dentry *);
extern int simple_unlink(struct inode *, struct dentry *);
extern int simple_rmdir(struct inode *, struct dentry *);
extern int simple_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);
extern int simple_sync_file(struct file *, struct dentry *, int);
extern int simple_empty(struct dentry *);
extern int simple_readpage(struct file *file, struct page *page);
extern int simple_prepare_write(struct file *file, struct page *page,
   unsigned offset, unsigned to);
extern int simple_write_begin(struct file *file, struct address_space *mapping,
   loff_t pos, unsigned len, unsigned flags,
   struct page **pagep, void **fsdata);
extern int simple_write_end(struct file *file, struct address_space *mapping,
   loff_t pos, unsigned len, unsigned copied,
   struct page *page, void *fsdata);

extern struct dentry *simple_lookup(struct inode *, struct dentry *, struct nameidata *);
extern ssize_t generic_read_dir(struct file *, char *, size_t, loff_t *);
extern const struct file_operations simple_dir_operations;
extern const struct inode_operations simple_dir_inode_operations;
struct tree_descr { char *name; const struct file_operations *ops; int mode; };
struct dentry *d_alloc_name(struct dentry *, const char *);
extern int simple_fill_super(struct super_block *, int, struct tree_descr *);
extern int simple_pin_fs(struct file_system_type *, struct vfsmount **mount, int *count);
extern void simple_release_fs(struct vfsmount **mount, int *count);

extern ssize_t simple_read_from_buffer(void *, size_t, loff_t *, const void *, size_t);


extern int buffer_migrate_page(struct address_space *,
    struct page *, struct page *);




extern int inode_change_ok(struct inode *, struct iattr *);
extern int inode_setattr(struct inode *, struct iattr *);

extern void file_update_time(struct file *file);

static inline __attribute__((always_inline)) ino_t parent_ino(struct dentry *dentry)
{
 ino_t res;

 _spin_lock(&dentry->d_lock);
 res = dentry->d_parent->d_inode->i_ino;
 do {__raw_spin_unlock(&(&dentry->d_lock)->raw_lock); (void)0; } while (0);
 return res;
}


extern int unshare_files(void);







struct simple_transaction_argresp {
 ssize_t size;
 char data[0];
};



char *simple_transaction_get(struct file *file, const char *buf,
    size_t size);
ssize_t simple_transaction_read(struct file *file, char *buf,
    size_t size, loff_t *pos);
int simple_transaction_release(struct inode *inode, struct file *file);

static inline __attribute__((always_inline)) void simple_transaction_set(struct file *file, size_t n)
{
 struct simple_transaction_argresp *ar = file->private_data;

 do { if (__builtin_expect(!!(n > (((1UL) << 12) - sizeof(struct simple_transaction_argresp))), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/fs.h"), "i" (2035), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0);





 asm volatile("mfence":::"memory");
 ar->size = n;
}
# 2075 "include/linux/fs.h"
static inline __attribute__((always_inline)) void __attribute__((format(printf, 1, 2)))
__simple_attr_check_format(const char *fmt, ...)
{

}

int simple_attr_open(struct inode *inode, struct file *file,
       u64 (*get)(void *), void (*set)(void *, u64),
       const char *fmt);
int simple_attr_close(struct inode *inode, struct file *file);
ssize_t simple_attr_read(struct file *file, char *buf,
    size_t len, loff_t *ppos);
ssize_t simple_attr_write(struct file *file, const char *buf,
     size_t len, loff_t *ppos);
# 2102 "include/linux/fs.h"
static inline __attribute__((always_inline)) char *alloc_secdata(void)
{
 return (char *)1;
}

static inline __attribute__((always_inline)) void free_secdata(void *secdata)
{ }


struct ctl_table;
int proc_nr_files(struct ctl_table *table, int write, struct file *filp,
    void *buffer, size_t *lenp, loff_t *ppos);
# 10 "block/as-iosched.c" 2
# 1 "include/linux/blkdev.h" 1





# 1 "include/linux/sched.h" 1
# 44 "include/linux/sched.h"
struct sched_param {
 int sched_priority;
};

# 1 "include/asm/param.h" 1
# 49 "include/linux/sched.h" 2





# 1 "include/linux/timex.h" 1
# 100 "include/linux/timex.h"
struct timex {
 unsigned int modes;
 long offset;
 long freq;
 long maxerror;
 long esterror;
 int status;
 long constant;
 long precision;
 long tolerance;


 struct timeval time;
 long tick;

 long ppsfreq;
 long jitter;
 int shift;
 long stabil;
 long jitcnt;
 long calcnt;
 long errcnt;
 long stbcnt;

 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
};
# 188 "include/linux/timex.h"
# 1 "include/asm/timex.h" 1




# 1 "include/asm/processor.h" 1
# 6 "include/asm/timex.h" 2
# 1 "include/asm/tsc.h" 1






# 1 "include/asm/processor.h" 1
# 8 "include/asm/tsc.h" 2







typedef unsigned long long cycles_t;

extern unsigned int cpu_khz;
extern unsigned int tsc_khz;

static inline __attribute__((always_inline)) cycles_t get_cycles(void)
{
 unsigned long long ret = 0;







 do { unsigned int __a,__d; __asm__ __volatile__("rdtsc" : "=a" (__a), "=d" (__d)); (ret) = ((unsigned long)__a) | (((unsigned long)__d)<<32); } while(0);

 return ret;
}


static inline __attribute__((always_inline)) __attribute__((always_inline)) cycles_t get_cycles_sync(void)
{
 unsigned long long ret;
 unsigned eax, edx;





 asm volatile ("661:\n\t" ".byte 0x66,0x66,0x90\n" "\n662:\n" ".section .altinstructions,\"a\"\n" "  .align 8\n" "  .quad 661b\n" "  .quad 663f\n" "  .byte %c[feat]\n" "  .byte 662b-661b\n" "  .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" ".byte 0x0f,0x01,0xf9" "\n664:\n" ".previous" : "=a" (eax), "=d" (edx) : [feat] "i" ((1*32+27)), "a" (0U), "d" (0U) : "ecx", "memory")

                                              ;
 ret = (((unsigned long long)edx) << 32) | ((unsigned long long)eax);
 if (ret)
  return ret;





 asm volatile ("661:\n\t" "cpuid" "\n662:\n" ".section .altinstructions,\"a\"\n" "  .align 8\n" "  .quad 661b\n" "  .quad 663f\n" "  .byte %c[feat]\n" "  .byte 662b-661b\n" "  .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" ".byte 0x66,0x90\n" "\n664:\n" ".previous" : "=a" (eax) : [feat] "i" ((3*32+15)), "0" (1) : "ebx","ecx","edx","memory")
                                                      ;
 do { unsigned int __a,__d; __asm__ __volatile__("rdtsc" : "=a" (__a), "=d" (__d)); (ret) = ((unsigned long)__a) | (((unsigned long)__d)<<32); } while(0);

 return ret;
}

extern void tsc_init(void);
extern void mark_tsc_unstable(char *reason);
extern int unsynchronized_tsc(void);
extern void init_tsc_clocksource(void);
int check_tsc_unstable(void);





extern void check_tsc_sync_source(int cpu);
extern void check_tsc_sync_target(void);


extern void tsc_calibrate(void);
# 7 "include/asm/timex.h" 2
# 15 "include/asm/timex.h"
extern int read_current_timer(unsigned long *timer_value);
# 189 "include/linux/timex.h" 2






extern unsigned long tick_usec;
extern unsigned long tick_nsec;
extern int tickadj;




extern int time_status;
extern long time_maxerror;
extern long time_esterror;

extern long time_freq;

extern long time_adjust;

extern void ntp_clear(void);





static inline __attribute__((always_inline)) int ntp_synced(void)
{
 return !(time_status & 0x0040);
}
# 238 "include/linux/timex.h"
extern u64 current_tick_length(void);

extern void second_overflow(void);
extern void update_ntp_one_tick(void);
extern int do_adjtimex(struct timex *);
# 55 "include/linux/sched.h" 2
# 1 "include/linux/jiffies.h" 1



# 1 "include/linux/calc64.h" 1




# 1 "include/asm/div64.h" 1
# 56 "include/asm/div64.h"
# 1 "include/asm-generic/div64.h" 1
# 33 "include/asm-generic/div64.h"
static inline __attribute__((always_inline)) uint64_t div64_64(uint64_t dividend, uint64_t divisor)
{
 return dividend / divisor;
}
# 57 "include/asm/div64.h" 2
# 6 "include/linux/calc64.h" 2
# 20 "include/linux/calc64.h"
static inline __attribute__((always_inline)) unsigned long do_div_llr(const long long dividend,
           const long divisor, long *remainder)
{
 u64 result = dividend;

 *(remainder) = ({ uint32_t __base = (divisor); uint32_t __rem; __rem = ((uint64_t)(result)) % __base; (result) = ((uint64_t)(result)) / __base; __rem; });
 return (unsigned long) result;
}







static inline __attribute__((always_inline)) long div_long_long_rem_signed(const long long dividend,
         const long divisor, long *remainder)
{
 long res;

 if (__builtin_expect(!!(dividend < 0), 0)) {
  res = -do_div_llr((-dividend), divisor, remainder);
  *remainder = -(*remainder);
 } else
  res = do_div_llr((dividend), divisor, remainder);

 return res;
}
# 5 "include/linux/jiffies.h" 2
# 81 "include/linux/jiffies.h"
extern u64 __attribute__((section(".data"))) jiffies_64;
extern unsigned long volatile __attribute__((section(".data"))) jiffies;




static inline __attribute__((always_inline)) u64 get_jiffies_64(void)
{
 return (u64)jiffies;
}
# 157 "include/linux/jiffies.h"
extern unsigned long preset_lpj;
# 270 "include/linux/jiffies.h"
extern unsigned int jiffies_to_msecs(const unsigned long j);
extern unsigned int jiffies_to_usecs(const unsigned long j);
extern unsigned long msecs_to_jiffies(const unsigned int m);
extern unsigned long usecs_to_jiffies(const unsigned int u);
extern unsigned long timespec_to_jiffies(const struct timespec *value);
extern void jiffies_to_timespec(const unsigned long jiffies,
    struct timespec *value);
extern unsigned long timeval_to_jiffies(const struct timeval *value);
extern void jiffies_to_timeval(const unsigned long jiffies,
          struct timeval *value);
extern clock_t jiffies_to_clock_t(long x);
extern unsigned long clock_t_to_jiffies(unsigned long x);
extern u64 jiffies_64_to_clock_t(u64 x);
extern u64 nsec_to_clock_t(u64 x);
# 56 "include/linux/sched.h" 2
# 1 "include/linux/rbtree.h" 1
# 100 "include/linux/rbtree.h"
struct rb_node
{
 unsigned long rb_parent_color;


 struct rb_node *rb_right;
 struct rb_node *rb_left;
} __attribute__((aligned(sizeof(long))));


struct rb_root
{
 struct rb_node *rb_node;
};
# 123 "include/linux/rbtree.h"
static inline __attribute__((always_inline)) void rb_set_parent(struct rb_node *rb, struct rb_node *p)
{
 rb->rb_parent_color = (rb->rb_parent_color & 3) | (unsigned long)p;
}
static inline __attribute__((always_inline)) void rb_set_color(struct rb_node *rb, int color)
{
 rb->rb_parent_color = (rb->rb_parent_color & ~1) | color;
}
# 139 "include/linux/rbtree.h"
extern void rb_insert_color(struct rb_node *, struct rb_root *);
extern void rb_erase(struct rb_node *, struct rb_root *);


extern struct rb_node *rb_next(struct rb_node *);
extern struct rb_node *rb_prev(struct rb_node *);
extern struct rb_node *rb_first(struct rb_root *);
extern struct rb_node *rb_last(struct rb_root *);


extern void rb_replace_node(struct rb_node *victim, struct rb_node *new,
       struct rb_root *root);

static inline __attribute__((always_inline)) void rb_link_node(struct rb_node * node, struct rb_node * parent,
    struct rb_node ** rb_link)
{
 node->rb_parent_color = (unsigned long )parent;
 node->rb_left = node->rb_right = ((void *)0);

 *rb_link = node;
}
# 57 "include/linux/sched.h" 2




# 1 "include/linux/mm_types.h" 1



# 1 "include/linux/auxvec.h" 1



# 1 "include/asm/auxvec.h" 1
# 5 "include/linux/auxvec.h" 2
# 5 "include/linux/mm_types.h" 2







# 1 "include/linux/completion.h" 1
# 13 "include/linux/completion.h"
struct completion {
 unsigned int done;
 wait_queue_head_t wait;
};
# 39 "include/linux/completion.h"
static inline __attribute__((always_inline)) void init_completion(struct completion *x)
{
 x->done = 0;
 init_waitqueue_head(&x->wait);
}

extern void wait_for_completion(struct completion *);
extern int wait_for_completion_interruptible(struct completion *x);
extern unsigned long wait_for_completion_timeout(struct completion *x,
         unsigned long timeout);
extern unsigned long wait_for_completion_interruptible_timeout(
   struct completion *x, unsigned long timeout);

extern void complete(struct completion *);
extern void complete_all(struct completion *);
# 13 "include/linux/mm_types.h" 2
# 1 "include/asm/page.h" 1
# 14 "include/linux/mm_types.h" 2
# 1 "include/asm/mmu.h" 1
# 13 "include/asm/mmu.h"
typedef struct {
 void *ldt;

 rwlock_t ldtlock;

 int size;
 struct mutex lock;
 void *vdso;
} mm_context_t;
# 15 "include/linux/mm_types.h" 2






struct address_space;


typedef atomic_long_t mm_counter_t;
# 36 "include/linux/mm_types.h"
struct page {
 unsigned long flags;

 atomic_t _count;
 union {
  atomic_t _mapcount;



  unsigned int inuse;
 };
 union {
     struct {
  unsigned long private;






  struct address_space *mapping;






     };

     spinlock_t ptl;

     struct kmem_cache *slab;
     struct page *first_page;
 };
 union {
  unsigned long index;
  void *freelist;
 };
 struct list_head lru;
# 91 "include/linux/mm_types.h"
};







struct vm_area_struct {
 struct mm_struct * vm_mm;
 unsigned long vm_start;
 unsigned long vm_end;



 struct vm_area_struct *vm_next;

 pgprot_t vm_page_prot;
 unsigned long vm_flags;

 struct rb_node vm_rb;







 union {
  struct {
   struct list_head list;
   void *parent;
   struct vm_area_struct *head;
  } vm_set;

  struct raw_prio_tree_node prio_tree_node;
 } shared;







 struct list_head anon_vma_node;
 struct anon_vma *anon_vma;


 struct vm_operations_struct * vm_ops;


 unsigned long vm_pgoff;

 struct file * vm_file;
 void * vm_private_data;
 unsigned long vm_truncate_count;





 struct mempolicy *vm_policy;

};

struct mm_struct {
 struct vm_area_struct * mmap;
 struct rb_root mm_rb;
 struct vm_area_struct * mmap_cache;
 unsigned long (*get_unmapped_area) (struct file *filp,
    unsigned long addr, unsigned long len,
    unsigned long pgoff, unsigned long flags);
 void (*unmap_area) (struct mm_struct *mm, unsigned long addr);
 unsigned long mmap_base;
 unsigned long task_size;
 unsigned long cached_hole_size;
 unsigned long free_area_cache;
 pgd_t * pgd;
 atomic_t mm_users;
 atomic_t mm_count;
 int map_count;
 struct rw_semaphore mmap_sem;
 spinlock_t page_table_lock;

 struct list_head mmlist;







 mm_counter_t _file_rss;
 mm_counter_t _anon_rss;

 unsigned long hiwater_rss;
 unsigned long hiwater_vm;

 unsigned long total_vm, locked_vm, shared_vm, exec_vm;
 unsigned long stack_vm, reserved_vm, def_flags, nr_ptes;
 unsigned long start_code, end_code, start_data, end_data;
 unsigned long start_brk, brk, start_stack;
 unsigned long arg_start, arg_end, env_start, env_end;

 unsigned long saved_auxv[(2*(2 + (14 + 2) + 1))];

 cpumask_t cpu_vm_mask;


 mm_context_t context;
# 209 "include/linux/mm_types.h"
 unsigned int faultstamp;
 unsigned int token_priority;
 unsigned int last_interval;

 unsigned long flags;


 int core_waiters;
 struct completion *core_startup_done, core_done;


 rwlock_t ioctx_list_lock;
 struct kioctx *ioctx_list;
};
# 62 "include/linux/sched.h" 2

# 1 "include/asm/system.h" 1
# 64 "include/linux/sched.h" 2
# 1 "include/asm/semaphore.h" 1
# 65 "include/linux/sched.h" 2
# 1 "include/asm/page.h" 1
# 66 "include/linux/sched.h" 2
# 1 "include/asm/ptrace.h" 1




# 1 "include/asm/ptrace-abi.h" 1
# 6 "include/asm/ptrace.h" 2
# 71 "include/asm/ptrace.h"
struct pt_regs {
 unsigned long r15;
 unsigned long r14;
 unsigned long r13;
 unsigned long r12;
 unsigned long rbp;
 unsigned long rbx;

 unsigned long r11;
 unsigned long r10;
 unsigned long r9;
 unsigned long r8;
 unsigned long rax;
 unsigned long rcx;
 unsigned long rdx;
 unsigned long rsi;
 unsigned long rdi;
 unsigned long orig_rax;


 unsigned long rip;
 unsigned long cs;
 unsigned long eflags;
 unsigned long rsp;
 unsigned long ss;

};
# 108 "include/asm/ptrace.h"
extern unsigned long profile_pc(struct pt_regs *regs);
void signal_fault(struct pt_regs *regs, void *frame, char *where);

struct task_struct;

extern unsigned long
convert_rip_to_linear(struct task_struct *child, struct pt_regs *regs);

enum {
 EF_CF = 0x00000001,
 EF_PF = 0x00000004,
 EF_AF = 0x00000010,
 EF_ZF = 0x00000040,
 EF_SF = 0x00000080,
 EF_TF = 0x00000100,
 EF_IE = 0x00000200,
 EF_DF = 0x00000400,
 EF_OF = 0x00000800,
 EF_IOPL = 0x00003000,
 EF_IOPL_RING0 = 0x00000000,
 EF_IOPL_RING1 = 0x00001000,
 EF_IOPL_RING2 = 0x00002000,
 EF_NT = 0x00004000,
 EF_RF = 0x00010000,
 EF_VM = 0x00020000,
 EF_AC = 0x00040000,
 EF_VIF = 0x00080000,
 EF_VIP = 0x00100000,
 EF_ID = 0x00200000,
};
# 67 "include/linux/sched.h" 2
# 1 "include/asm/cputime.h" 1
# 1 "include/asm-generic/cputime.h" 1






typedef unsigned long cputime_t;
# 23 "include/asm-generic/cputime.h"
typedef u64 cputime64_t;
# 1 "include/asm/cputime.h" 2
# 68 "include/linux/sched.h" 2


# 1 "include/linux/sem.h" 1



# 1 "include/linux/ipc.h" 1
# 9 "include/linux/ipc.h"
struct ipc_perm
{
 __kernel_key_t key;
 __kernel_uid_t uid;
 __kernel_gid_t gid;
 __kernel_uid_t cuid;
 __kernel_gid_t cgid;
 __kernel_mode_t mode;
 unsigned short seq;
};


# 1 "include/asm/ipcbuf.h" 1
# 14 "include/asm/ipcbuf.h"
struct ipc64_perm
{
 __kernel_key_t key;
 __kernel_uid32_t uid;
 __kernel_gid32_t gid;
 __kernel_uid32_t cuid;
 __kernel_gid32_t cgid;
 __kernel_mode_t mode;
 unsigned short __pad1;
 unsigned short seq;
 unsigned short __pad2;
 unsigned long __unused1;
 unsigned long __unused2;
};
# 22 "include/linux/ipc.h" 2
# 57 "include/linux/ipc.h"
struct ipc_kludge {
 struct msgbuf *msgp;
 long msgtyp;
};
# 88 "include/linux/ipc.h"
struct kern_ipc_perm
{
 spinlock_t lock;
 int deleted;
 int id;
 key_t key;
 uid_t uid;
 gid_t gid;
 uid_t cuid;
 gid_t cgid;
 mode_t mode;
 unsigned long seq;
 void *security;
};

struct ipc_ids;
struct ipc_namespace {
 struct kref kref;
 struct ipc_ids *ids[3];

 int sem_ctls[4];
 int used_sems;

 int msg_ctlmax;
 int msg_ctlmnb;
 int msg_ctlmni;
 atomic_t msg_bytes;
 atomic_t msg_hdrs;

 size_t shm_ctlmax;
 size_t shm_ctlall;
 int shm_ctlmni;
 int shm_tot;
};

extern struct ipc_namespace init_ipc_ns;



extern void free_ipc_ns(struct kref *kref);
extern struct ipc_namespace *copy_ipcs(unsigned long flags,
      struct ipc_namespace *ns);
# 139 "include/linux/ipc.h"
static inline __attribute__((always_inline)) struct ipc_namespace *get_ipc_ns(struct ipc_namespace *ns)
{

 if (ns)
  kref_get(&ns->kref);

 return ns;
}

static inline __attribute__((always_inline)) void put_ipc_ns(struct ipc_namespace *ns)
{

 kref_put(&ns->kref, free_ipc_ns);

}
# 5 "include/linux/sem.h" 2
# 23 "include/linux/sem.h"
struct semid_ds {
 struct ipc_perm sem_perm;
 __kernel_time_t sem_otime;
 __kernel_time_t sem_ctime;
 struct sem *sem_base;
 struct sem_queue *sem_pending;
 struct sem_queue **sem_pending_last;
 struct sem_undo *undo;
 unsigned short sem_nsems;
};


# 1 "include/asm/sembuf.h" 1
# 13 "include/asm/sembuf.h"
struct semid64_ds {
 struct ipc64_perm sem_perm;
 __kernel_time_t sem_otime;
 unsigned long __unused1;
 __kernel_time_t sem_ctime;
 unsigned long __unused2;
 unsigned long sem_nsems;
 unsigned long __unused3;
 unsigned long __unused4;
};
# 36 "include/linux/sem.h" 2


struct sembuf {
 unsigned short sem_num;
 short sem_op;
 short sem_flg;
};


union semun {
 int val;
 struct semid_ds *buf;
 unsigned short *array;
 struct seminfo *__buf;
 void *__pad;
};

struct seminfo {
 int semmap;
 int semmni;
 int semmns;
 int semmnu;
 int semmsl;
 int semopm;
 int semume;
 int semusz;
 int semvmx;
 int semaem;
};
# 80 "include/linux/sem.h"
# 1 "include/asm/atomic.h" 1
# 81 "include/linux/sem.h" 2

struct task_struct;


struct sem {
 int semval;
 int sempid;
};


struct sem_array {
 struct kern_ipc_perm sem_perm;
 time_t sem_otime;
 time_t sem_ctime;
 struct sem *sem_base;
 struct sem_queue *sem_pending;
 struct sem_queue **sem_pending_last;
 struct sem_undo *undo;
 unsigned long sem_nsems;
};


struct sem_queue {
 struct sem_queue * next;
 struct sem_queue ** prev;
 struct task_struct* sleeper;
 struct sem_undo * undo;
 int pid;
 int status;
 struct sem_array * sma;
 int id;
 struct sembuf * sops;
 int nsops;
 int alter;
};




struct sem_undo {
 struct sem_undo * proc_next;
 struct sem_undo * id_next;
 int semid;
 short * semadj;
};




struct sem_undo_list {
 atomic_t refcnt;
 spinlock_t lock;
 struct sem_undo *proc_list;
};

struct sysv_sem {
 struct sem_undo_list *undo_list;
};



extern int copy_semundo(unsigned long clone_flags, struct task_struct *tsk);
extern void exit_sem(struct task_struct *tsk);
# 71 "include/linux/sched.h" 2
# 1 "include/linux/signal.h" 1



# 1 "include/asm/signal.h" 1
# 10 "include/asm/signal.h"
struct siginfo;
# 28 "include/asm/signal.h"
typedef unsigned long old_sigset_t;

typedef struct {
 unsigned long sig[(64 / 64)];
} sigset_t;
# 120 "include/asm/signal.h"
# 1 "include/asm-generic/signal.h" 1
# 17 "include/asm-generic/signal.h"
typedef void __signalfn_t(int);
typedef __signalfn_t *__sighandler_t;

typedef void __restorefn_t(void);
typedef __restorefn_t *__sigrestore_t;
# 121 "include/asm/signal.h" 2
# 162 "include/asm/signal.h"
struct sigaction {
 __sighandler_t sa_handler;
 unsigned long sa_flags;
 __sigrestore_t sa_restorer;
 sigset_t sa_mask;
};

struct k_sigaction {
 struct sigaction sa;
};



typedef struct sigaltstack {
 void *ss_sp;
 int ss_flags;
 size_t ss_size;
} stack_t;
# 5 "include/linux/signal.h" 2
# 1 "include/asm/siginfo.h" 1







# 1 "include/asm-generic/siginfo.h" 1






typedef union sigval {
 int sival_int;
 void *sival_ptr;
} sigval_t;
# 40 "include/asm-generic/siginfo.h"
typedef struct siginfo {
 int si_signo;
 int si_errno;
 int si_code;

 union {
  int _pad[((128 - (4 * sizeof(int))) / sizeof(int))];


  struct {
   pid_t _pid;
   uid_t _uid;
  } _kill;


  struct {
   timer_t _tid;
   int _overrun;
   char _pad[sizeof( uid_t) - sizeof(int)];
   sigval_t _sigval;
   int _sys_private;
  } _timer;


  struct {
   pid_t _pid;
   uid_t _uid;
   sigval_t _sigval;
  } _rt;


  struct {
   pid_t _pid;
   uid_t _uid;
   int _status;
   clock_t _utime;
   clock_t _stime;
  } _sigchld;


  struct {
   void *_addr;



  } _sigfault;


  struct {
   long _band;
   int _fd;
  } _sigpoll;
 } _sifields;
} siginfo_t;
# 251 "include/asm-generic/siginfo.h"
typedef struct sigevent {
 sigval_t sigev_value;
 int sigev_signo;
 int sigev_notify;
 union {
  int _pad[((64 - (sizeof(int) * 2 + sizeof(sigval_t))) / sizeof(int))];
   int _tid;

  struct {
   void (*_function)(sigval_t);
   void *_attribute;
  } _sigev_thread;
 } _sigev_un;
} sigevent_t;







struct siginfo;
void do_schedule_next_timer(struct siginfo *info);





static inline __attribute__((always_inline)) void copy_siginfo(struct siginfo *to, struct siginfo *from)
{
 if (from->si_code < 0)
  memcpy(to, from, sizeof(*to));
 else

  memcpy(to, from, (4 * sizeof(int)) + sizeof(from->_sifields._sigchld));
}



extern int copy_siginfo_to_user(struct siginfo *to, struct siginfo *from);
# 9 "include/asm/siginfo.h" 2
# 6 "include/linux/signal.h" 2
# 14 "include/linux/signal.h"
struct sigqueue {
 struct list_head list;
 int flags;
 siginfo_t info;
 struct user_struct *user;
};




struct sigpending {
 struct list_head list;
 sigset_t signal;
};
# 38 "include/linux/signal.h"
static inline __attribute__((always_inline)) void sigaddset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  set->sig[0] |= 1UL << sig;
 else
  set->sig[sig / 64] |= 1UL << (sig % 64);
}

static inline __attribute__((always_inline)) void sigdelset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  set->sig[0] &= ~(1UL << sig);
 else
  set->sig[sig / 64] &= ~(1UL << (sig % 64));
}

static inline __attribute__((always_inline)) int sigismember(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  return 1 & (set->sig[0] >> sig);
 else
  return 1 & (set->sig[sig / 64] >> (sig % 64));
}

static inline __attribute__((always_inline)) int sigfindinword(unsigned long word)
{
 return ffz(~word);
}



static inline __attribute__((always_inline)) int sigisemptyset(sigset_t *set)
{
 extern void _NSIG_WORDS_is_unsupported_size(void);
 switch ((64 / 64)) {
 case 4:
  return (set->sig[3] | set->sig[2] |
   set->sig[1] | set->sig[0]) == 0;
 case 2:
  return (set->sig[1] | set->sig[0]) == 0;
 case 1:
  return set->sig[0] == 0;
 default:
  _NSIG_WORDS_is_unsupported_size();
  return 0;
 }
}
# 119 "include/linux/signal.h"
static inline __attribute__((always_inline)) void sigorsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) | (b3)); r->sig[2] = ((a2) | (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) | (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) | (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline __attribute__((always_inline)) void sigandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & (b3)); r->sig[2] = ((a2) & (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline __attribute__((always_inline)) void signandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & ~(b3)); r->sig[2] = ((a2) & ~(b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & ~(b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & ~(b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }
# 149 "include/linux/signal.h"
static inline __attribute__((always_inline)) void signotset(sigset_t *set) { extern void _NSIG_WORDS_is_unsupported_size(void); switch ((64 / 64)) { case 4: set->sig[3] = (~(set->sig[3])); set->sig[2] = (~(set->sig[2])); case 2: set->sig[1] = (~(set->sig[1])); case 1: set->sig[0] = (~(set->sig[0])); break; default: _NSIG_WORDS_is_unsupported_size(); } }




static inline __attribute__((always_inline)) void sigemptyset(sigset_t *set)
{
 switch ((64 / 64)) {
 default:
  memset(set, 0, sizeof(sigset_t));
  break;
 case 2: set->sig[1] = 0;
 case 1: set->sig[0] = 0;
  break;
 }
}

static inline __attribute__((always_inline)) void sigfillset(sigset_t *set)
{
 switch ((64 / 64)) {
 default:
  memset(set, -1, sizeof(sigset_t));
  break;
 case 2: set->sig[1] = -1;
 case 1: set->sig[0] = -1;
  break;
 }
}



static inline __attribute__((always_inline)) void sigaddsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] |= mask;
}

static inline __attribute__((always_inline)) void sigdelsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] &= ~mask;
}

static inline __attribute__((always_inline)) int sigtestsetmask(sigset_t *set, unsigned long mask)
{
 return (set->sig[0] & mask) != 0;
}

static inline __attribute__((always_inline)) void siginitset(sigset_t *set, unsigned long mask)
{
 set->sig[0] = mask;
 switch ((64 / 64)) {
 default:
  memset(&set->sig[1], 0, sizeof(long)*((64 / 64)-1));
  break;
 case 2: set->sig[1] = 0;
 case 1: ;
 }
}

static inline __attribute__((always_inline)) void siginitsetinv(sigset_t *set, unsigned long mask)
{
 set->sig[0] = ~mask;
 switch ((64 / 64)) {
 default:
  memset(&set->sig[1], -1, sizeof(long)*((64 / 64)-1));
  break;
 case 2: set->sig[1] = -1;
 case 1: ;
 }
}



static inline __attribute__((always_inline)) void init_sigpending(struct sigpending *sig)
{
 sigemptyset(&sig->signal);
 INIT_LIST_HEAD(&sig->list);
}

extern void flush_sigqueue(struct sigpending *queue);


static inline __attribute__((always_inline)) int valid_signal(unsigned long sig)
{
 return sig <= 64 ? 1 : 0;
}

extern int next_signal(struct sigpending *pending, sigset_t *mask);
extern int group_send_sig_info(int sig, struct siginfo *info, struct task_struct *p);
extern int __group_send_sig_info(int, struct siginfo *, struct task_struct *);
extern long do_sigpending(void *, unsigned long);
extern int sigprocmask(int, sigset_t *, sigset_t *);
extern int show_unhandled_signals;

struct pt_regs;
extern int get_signal_to_deliver(siginfo_t *info, struct k_sigaction *return_ka, struct pt_regs *regs, void *cookie);

extern struct kmem_cache *sighand_cachep;

int unhandled_signal(struct task_struct *tsk, int sig);
# 72 "include/linux/sched.h" 2
# 1 "include/linux/securebits.h" 1





extern unsigned securebits;
# 73 "include/linux/sched.h" 2
# 1 "include/linux/fs_struct.h" 1



struct dentry;
struct vfsmount;

struct fs_struct {
 atomic_t count;
 rwlock_t lock;
 int umask;
 struct dentry * root, * pwd, * altroot;
 struct vfsmount * rootmnt, * pwdmnt, * altrootmnt;
};







extern struct kmem_cache *fs_cachep;

extern void exit_fs(struct task_struct *);
extern void set_fs_altroot(void);
extern void set_fs_root(struct fs_struct *, struct vfsmount *, struct dentry *);
extern void set_fs_pwd(struct fs_struct *, struct vfsmount *, struct dentry *);
extern struct fs_struct *copy_fs_struct(struct fs_struct *);
extern void put_fs_struct(struct fs_struct *);
# 74 "include/linux/sched.h" 2





# 1 "include/linux/proportions.h" 1
# 12 "include/linux/proportions.h"
# 1 "include/linux/percpu_counter.h" 1
# 18 "include/linux/percpu_counter.h"
struct percpu_counter {
 spinlock_t lock;
 s64 count;

 struct list_head list;

 s32 *counters;
};







int percpu_counter_init(struct percpu_counter *fbc, s64 amount);
int percpu_counter_init_irq(struct percpu_counter *fbc, s64 amount);
void percpu_counter_destroy(struct percpu_counter *fbc);
void percpu_counter_set(struct percpu_counter *fbc, s64 amount);
void __percpu_counter_add(struct percpu_counter *fbc, s64 amount, s32 batch);
s64 __percpu_counter_sum(struct percpu_counter *fbc);

static inline __attribute__((always_inline)) void percpu_counter_add(struct percpu_counter *fbc, s64 amount)
{
 __percpu_counter_add(fbc, amount, (32*2));
}

static inline __attribute__((always_inline)) s64 percpu_counter_sum_positive(struct percpu_counter *fbc)
{
 s64 ret = __percpu_counter_sum(fbc);
 return ret < 0 ? 0 : ret;
}

static inline __attribute__((always_inline)) s64 percpu_counter_sum(struct percpu_counter *fbc)
{
 return __percpu_counter_sum(fbc);
}

static inline __attribute__((always_inline)) s64 percpu_counter_read(struct percpu_counter *fbc)
{
 return fbc->count;
}






static inline __attribute__((always_inline)) s64 percpu_counter_read_positive(struct percpu_counter *fbc)
{
 s64 ret = fbc->count;

 __asm__ __volatile__("": : :"memory");
 if (ret >= 0)
  return ret;
 return 1;
}
# 132 "include/linux/percpu_counter.h"
static inline __attribute__((always_inline)) void percpu_counter_inc(struct percpu_counter *fbc)
{
 percpu_counter_add(fbc, 1);
}

static inline __attribute__((always_inline)) void percpu_counter_dec(struct percpu_counter *fbc)
{
 percpu_counter_add(fbc, -1);
}

static inline __attribute__((always_inline)) void percpu_counter_sub(struct percpu_counter *fbc, s64 amount)
{
 percpu_counter_add(fbc, -amount);
}
# 13 "include/linux/proportions.h" 2



struct prop_global {





 int shift;






 struct percpu_counter events;
};






struct prop_descriptor {
 int index;
 struct prop_global pg[2];
 struct mutex mutex;
};

int prop_descriptor_init(struct prop_descriptor *pd, int shift);
void prop_change_shift(struct prop_descriptor *pd, int new_shift);





struct prop_local_percpu {



 struct percpu_counter events;




 int shift;
 unsigned long period;
 spinlock_t lock;
};

int prop_local_init_percpu(struct prop_local_percpu *pl);
void prop_local_destroy_percpu(struct prop_local_percpu *pl);
void __prop_inc_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl);
void prop_fraction_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl,
  long *numerator, long *denominator);

static inline __attribute__((always_inline))
void prop_inc_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl)
{
 unsigned long flags;

 do { do { (flags) = __raw_local_irq_save(); } while (0); do { } while (0); } while (0);
 __prop_inc_percpu(pd, pl);
 do { if (raw_irqs_disabled_flags(flags)) { raw_local_irq_restore(flags); do { } while (0); } else { do { } while (0); raw_local_irq_restore(flags); } } while (0);
}





struct prop_local_single {



 unsigned long events;





 int shift;
 unsigned long period;
 spinlock_t lock;
};





int prop_local_init_single(struct prop_local_single *pl);
void prop_local_destroy_single(struct prop_local_single *pl);
void __prop_inc_single(struct prop_descriptor *pd, struct prop_local_single *pl);
void prop_fraction_single(struct prop_descriptor *pd, struct prop_local_single *pl,
  long *numerator, long *denominator);

static inline __attribute__((always_inline))
void prop_inc_single(struct prop_descriptor *pd, struct prop_local_single *pl)
{
 unsigned long flags;

 do { do { (flags) = __raw_local_irq_save(); } while (0); do { } while (0); } while (0);
 __prop_inc_single(pd, pl);
 do { if (raw_irqs_disabled_flags(flags)) { raw_local_irq_restore(flags); do { } while (0); } else { do { } while (0); raw_local_irq_restore(flags); } } while (0);
}
# 80 "include/linux/sched.h" 2
# 1 "include/linux/seccomp.h" 1







# 1 "include/asm/seccomp.h" 1



# 1 "include/asm/seccomp_64.h" 1
# 11 "include/asm/seccomp_64.h"
# 1 "include/linux/unistd.h" 1






# 1 "include/asm/unistd.h" 1




# 1 "include/asm/unistd_64.h" 1
# 16 "include/asm/unistd_64.h"














































































































































































































































































































































































































































































































































































































































# 6 "include/asm/unistd.h" 2
# 8 "include/linux/unistd.h" 2
# 12 "include/asm/seccomp_64.h" 2
# 1 "include/asm/ia32_unistd.h" 1
# 13 "include/asm/seccomp_64.h" 2
# 5 "include/asm/seccomp.h" 2
# 9 "include/linux/seccomp.h" 2

typedef struct { int mode; } seccomp_t;

extern void __secure_computing(int);
static inline __attribute__((always_inline)) void secure_computing(int this_syscall)
{
 if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 8)), 0))
  __secure_computing(this_syscall);
}

extern long prctl_get_seccomp(void);
extern long prctl_set_seccomp(unsigned long);
# 81 "include/linux/sched.h" 2

# 1 "include/linux/rtmutex.h" 1
# 16 "include/linux/rtmutex.h"
# 1 "include/linux/plist.h" 1
# 80 "include/linux/plist.h"
struct plist_head {
 struct list_head prio_list;
 struct list_head node_list;



};

struct plist_node {
 int prio;
 struct plist_head plist;
};
# 127 "include/linux/plist.h"
static inline __attribute__((always_inline)) void
plist_head_init(struct plist_head *head, spinlock_t *lock)
{
 INIT_LIST_HEAD(&head->prio_list);
 INIT_LIST_HEAD(&head->node_list);



}






static inline __attribute__((always_inline)) void plist_node_init(struct plist_node *node, int prio)
{
 node->prio = prio;
 plist_head_init(&node->plist, ((void *)0));
}

extern void plist_add(struct plist_node *node, struct plist_head *head);
extern void plist_del(struct plist_node *node, struct plist_head *head);
# 195 "include/linux/plist.h"
static inline __attribute__((always_inline)) int plist_head_empty(const struct plist_head *head)
{
 return list_empty(&head->node_list);
}





static inline __attribute__((always_inline)) int plist_node_empty(const struct plist_node *node)
{
 return plist_head_empty(&node->plist);
}
# 234 "include/linux/plist.h"
static inline __attribute__((always_inline)) struct plist_node* plist_first(const struct plist_head *head)
{
 return ({ const typeof( ((struct plist_node *)0)->plist.node_list ) *__mptr = (head->node_list.next); (struct plist_node *)( (char *)__mptr - __builtin_offsetof(struct plist_node,plist.node_list) );})
                                        ;
}
# 17 "include/linux/rtmutex.h" 2
# 26 "include/linux/rtmutex.h"
struct rt_mutex {
 spinlock_t wait_lock;
 struct plist_head wait_list;
 struct task_struct *owner;






};

struct rt_mutex_waiter;
struct hrtimer_sleeper;






 static inline __attribute__((always_inline)) int rt_mutex_debug_check_no_locks_freed(const void *from,
             unsigned long len)
 {
 return 0;
 }
# 80 "include/linux/rtmutex.h"
static inline __attribute__((always_inline)) int rt_mutex_is_locked(struct rt_mutex *lock)
{
 return lock->owner != ((void *)0);
}

extern void __rt_mutex_init(struct rt_mutex *lock, const char *name);
extern void rt_mutex_destroy(struct rt_mutex *lock);

extern void rt_mutex_lock(struct rt_mutex *lock);
extern int rt_mutex_lock_interruptible(struct rt_mutex *lock,
      int detect_deadlock);
extern int rt_mutex_timed_lock(struct rt_mutex *lock,
     struct hrtimer_sleeper *timeout,
     int detect_deadlock);

extern int rt_mutex_trylock(struct rt_mutex *lock);

extern void rt_mutex_unlock(struct rt_mutex *lock);
# 83 "include/linux/sched.h" 2


# 1 "include/linux/param.h" 1
# 86 "include/linux/sched.h" 2
# 1 "include/linux/resource.h" 1





struct task_struct;
# 23 "include/linux/resource.h"
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 long ru_maxrss;
 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;
};

struct rlimit {
 unsigned long rlim_cur;
 unsigned long rlim_max;
};
# 70 "include/linux/resource.h"
# 1 "include/asm/resource.h" 1
# 1 "include/asm-generic/resource.h" 1
# 1 "include/asm/resource.h" 2
# 71 "include/linux/resource.h" 2

int getrusage(struct task_struct *p, int who, struct rusage *ru);
# 87 "include/linux/sched.h" 2
# 1 "include/linux/timer.h" 1




# 1 "include/linux/ktime.h" 1
# 46 "include/linux/ktime.h"
union ktime {
 s64 tv64;
# 57 "include/linux/ktime.h"
};

typedef union ktime ktime_t;
# 81 "include/linux/ktime.h"
static inline __attribute__((always_inline)) ktime_t ktime_set(const long secs, const unsigned long nsecs)
{

 if (__builtin_expect(!!(secs >= (((s64)~((u64)1 << 63)) / 1000000000L)), 0))
  return (ktime_t){ .tv64 = ((s64)~((u64)1 << 63)) };

 return (ktime_t) { .tv64 = (s64)secs * 1000000000L + (s64)nsecs };
}
# 113 "include/linux/ktime.h"
static inline __attribute__((always_inline)) ktime_t timespec_to_ktime(struct timespec ts)
{
 return ktime_set(ts.tv_sec, ts.tv_nsec);
}


static inline __attribute__((always_inline)) ktime_t timeval_to_ktime(struct timeval tv)
{
 return ktime_set(tv.tv_sec, tv.tv_usec * 1000L);
}
# 287 "include/linux/ktime.h"
static inline __attribute__((always_inline)) int ktime_equal(const ktime_t cmp1, const ktime_t cmp2)
{
 return cmp1.tv64 == cmp2.tv64;
}

static inline __attribute__((always_inline)) s64 ktime_to_us(const ktime_t kt)
{
 struct timeval tv = ns_to_timeval((kt).tv64);
 return (s64) tv.tv_sec * 1000000L + tv.tv_usec;
}

static inline __attribute__((always_inline)) s64 ktime_us_delta(const ktime_t later, const ktime_t earlier)
{
       return ktime_to_us(({ (ktime_t){ .tv64 = (later).tv64 - (earlier).tv64 }; }));
}

static inline __attribute__((always_inline)) ktime_t ktime_add_us(const ktime_t kt, const u64 usec)
{
 return ({ (ktime_t){ .tv64 = (kt).tv64 + (usec * 1000) }; });
}

static inline __attribute__((always_inline)) ktime_t ktime_sub_us(const ktime_t kt, const u64 usec)
{
 return ({ (ktime_t){ .tv64 = (kt).tv64 - (usec * 1000) }; });
}
# 322 "include/linux/ktime.h"
extern void ktime_get_ts(struct timespec *ts);
# 6 "include/linux/timer.h" 2


struct tvec_t_base_s;

struct timer_list {
 struct list_head entry;
 unsigned long expires;

 void (*function)(unsigned long);
 unsigned long data;

 struct tvec_t_base_s *base;

 void *start_site;
 char start_comm[16];
 int start_pid;

};

extern struct tvec_t_base_s boot_tvec_bases;
# 38 "include/linux/timer.h"
void init_timer(struct timer_list * timer);
void init_timer_deferrable(struct timer_list *timer);

static inline __attribute__((always_inline)) void setup_timer(struct timer_list * timer,
    void (*function)(unsigned long),
    unsigned long data)
{
 timer->function = function;
 timer->data = data;
 init_timer(timer);
}
# 60 "include/linux/timer.h"
static inline __attribute__((always_inline)) int timer_pending(const struct timer_list * timer)
{
 return timer->entry.next != ((void *)0);
}

extern void add_timer_on(struct timer_list *timer, int cpu);
extern int del_timer(struct timer_list * timer);
extern int __mod_timer(struct timer_list *timer, unsigned long expires);
extern int mod_timer(struct timer_list *timer, unsigned long expires);
# 80 "include/linux/timer.h"
extern unsigned long next_timer_interrupt(void);





extern unsigned long get_next_timer_interrupt(unsigned long now);
# 95 "include/linux/timer.h"
extern void init_timer_stats(void);

extern void timer_stats_update_stats(void *timer, pid_t pid, void *startf,
         void *timerf, char *comm,
         unsigned int timer_flag);

extern void __timer_stats_timer_set_start_info(struct timer_list *timer,
            void *addr);

static inline __attribute__((always_inline)) void timer_stats_timer_set_start_info(struct timer_list *timer)
{
 __timer_stats_timer_set_start_info(timer, __builtin_return_address(0));
}

static inline __attribute__((always_inline)) void timer_stats_timer_clear_start_info(struct timer_list *timer)
{
 timer->start_site = ((void *)0);
}
# 127 "include/linux/timer.h"
extern void delayed_work_timer_fn(unsigned long __data);
# 143 "include/linux/timer.h"
static inline __attribute__((always_inline)) void add_timer(struct timer_list *timer)
{
 do { if (__builtin_expect(!!(timer_pending(timer)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/timer.h"), "i" (145), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0);
 __mod_timer(timer, timer->expires);
}


  extern int try_to_del_timer_sync(struct timer_list *timer);
  extern int del_timer_sync(struct timer_list *timer);







extern void init_timers(void);
extern void run_local_timers(void);
struct hrtimer;
extern enum hrtimer_restart it_real_fn(struct hrtimer *);

unsigned long __round_jiffies(unsigned long j, int cpu);
unsigned long __round_jiffies_relative(unsigned long j, int cpu);
unsigned long round_jiffies(unsigned long j);
unsigned long round_jiffies_relative(unsigned long j);
# 88 "include/linux/sched.h" 2
# 1 "include/linux/hrtimer.h" 1
# 24 "include/linux/hrtimer.h"
struct hrtimer_clock_base;
struct hrtimer_cpu_base;




enum hrtimer_mode {
 HRTIMER_MODE_ABS,
 HRTIMER_MODE_REL,
};




enum hrtimer_restart {
 HRTIMER_NORESTART,
 HRTIMER_RESTART,
};
# 53 "include/linux/hrtimer.h"
enum hrtimer_cb_mode {
 HRTIMER_CB_SOFTIRQ,
 HRTIMER_CB_IRQSAFE,
 HRTIMER_CB_IRQSAFE_NO_RESTART,
 HRTIMER_CB_IRQSAFE_NO_SOFTIRQ,
};
# 112 "include/linux/hrtimer.h"
struct hrtimer {
 struct rb_node node;
 ktime_t expires;
 enum hrtimer_restart (*function)(struct hrtimer *);
 struct hrtimer_clock_base *base;
 unsigned long state;
 enum hrtimer_cb_mode cb_mode;
 struct list_head cb_entry;

 void *start_site;
 char start_comm[16];
 int start_pid;

};
# 134 "include/linux/hrtimer.h"
struct hrtimer_sleeper {
 struct hrtimer timer;
 struct task_struct *task;
};
# 154 "include/linux/hrtimer.h"
struct hrtimer_clock_base {
 struct hrtimer_cpu_base *cpu_base;
 clockid_t index;
 struct rb_root active;
 struct rb_node *first;
 ktime_t resolution;
 ktime_t (*get_time)(void);
 ktime_t (*get_softirq_time)(void);
 ktime_t softirq_time;






};
# 191 "include/linux/hrtimer.h"
struct hrtimer_cpu_base {
 spinlock_t lock;
 struct lock_class_key lock_key;
 struct hrtimer_clock_base clock_base[2];
 struct list_head cb_pending;





};
# 241 "include/linux/hrtimer.h"
static inline __attribute__((always_inline)) void clock_was_set(void) { }

static inline __attribute__((always_inline)) void hres_timers_resume(void) { }





static inline __attribute__((always_inline)) ktime_t hrtimer_cb_get_time(struct hrtimer *timer)
{
 return timer->base->softirq_time;
}

static inline __attribute__((always_inline)) int hrtimer_is_hres_active(struct hrtimer *timer)
{
 return 0;
}


extern ktime_t ktime_get(void);
extern ktime_t ktime_get_real(void);




extern void hrtimer_init(struct hrtimer *timer, clockid_t which_clock,
    enum hrtimer_mode mode);


extern int hrtimer_start(struct hrtimer *timer, ktime_t tim,
    const enum hrtimer_mode mode);
extern int hrtimer_cancel(struct hrtimer *timer);
extern int hrtimer_try_to_cancel(struct hrtimer *timer);

static inline __attribute__((always_inline)) int hrtimer_restart(struct hrtimer *timer)
{
 return hrtimer_start(timer, timer->expires, HRTIMER_MODE_ABS);
}


extern ktime_t hrtimer_get_remaining(const struct hrtimer *timer);
extern int hrtimer_get_res(const clockid_t which_clock, struct timespec *tp);

extern ktime_t hrtimer_get_next_event(void);





static inline __attribute__((always_inline)) int hrtimer_active(const struct hrtimer *timer)
{
 return timer->state != 0x00;
}




static inline __attribute__((always_inline)) int hrtimer_is_queued(struct hrtimer *timer)
{
 return timer->state &
  (0x01 | 0x04);
}


extern unsigned long
hrtimer_forward(struct hrtimer *timer, ktime_t now, ktime_t interval);


extern long hrtimer_nanosleep(struct timespec *rqtp,
         struct timespec *rmtp,
         const enum hrtimer_mode mode,
         const clockid_t clockid);
extern long hrtimer_nanosleep_restart(struct restart_block *restart_block);

extern void hrtimer_init_sleeper(struct hrtimer_sleeper *sl,
     struct task_struct *tsk);


extern void hrtimer_run_queues(void);
extern void hrtimer_run_pending(void);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) hrtimers_init(void);
# 332 "include/linux/hrtimer.h"
extern void sysrq_timer_list_show(void);






extern void timer_stats_update_stats(void *timer, pid_t pid, void *startf,
         void *timerf, char *comm,
         unsigned int timer_flag);

static inline __attribute__((always_inline)) void timer_stats_account_hrtimer(struct hrtimer *timer)
{
 timer_stats_update_stats(timer, timer->start_pid, timer->start_site,
     timer->function, timer->start_comm, 0);
}

extern void __timer_stats_hrtimer_set_start_info(struct hrtimer *timer,
       void *addr);

static inline __attribute__((always_inline)) void timer_stats_hrtimer_set_start_info(struct hrtimer *timer)
{
 __timer_stats_hrtimer_set_start_info(timer, __builtin_return_address(0));
}

static inline __attribute__((always_inline)) void timer_stats_hrtimer_clear_start_info(struct hrtimer *timer)
{
 timer->start_site = ((void *)0);
}
# 89 "include/linux/sched.h" 2
# 1 "include/linux/task_io_accounting.h" 1
# 35 "include/linux/task_io_accounting.h"
struct task_io_accounting {
};
# 90 "include/linux/sched.h" 2

# 1 "include/linux/latencytop.h" 1
# 33 "include/linux/latencytop.h"
static inline __attribute__((always_inline)) void
account_scheduler_latency(struct task_struct *task, int usecs, int inter)
{
}

static inline __attribute__((always_inline)) void clear_all_latency_tracing(struct task_struct *p)
{
}
# 92 "include/linux/sched.h" 2

# 1 "include/asm/processor.h" 1
# 94 "include/linux/sched.h" 2

struct exec_domain;
struct futex_pi_state;
struct robust_list_head;
struct bio;
# 116 "include/linux/sched.h"
extern unsigned long avenrun[];
# 130 "include/linux/sched.h"
extern unsigned long total_forks;
extern int nr_threads;
extern __typeof__(unsigned long) per_cpu__process_counts;
extern int nr_processes(void);
extern unsigned long nr_running(void);
extern unsigned long nr_uninterruptible(void);
extern unsigned long nr_active(void);
extern unsigned long nr_iowait(void);
extern unsigned long weighted_cpuload(const int cpu);

struct seq_file;
struct cfs_rq;
struct task_group;






static inline __attribute__((always_inline)) void
proc_sched_show_task(struct task_struct *p, struct seq_file *m)
{
}
static inline __attribute__((always_inline)) void proc_sched_set_task(struct task_struct *p)
{
}
static inline __attribute__((always_inline)) void
print_cfs_rq(struct seq_file *m, int cpu, struct cfs_rq *cfs_rq)
{
}
# 215 "include/linux/sched.h"
extern rwlock_t tasklist_lock;
extern spinlock_t mmlist_lock;

struct task_struct;

extern void sched_init(void);
extern void sched_init_smp(void);
extern void init_idle(struct task_struct *idle, int cpu);
extern void init_idle_bootup_task(struct task_struct *idle);

extern cpumask_t nohz_cpu_mask;



static inline __attribute__((always_inline)) int select_nohz_load_balancer(int cpu)
{
 return 0;
}


extern unsigned long rt_needs_cpu(int cpu);




extern void show_state_filter(unsigned long state_filter);

static inline __attribute__((always_inline)) void show_state(void)
{
 show_state_filter(0);
}

extern void show_regs(struct pt_regs *);






extern void show_stack(struct task_struct *task, unsigned long *sp);

void io_schedule(void);
long io_schedule_timeout(long timeout);

extern void cpu_init (void);
extern void trap_init(void);
extern void account_process_tick(struct task_struct *task, int user);
extern void update_process_times(int user);
extern void scheduler_tick(void);
extern void hrtick_resched(void);

extern void sched_show_task(struct task_struct *p);


extern void softlockup_tick(void);
extern void spawn_softlockup_task(void);
extern void touch_softlockup_watchdog(void);
extern void touch_all_softlockup_watchdogs(void);
extern unsigned long softlockup_thresh;
extern unsigned long sysctl_hung_task_check_count;
extern unsigned long sysctl_hung_task_timeout_secs;
extern unsigned long sysctl_hung_task_warnings;
# 297 "include/linux/sched.h"
extern char __sched_text_start[], __sched_text_end[];


extern int in_sched_functions(unsigned long addr);


extern signed long schedule_timeout(signed long timeout);
extern signed long schedule_timeout_interruptible(signed long timeout);
extern signed long schedule_timeout_uninterruptible(signed long timeout);
 void schedule(void);

struct nsproxy;
struct user_namespace;




extern int sysctl_max_map_count;

# 1 "include/linux/aio.h" 1




# 1 "include/linux/workqueue.h" 1
# 12 "include/linux/workqueue.h"
# 1 "include/asm/atomic.h" 1
# 13 "include/linux/workqueue.h" 2

struct workqueue_struct;

struct work_struct;
typedef void (*work_func_t)(struct work_struct *work);







struct work_struct {
 atomic_long_t data;



 struct list_head entry;
 work_func_t func;



};



struct delayed_work {
 struct work_struct work;
 struct timer_list timer;
};

struct execute_work {
 struct work_struct work;
};
# 150 "include/linux/workqueue.h"
extern struct workqueue_struct *
__create_workqueue_key(const char *name, int singlethread,
         int freezeable, struct lock_class_key *key,
         const char *lock_name);
# 179 "include/linux/workqueue.h"
extern void destroy_workqueue(struct workqueue_struct *wq);

extern int queue_work(struct workqueue_struct *wq, struct work_struct *work);
extern int queue_delayed_work(struct workqueue_struct *wq, struct delayed_work *work, unsigned long delay)
                                                   ;
extern int queue_delayed_work_on(int cpu, struct workqueue_struct *wq,
   struct delayed_work *work, unsigned long delay);

extern void flush_workqueue(struct workqueue_struct *wq);
extern void flush_scheduled_work(void);

extern int schedule_work(struct work_struct *work);
extern int schedule_delayed_work(struct delayed_work *work, unsigned long delay)
                          ;
extern int schedule_delayed_work_on(int cpu, struct delayed_work *work,
     unsigned long delay);
extern int schedule_on_each_cpu(work_func_t func);
extern int current_is_keventd(void);
extern int keventd_up(void);

extern void init_workqueues(void);
int execute_in_process_context(work_func_t fn, struct execute_work *);

extern int cancel_work_sync(struct work_struct *work);







static inline __attribute__((always_inline)) int cancel_delayed_work(struct delayed_work *work)
{
 int ret;

 ret = del_timer_sync(&work->timer);
 if (ret)
  clear_bit(0, ((unsigned long *)(&(&work->work)->data)));
 return ret;
}

extern int cancel_delayed_work_sync(struct delayed_work *work);


static inline __attribute__((always_inline))
void cancel_rearming_delayed_workqueue(struct workqueue_struct *wq,
     struct delayed_work *work)
{
 cancel_delayed_work_sync(work);
}


static inline __attribute__((always_inline))
void cancel_rearming_delayed_work(struct delayed_work *work)
{
 cancel_delayed_work_sync(work);
}
# 6 "include/linux/aio.h" 2
# 1 "include/linux/aio_abi.h" 1
# 32 "include/linux/aio_abi.h"
typedef unsigned long aio_context_t;

enum {
 IOCB_CMD_PREAD = 0,
 IOCB_CMD_PWRITE = 1,
 IOCB_CMD_FSYNC = 2,
 IOCB_CMD_FDSYNC = 3,




 IOCB_CMD_NOOP = 6,
 IOCB_CMD_PREADV = 7,
 IOCB_CMD_PWRITEV = 8,
};
# 57 "include/linux/aio_abi.h"
struct io_event {
 __u64 data;
 __u64 obj;
 __s64 res;
 __s64 res2;
};
# 78 "include/linux/aio_abi.h"
struct iocb {

 __u64 aio_data;
 __u32 aio_key, aio_reserved1;



 __u16 aio_lio_opcode;
 __s16 aio_reqprio;
 __u32 aio_fildes;

 __u64 aio_buf;
 __u64 aio_nbytes;
 __s64 aio_offset;


 __u64 aio_reserved2;


 __u32 aio_flags;





 __u32 aio_resfd;
};
# 7 "include/linux/aio.h" 2
# 1 "include/linux/uio.h" 1
# 16 "include/linux/uio.h"
struct iovec
{
 void *iov_base;
 __kernel_size_t iov_len;
};



struct kvec {
 void *iov_base;
 size_t iov_len;
};
# 45 "include/linux/uio.h"
static inline __attribute__((always_inline)) size_t iov_length(const struct iovec *iov, unsigned long nr_segs)
{
 unsigned long seg;
 size_t ret = 0;

 for (seg = 0; seg < nr_segs; seg++)
  ret += iov[seg].iov_len;
 return ret;
}

unsigned long iov_shorten(struct iovec *iov, unsigned long nr_segs, size_t to);
# 8 "include/linux/aio.h" 2

# 1 "include/asm/atomic.h" 1
# 10 "include/linux/aio.h" 2





struct kioctx;
# 87 "include/linux/aio.h"
struct kiocb {
 struct list_head ki_run_list;
 unsigned long ki_flags;
 int ki_users;
 unsigned ki_key;

 struct file *ki_filp;
 struct kioctx *ki_ctx;
 int (*ki_cancel)(struct kiocb *, struct io_event *);
 ssize_t (*ki_retry)(struct kiocb *);
 void (*ki_dtor)(struct kiocb *);

 union {
  void *user;
  struct task_struct *tsk;
 } ki_obj;

 __u64 ki_user_data;
 wait_queue_t ki_wait;
 loff_t ki_pos;

 atomic_t ki_bio_count;
 void *private;

 unsigned short ki_opcode;
 size_t ki_nbytes;
 char *ki_buf;
 size_t ki_left;
 struct iovec ki_inline_vec;
  struct iovec *ki_iovec;
  unsigned long ki_nr_segs;
  unsigned long ki_cur_seg;

 struct list_head ki_list;






 struct file *ki_eventfd;
};
# 150 "include/linux/aio.h"
struct aio_ring {
 unsigned id;
 unsigned nr;
 unsigned head;
 unsigned tail;

 unsigned magic;
 unsigned compat_features;
 unsigned incompat_features;
 unsigned header_length;


 struct io_event io_events[0];
};




struct aio_ring_info {
 unsigned long mmap_base;
 unsigned long mmap_size;

 struct page **ring_pages;
 spinlock_t ring_lock;
 long nr_pages;

 unsigned nr, tail;

 struct page *internal_pages[8];
};

struct kioctx {
 atomic_t users;
 int dead;
 struct mm_struct *mm;


 unsigned long user_id;
 struct kioctx *next;

 wait_queue_head_t wait;

 spinlock_t ctx_lock;

 int reqs_active;
 struct list_head active_reqs;
 struct list_head run_list;


 unsigned max_reqs;

 struct aio_ring_info ring_info;

 struct delayed_work wq;
};


extern unsigned aio_max_size;

extern ssize_t wait_on_sync_kiocb(struct kiocb *iocb);
extern int aio_put_req(struct kiocb *iocb);
extern void kick_iocb(struct kiocb *iocb);
extern int aio_complete(struct kiocb *iocb, long res, long res2);
extern void __put_ioctx(struct kioctx *ctx);
struct mm_struct;
extern void exit_aio(struct mm_struct *mm);
extern struct kioctx *lookup_ioctx(unsigned long ctx_id);
extern int io_submit_one(struct kioctx *ctx, struct iocb *user_iocb, struct iocb *iocb)
                                                     ;


struct kioctx *lookup_ioctx(unsigned long ctx_id);
int io_submit_one(struct kioctx *ctx, struct iocb *user_iocb, struct iocb *iocb)
                         ;
# 239 "include/linux/aio.h"
static inline __attribute__((always_inline)) struct kiocb *list_kiocb(struct list_head *h)
{
 return ({ const typeof( ((struct kiocb *)0)->ki_list ) *__mptr = (h); (struct kiocb *)( (char *)__mptr - __builtin_offsetof(struct kiocb,ki_list) );});
}


extern unsigned long aio_nr;
extern unsigned long aio_max_nr;
# 317 "include/linux/sched.h" 2

extern unsigned long
arch_get_unmapped_area(struct file *, unsigned long, unsigned long,
         unsigned long, unsigned long);
extern unsigned long
arch_get_unmapped_area_topdown(struct file *filp, unsigned long addr,
     unsigned long len, unsigned long pgoff,
     unsigned long flags);
extern void arch_unmap_area(struct mm_struct *, unsigned long);
extern void arch_unmap_area_topdown(struct mm_struct *, unsigned long);
# 364 "include/linux/sched.h"
extern void set_dumpable(struct mm_struct *mm, int value);
extern int get_dumpable(struct mm_struct *mm);
# 386 "include/linux/sched.h"
struct sighand_struct {
 atomic_t count;
 struct k_sigaction action[64];
 spinlock_t siglock;
 wait_queue_head_t signalfd_wqh;
};

struct pacct_struct {
 int ac_flag;
 long ac_exitcode;
 unsigned long ac_mem;
 cputime_t ac_utime, ac_stime;
 unsigned long ac_minflt, ac_majflt;
};
# 408 "include/linux/sched.h"
struct signal_struct {
 atomic_t count;
 atomic_t live;

 wait_queue_head_t wait_chldexit;


 struct task_struct *curr_target;


 struct sigpending shared_pending;


 int group_exit_code;





 struct task_struct *group_exit_task;
 int notify_count;


 int group_stop_count;
 unsigned int flags;


 struct list_head posix_timers;


 struct hrtimer real_timer;
 struct task_struct *tsk;
 ktime_t it_real_incr;


 cputime_t it_prof_expires, it_virt_expires;
 cputime_t it_prof_incr, it_virt_incr;
# 453 "include/linux/sched.h"
 union {
  pid_t pgrp __attribute__((deprecated));
  pid_t __pgrp;
 };

 struct pid *tty_old_pgrp;

 union {
  pid_t session __attribute__((deprecated));
  pid_t __session;
 };


 int leader;

 struct tty_struct *tty;







 cputime_t utime, stime, cutime, cstime;
 cputime_t gtime;
 cputime_t cgtime;
 unsigned long nvcsw, nivcsw, cnvcsw, cnivcsw;
 unsigned long min_flt, maj_flt, cmin_flt, cmaj_flt;
 unsigned long inblock, oublock, cinblock, coublock;







 unsigned long long sum_sched_runtime;
# 500 "include/linux/sched.h"
 struct rlimit rlim[16];

 struct list_head cpu_timers[3];
# 520 "include/linux/sched.h"
};
# 538 "include/linux/sched.h"
struct user_struct {
 atomic_t __count;
 atomic_t processes;
 atomic_t files;
 atomic_t sigpending;

 atomic_t inotify_watches;
 atomic_t inotify_devs;



 unsigned long mq_bytes;

 unsigned long locked_shm;







 struct hlist_node uidhash_node;
 uid_t uid;


 struct task_group *tg;

 struct kobject kobj;
 struct work_struct work;


};

extern int uids_sysfs_init(void);

extern struct user_struct *find_user(uid_t);

extern struct user_struct root_user;


struct backing_dev_info;
struct reclaim_state;
# 632 "include/linux/sched.h"
static inline __attribute__((always_inline)) int sched_info_on(void)
{






 return 0;

}

enum cpu_idle_type {
 CPU_IDLE,
 CPU_NOT_IDLE,
 CPU_NEWLY_IDLE,
 CPU_MAX_IDLE_TYPES
};
# 687 "include/linux/sched.h"
struct sched_group {
 struct sched_group *next;
 cpumask_t cpumask;






 unsigned int __cpu_power;




 u32 reciprocal_cpu_power;
};

struct sched_domain {

 struct sched_domain *parent;
 struct sched_domain *child;
 struct sched_group *groups;
 cpumask_t span;
 unsigned long min_interval;
 unsigned long max_interval;
 unsigned int busy_factor;
 unsigned int imbalance_pct;
 unsigned int cache_nice_tries;
 unsigned int busy_idx;
 unsigned int idle_idx;
 unsigned int newidle_idx;
 unsigned int wake_idx;
 unsigned int forkexec_idx;
 int flags;


 unsigned long last_balance;
 unsigned int balance_interval;
 unsigned int nr_balance_failed;
# 758 "include/linux/sched.h"
};

extern void partition_sched_domains(int ndoms_new, cpumask_t *doms_new);
# 770 "include/linux/sched.h"
static inline __attribute__((always_inline)) int above_background_load(void)
{
 unsigned long cpu;

 for (((cpu)) = __first_cpu(&(cpu_online_map)); ((cpu)) < 32; ((cpu)) = __next_cpu((((cpu))), &((cpu_online_map)))) {
  if (weighted_cpuload(cpu) >= (1L << 10))
   return 1;
 }
 return 0;
}

struct io_context;


struct group_info {
 int ngroups;
 atomic_t usage;
 gid_t small_block[32];
 int nblocks;
 gid_t *blocks[0];
};
# 807 "include/linux/sched.h"
extern struct group_info *groups_alloc(int gidsetsize);
extern void groups_free(struct group_info *group_info);
extern int set_current_groups(struct group_info *group_info);
extern int groups_search(struct group_info *group_info, gid_t grp);







static inline __attribute__((always_inline)) void prefetch_stack(struct task_struct *t) { }


struct audit_context;
struct mempolicy;
struct pipe_inode_info;
struct uts_namespace;

struct rq;
struct sched_domain;

struct sched_class {
 const struct sched_class *next;

 void (*enqueue_task) (struct rq *rq, struct task_struct *p, int wakeup);
 void (*dequeue_task) (struct rq *rq, struct task_struct *p, int sleep);
 void (*yield_task) (struct rq *rq);
 int (*select_task_rq)(struct task_struct *p, int sync);

 void (*check_preempt_curr) (struct rq *rq, struct task_struct *p);

 struct task_struct * (*pick_next_task) (struct rq *rq);
 void (*put_prev_task) (struct rq *rq, struct task_struct *p);


 unsigned long (*load_balance) (struct rq *this_rq, int this_cpu,
   struct rq *busiest, unsigned long max_load_move,
   struct sched_domain *sd, enum cpu_idle_type idle,
   int *all_pinned, int *this_best_prio);

 int (*move_one_task) (struct rq *this_rq, int this_cpu,
         struct rq *busiest, struct sched_domain *sd,
         enum cpu_idle_type idle);
 void (*pre_schedule) (struct rq *this_rq, struct task_struct *task);
 void (*post_schedule) (struct rq *this_rq);
 void (*task_wake_up) (struct rq *this_rq, struct task_struct *task);


 void (*set_curr_task) (struct rq *rq);
 void (*task_tick) (struct rq *rq, struct task_struct *p, int queued);
 void (*task_new) (struct rq *rq, struct task_struct *p);
 void (*set_cpus_allowed)(struct task_struct *p, cpumask_t *newmask);

 void (*join_domain)(struct rq *rq);
 void (*leave_domain)(struct rq *rq);

 void (*switched_from) (struct rq *this_rq, struct task_struct *task,
          int running);
 void (*switched_to) (struct rq *this_rq, struct task_struct *task,
        int running);
 void (*prio_changed) (struct rq *this_rq, struct task_struct *task,
        int oldprio, int running);
};

struct load_weight {
 unsigned long weight, inv_weight;
};
# 886 "include/linux/sched.h"
struct sched_entity {
 struct load_weight load;
 struct rb_node run_node;
 unsigned int on_rq;

 u64 exec_start;
 u64 sum_exec_runtime;
 u64 vruntime;
 u64 prev_sum_exec_runtime;
# 931 "include/linux/sched.h"
 struct sched_entity *parent;

 struct cfs_rq *cfs_rq;

 struct cfs_rq *my_q;

};

struct sched_rt_entity {
 struct list_head run_list;
 unsigned int time_slice;
 unsigned long timeout;
 int nr_cpus_allowed;


 struct sched_rt_entity *parent;

 struct rt_rq *rt_rq;

 struct rt_rq *my_q;

};

struct task_struct {
 volatile long state;
 void *stack;
 atomic_t usage;
 unsigned int flags;
 unsigned int ptrace;

 int lock_depth;







 int prio, static_prio, normal_prio;
 const struct sched_class *sched_class;
 struct sched_entity se;
 struct sched_rt_entity rt;
# 987 "include/linux/sched.h"
 unsigned char fpu_counter;
 s8 oomkilladj;




 unsigned int policy;
 cpumask_t cpus_allowed;
# 1005 "include/linux/sched.h"
 struct list_head tasks;




 struct list_head ptrace_children;
 struct list_head ptrace_list;

 struct mm_struct *mm, *active_mm;


 struct linux_binfmt *binfmt;
 int exit_state;
 int exit_code, exit_signal;
 int pdeath_signal;

 unsigned int personality;
 unsigned did_exec:1;
 pid_t pid;
 pid_t tgid;
# 1035 "include/linux/sched.h"
 struct task_struct *real_parent;
 struct task_struct *parent;




 struct list_head children;
 struct list_head sibling;
 struct task_struct *group_leader;


 struct pid_link pids[PIDTYPE_MAX];
 struct list_head thread_group;

 struct completion *vfork_done;
 int *set_child_tid;
 int *clear_child_tid;

 unsigned int rt_priority;
 cputime_t utime, stime, utimescaled, stimescaled;
 cputime_t gtime;
 cputime_t prev_utime, prev_stime;
 unsigned long nvcsw, nivcsw;
 struct timespec start_time;
 struct timespec real_start_time;

 unsigned long min_flt, maj_flt;

   cputime_t it_prof_expires, it_virt_expires;
 unsigned long long it_sched_expires;
 struct list_head cpu_timers[3];


 uid_t uid,euid,suid,fsuid;
 gid_t gid,egid,sgid,fsgid;
 struct group_info *group_info;
 kernel_cap_t cap_effective, cap_inheritable, cap_permitted;
 unsigned keep_capabilities:1;
 struct user_struct *user;





 char comm[16];




 int link_count, total_link_count;


 struct sysv_sem sysvsem;



 unsigned long last_switch_timestamp;
 unsigned long last_switch_count;


 struct thread_struct thread;

 struct fs_struct *fs;

 struct files_struct *files;

 struct nsproxy *nsproxy;

 struct signal_struct *signal;
 struct sighand_struct *sighand;

 sigset_t blocked, real_blocked;
 sigset_t saved_sigmask;
 struct sigpending pending;

 unsigned long sas_ss_sp;
 size_t sas_ss_size;
 int (*notifier)(void *priv);
 void *notifier_data;
 sigset_t *notifier_mask;



 struct audit_context *audit_context;
 seccomp_t seccomp;


    u32 parent_exec_id;
    u32 self_exec_id;

 spinlock_t alloc_lock;


 spinlock_t pi_lock;



 struct plist_head pi_waiters;

 struct rt_mutex_waiter *pi_blocked_on;
# 1165 "include/linux/sched.h"
 void *journal_info;


 struct bio *bio_list, **bio_tail;


 struct reclaim_state *reclaim_state;

 struct backing_dev_info *backing_dev_info;

 struct io_context *io_context;

 unsigned long ptrace_message;
 siginfo_t *last_siginfo;




 struct task_io_accounting ioac;






   struct mempolicy *mempolicy;
 short il_next;
# 1205 "include/linux/sched.h"
 struct robust_list_head *robust_list;

 struct compat_robust_list_head *compat_robust_list;

 struct list_head pi_state_list;
 struct futex_pi_state *pi_state_cache;

 atomic_t fs_excl;
 struct rcu_head rcu;




 struct pipe_inode_info *splice_pipe;






 struct prop_local_single dirties;




};
# 1251 "include/linux/sched.h"
static inline __attribute__((always_inline)) int rt_prio(int prio)
{
 if (__builtin_expect(!!(prio < 100), 0))
  return 1;
 return 0;
}

static inline __attribute__((always_inline)) int rt_task(struct task_struct *p)
{
 return rt_prio(p->prio);
}

static inline __attribute__((always_inline)) void set_task_session(struct task_struct *tsk, pid_t session)
{
 tsk->signal->__session = session;
}

static inline __attribute__((always_inline)) void set_task_pgrp(struct task_struct *tsk, pid_t pgrp)
{
 tsk->signal->__pgrp = pgrp;
}

static inline __attribute__((always_inline)) struct pid *task_pid(struct task_struct *task)
{
 return task->pids[PIDTYPE_PID].pid;
}

static inline __attribute__((always_inline)) struct pid *task_tgid(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_PID].pid;
}

static inline __attribute__((always_inline)) struct pid *task_pgrp(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_PGID].pid;
}

static inline __attribute__((always_inline)) struct pid *task_session(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_SID].pid;
}

struct pid_namespace;
# 1310 "include/linux/sched.h"
static inline __attribute__((always_inline)) pid_t task_pid_nr(struct task_struct *tsk)
{
 return tsk->pid;
}

pid_t task_pid_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline __attribute__((always_inline)) pid_t task_pid_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_pid(tsk));
}


static inline __attribute__((always_inline)) pid_t task_tgid_nr(struct task_struct *tsk)
{
 return tsk->tgid;
}

pid_t task_tgid_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline __attribute__((always_inline)) pid_t task_tgid_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_tgid(tsk));
}


static inline __attribute__((always_inline)) pid_t task_pgrp_nr(struct task_struct *tsk)
{
 return tsk->signal->__pgrp;
}

pid_t task_pgrp_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline __attribute__((always_inline)) pid_t task_pgrp_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_pgrp(tsk));
}


static inline __attribute__((always_inline)) pid_t task_session_nr(struct task_struct *tsk)
{
 return tsk->signal->__session;
}

pid_t task_session_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline __attribute__((always_inline)) pid_t task_session_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_session(tsk));
}
# 1370 "include/linux/sched.h"
static inline __attribute__((always_inline)) int pid_alive(struct task_struct *p)
{
 return p->pids[PIDTYPE_PID].pid != ((void *)0);
}







static inline __attribute__((always_inline)) int is_global_init(struct task_struct *tsk)
{
 return tsk->pid == 1;
}





extern int is_container_init(struct task_struct *tsk);

extern struct pid *cad_pid;

extern void free_task(struct task_struct *tsk);


extern void __put_task_struct(struct task_struct *t);

static inline __attribute__((always_inline)) void put_task_struct(struct task_struct *t)
{
 if (atomic_dec_and_test(&t->usage))
  __put_task_struct(t);
}
# 1462 "include/linux/sched.h"
extern int set_cpus_allowed(struct task_struct *p, cpumask_t new_mask);
# 1472 "include/linux/sched.h"
extern unsigned long long sched_clock(void);





extern unsigned long long cpu_clock(int cpu);

extern unsigned long long
task_sched_runtime(struct task_struct *task);



extern void sched_exec(void);




extern void sched_clock_idle_sleep_event(void);
extern void sched_clock_idle_wakeup_event(u64 delta_ns);


extern void idle_task_exit(void);




extern void sched_idle_next(void);
# 1522 "include/linux/sched.h"
extern unsigned int sysctl_sched_compat_yield;


extern int rt_mutex_getprio(struct task_struct *p);
extern void rt_mutex_setprio(struct task_struct *p, int prio);
extern void rt_mutex_adjust_pi(struct task_struct *p);
# 1536 "include/linux/sched.h"
extern void set_user_nice(struct task_struct *p, long nice);
extern int task_prio(const struct task_struct *p);
extern int task_nice(const struct task_struct *p);
extern int can_nice(const struct task_struct *p, const int nice);
extern int task_curr(const struct task_struct *p);
extern int idle_cpu(int cpu);
extern int sched_setscheduler(struct task_struct *, int, struct sched_param *);
extern struct task_struct *idle_task(int cpu);
extern struct task_struct *curr_task(int cpu);
extern void set_curr_task(int cpu, struct task_struct *p);

void yield(void);




extern struct exec_domain default_exec_domain;

union thread_union {
 struct thread_info thread_info;
 unsigned long stack[(((1UL) << 12) << 1)/sizeof(long)];
};


static inline __attribute__((always_inline)) int kstack_end(void *addr)
{



 return !(((unsigned long)addr+sizeof(void*)-1) & ((((1UL) << 12) << 1)-sizeof(void*)));
}


extern union thread_union init_thread_union;
extern struct task_struct init_task;

extern struct mm_struct init_mm;

extern struct pid_namespace init_pid_ns;
# 1592 "include/linux/sched.h"
extern struct task_struct *find_task_by_pid_type_ns(int type, int pid,
  struct pid_namespace *ns);

extern struct task_struct *find_task_by_pid(pid_t nr);
extern struct task_struct *find_task_by_vpid(pid_t nr);
extern struct task_struct *find_task_by_pid_ns(pid_t nr,
  struct pid_namespace *ns);

extern void __set_special_pids(pid_t session, pid_t pgrp);


extern struct user_struct * alloc_uid(struct user_namespace *, uid_t);
static inline __attribute__((always_inline)) struct user_struct *get_uid(struct user_struct *u)
{
 atomic_inc(&u->__count);
 return u;
}
extern void free_uid(struct user_struct *);
extern void switch_uid(struct user_struct *);
extern void release_uids(struct user_namespace *ns);

# 1 "include/asm/current.h" 1
# 1614 "include/linux/sched.h" 2

extern void do_timer(unsigned long ticks);

extern int wake_up_state(struct task_struct * tsk, unsigned int state);
extern int wake_up_process(struct task_struct * tsk);
extern void wake_up_new_task(struct task_struct * tsk, unsigned long clone_flags)
                                 ;

 extern void kick_process(struct task_struct *tsk);



extern void sched_fork(struct task_struct *p, int clone_flags);
extern void sched_dead(struct task_struct *p);

extern int in_group_p(gid_t);
extern int in_egroup_p(gid_t);

extern void proc_caches_init(void);
extern void flush_signals(struct task_struct *);
extern void ignore_signals(struct task_struct *);
extern void flush_signal_handlers(struct task_struct *, int force_default);
extern int dequeue_signal(struct task_struct *tsk, sigset_t *mask, siginfo_t *info);

static inline __attribute__((always_inline)) int dequeue_signal_lock(struct task_struct *tsk, sigset_t *mask, siginfo_t *info)
{
 unsigned long flags;
 int ret;

 flags = _spin_lock_irqsave(&tsk->sighand->siglock);
 ret = dequeue_signal(tsk, mask, info);
 _spin_unlock_irqrestore(&tsk->sighand->siglock, flags);

 return ret;
}

extern void block_all_signals(int (*notifier)(void *priv), void *priv,
         sigset_t *mask);
extern void unblock_all_signals(void);
extern void release_task(struct task_struct * p);
extern int send_sig_info(int, struct siginfo *, struct task_struct *);
extern int send_group_sig_info(int, struct siginfo *, struct task_struct *);
extern int force_sigsegv(int, struct task_struct *);
extern int force_sig_info(int, struct siginfo *, struct task_struct *);
extern int __kill_pgrp_info(int sig, struct siginfo *info, struct pid *pgrp);
extern int kill_pgrp_info(int sig, struct siginfo *info, struct pid *pgrp);
extern int kill_pid_info(int sig, struct siginfo *info, struct pid *pid);
extern int kill_pid_info_as_uid(int, struct siginfo *, struct pid *, uid_t, uid_t, u32);
extern int kill_pgrp(struct pid *pid, int sig, int priv);
extern int kill_pid(struct pid *pid, int sig, int priv);
extern int kill_proc_info(int, struct siginfo *, pid_t);
extern void do_notify_parent(struct task_struct *, int);
extern void force_sig(int, struct task_struct *);
extern void force_sig_specific(int, struct task_struct *);
extern int send_sig(int, struct task_struct *, int);
extern void zap_other_threads(struct task_struct *p);
extern int kill_proc(pid_t, int, int);
extern struct sigqueue *sigqueue_alloc(void);
extern void sigqueue_free(struct sigqueue *);
extern int send_sigqueue(int, struct sigqueue *, struct task_struct *);
extern int send_group_sigqueue(int, struct sigqueue *, struct task_struct *);
extern int do_sigaction(int, struct k_sigaction *, struct k_sigaction *);
extern int do_sigaltstack(const stack_t *, stack_t *, unsigned long);

static inline __attribute__((always_inline)) int kill_cad_pid(int sig, int priv)
{
 return kill_pid(cad_pid, sig, priv);
}






static inline __attribute__((always_inline)) int is_si_special(const struct siginfo *info)
{
 return info <= ((struct siginfo *) 2);
}



static inline __attribute__((always_inline)) int on_sig_stack(unsigned long sp)
{
 return (sp - get_current()->sas_ss_sp < get_current()->sas_ss_size);
}

static inline __attribute__((always_inline)) int sas_ss_flags(unsigned long sp)
{
 return (get_current()->sas_ss_size == 0 ? 2
  : on_sig_stack(sp) ? 1 : 0);
}




extern struct mm_struct * mm_alloc(void);


extern void __mmdrop(struct mm_struct *);
static inline __attribute__((always_inline)) void mmdrop(struct mm_struct * mm)
{
 if (__builtin_expect(!!(atomic_dec_and_test(&mm->mm_count)), 0))
  __mmdrop(mm);
}


extern void mmput(struct mm_struct *);

extern struct mm_struct *get_task_mm(struct task_struct *task);

extern void mm_release(struct task_struct *, struct mm_struct *);

extern int copy_thread(int, unsigned long, unsigned long, unsigned long, struct task_struct *, struct pt_regs *);
extern void flush_thread(void);
extern void exit_thread(void);

extern void exit_files(struct task_struct *);
extern void __cleanup_signal(struct signal_struct *);
extern void __cleanup_sighand(struct sighand_struct *);
extern void exit_itimers(struct signal_struct *);

extern void do_group_exit(int);

extern void daemonize(const char *, ...);
extern int allow_signal(int);
extern int disallow_signal(int);

extern int do_execve(char *, char * *, char * *, struct pt_regs *);
extern long do_fork(unsigned long, unsigned long, struct pt_regs *, unsigned long, int *, int *);
struct task_struct *fork_idle(int);

extern void set_task_comm(struct task_struct *tsk, char *from);
extern void get_task_comm(char *to, struct task_struct *tsk);


extern void wait_task_inactive(struct task_struct * p);
# 1781 "include/linux/sched.h"
static inline __attribute__((always_inline)) int has_group_leader_pid(struct task_struct *p)
{
 return p->pid == p->tgid;
}

static inline __attribute__((always_inline))
int same_thread_group(struct task_struct *p1, struct task_struct *p2)
{
 return p1->tgid == p2->tgid;
}

static inline __attribute__((always_inline)) struct task_struct *next_thread(const struct task_struct *p)
{
 return ({ const typeof( ((struct task_struct *)0)->thread_group ) *__mptr = (({ typeof(p->thread_group.next) _________p1 = (*(volatile typeof(p->thread_group.next) *)&(p->thread_group.next)); do {} while(0); (_________p1); })); (struct task_struct *)( (char *)__mptr - __builtin_offsetof(struct task_struct,thread_group) );})
                                      ;
}

static inline __attribute__((always_inline)) int thread_group_empty(struct task_struct *p)
{
 return list_empty(&p->thread_group);
}
# 1816 "include/linux/sched.h"
static inline __attribute__((always_inline)) void task_lock(struct task_struct *p)
{
 _spin_lock(&p->alloc_lock);
}

static inline __attribute__((always_inline)) void task_unlock(struct task_struct *p)
{
 do {__raw_spin_unlock(&(&p->alloc_lock)->raw_lock); (void)0; } while (0);
}

extern struct sighand_struct *lock_task_sighand(struct task_struct *tsk,
       unsigned long *flags);

static inline __attribute__((always_inline)) void unlock_task_sighand(struct task_struct *tsk,
      unsigned long *flags)
{
 _spin_unlock_irqrestore(&tsk->sighand->siglock, *flags);
}






static inline __attribute__((always_inline)) void setup_thread_stack(struct task_struct *p, struct task_struct *org)
{
 *((struct thread_info *)(p)->stack) = *((struct thread_info *)(org)->stack);
 ((struct thread_info *)(p)->stack)->task = p;
}

static inline __attribute__((always_inline)) unsigned long *end_of_stack(struct task_struct *p)
{
 return (unsigned long *)(((struct thread_info *)(p)->stack) + 1);
}






static inline __attribute__((always_inline)) void set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 set_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline __attribute__((always_inline)) void clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 clear_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline __attribute__((always_inline)) int test_and_set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_set_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline __attribute__((always_inline)) int test_and_clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_clear_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline __attribute__((always_inline)) int test_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline __attribute__((always_inline)) void set_tsk_need_resched(struct task_struct *tsk)
{
 set_tsk_thread_flag(tsk,3);
}

static inline __attribute__((always_inline)) void clear_tsk_need_resched(struct task_struct *tsk)
{
 clear_tsk_thread_flag(tsk,3);
}

static inline __attribute__((always_inline)) int signal_pending(struct task_struct *p)
{
 return __builtin_expect(!!(test_tsk_thread_flag(p,2)), 0);
}

static inline __attribute__((always_inline)) int need_resched(void)
{
 return __builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 3)), 0);
}
# 1914 "include/linux/sched.h"
extern int _cond_resched(void);
static inline __attribute__((always_inline)) int cond_resched(void)
{
 return _cond_resched();
}

extern int cond_resched_lock(spinlock_t * lock);
extern int cond_resched_softirq(void);
# 1937 "include/linux/sched.h"
static inline __attribute__((always_inline)) int lock_need_resched(spinlock_t *lock)
{
 if (0 || need_resched())
  return 1;
 return 0;
}







extern void recalc_sigpending_and_wake(struct task_struct *t);
extern void recalc_sigpending(void);

extern void signal_wake_up(struct task_struct *t, int resume_stopped);






static inline __attribute__((always_inline)) unsigned int task_cpu(const struct task_struct *p)
{
 return ((struct thread_info *)(p)->stack)->cpu;
}

extern void set_task_cpu(struct task_struct *p, unsigned int cpu);
# 1981 "include/linux/sched.h"
extern void arch_pick_mmap_layout(struct mm_struct *mm);
# 1991 "include/linux/sched.h"
extern long sched_setaffinity(pid_t pid, cpumask_t new_mask);
extern long sched_getaffinity(pid_t pid, cpumask_t *mask);

extern int sched_mc_power_savings, sched_smt_power_savings;

extern void normalize_rt_tasks(void);



extern struct task_group init_task_group;

extern struct task_group *sched_create_group(void);
extern void sched_destroy_group(struct task_group *tg);
extern void sched_move_task(struct task_struct *tsk);
extern int sched_group_set_shares(struct task_group *tg, unsigned long shares);
extern unsigned long sched_group_shares(struct task_group *tg);
# 2031 "include/linux/sched.h"
static inline __attribute__((always_inline)) void add_rchar(struct task_struct *tsk, ssize_t amt)
{
}

static inline __attribute__((always_inline)) void add_wchar(struct task_struct *tsk, ssize_t amt)
{
}

static inline __attribute__((always_inline)) void inc_syscr(struct task_struct *tsk)
{
}

static inline __attribute__((always_inline)) void inc_syscw(struct task_struct *tsk)
{
}



void migration_init(void);
# 7 "include/linux/blkdev.h" 2
# 1 "include/linux/major.h" 1
# 8 "include/linux/blkdev.h" 2
# 1 "include/linux/genhd.h" 1
# 21 "include/linux/genhd.h"
extern struct device_type disk_type;
extern struct device_type part_type;
extern struct kobject *block_depr;
extern struct class block_class;

enum {


 DOS_EXTENDED_PARTITION = 5,
 LINUX_EXTENDED_PARTITION = 0x85,
 WIN98_EXTENDED_PARTITION = 0x0f,

 SUN_WHOLE_DISK = DOS_EXTENDED_PARTITION,

 LINUX_SWAP_PARTITION = 0x82,
 LINUX_DATA_PARTITION = 0x83,
 LINUX_LVM_PARTITION = 0x8e,
 LINUX_RAID_PARTITION = 0xfd,

 SOLARIS_X86_PARTITION = LINUX_SWAP_PARTITION,
 NEW_SOLARIS_X86_PARTITION = 0xbf,

 DM6_AUX1PARTITION = 0x51,
 DM6_AUX3PARTITION = 0x53,
 DM6_PARTITION = 0x54,
 EZD_PARTITION = 0x55,

 FREEBSD_PARTITION = 0xa5,
 OPENBSD_PARTITION = 0xa6,
 NETBSD_PARTITION = 0xa9,
 BSDI_PARTITION = 0xb7,
 MINIX_PARTITION = 0x81,
 UNIXWARE_PARTITION = 0x63,
};
# 75 "include/linux/genhd.h"
# 1 "include/linux/device.h" 1
# 15 "include/linux/device.h"
# 1 "include/linux/ioport.h" 1
# 17 "include/linux/ioport.h"
struct resource {
 resource_size_t start;
 resource_size_t end;
 const char *name;
 unsigned long flags;
 struct resource *parent, *sibling, *child;
};

struct resource_list {
 struct resource_list *next;
 struct resource *res;
 struct pci_dev *dev;
};
# 98 "include/linux/ioport.h"
extern struct resource ioport_resource;
extern struct resource iomem_resource;

extern int request_resource(struct resource *root, struct resource *new);
extern int release_resource(struct resource *new);
extern int insert_resource(struct resource *parent, struct resource *new);
extern int allocate_resource(struct resource *root, struct resource *new,
        resource_size_t size, resource_size_t min,
        resource_size_t max, resource_size_t align,
        void (*alignf)(void *, struct resource *,
         resource_size_t, resource_size_t),
        void *alignf_data);
int adjust_resource(struct resource *res, resource_size_t start,
      resource_size_t size);






extern struct resource * __request_region(struct resource *,
     resource_size_t start,
     resource_size_t n, const char *name);






extern int __check_region(struct resource *, resource_size_t, resource_size_t);
extern void __release_region(struct resource *, resource_size_t,
    resource_size_t);

static inline __attribute__((always_inline)) int __attribute__((deprecated)) check_region(resource_size_t s,
      resource_size_t n)
{
 return __check_region(&ioport_resource, s, n);
}


struct device;





extern struct resource * __devm_request_region(struct device *dev,
    struct resource *parent, resource_size_t start,
    resource_size_t n, const char *name);






extern void __devm_release_region(struct device *dev, struct resource *parent,
      resource_size_t start, resource_size_t n);
# 16 "include/linux/device.h" 2

# 1 "include/linux/klist.h" 1
# 20 "include/linux/klist.h"
struct klist_node;
struct klist {
 spinlock_t k_lock;
 struct list_head k_list;
 void (*get)(struct klist_node *);
 void (*put)(struct klist_node *);
};


extern void klist_init(struct klist * k, void (*get)(struct klist_node *),
         void (*put)(struct klist_node *));

struct klist_node {
 struct klist * n_klist;
 struct list_head n_node;
 struct kref n_ref;
 struct completion n_removed;
};

extern void klist_add_tail(struct klist_node * n, struct klist * k);
extern void klist_add_head(struct klist_node * n, struct klist * k);

extern void klist_del(struct klist_node * n);
extern void klist_remove(struct klist_node * n);

extern int klist_node_attached(struct klist_node * n);


struct klist_iter {
 struct klist * i_klist;
 struct list_head * i_head;
 struct klist_node * i_cur;
};


extern void klist_iter_init(struct klist * k, struct klist_iter * i);
extern void klist_iter_init_node(struct klist * k, struct klist_iter * i,
     struct klist_node * n);
extern void klist_iter_exit(struct klist_iter * i);
extern struct klist_node * klist_next(struct klist_iter * i);
# 18 "include/linux/device.h" 2



# 1 "include/linux/module.h" 1
# 13 "include/linux/module.h"
# 1 "include/linux/kmod.h" 1
# 33 "include/linux/kmod.h"
static inline __attribute__((always_inline)) int request_module(const char * name, ...) { return -38; }




struct key;
struct file;
struct subprocess_info;


struct subprocess_info *call_usermodehelper_setup(char *path,
        char **argv, char **envp);


void call_usermodehelper_setkeys(struct subprocess_info *info,
     struct key *session_keyring);
int call_usermodehelper_stdinpipe(struct subprocess_info *sub_info,
      struct file **filp);
void call_usermodehelper_setcleanup(struct subprocess_info *info,
        void (*cleanup)(char **argv, char **envp));

enum umh_wait {
 UMH_NO_WAIT = -1,
 UMH_WAIT_EXEC = 0,
 UMH_WAIT_PROC = 1,
};


int call_usermodehelper_exec(struct subprocess_info *info, enum umh_wait wait);



void call_usermodehelper_freeinfo(struct subprocess_info *info);

static inline __attribute__((always_inline)) int
call_usermodehelper(char *path, char **argv, char **envp, enum umh_wait wait)
{
 struct subprocess_info *info;

 info = call_usermodehelper_setup(path, argv, envp);
 if (info == ((void *)0))
  return -12;
 return call_usermodehelper_exec(info, wait);
}

static inline __attribute__((always_inline)) int
call_usermodehelper_keys(char *path, char **argv, char **envp,
    struct key *session_keyring, enum umh_wait wait)
{
 struct subprocess_info *info;

 info = call_usermodehelper_setup(path, argv, envp);
 if (info == ((void *)0))
  return -12;

 call_usermodehelper_setkeys(info, session_keyring);
 return call_usermodehelper_exec(info, wait);
}

extern void usermodehelper_init(void);

struct file;
extern int call_usermodehelper_pipe(char *path, char *argv[], char *envp[],
        struct file **filp);
# 14 "include/linux/module.h" 2
# 1 "include/linux/elf.h" 1




# 1 "include/linux/elf-em.h" 1
# 6 "include/linux/elf.h" 2
# 1 "include/asm/elf.h" 1
# 9 "include/asm/elf.h"
# 1 "include/asm/user.h" 1




# 1 "include/asm/user_64.h" 1




# 1 "include/asm/page.h" 1
# 6 "include/asm/user_64.h" 2
# 50 "include/asm/user_64.h"
struct user_i387_struct {
 unsigned short cwd;
 unsigned short swd;
 unsigned short twd;
 unsigned short fop;
 __u64 rip;
 __u64 rdp;
 __u32 mxcsr;
 __u32 mxcsr_mask;
 __u32 st_space[32];
 __u32 xmm_space[64];
 __u32 padding[24];
};




struct user_regs_struct {
 unsigned long r15,r14,r13,r12,rbp,rbx,r11,r10;
 unsigned long r9,r8,rax,rcx,rdx,rsi,rdi,orig_rax;
 unsigned long rip,cs,eflags;
 unsigned long rsp,ss;
   unsigned long fs_base, gs_base;
 unsigned long ds,es,fs,gs;
};




struct user{


  struct user_regs_struct regs;

  int u_fpvalid;

  int pad0;
  struct user_i387_struct i387;

  unsigned long int u_tsize;
  unsigned long int u_dsize;
  unsigned long int u_ssize;
  unsigned long start_code;
  unsigned long start_stack;



  long int signal;
  int reserved;
  int pad1;
  struct user_pt_regs * u_ar0;

  struct user_i387_struct* u_fpstate;
  unsigned long magic;
  char u_comm[32];
  unsigned long u_debugreg[8];
  unsigned long error_code;
  unsigned long fault_address;
};
# 6 "include/asm/user.h" 2
# 10 "include/asm/elf.h" 2


typedef unsigned long elf_greg_t;


typedef elf_greg_t elf_gregset_t[(sizeof (struct user_regs_struct) / sizeof(elf_greg_t))];

typedef struct user_i387_struct elf_fpregset_t;
# 132 "include/asm/elf.h"
# 1 "include/asm/processor.h" 1
# 133 "include/asm/elf.h" 2
# 196 "include/asm/elf.h"
extern void set_personality_64bit(void);
extern int vdso_enabled;
# 233 "include/asm/elf.h"
struct task_struct;

extern int dump_task_regs (struct task_struct *, elf_gregset_t *);
extern int dump_task_fpu (struct task_struct *, elf_fpregset_t *);
# 282 "include/asm/elf.h"
struct linux_binprm;


extern int arch_setup_additional_pages(struct linux_binprm *bprm,
           int executable_stack);
# 7 "include/linux/elf.h" 2

struct file;
# 18 "include/linux/elf.h"
typedef __u32 Elf32_Addr;
typedef __u16 Elf32_Half;
typedef __u32 Elf32_Off;
typedef __s32 Elf32_Sword;
typedef __u32 Elf32_Word;


typedef __u64 Elf64_Addr;
typedef __u16 Elf64_Half;
typedef __s16 Elf64_SHalf;
typedef __u64 Elf64_Off;
typedef __s32 Elf64_Sword;
typedef __u32 Elf64_Word;
typedef __u64 Elf64_Xword;
typedef __s64 Elf64_Sxword;
# 125 "include/linux/elf.h"
typedef struct dynamic{
  Elf32_Sword d_tag;
  union{
    Elf32_Sword d_val;
    Elf32_Addr d_ptr;
  } d_un;
} Elf32_Dyn;

typedef struct {
  Elf64_Sxword d_tag;
  union {
    Elf64_Xword d_val;
    Elf64_Addr d_ptr;
  } d_un;
} Elf64_Dyn;
# 148 "include/linux/elf.h"
typedef struct elf32_rel {
  Elf32_Addr r_offset;
  Elf32_Word r_info;
} Elf32_Rel;

typedef struct elf64_rel {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
} Elf64_Rel;

typedef struct elf32_rela{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
  Elf32_Sword r_addend;
} Elf32_Rela;

typedef struct elf64_rela {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
  Elf64_Sxword r_addend;
} Elf64_Rela;

typedef struct elf32_sym{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Half st_shndx;
} Elf32_Sym;

typedef struct elf64_sym {
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Half st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;




typedef struct elf32_hdr{
  unsigned char e_ident[16];
  Elf32_Half e_type;
  Elf32_Half e_machine;
  Elf32_Word e_version;
  Elf32_Addr e_entry;
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word e_flags;
  Elf32_Half e_ehsize;
  Elf32_Half e_phentsize;
  Elf32_Half e_phnum;
  Elf32_Half e_shentsize;
  Elf32_Half e_shnum;
  Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct elf64_hdr {
  unsigned char e_ident[16];
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;
  Elf64_Off e_phoff;
  Elf64_Off e_shoff;
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;







typedef struct elf32_phdr{
  Elf32_Word p_type;
  Elf32_Off p_offset;
  Elf32_Addr p_vaddr;
  Elf32_Addr p_paddr;
  Elf32_Word p_filesz;
  Elf32_Word p_memsz;
  Elf32_Word p_flags;
  Elf32_Word p_align;
} Elf32_Phdr;

typedef struct elf64_phdr {
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;
# 287 "include/linux/elf.h"
typedef struct {
  Elf32_Word sh_name;
  Elf32_Word sh_type;
  Elf32_Word sh_flags;
  Elf32_Addr sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word sh_size;
  Elf32_Word sh_link;
  Elf32_Word sh_info;
  Elf32_Word sh_addralign;
  Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct elf64_shdr {
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;
# 361 "include/linux/elf.h"
typedef struct elf32_note {
  Elf32_Word n_namesz;
  Elf32_Word n_descsz;
  Elf32_Word n_type;
} Elf32_Nhdr;


typedef struct elf64_note {
  Elf64_Word n_namesz;
  Elf64_Word n_descsz;
  Elf64_Word n_type;
} Elf64_Nhdr;
# 384 "include/linux/elf.h"
extern Elf64_Dyn _DYNAMIC [];
# 394 "include/linux/elf.h"
static inline __attribute__((always_inline)) int elf_coredump_extra_notes_size(void) { return 0; }
static inline __attribute__((always_inline)) int elf_coredump_extra_notes_write(struct file *file,
   loff_t *foffset) { return 0; }
# 15 "include/linux/module.h" 2


# 1 "include/linux/moduleparam.h" 1
# 29 "include/linux/moduleparam.h"
struct kernel_param;


typedef int (*param_set_fn)(const char *val, struct kernel_param *kp);

typedef int (*param_get_fn)(char *buffer, struct kernel_param *kp);

struct kernel_param {
 const char *name;
 unsigned int perm;
 param_set_fn set;
 param_get_fn get;
 union {
  void *arg;
  const struct kparam_string *str;
  const struct kparam_array *arr;
 };
};


struct kparam_string {
 unsigned int maxlen;
 char *string;
};


struct kparam_array
{
 unsigned int max;
 unsigned int *num;
 param_set_fn set;
 param_get_fn get;
 unsigned int elemsize;
 void *elem;
};
# 102 "include/linux/moduleparam.h"
extern int parse_args(const char *name,
        char *args,
        struct kernel_param *params,
        unsigned num,
        int (*unknown)(char *param, char *val));







extern int param_set_byte(const char *val, struct kernel_param *kp);
extern int param_get_byte(char *buffer, struct kernel_param *kp);


extern int param_set_short(const char *val, struct kernel_param *kp);
extern int param_get_short(char *buffer, struct kernel_param *kp);


extern int param_set_ushort(const char *val, struct kernel_param *kp);
extern int param_get_ushort(char *buffer, struct kernel_param *kp);


extern int param_set_int(const char *val, struct kernel_param *kp);
extern int param_get_int(char *buffer, struct kernel_param *kp);


extern int param_set_uint(const char *val, struct kernel_param *kp);
extern int param_get_uint(char *buffer, struct kernel_param *kp);


extern int param_set_long(const char *val, struct kernel_param *kp);
extern int param_get_long(char *buffer, struct kernel_param *kp);


extern int param_set_ulong(const char *val, struct kernel_param *kp);
extern int param_get_ulong(char *buffer, struct kernel_param *kp);


extern int param_set_charp(const char *val, struct kernel_param *kp);
extern int param_get_charp(char *buffer, struct kernel_param *kp);


extern int param_set_bool(const char *val, struct kernel_param *kp);
extern int param_get_bool(char *buffer, struct kernel_param *kp);


extern int param_set_invbool(const char *val, struct kernel_param *kp);
extern int param_get_invbool(char *buffer, struct kernel_param *kp);
# 166 "include/linux/moduleparam.h"
extern int param_array_set(const char *val, struct kernel_param *kp);
extern int param_array_get(char *buffer, struct kernel_param *kp);

extern int param_set_copystring(const char *val, struct kernel_param *kp);
extern int param_get_string(char *buffer, struct kernel_param *kp);



struct module;


extern int module_param_sysfs_setup(struct module *mod,
        struct kernel_param *kparam,
        unsigned int num_params);

extern void module_param_sysfs_remove(struct module *mod);
# 18 "include/linux/module.h" 2
# 1 "include/linux/marker.h" 1
# 17 "include/linux/marker.h"
struct module;
struct marker;
# 30 "include/linux/marker.h"
typedef void marker_probe_func(const struct marker *mdata,
 void *private_data, const char *fmt, ...);

struct marker {
 const char *name;
 const char *format;


 char state;
 marker_probe_func *call;
 void *private;
} __attribute__((aligned(8)));
# 79 "include/linux/marker.h"
static inline __attribute__((always_inline)) void marker_update_probe_range(struct marker *begin,
 struct marker *end, struct module *probe_module, int *refcount)
{ }
# 103 "include/linux/marker.h"
static inline __attribute__((always_inline)) void __attribute__((format(printf,1,2))) __mark_check_format(const char *fmt, ...)
{
}

extern marker_probe_func __mark_empty_function;





extern int marker_probe_register(const char *name, const char *format,
    marker_probe_func *probe, void *private);




extern void *marker_probe_unregister(const char *name);



extern void *marker_probe_unregister_private_data(void *private);

extern int marker_arm(const char *name);
extern int marker_disarm(const char *name);
extern void *marker_get_private_data(const char *name);
# 19 "include/linux/module.h" 2
# 1 "include/asm/local.h" 1



# 1 "include/asm/local_64.h" 1




# 1 "include/asm/atomic.h" 1
# 6 "include/asm/local_64.h" 2

typedef struct
{
 atomic_long_t a;
} local_t;






static inline __attribute__((always_inline)) void local_inc(local_t *l)
{
 __asm__ __volatile__(
  "incq %0"
  :"=m" (l->a.counter)
  :"m" (l->a.counter));
}

static inline __attribute__((always_inline)) void local_dec(local_t *l)
{
 __asm__ __volatile__(
  "decq %0"
  :"=m" (l->a.counter)
  :"m" (l->a.counter));
}

static inline __attribute__((always_inline)) void local_add(long i, local_t *l)
{
 __asm__ __volatile__(
  "addq %1,%0"
  :"=m" (l->a.counter)
  :"ir" (i), "m" (l->a.counter));
}

static inline __attribute__((always_inline)) void local_sub(long i, local_t *l)
{
 __asm__ __volatile__(
  "subq %1,%0"
  :"=m" (l->a.counter)
  :"ir" (i), "m" (l->a.counter));
}
# 58 "include/asm/local_64.h"
static __inline__ __attribute__((always_inline)) int local_sub_and_test(long i, local_t *l)
{
 unsigned char c;

 __asm__ __volatile__(
  "subq %2,%0; sete %1"
  :"=m" (l->a.counter), "=qm" (c)
  :"ir" (i), "m" (l->a.counter) : "memory");
 return c;
}
# 77 "include/asm/local_64.h"
static __inline__ __attribute__((always_inline)) int local_dec_and_test(local_t *l)
{
 unsigned char c;

 __asm__ __volatile__(
  "decq %0; sete %1"
  :"=m" (l->a.counter), "=qm" (c)
  :"m" (l->a.counter) : "memory");
 return c != 0;
}
# 96 "include/asm/local_64.h"
static __inline__ __attribute__((always_inline)) int local_inc_and_test(local_t *l)
{
 unsigned char c;

 __asm__ __volatile__(
  "incq %0; sete %1"
  :"=m" (l->a.counter), "=qm" (c)
  :"m" (l->a.counter) : "memory");
 return c != 0;
}
# 116 "include/asm/local_64.h"
static __inline__ __attribute__((always_inline)) int local_add_negative(long i, local_t *l)
{
 unsigned char c;

 __asm__ __volatile__(
  "addq %2,%0; sets %1"
  :"=m" (l->a.counter), "=qm" (c)
  :"ir" (i), "m" (l->a.counter) : "memory");
 return c;
}
# 134 "include/asm/local_64.h"
static __inline__ __attribute__((always_inline)) long local_add_return(long i, local_t *l)
{
 long __i = i;
 __asm__ __volatile__(
  "xaddq %0, %1;"
  :"+r" (i), "+m" (l->a.counter)
  : : "memory");
 return i + __i;
}

static __inline__ __attribute__((always_inline)) long local_sub_return(long i, local_t *l)
{
 return local_add_return(-i,l);
}
# 5 "include/asm/local.h" 2
# 20 "include/linux/module.h" 2

# 1 "include/asm/module.h" 1



# 1 "include/asm/module_64.h" 1



struct mod_arch_specific {};
# 5 "include/asm/module.h" 2
# 22 "include/linux/module.h" 2
# 33 "include/linux/module.h"
struct kernel_symbol
{
 unsigned long value;
 const char *name;
};

struct modversion_info
{
 unsigned long crc;
 char name[(64 - sizeof(unsigned long))];
};

struct module;

struct module_attribute {
        struct attribute attr;
        ssize_t (*show)(struct module_attribute *, struct module *, char *);
        ssize_t (*store)(struct module_attribute *, struct module *,
    const char *, size_t count);
 void (*setup)(struct module *, const char *);
 int (*test)(struct module *);
 void (*free)(struct module *);
};

struct module_kobject
{
 struct kobject kobj;
 struct module *mod;
 struct kobject *drivers_dir;
};


extern int init_module(void);
extern void cleanup_module(void);


struct exception_table_entry;

const struct exception_table_entry *
search_extable(const struct exception_table_entry *first,
        const struct exception_table_entry *last,
        unsigned long value);
void sort_extable(struct exception_table_entry *start,
    struct exception_table_entry *finish);
void sort_main_extable(void);
# 163 "include/linux/module.h"
const struct exception_table_entry *search_exception_tables(unsigned long add);

struct notifier_block;




void *__symbol_get(const char *symbol);
void *__symbol_get_gpl(const char *symbol);
# 220 "include/linux/module.h"
struct module_ref
{
 local_t count;
} __attribute__((__aligned__((1 << (7)))));

enum module_state
{
 MODULE_STATE_LIVE,
 MODULE_STATE_COMING,
 MODULE_STATE_GOING,
};


struct module_sect_attr
{
 struct module_attribute mattr;
 char *name;
 unsigned long address;
};

struct module_sect_attrs
{
 struct attribute_group grp;
 int nsections;
 struct module_sect_attr attrs[0];
};

struct module_param_attrs;

struct module
{
 enum module_state state;


 struct list_head list;


 char name[(64 - sizeof(unsigned long))];


 struct module_kobject mkobj;
 struct module_param_attrs *param_attrs;
 struct module_attribute *modinfo_attrs;
 const char *version;
 const char *srcversion;
 struct kobject *holders_dir;


 const struct kernel_symbol *syms;
 unsigned int num_syms;
 const unsigned long *crcs;


 const struct kernel_symbol *gpl_syms;
 unsigned int num_gpl_syms;
 const unsigned long *gpl_crcs;


 const struct kernel_symbol *unused_syms;
 unsigned int num_unused_syms;
 const unsigned long *unused_crcs;

 const struct kernel_symbol *unused_gpl_syms;
 unsigned int num_unused_gpl_syms;
 const unsigned long *unused_gpl_crcs;


 const struct kernel_symbol *gpl_future_syms;
 unsigned int num_gpl_future_syms;
 const unsigned long *gpl_future_crcs;


 unsigned int num_exentries;
 const struct exception_table_entry *extable;


 int (*init)(void);


 void *module_init;


 void *module_core;


 unsigned long init_size, core_size;


 unsigned long init_text_size, core_text_size;


 void *unwind_info;


 struct mod_arch_specific arch;

 unsigned int taints;



 struct list_head bug_list;
 struct bug_entry *bug_table;
 unsigned num_bugs;




 struct module_ref ref[32];


 struct list_head modules_which_use_me;


 struct task_struct *waiter;


 void (*exit)(void);




 Elf64_Sym *symtab;
 unsigned long num_symtab;
 char *strtab;


 struct module_sect_attrs *sect_attrs;


 struct module_notes_attrs *notes_attrs;



 void *percpu;



 char *args;




};







static inline __attribute__((always_inline)) int module_is_live(struct module *mod)
{
 return mod->state != MODULE_STATE_GOING;
}


struct module *module_text_address(unsigned long addr);
struct module *__module_text_address(unsigned long addr);
int is_module_address(unsigned long addr);



int module_get_kallsym(unsigned int symnum, unsigned long *value, char *type,
   char *name, char *module_name, int *exported);


unsigned long module_kallsyms_lookup_name(const char *name);

extern void __module_put_and_exit(struct module *mod, long code)
 __attribute__((noreturn));



unsigned int module_refcount(struct module *mod);
void __symbol_put(const char *symbol);

void symbol_put_addr(void *addr);



static inline __attribute__((always_inline)) void __module_get(struct module *module)
{
 if (module) {
  do { if (__builtin_expect(!!(module_refcount(module) == 0), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/module.h"), "i" (403), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0);
  local_inc(&module->ref[({ do { } while (0); ({ typeof(_proxy_pda.cpunumber) ret__; switch (sizeof(_proxy_pda.cpunumber)) { case 2: asm("mov" "w %%gs:%c1,%0" : "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,cpunumber)), "m" (_proxy_pda.cpunumber)); break; case 4: asm("mov" "l %%gs:%c1,%0": "=r" (ret__): "i" (__builtin_offsetof(struct x8664_pda,cpunumber)), "m" (_proxy_pda.cpunumber)); break; case 8: asm("mov" "q %%gs:%c1,%0": "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,cpunumber)), "m" (_proxy_pda.cpunumber)); break; default: __bad_pda_field(); } ret__; }); })].count);
  do { } while (0);
 }
}

static inline __attribute__((always_inline)) int try_module_get(struct module *module)
{
 int ret = 1;

 if (module) {
  unsigned int cpu = ({ do { } while (0); ({ typeof(_proxy_pda.cpunumber) ret__; switch (sizeof(_proxy_pda.cpunumber)) { case 2: asm("mov" "w %%gs:%c1,%0" : "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,cpunumber)), "m" (_proxy_pda.cpunumber)); break; case 4: asm("mov" "l %%gs:%c1,%0": "=r" (ret__): "i" (__builtin_offsetof(struct x8664_pda,cpunumber)), "m" (_proxy_pda.cpunumber)); break; case 8: asm("mov" "q %%gs:%c1,%0": "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,cpunumber)), "m" (_proxy_pda.cpunumber)); break; default: __bad_pda_field(); } ret__; }); });
  if (__builtin_expect(!!(module_is_live(module)), 1))
   local_inc(&module->ref[cpu].count);
  else
   ret = 0;
  do { } while (0);
 }
 return ret;
}

extern void module_put(struct module *module);
# 452 "include/linux/module.h"
char *module_address_lookup(unsigned long addr,
       unsigned long *symbolsize,
       unsigned long *offset,
       char **modname,
       char *namebuf);
int lookup_module_symbol_name(unsigned long addr, char *symname);
int lookup_module_symbol_attrs(unsigned long addr, unsigned long *size, unsigned long *offset, char *modname, char *name);


const struct exception_table_entry *search_module_extables(unsigned long addr);

int register_module_notifier(struct notifier_block * nb);
int unregister_module_notifier(struct notifier_block * nb);

extern void print_modules(void);

extern void module_update_markers(struct module *probe_module, int *refcount);
# 577 "include/linux/module.h"
struct device_driver;

struct module;

extern struct kset *module_kset;
extern struct kobj_type module_ktype;
extern int module_sysfs_initialized;

int mod_sysfs_init(struct module *mod);
int mod_sysfs_setup(struct module *mod,
      struct kernel_param *kparam,
      unsigned int num_params);
int module_add_modinfo_attrs(struct module *mod);
void module_remove_modinfo_attrs(struct module *mod);
# 22 "include/linux/device.h" 2

# 1 "include/asm/semaphore.h" 1
# 24 "include/linux/device.h" 2
# 1 "include/asm/atomic.h" 1
# 25 "include/linux/device.h" 2
# 1 "include/asm/device.h" 1



struct dev_archdata {

 void *acpi_handle;




};
# 26 "include/linux/device.h" 2
# 34 "include/linux/device.h"
struct device;
struct device_driver;
struct driver_private;
struct class;
struct class_device;
struct bus_type;
struct bus_type_private;

struct bus_attribute {
 struct attribute attr;
 ssize_t (*show)(struct bus_type *bus, char *buf);
 ssize_t (*store)(struct bus_type *bus, const char *buf, size_t count);
};




extern int bus_create_file(struct bus_type *,
     struct bus_attribute *);
extern void bus_remove_file(struct bus_type *, struct bus_attribute *);

struct bus_type {
 const char *name;
 struct bus_attribute *bus_attrs;
 struct device_attribute *dev_attrs;
 struct driver_attribute *drv_attrs;

 int (*match)(struct device *dev, struct device_driver *drv);
 int (*uevent)(struct device *dev, struct kobj_uevent_env *env);
 int (*probe)(struct device *dev);
 int (*remove)(struct device *dev);
 void (*shutdown)(struct device *dev);

 int (*suspend)(struct device *dev, pm_message_t state);
 int (*suspend_late)(struct device *dev, pm_message_t state);
 int (*resume_early)(struct device *dev);
 int (*resume)(struct device *dev);

 struct bus_type_private *p;
};

extern int bus_register(struct bus_type *bus);
extern void bus_unregister(struct bus_type *bus);

extern int bus_rescan_devices(struct bus_type *bus);



int bus_for_each_dev(struct bus_type *bus, struct device *start, void *data,
       int (*fn)(struct device *dev, void *data));
struct device *bus_find_device(struct bus_type *bus, struct device *start,
          void *data,
          int (*match)(struct device *dev, void *data));

int bus_for_each_drv(struct bus_type *bus,
      struct device_driver *start, void *data,
      int (*fn)(struct device_driver *, void *));







struct notifier_block;

extern int bus_register_notifier(struct bus_type *bus,
     struct notifier_block *nb);
extern int bus_unregister_notifier(struct bus_type *bus,
       struct notifier_block *nb);
# 115 "include/linux/device.h"
extern struct kset *bus_get_kset(struct bus_type *bus);
extern struct klist *bus_get_device_klist(struct bus_type *bus);

struct device_driver {
 const char *name;
 struct bus_type *bus;

 struct module *owner;
 const char *mod_name;

 int (*probe) (struct device *dev);
 int (*remove) (struct device *dev);
 void (*shutdown) (struct device *dev);
 int (*suspend) (struct device *dev, pm_message_t state);
 int (*resume) (struct device *dev);
 struct attribute_group **groups;

 struct driver_private *p;
};


extern int driver_register(struct device_driver *drv);
extern void driver_unregister(struct device_driver *drv);

extern struct device_driver *get_driver(struct device_driver *drv);
extern void put_driver(struct device_driver *drv);
extern struct device_driver *driver_find(const char *name,
      struct bus_type *bus);
extern int driver_probe_done(void);



struct driver_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device_driver *driver, char *buf);
 ssize_t (*store)(struct device_driver *driver, const char *buf,
    size_t count);
};





extern int driver_create_file(struct device_driver *driver,
        struct driver_attribute *attr);
extern void driver_remove_file(struct device_driver *driver,
          struct driver_attribute *attr);

extern int driver_add_kobj(struct device_driver *drv,
     struct kobject *kobj,
     const char *fmt, ...);

extern int driver_for_each_device(struct device_driver *drv,
            struct device *start,
            void *data,
            int (*fn)(struct device *dev,
        void *));
struct device *driver_find_device(struct device_driver *drv,
      struct device *start, void *data,
      int (*match)(struct device *dev, void *data));




struct class {
 const char *name;
 struct module *owner;

 struct kset subsys;
 struct list_head children;
 struct list_head devices;
 struct list_head interfaces;
 struct kset class_dirs;
 struct semaphore sem;
 struct class_attribute *class_attrs;
 struct class_device_attribute *class_dev_attrs;
 struct device_attribute *dev_attrs;

 int (*uevent)(struct class_device *dev, struct kobj_uevent_env *env);
 int (*dev_uevent)(struct device *dev, struct kobj_uevent_env *env);

 void (*release)(struct class_device *dev);
 void (*class_release)(struct class *class);
 void (*dev_release)(struct device *dev);

 int (*suspend)(struct device *dev, pm_message_t state);
 int (*resume)(struct device *dev);
};

extern int class_register(struct class *class);
extern void class_unregister(struct class *class);
extern int class_for_each_device(struct class *class, void *data,
     int (*fn)(struct device *dev, void *data));
extern struct device *class_find_device(struct class *class, void *data,
     int (*match)(struct device *, void *));
extern struct class_device *class_find_child(struct class *class, void *data,
       int (*match)(struct class_device *, void *));


struct class_attribute {
 struct attribute attr;
 ssize_t (*show)(struct class *class, char *buf);
 ssize_t (*store)(struct class *class, const char *buf, size_t count);
};




extern int class_create_file(struct class *class,
       const struct class_attribute *attr);
extern void class_remove_file(struct class *class,
         const struct class_attribute *attr);

struct class_device_attribute {
 struct attribute attr;
 ssize_t (*show)(struct class_device *, char *buf);
 ssize_t (*store)(struct class_device *, const char *buf, size_t count);
};





extern int class_device_create_file(struct class_device *,
        const struct class_device_attribute *);
# 265 "include/linux/device.h"
struct class_device {
 struct list_head node;

 struct kobject kobj;
 struct class *class;
 dev_t devt;
 struct device *dev;
 void *class_data;
 struct class_device *parent;
 struct attribute_group **groups;

 void (*release)(struct class_device *dev);
 int (*uevent)(struct class_device *dev, struct kobj_uevent_env *env);
 char class_id[20];
};

static inline __attribute__((always_inline)) void *class_get_devdata(struct class_device *dev)
{
 return dev->class_data;
}

static inline __attribute__((always_inline)) void class_set_devdata(struct class_device *dev, void *data)
{
 dev->class_data = data;
}


extern int class_device_register(struct class_device *);
extern void class_device_unregister(struct class_device *);
extern void class_device_initialize(struct class_device *);
extern int class_device_add(struct class_device *);
extern void class_device_del(struct class_device *);

extern struct class_device *class_device_get(struct class_device *);
extern void class_device_put(struct class_device *);

extern void class_device_remove_file(struct class_device *,
         const struct class_device_attribute *);
extern int class_device_create_bin_file(struct class_device *,
     struct bin_attribute *);
extern void class_device_remove_bin_file(struct class_device *,
      struct bin_attribute *);

struct class_interface {
 struct list_head node;
 struct class *class;

 int (*add) (struct class_device *, struct class_interface *);
 void (*remove) (struct class_device *, struct class_interface *);
 int (*add_dev) (struct device *, struct class_interface *);
 void (*remove_dev) (struct device *, struct class_interface *);
};

extern int class_interface_register(struct class_interface *);
extern void class_interface_unregister(struct class_interface *);

extern struct class *class_create(struct module *owner, const char *name);
extern void class_destroy(struct class *cls);
extern struct class_device *class_device_create(struct class *cls,
      struct class_device *parent,
      dev_t devt,
      struct device *device,
      const char *fmt, ...)
     __attribute__((format(printf, 5, 6)));
extern void class_device_destroy(struct class *cls, dev_t devt);
# 340 "include/linux/device.h"
struct device_type {
 const char *name;
 struct attribute_group **groups;
 int (*uevent)(struct device *dev, struct kobj_uevent_env *env);
 void (*release)(struct device *dev);
 int (*suspend)(struct device *dev, pm_message_t state);
 int (*resume)(struct device *dev);
};


struct device_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device *dev, struct device_attribute *attr,
   char *buf);
 ssize_t (*store)(struct device *dev, struct device_attribute *attr,
    const char *buf, size_t count);
};




extern int device_create_file(struct device *device,
        struct device_attribute *entry);
extern void device_remove_file(struct device *dev,
          struct device_attribute *attr);
extern int device_create_bin_file(struct device *dev,
            struct bin_attribute *attr);
extern void device_remove_bin_file(struct device *dev,
       struct bin_attribute *attr);
extern int device_schedule_callback_owner(struct device *dev,
  void (*func)(struct device *dev), struct module *owner);






typedef void (*dr_release_t)(struct device *dev, void *res);
typedef int (*dr_match_t)(struct device *dev, void *res, void *match_data);







extern void *devres_alloc(dr_release_t release, size_t size, gfp_t gfp);

extern void devres_free(void *res);
extern void devres_add(struct device *dev, void *res);
extern void *devres_find(struct device *dev, dr_release_t release,
    dr_match_t match, void *match_data);
extern void *devres_get(struct device *dev, void *new_res,
   dr_match_t match, void *match_data);
extern void *devres_remove(struct device *dev, dr_release_t release,
      dr_match_t match, void *match_data);
extern int devres_destroy(struct device *dev, dr_release_t release,
     dr_match_t match, void *match_data);


extern void * devres_open_group(struct device *dev, void *id,
          gfp_t gfp);
extern void devres_close_group(struct device *dev, void *id);
extern void devres_remove_group(struct device *dev, void *id);
extern int devres_release_group(struct device *dev, void *id);


extern void *devm_kzalloc(struct device *dev, size_t size, gfp_t gfp);
extern void devm_kfree(struct device *dev, void *p);

struct device {
 struct klist klist_children;
 struct klist_node knode_parent;
 struct klist_node knode_driver;
 struct klist_node knode_bus;
 struct device *parent;

 struct kobject kobj;
 char bus_id[20];
 struct device_type *type;
 unsigned is_registered:1;
 unsigned uevent_suppress:1;

 struct semaphore sem;



 struct bus_type *bus;
 struct device_driver *driver;

 void *driver_data;
 void *platform_data;

 struct dev_pm_info power;


 int numa_node;

 u64 *dma_mask;
 u64 coherent_dma_mask;





 struct list_head dma_pools;

 struct dma_coherent_mem *dma_mem;


 struct dev_archdata archdata;

 spinlock_t devres_lock;
 struct list_head devres_head;


 struct list_head node;
 struct class *class;
 dev_t devt;
 struct attribute_group **groups;

 void (*release)(struct device *dev);
};


static inline __attribute__((always_inline)) int dev_to_node(struct device *dev)
{
 return dev->numa_node;
}
static inline __attribute__((always_inline)) void set_dev_node(struct device *dev, int node)
{
 dev->numa_node = node;
}
# 483 "include/linux/device.h"
static inline __attribute__((always_inline)) void *dev_get_drvdata(struct device *dev)
{
 return dev->driver_data;
}

static inline __attribute__((always_inline)) void dev_set_drvdata(struct device *dev, void *data)
{
 dev->driver_data = data;
}

static inline __attribute__((always_inline)) int device_is_registered(struct device *dev)
{
 return dev->is_registered;
}

void driver_init(void);




extern int device_register(struct device *dev);
extern void device_unregister(struct device *dev);
extern void device_initialize(struct device *dev);
extern int device_add(struct device *dev);
extern void device_del(struct device *dev);
extern int device_for_each_child(struct device *dev, void *data,
       int (*fn)(struct device *dev, void *data));
extern struct device *device_find_child(struct device *dev, void *data,
    int (*match)(struct device *dev, void *data));
extern int device_rename(struct device *dev, char *new_name);
extern int device_move(struct device *dev, struct device *new_parent);





extern int device_bind_driver(struct device *dev);
extern void device_release_driver(struct device *dev);
extern int device_attach(struct device *dev);
extern int driver_attach(struct device_driver *drv);
extern int device_reprobe(struct device *dev);




extern struct device *device_create(struct class *cls, struct device *parent,
        dev_t devt, const char *fmt, ...)
        __attribute__((format(printf, 4, 5)));
extern void device_destroy(struct class *cls, dev_t devt);

extern void destroy_suspended_device(struct class *cls, dev_t devt);
# 547 "include/linux/device.h"
extern int (*platform_notify)(struct device *dev);

extern int (*platform_notify_remove)(struct device *dev);






extern struct device *get_device(struct device *dev);
extern void put_device(struct device *dev);



extern void device_shutdown(void);


extern void sysdev_shutdown(void);


extern const char *dev_driver_string(struct device *dev);
# 591 "include/linux/device.h"
static inline __attribute__((always_inline)) int __attribute__ ((format (printf, 2, 3)))
dev_dbg(struct device *dev, const char *fmt, ...)
{
 return 0;
}





static inline __attribute__((always_inline)) int __attribute__ ((format (printf, 2, 3)))
dev_vdbg(struct device *dev, const char *fmt, ...)
{
 return 0;
}
# 76 "include/linux/genhd.h" 2





struct partition {
 unsigned char boot_ind;
 unsigned char head;
 unsigned char sector;
 unsigned char cyl;
 unsigned char sys_ind;
 unsigned char end_head;
 unsigned char end_sector;
 unsigned char end_cyl;
 __le32 start_sect;
 __le32 nr_sects;
} __attribute__((packed));

struct hd_struct {
 sector_t start_sect;
 sector_t nr_sects;
 struct device dev;
 struct kobject *holder_dir;
 unsigned ios[2], sectors[2];
 int policy, partno;



};
# 114 "include/linux/genhd.h"
struct disk_stats {
 unsigned long sectors[2];
 unsigned long ios[2];
 unsigned long merges[2];
 unsigned long ticks[2];
 unsigned long io_ticks;
 unsigned long time_in_queue;
};

struct gendisk {
 int major;
 int first_minor;
 int minors;

 char disk_name[32];
 struct hd_struct **part;
 struct block_device_operations *fops;
 struct request_queue *queue;
 void *private_data;
 sector_t capacity;

 int flags;
 struct device *driverfs_dev;
 struct device dev;
 struct kobject *holder_dir;
 struct kobject *slave_dir;

 struct timer_rand_state *random;
 int policy;

 atomic_t sync_io;
 unsigned long stamp;
 int in_flight;

 struct disk_stats *dkstats;



 struct work_struct async_notify;
};
# 174 "include/linux/genhd.h"
static inline __attribute__((always_inline)) void disk_stat_set_all(struct gendisk *gendiskp, int value) {
 int i;
 for (((i)) = __first_cpu(&(cpu_possible_map)); ((i)) < 32; ((i)) = __next_cpu((((i))), &((cpu_possible_map))))
  memset(({ struct percpu_data *__p = (struct percpu_data *)~(unsigned long)((gendiskp->dkstats)); (__typeof__((gendiskp->dkstats)))__p->ptrs[((i))]; }), value,
    sizeof (struct disk_stats));
}
# 212 "include/linux/genhd.h"
static inline __attribute__((always_inline)) int init_disk_stats(struct gendisk *disk)
{
 disk->dkstats = (struct disk_stats *)__percpu_alloc_mask(((sizeof(struct disk_stats))), (((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u))), &(cpu_possible_map));
 if (!disk->dkstats)
  return 0;
 return 1;
}

static inline __attribute__((always_inline)) void free_disk_stats(struct gendisk *disk)
{
 percpu_free((disk->dkstats));
}
# 236 "include/linux/genhd.h"
extern void disk_round_stats(struct gendisk *disk);


extern int get_blkdev_list(char *, int);
extern void add_disk(struct gendisk *disk);
extern void del_gendisk(struct gendisk *gp);
extern void unlink_gendisk(struct gendisk *gp);
extern struct gendisk *get_gendisk(dev_t dev, int *part);

extern void set_device_ro(struct block_device *bdev, int flag);
extern void set_disk_ro(struct gendisk *disk, int flag);


extern void add_disk_randomness(struct gendisk *disk);
extern void rand_initialize_disk(struct gendisk *disk);

static inline __attribute__((always_inline)) sector_t get_start_sect(struct block_device *bdev)
{
 return bdev->bd_contains == bdev ? 0 : bdev->bd_part->start_sect;
}
static inline __attribute__((always_inline)) sector_t get_capacity(struct gendisk *disk)
{
 return disk->capacity;
}
static inline __attribute__((always_inline)) void set_capacity(struct gendisk *disk, sector_t size)
{
 disk->capacity = size;
}
# 416 "include/linux/genhd.h"
extern dev_t blk_lookup_devt(const char *name);
extern char *disk_name (struct gendisk *hd, int part, char *buf);

extern int rescan_partitions(struct gendisk *disk, struct block_device *bdev);
extern void add_partition(struct gendisk *, int, sector_t, sector_t, int);
extern void delete_partition(struct gendisk *, int);
extern void printk_all_partitions(void);

extern struct gendisk *alloc_disk_node(int minors, int node_id);
extern struct gendisk *alloc_disk(int minors);
extern struct kobject *get_disk(struct gendisk *disk);
extern void put_disk(struct gendisk *disk);
extern void genhd_media_change_notify(struct gendisk *disk);
extern void blk_register_region(dev_t devt, unsigned long range,
   struct module *module,
   struct kobject *(*probe)(dev_t, int *, void *),
   int (*lock)(dev_t, void *),
   void *data);
extern void blk_unregister_region(dev_t devt, unsigned long range);

static inline __attribute__((always_inline)) struct block_device *bdget_disk(struct gendisk *disk, int index)
{
 return bdget((((disk->major) << 20) | (disk->first_minor)) + index);
}
# 9 "include/linux/blkdev.h" 2



# 1 "include/linux/pagemap.h" 1






# 1 "include/linux/mm.h" 1
# 13 "include/linux/mm.h"
# 1 "include/linux/debug_locks.h" 1



struct task_struct;

extern int debug_locks;
extern int debug_locks_silent;




extern int debug_locks_off(void);
# 46 "include/linux/debug_locks.h"
struct task_struct;
# 55 "include/linux/debug_locks.h"
static inline __attribute__((always_inline)) void debug_show_all_locks(void)
{
}

static inline __attribute__((always_inline)) void __debug_show_held_locks(struct task_struct *task)
{
}

static inline __attribute__((always_inline)) void debug_show_held_locks(struct task_struct *task)
{
}

static inline __attribute__((always_inline)) void
debug_check_no_locks_freed(const void *from, unsigned long len)
{
}

static inline __attribute__((always_inline)) void
debug_check_no_locks_held(struct task_struct *task)
{
}
# 14 "include/linux/mm.h" 2


struct mempolicy;
struct anon_vma;
struct file_ra_state;
struct user_struct;
struct writeback_control;





extern unsigned long num_physpages;
extern void * high_memory;
extern int page_cluster;


extern int sysctl_legacy_va_layout;




extern unsigned long mmap_min_addr;

# 1 "include/asm/page.h" 1
# 39 "include/linux/mm.h" 2
# 1 "include/asm/pgtable.h" 1



# 1 "include/asm/pgtable_64.h" 1
# 11 "include/asm/pgtable_64.h"
# 1 "include/asm/processor.h" 1
# 12 "include/asm/pgtable_64.h" 2




extern pud_t level3_kernel_pgt[512];
extern pud_t level3_ident_pgt[512];
extern pmd_t level2_kernel_pgt[512];
extern pgd_t init_level4_pgt[];
extern unsigned long __supported_pte_mask;



extern void paging_init(void);
extern void clear_kernel_mapping(unsigned long addr, unsigned long size);





extern unsigned long empty_zero_page[((1UL) << 12)/sizeof(unsigned long)];
# 74 "include/asm/pgtable_64.h"
static inline __attribute__((always_inline)) void set_pte(pte_t *dst, pte_t val)
{
 ((*dst).pte) = ((val).pte);
}


static inline __attribute__((always_inline)) void set_pmd(pmd_t *dst, pmd_t val)
{
        ((*dst).pmd) = ((val).pmd);
}

static inline __attribute__((always_inline)) void set_pud(pud_t *dst, pud_t val)
{
 ((*dst).pud) = ((val).pud);
}

static inline __attribute__((always_inline)) void pud_clear (pud_t *pud)
{
 set_pud(pud, ((pud_t) { (0) } ));
}

static inline __attribute__((always_inline)) void set_pgd(pgd_t *dst, pgd_t val)
{
 ((*dst).pgd) = ((val).pgd);
}

static inline __attribute__((always_inline)) void pgd_clear (pgd_t * pgd)
{
 set_pgd(pgd, ((pgd_t) { (0) } ));
}



struct mm_struct;

static inline __attribute__((always_inline)) pte_t ptep_get_and_clear_full(struct mm_struct *mm, unsigned long addr, pte_t *ptep, int full)
{
 pte_t pte;
 if (full) {
  pte = *ptep;
  *ptep = ((pte_t) { (0) } );
 } else {
  pte = ((pte_t) { (((__typeof__(*(&(ptep)->pte)))__xchg((unsigned long)(0),(&(ptep)->pte),sizeof(*(&(ptep)->pte))))) } );
 }
 return pte;
}
# 232 "include/asm/pgtable_64.h"
static inline __attribute__((always_inline)) unsigned long pgd_bad(pgd_t pgd)
{
 return ((pgd).pgd) & ~((~(((1UL) << 12)-1) & (((1UL) << 46) - 1)) | (0x001 | 0x002 | 0x020 | 0x040) | 0x004);
}

static inline __attribute__((always_inline)) unsigned long pud_bad(pud_t pud)
{
 return ((pud).pud) & ~((~(((1UL) << 12)-1) & (((1UL) << 46) - 1)) | (0x001 | 0x002 | 0x020 | 0x040) | 0x004);
}

static inline __attribute__((always_inline)) unsigned long pmd_bad(pmd_t pmd)
{
 return ((pmd).pmd) & ~((~(((1UL) << 12)-1) & (((1UL) << 46) - 1)) | (0x001 | 0x002 | 0x020 | 0x040) | 0x004);
}
# 256 "include/asm/pgtable_64.h"
static inline __attribute__((always_inline)) pte_t pfn_pte(unsigned long page_nr, pgprot_t pgprot)
{
 pte_t pte;
 ((pte).pte) = (page_nr << 12);
 ((pte).pte) |= ((pgprot).pgprot);
 ((pte).pte) &= __supported_pte_mask;
 return pte;
}






static inline __attribute__((always_inline)) int pte_dirty(pte_t pte) { return ((pte).pte) & 0x040; }
static inline __attribute__((always_inline)) int pte_young(pte_t pte) { return ((pte).pte) & 0x020; }
static inline __attribute__((always_inline)) int pte_write(pte_t pte) { return ((pte).pte) & 0x002; }
static inline __attribute__((always_inline)) int pte_file(pte_t pte) { return ((pte).pte) & 0x040; }
static inline __attribute__((always_inline)) int pte_huge(pte_t pte) { return ((pte).pte) & 0x080; }

static inline __attribute__((always_inline)) pte_t pte_mkclean(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) & ~0x040) } )); return pte; }
static inline __attribute__((always_inline)) pte_t pte_mkold(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) & ~0x020) } )); return pte; }
static inline __attribute__((always_inline)) pte_t pte_wrprotect(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) & ~0x002) } )); return pte; }
static inline __attribute__((always_inline)) pte_t pte_mkexec(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) & ~((1UL)<<63)) } )); return pte; }
static inline __attribute__((always_inline)) pte_t pte_mkdirty(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) | 0x040) } )); return pte; }
static inline __attribute__((always_inline)) pte_t pte_mkyoung(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) | 0x020) } )); return pte; }
static inline __attribute__((always_inline)) pte_t pte_mkwrite(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) | 0x002) } )); return pte; }
static inline __attribute__((always_inline)) pte_t pte_mkhuge(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) | 0x080) } )); return pte; }
static inline __attribute__((always_inline)) pte_t pte_clrhuge(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) & ~0x080) } )); return pte; }

struct vm_area_struct;

static inline __attribute__((always_inline)) int ptep_test_and_clear_young(struct vm_area_struct *vma, unsigned long addr, pte_t *ptep)
{
 if (!pte_young(*ptep))
  return 0;
 return test_and_clear_bit(5, &ptep->pte);
}

static inline __attribute__((always_inline)) void ptep_set_wrprotect(struct mm_struct *mm, unsigned long addr, pte_t *ptep)
{
 clear_bit(1, &ptep->pte);
}






static inline __attribute__((always_inline)) int pmd_large(pmd_t pte) {
 return (((pte).pmd) & (0x080|0x001)) == (0x080|0x001);
}
# 358 "include/asm/pgtable_64.h"
static inline __attribute__((always_inline)) pte_t pte_modify(pte_t pte, pgprot_t newprot)
{
 ((pte).pte) &= ((~(((1UL) << 12)-1) & (((1UL) << 46) - 1)) | 0x020 | 0x040);
 ((pte).pte) |= ((newprot).pgprot);
 ((pte).pte) &= __supported_pte_mask;
       return pte;
}
# 402 "include/asm/pgtable_64.h"
extern spinlock_t pgd_lock;
extern struct list_head pgd_list;

extern int kern_addr_valid(unsigned long addr);

pte_t *lookup_address(unsigned long addr);
# 430 "include/asm/pgtable_64.h"
# 1 "include/asm-generic/pgtable.h" 1
# 162 "include/asm-generic/pgtable.h"
void pgd_clear_bad(pgd_t *);
void pud_clear_bad(pud_t *);
void pmd_clear_bad(pmd_t *);

static inline __attribute__((always_inline)) int pgd_none_or_clear_bad(pgd_t *pgd)
{
 if ((!((*pgd).pgd)))
  return 1;
 if (__builtin_expect(!!(pgd_bad(*pgd)), 0)) {
  pgd_clear_bad(pgd);
  return 1;
 }
 return 0;
}

static inline __attribute__((always_inline)) int pud_none_or_clear_bad(pud_t *pud)
{
 if ((!((*pud).pud)))
  return 1;
 if (__builtin_expect(!!(pud_bad(*pud)), 0)) {
  pud_clear_bad(pud);
  return 1;
 }
 return 0;
}

static inline __attribute__((always_inline)) int pmd_none_or_clear_bad(pmd_t *pmd)
{
 if ((!((*pmd).pmd)))
  return 1;
 if (__builtin_expect(!!(pmd_bad(*pmd)), 0)) {
  pmd_clear_bad(pmd);
  return 1;
 }
 return 0;
}
# 431 "include/asm/pgtable_64.h" 2
# 5 "include/asm/pgtable.h" 2
# 40 "include/linux/mm.h" 2
# 1 "include/asm/processor.h" 1
# 41 "include/linux/mm.h" 2
# 53 "include/linux/mm.h"
extern struct kmem_cache *vm_area_cachep;






struct vm_list_struct {
 struct vm_list_struct *next;
 struct vm_area_struct *vma;
};
# 131 "include/linux/mm.h"
extern pgprot_t protection_map[16];
# 146 "include/linux/mm.h"
struct vm_fault {
 unsigned int flags;
 unsigned long pgoff;
 void *virtual_address;

 struct page *page;




};






struct vm_operations_struct {
 void (*open)(struct vm_area_struct * area);
 void (*close)(struct vm_area_struct * area);
 int (*fault)(struct vm_area_struct *vma, struct vm_fault *vmf);
 struct page *(*nopage)(struct vm_area_struct *area,
   unsigned long address, int *type);
 unsigned long (*nopfn)(struct vm_area_struct *area,
   unsigned long address);



 int (*page_mkwrite)(struct vm_area_struct *vma, struct page *page);

 int (*set_policy)(struct vm_area_struct *vma, struct mempolicy *new);
 struct mempolicy *(*get_policy)(struct vm_area_struct *vma,
     unsigned long addr);
 int (*migrate)(struct vm_area_struct *vma, const nodemask_t *from,
  const nodemask_t *to, unsigned long flags);

};

struct mmu_gather;
struct inode;
# 194 "include/linux/mm.h"
# 1 "include/linux/page-flags.h" 1
# 236 "include/linux/page-flags.h"
static inline __attribute__((always_inline)) void __SetPageTail(struct page *page)
{
 page->flags |= ((1L << 14) | (1L << 17));
}

static inline __attribute__((always_inline)) void __ClearPageTail(struct page *page)
{
 page->flags &= ~((1L << 14) | (1L << 17));
}
# 263 "include/linux/page-flags.h"
struct page;

extern void cancel_dirty_page(struct page *page, unsigned int account_size);

int test_clear_page_writeback(struct page *page);
int test_set_page_writeback(struct page *page);

static inline __attribute__((always_inline)) void set_page_writeback(struct page *page)
{
 test_set_page_writeback(page);
}
# 195 "include/linux/mm.h" 2
# 218 "include/linux/mm.h"
static inline __attribute__((always_inline)) int put_page_testzero(struct page *page)
{
 do { } while(0);
 return atomic_dec_and_test(&page->_count);
}





static inline __attribute__((always_inline)) int get_page_unless_zero(struct page *page)
{
 do { } while(0);
 return atomic_add_unless((&page->_count), 1, 0);
}

static inline __attribute__((always_inline)) struct page *compound_head(struct page *page)
{
 if (__builtin_expect(!!(((page->flags & ((1L << 14) | (1L << 17))) == ((1L << 14) | (1L << 17)))), 0))
  return page->first_page;
 return page;
}

static inline __attribute__((always_inline)) int page_count(struct page *page)
{
 return ((&compound_head(page)->_count)->counter);
}

static inline __attribute__((always_inline)) void get_page(struct page *page)
{
 page = compound_head(page);
 do { } while(0);
 atomic_inc(&page->_count);
}

static inline __attribute__((always_inline)) struct page *virt_to_head_page(const void *x)
{
 struct page *page = pfn_to_page(__phys_addr((unsigned long)(x)) >> 12);
 return compound_head(page);
}





static inline __attribute__((always_inline)) void init_page_count(struct page *page)
{
 (((&page->_count)->counter) = (1));
}

void put_page(struct page *page);
void put_pages_list(struct list_head *pages);

void split_page(struct page *page, unsigned int order);






typedef void compound_page_dtor(struct page *);

static inline __attribute__((always_inline)) void set_compound_page_dtor(struct page *page,
      compound_page_dtor *dtor)
{
 page[1].lru.next = (void *)dtor;
}

static inline __attribute__((always_inline)) compound_page_dtor *get_compound_page_dtor(struct page *page)
{
 return (compound_page_dtor *)page[1].lru.next;
}

static inline __attribute__((always_inline)) int compound_order(struct page *page)
{
 if (!((page->flags & ((1L << 14) | (1L << 17))) == (1L << 14)))
  return 0;
 return (unsigned long)page[1].lru.prev;
}

static inline __attribute__((always_inline)) void set_compound_order(struct page *page, unsigned long order)
{
 page[1].lru.prev = (void *)order;
}
# 445 "include/linux/mm.h"
static inline __attribute__((always_inline)) enum zone_type page_zonenum(struct page *page)
{
 return (page->flags >> (((((sizeof(unsigned long)*8) - 0) - 6) - 2) * (2 != 0))) & ((1UL << 2) - 1);
}
# 458 "include/linux/mm.h"
static inline __attribute__((always_inline)) int page_zone_id(struct page *page)
{
 return (page->flags >> ((((((sizeof(unsigned long)*8) - 0) - 6) < ((((sizeof(unsigned long)*8) - 0) - 6) - 2))? (((sizeof(unsigned long)*8) - 0) - 6) : ((((sizeof(unsigned long)*8) - 0) - 6) - 2)) * ((6 + 2) != 0))) & ((1UL << (6 + 2)) - 1);
}

static inline __attribute__((always_inline)) int zone_to_nid(struct zone *zone)
{

 return zone->node;



}




static inline __attribute__((always_inline)) int page_to_nid(struct page *page)
{
 return (page->flags >> ((((sizeof(unsigned long)*8) - 0) - 6) * (6 != 0))) & ((1UL << 6) - 1);
}


static inline __attribute__((always_inline)) struct zone *page_zone(struct page *page)
{
 return &(node_data[page_to_nid(page)])->node_zones[page_zonenum(page)];
}

static inline __attribute__((always_inline)) unsigned long page_to_section(struct page *page)
{
 return (page->flags >> (((sizeof(unsigned long)*8) - 0) * (0 != 0))) & ((1UL << 0) - 1);
}

static inline __attribute__((always_inline)) void set_page_zone(struct page *page, enum zone_type zone)
{
 page->flags &= ~(((1UL << 2) - 1) << (((((sizeof(unsigned long)*8) - 0) - 6) - 2) * (2 != 0)));
 page->flags |= (zone & ((1UL << 2) - 1)) << (((((sizeof(unsigned long)*8) - 0) - 6) - 2) * (2 != 0));
}

static inline __attribute__((always_inline)) void set_page_node(struct page *page, unsigned long node)
{
 page->flags &= ~(((1UL << 6) - 1) << ((((sizeof(unsigned long)*8) - 0) - 6) * (6 != 0)));
 page->flags |= (node & ((1UL << 6) - 1)) << ((((sizeof(unsigned long)*8) - 0) - 6) * (6 != 0));
}

static inline __attribute__((always_inline)) void set_page_section(struct page *page, unsigned long section)
{
 page->flags &= ~(((1UL << 0) - 1) << (((sizeof(unsigned long)*8) - 0) * (0 != 0)));
 page->flags |= (section & ((1UL << 0) - 1)) << (((sizeof(unsigned long)*8) - 0) * (0 != 0));
}

static inline __attribute__((always_inline)) void set_page_links(struct page *page, enum zone_type zone,
 unsigned long node, unsigned long pfn)
{
 set_page_zone(page, zone);
 set_page_node(page, node);
 set_page_section(page, ((pfn) >> 0));
}





static inline __attribute__((always_inline)) unsigned long round_hint_to_min(unsigned long hint)
{






 return hint;
}




# 1 "include/linux/vmstat.h" 1





# 1 "include/linux/mm.h" 1
# 7 "include/linux/vmstat.h" 2

# 1 "include/asm/atomic.h" 1
# 9 "include/linux/vmstat.h" 2
# 30 "include/linux/vmstat.h"
enum vm_event_item { PGPGIN, PGPGOUT, PSWPIN, PSWPOUT,
  PGALLOC_DMA, PGALLOC_DMA32, PGALLOC_NORMAL , PGALLOC_MOVABLE,
  PGFREE, PGACTIVATE, PGDEACTIVATE,
  PGFAULT, PGMAJFAULT,
  PGREFILL_DMA, PGREFILL_DMA32, PGREFILL_NORMAL , PGREFILL_MOVABLE,
  PGSTEAL_DMA, PGSTEAL_DMA32, PGSTEAL_NORMAL , PGSTEAL_MOVABLE,
  PGSCAN_KSWAPD_DMA, PGSCAN_KSWAPD_DMA32, PGSCAN_KSWAPD_NORMAL , PGSCAN_KSWAPD_MOVABLE,
  PGSCAN_DIRECT_DMA, PGSCAN_DIRECT_DMA32, PGSCAN_DIRECT_NORMAL , PGSCAN_DIRECT_MOVABLE,
  PGINODESTEAL, SLABS_SCANNED, KSWAPD_STEAL, KSWAPD_INODESTEAL,
  PAGEOUTRUN, ALLOCSTALL, PGROTATED,
  NR_VM_EVENT_ITEMS
};
# 54 "include/linux/vmstat.h"
struct vm_event_state {
 unsigned long event[NR_VM_EVENT_ITEMS];
};

extern __typeof__(struct vm_event_state) per_cpu__vm_event_states;

static inline __attribute__((always_inline)) void __count_vm_event(enum vm_event_item item)
{
 (*({ extern int simple_identifier_vm_event_states(void); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"(&per_cpu__vm_event_states)); (typeof(&per_cpu__vm_event_states)) (__ptr + (({ typeof(_proxy_pda.data_offset) ret__; switch (sizeof(_proxy_pda.data_offset)) { case 2: asm("mov" "w %%gs:%c1,%0" : "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; case 4: asm("mov" "l %%gs:%c1,%0": "=r" (ret__): "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; case 8: asm("mov" "q %%gs:%c1,%0": "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; default: __bad_pda_field(); } ret__; }))); }); })).event[item]++;
}

static inline __attribute__((always_inline)) void count_vm_event(enum vm_event_item item)
{
 (*({ extern int simple_identifier_vm_event_states(void); do { } while (0); &(*({ extern int simple_identifier_vm_event_states(void); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"(&per_cpu__vm_event_states)); (typeof(&per_cpu__vm_event_states)) (__ptr + (({ typeof(_proxy_pda.data_offset) ret__; switch (sizeof(_proxy_pda.data_offset)) { case 2: asm("mov" "w %%gs:%c1,%0" : "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; case 4: asm("mov" "l %%gs:%c1,%0": "=r" (ret__): "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; case 8: asm("mov" "q %%gs:%c1,%0": "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; default: __bad_pda_field(); } ret__; }))); }); })); })).event[item]++;
 do { } while (0);
}

static inline __attribute__((always_inline)) void __count_vm_events(enum vm_event_item item, long delta)
{
 (*({ extern int simple_identifier_vm_event_states(void); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"(&per_cpu__vm_event_states)); (typeof(&per_cpu__vm_event_states)) (__ptr + (({ typeof(_proxy_pda.data_offset) ret__; switch (sizeof(_proxy_pda.data_offset)) { case 2: asm("mov" "w %%gs:%c1,%0" : "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; case 4: asm("mov" "l %%gs:%c1,%0": "=r" (ret__): "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; case 8: asm("mov" "q %%gs:%c1,%0": "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; default: __bad_pda_field(); } ret__; }))); }); })).event[item] += delta;
}

static inline __attribute__((always_inline)) void count_vm_events(enum vm_event_item item, long delta)
{
 (*({ extern int simple_identifier_vm_event_states(void); do { } while (0); &(*({ extern int simple_identifier_vm_event_states(void); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"(&per_cpu__vm_event_states)); (typeof(&per_cpu__vm_event_states)) (__ptr + (({ typeof(_proxy_pda.data_offset) ret__; switch (sizeof(_proxy_pda.data_offset)) { case 2: asm("mov" "w %%gs:%c1,%0" : "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; case 4: asm("mov" "l %%gs:%c1,%0": "=r" (ret__): "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; case 8: asm("mov" "q %%gs:%c1,%0": "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; default: __bad_pda_field(); } ret__; }))); }); })); })).event[item] += delta;
 do { } while (0);
}

extern void all_vm_events(unsigned long *);

extern void vm_events_fold_cpu(int cpu);
# 122 "include/linux/vmstat.h"
extern atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];

static inline __attribute__((always_inline)) void zone_page_state_add(long x, struct zone *zone,
     enum zone_stat_item item)
{
 atomic_long_add(x, &zone->vm_stat[item]);
 atomic_long_add(x, &vm_stat[item]);
}

static inline __attribute__((always_inline)) unsigned long global_page_state(enum zone_stat_item item)
{
 long x = atomic_long_read(&vm_stat[item]);

 if (x < 0)
  x = 0;

 return x;
}

static inline __attribute__((always_inline)) unsigned long zone_page_state(struct zone *zone,
     enum zone_stat_item item)
{
 long x = atomic_long_read(&zone->vm_stat[item]);

 if (x < 0)
  x = 0;

 return x;
}







static inline __attribute__((always_inline)) unsigned long node_page_state(int node,
     enum zone_stat_item item)
{
 struct zone *zones = (node_data[node])->node_zones;

 return

  zone_page_state(&zones[ZONE_DMA], item) +


  zone_page_state(&zones[ZONE_DMA32], item) +




  zone_page_state(&zones[ZONE_NORMAL], item) +
  zone_page_state(&zones[ZONE_MOVABLE], item);
}

extern void zone_statistics(struct zonelist *, struct zone *);
# 194 "include/linux/vmstat.h"
static inline __attribute__((always_inline)) void zap_zone_vm_stats(struct zone *zone)
{
 memset(zone->vm_stat, 0, sizeof(zone->vm_stat));
}

extern void inc_zone_state(struct zone *, enum zone_stat_item);


void __mod_zone_page_state(struct zone *, enum zone_stat_item item, int);
void __inc_zone_page_state(struct page *, enum zone_stat_item);
void __dec_zone_page_state(struct page *, enum zone_stat_item);

void mod_zone_page_state(struct zone *, enum zone_stat_item, int);
void inc_zone_page_state(struct page *, enum zone_stat_item);
void dec_zone_page_state(struct page *, enum zone_stat_item);

extern void inc_zone_state(struct zone *, enum zone_stat_item);
extern void __inc_zone_state(struct zone *, enum zone_stat_item);
extern void dec_zone_state(struct zone *, enum zone_stat_item);
extern void __dec_zone_state(struct zone *, enum zone_stat_item);

void refresh_cpu_vm_stats(int);
# 536 "include/linux/mm.h" 2

static inline __attribute__((always_inline)) __attribute__((always_inline)) void *lowmem_page_address(struct page *page)
{
 return ((void *)((unsigned long)(page_to_pfn(page) << 12)+(0xffff810000000000UL)));
}
# 578 "include/linux/mm.h"
extern struct address_space swapper_space;
static inline __attribute__((always_inline)) struct address_space *page_mapping(struct page *page)
{
 struct address_space *mapping = page->mapping;

 do { } while(0);
 if (__builtin_expect(!!((__builtin_constant_p(15) ? constant_test_bit((15),(&(page)->flags)) : variable_test_bit((15),(&(page)->flags)))), 0))
  mapping = &swapper_space;
 else if (__builtin_expect(!!((unsigned long)mapping & 1), 0))
  mapping = ((void *)0);
 return mapping;
}

static inline __attribute__((always_inline)) int PageAnon(struct page *page)
{
 return ((unsigned long)page->mapping & 1) != 0;
}





static inline __attribute__((always_inline)) unsigned long page_index(struct page *page)
{
 if (__builtin_expect(!!((__builtin_constant_p(15) ? constant_test_bit((15),(&(page)->flags)) : variable_test_bit((15),(&(page)->flags)))), 0))
  return ((page)->private);
 return page->index;
}






static inline __attribute__((always_inline)) void reset_page_mapcount(struct page *page)
{
 (((&(page)->_mapcount)->counter) = (-1));
}

static inline __attribute__((always_inline)) int page_mapcount(struct page *page)
{
 return ((&(page)->_mapcount)->counter) + 1;
}




static inline __attribute__((always_inline)) int page_mapped(struct page *page)
{
 return ((&(page)->_mapcount)->counter) >= 0;
}
# 663 "include/linux/mm.h"
extern void show_free_areas(void);


int shmem_lock(struct file *file, int lock, struct user_struct *user);







struct file *shmem_file_setup(char *name, loff_t size, unsigned long flags);

int shmem_zero_setup(struct vm_area_struct *);
# 686 "include/linux/mm.h"
extern int can_do_mlock(void);
extern int user_shm_lock(size_t, struct user_struct *);
extern void user_shm_unlock(size_t, struct user_struct *);




struct zap_details {
 struct vm_area_struct *nonlinear_vma;
 struct address_space *check_mapping;
 unsigned long first_index;
 unsigned long last_index;
 spinlock_t *i_mmap_lock;
 unsigned long truncate_count;
};

struct page *vm_normal_page(struct vm_area_struct *, unsigned long, pte_t);
unsigned long zap_page_range(struct vm_area_struct *vma, unsigned long address,
  unsigned long size, struct zap_details *);
unsigned long unmap_vmas(struct mmu_gather **tlb,
  struct vm_area_struct *start_vma, unsigned long start_addr,
  unsigned long end_addr, unsigned long *nr_accounted,
  struct zap_details *);
void free_pgd_range(struct mmu_gather **tlb, unsigned long addr,
  unsigned long end, unsigned long floor, unsigned long ceiling);
void free_pgtables(struct mmu_gather **tlb, struct vm_area_struct *start_vma,
  unsigned long floor, unsigned long ceiling);
int copy_page_range(struct mm_struct *dst, struct mm_struct *src,
   struct vm_area_struct *vma);
void unmap_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen, int even_cows);

static inline __attribute__((always_inline)) void unmap_shared_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen)
{
 unmap_mapping_range(mapping, holebegin, holelen, 0);
}

extern int vmtruncate(struct inode * inode, loff_t offset);
extern int vmtruncate_range(struct inode * inode, loff_t offset, loff_t end);


extern int handle_mm_fault(struct mm_struct *mm, struct vm_area_struct *vma,
   unsigned long address, int write_access);
# 741 "include/linux/mm.h"
extern int make_pages_present(unsigned long addr, unsigned long end);
extern int access_process_vm(struct task_struct *tsk, unsigned long addr, void *buf, int len, int write);

int get_user_pages(struct task_struct *tsk, struct mm_struct *mm, unsigned long start,
  int len, int write, int force, struct page **pages, struct vm_area_struct **vmas);
void print_bad_pte(struct vm_area_struct *, pte_t, unsigned long);

extern int try_to_release_page(struct page * page, gfp_t gfp_mask);
extern void do_invalidatepage(struct page *page, unsigned long offset);

int __set_page_dirty_nobuffers(struct page *page);
int __set_page_dirty_no_writeback(struct page *page);
int redirty_page_for_writepage(struct writeback_control *wbc,
    struct page *page);
int set_page_dirty(struct page *page);
int set_page_dirty_lock(struct page *page);
int clear_page_dirty_for_io(struct page *page);

extern unsigned long move_page_tables(struct vm_area_struct *vma,
  unsigned long old_addr, struct vm_area_struct *new_vma,
  unsigned long new_addr, unsigned long len);
extern unsigned long do_mremap(unsigned long addr,
          unsigned long old_len, unsigned long new_len,
          unsigned long flags, unsigned long new_addr);
extern int mprotect_fixup(struct vm_area_struct *vma,
     struct vm_area_struct **pprev, unsigned long start,
     unsigned long end, unsigned long newflags);
# 784 "include/linux/mm.h"
struct shrinker {
 int (*shrink)(int nr_to_scan, gfp_t gfp_mask);
 int seeks;


 struct list_head list;
 long nr;
};

extern void register_shrinker(struct shrinker *);
extern void unregister_shrinker(struct shrinker *);

int vma_wants_writenotify(struct vm_area_struct *vma);

extern pte_t *get_locked_pte(struct mm_struct *mm, unsigned long addr, spinlock_t **ptl);
# 807 "include/linux/mm.h"
int __pud_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address);
# 817 "include/linux/mm.h"
int __pmd_alloc(struct mm_struct *mm, pud_t *pud, unsigned long address);


int __pte_alloc(struct mm_struct *mm, pmd_t *pmd, unsigned long address);
int __pte_alloc_kernel(pmd_t *pmd, unsigned long address);






static inline __attribute__((always_inline)) pud_t *pud_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address)
{
 return (__builtin_expect(!!((!((*pgd).pgd))), 0) && __pud_alloc(mm, pgd, address))?
  ((void *)0): ((pud_t *) ((unsigned long) ((void *)((unsigned long)((unsigned long)((*(pgd)).pgd) & (~(((1UL) << 12)-1) & (((1UL) << 46) - 1)))+(0xffff810000000000UL)))) + (((address) >> 30) & (512 -1)));
}

static inline __attribute__((always_inline)) pmd_t *pmd_alloc(struct mm_struct *mm, pud_t *pud, unsigned long address)
{
 return (__builtin_expect(!!((!((*pud).pud))), 0) && __pmd_alloc(mm, pud, address))?
  ((void *)0): ((pmd_t *) ((unsigned long) ((void *)((unsigned long)(((*(pud)).pud) & (~(((1UL) << 12)-1) & (((1UL) << 46) - 1)))+(0xffff810000000000UL)))) + (((address) >> 21) & (512 -1)));
}
# 889 "include/linux/mm.h"
extern void free_area_init(unsigned long * zones_size);
extern void free_area_init_node(int nid, pg_data_t *pgdat,
 unsigned long * zones_size, unsigned long zone_start_pfn,
 unsigned long *zholes_size);
# 921 "include/linux/mm.h"
extern void free_area_init_nodes(unsigned long *max_zone_pfn);
extern void add_active_range(unsigned int nid, unsigned long start_pfn,
     unsigned long end_pfn);
extern void shrink_active_range(unsigned int nid, unsigned long old_end_pfn,
      unsigned long new_end_pfn);
extern void push_node_boundaries(unsigned int nid, unsigned long start_pfn,
     unsigned long end_pfn);
extern void remove_all_active_ranges(void);
extern unsigned long absent_pages_in_range(unsigned long start_pfn,
      unsigned long end_pfn);
extern void get_pfn_range_for_nid(unsigned int nid,
   unsigned long *start_pfn, unsigned long *end_pfn);
extern unsigned long find_min_pfn_with_active_regions(void);
extern unsigned long find_max_pfn_with_active_regions(void);
extern void free_bootmem_with_active_regions(int nid,
      unsigned long max_low_pfn);
extern void sparse_memory_present_with_active_regions(int nid);




extern void set_dma_reserve(unsigned long new_dma_reserve);
extern void memmap_init_zone(unsigned long, int, unsigned long,
    unsigned long, enum memmap_context);
extern void setup_per_zone_pages_min(void);
extern void mem_init(void);
extern void show_mem(void);
extern void si_meminfo(struct sysinfo * val);
extern void si_meminfo_node(struct sysinfo *val, int nid);


extern void setup_per_cpu_pageset(void);





void vma_prio_tree_add(struct vm_area_struct *, struct vm_area_struct *old);
void vma_prio_tree_insert(struct vm_area_struct *, struct prio_tree_root *);
void vma_prio_tree_remove(struct vm_area_struct *, struct prio_tree_root *);
struct vm_area_struct *vma_prio_tree_next(struct vm_area_struct *vma,
 struct prio_tree_iter *iter);





static inline __attribute__((always_inline)) void vma_nonlinear_insert(struct vm_area_struct *vma,
     struct list_head *list)
{
 vma->shared.vm_set.parent = ((void *)0);
 list_add_tail(&vma->shared.vm_set.list, list);
}


extern int __vm_enough_memory(struct mm_struct *mm, long pages, int cap_sys_admin);
extern void vma_adjust(struct vm_area_struct *vma, unsigned long start,
 unsigned long end, unsigned long pgoff, struct vm_area_struct *insert);
extern struct vm_area_struct *vma_merge(struct mm_struct *,
 struct vm_area_struct *prev, unsigned long addr, unsigned long end,
 unsigned long vm_flags, struct anon_vma *, struct file *, unsigned long,
 struct mempolicy *);
extern struct anon_vma *find_mergeable_anon_vma(struct vm_area_struct *);
extern int split_vma(struct mm_struct *,
 struct vm_area_struct *, unsigned long addr, int new_below);
extern int insert_vm_struct(struct mm_struct *, struct vm_area_struct *);
extern void __vma_link_rb(struct mm_struct *, struct vm_area_struct *,
 struct rb_node **, struct rb_node *);
extern void unlink_file_vma(struct vm_area_struct *);
extern struct vm_area_struct *copy_vma(struct vm_area_struct **,
 unsigned long addr, unsigned long len, unsigned long pgoff);
extern void exit_mmap(struct mm_struct *);
extern int may_expand_vm(struct mm_struct *mm, unsigned long npages);
extern int install_special_mapping(struct mm_struct *mm,
       unsigned long addr, unsigned long len,
       unsigned long flags, struct page **pages);

extern unsigned long get_unmapped_area(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);

extern unsigned long do_mmap_pgoff(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long pgoff);
extern unsigned long mmap_region(struct file *file, unsigned long addr,
 unsigned long len, unsigned long flags,
 unsigned int vm_flags, unsigned long pgoff,
 int accountable);

static inline __attribute__((always_inline)) unsigned long do_mmap(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long offset)
{
 unsigned long ret = -22;
 if ((offset + (((len)+((1UL) << 12)-1)&(~(((1UL) << 12)-1)))) < offset)
  goto out;
 if (!(offset & ~(~(((1UL) << 12)-1))))
  ret = do_mmap_pgoff(file, addr, len, prot, flag, offset >> 12);
out:
 return ret;
}

extern int do_munmap(struct mm_struct *, unsigned long, size_t);

extern unsigned long do_brk(unsigned long, unsigned long);


extern unsigned long page_unuse(struct page *);
extern void truncate_inode_pages(struct address_space *, loff_t);
extern void truncate_inode_pages_range(struct address_space *,
           loff_t lstart, loff_t lend);


extern int filemap_fault(struct vm_area_struct *, struct vm_fault *);


int write_one_page(struct page *page, int wait);





int do_page_cache_readahead(struct address_space *mapping, struct file *filp,
   unsigned long offset, unsigned long nr_to_read);
int force_page_cache_readahead(struct address_space *mapping, struct file *filp,
   unsigned long offset, unsigned long nr_to_read);

void page_cache_sync_readahead(struct address_space *mapping,
          struct file_ra_state *ra,
          struct file *filp,
          unsigned long offset,
          unsigned long size);

void page_cache_async_readahead(struct address_space *mapping,
    struct file_ra_state *ra,
    struct file *filp,
    struct page *pg,
    unsigned long offset,
    unsigned long size);

unsigned long max_sane_readahead(unsigned long nr);


extern int expand_stack(struct vm_area_struct *vma, unsigned long address);



extern int expand_stack_downwards(struct vm_area_struct *vma,
      unsigned long address);


extern struct vm_area_struct * find_vma(struct mm_struct * mm, unsigned long addr);
extern struct vm_area_struct * find_vma_prev(struct mm_struct * mm, unsigned long addr,
          struct vm_area_struct **pprev);



static inline __attribute__((always_inline)) struct vm_area_struct * find_vma_intersection(struct mm_struct * mm, unsigned long start_addr, unsigned long end_addr)
{
 struct vm_area_struct * vma = find_vma(mm,start_addr);

 if (vma && end_addr <= vma->vm_start)
  vma = ((void *)0);
 return vma;
}

static inline __attribute__((always_inline)) unsigned long vma_pages(struct vm_area_struct *vma)
{
 return (vma->vm_end - vma->vm_start) >> 12;
}

pgprot_t vm_get_page_prot(unsigned long vm_flags);
struct vm_area_struct *find_extend_vma(struct mm_struct *, unsigned long addr);
struct page *vmalloc_to_page(void *addr);
unsigned long vmalloc_to_pfn(void *addr);
int remap_pfn_range(struct vm_area_struct *, unsigned long addr,
   unsigned long pfn, unsigned long size, pgprot_t);
int vm_insert_page(struct vm_area_struct *, unsigned long addr, struct page *);
int vm_insert_pfn(struct vm_area_struct *vma, unsigned long addr,
   unsigned long pfn);

struct page *follow_page(struct vm_area_struct *, unsigned long address,
   unsigned int foll_flags);





typedef int (*pte_fn_t)(pte_t *pte, struct page *pmd_page, unsigned long addr,
   void *data);
extern int apply_to_page_range(struct mm_struct *mm, unsigned long address,
          unsigned long size, pte_fn_t fn, void *data);


void vm_stat_account(struct mm_struct *, unsigned long, struct file *, long);
# 1122 "include/linux/mm.h"
static inline __attribute__((always_inline)) void
kernel_map_pages(struct page *page, int numpages, int enable) {}


extern struct vm_area_struct *get_gate_vma(struct task_struct *tsk);

int in_gate_area_no_task(unsigned long addr);
int in_gate_area(struct task_struct *task, unsigned long addr);





int drop_caches_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
unsigned long shrink_slab(unsigned long scanned, gfp_t gfp_mask,
   unsigned long lru_pages);
void drop_pagecache(void);
void drop_slab(void);




extern int randomize_va_space;


const char * arch_vma_name(struct vm_area_struct *vma);

struct page *sparse_mem_map_populate(unsigned long pnum, int nid);
pgd_t *vmemmap_pgd_populate(unsigned long addr, int node);
pud_t *vmemmap_pud_populate(pgd_t *pgd, unsigned long addr, int node);
pmd_t *vmemmap_pmd_populate(pud_t *pud, unsigned long addr, int node);
pte_t *vmemmap_pte_populate(pmd_t *pmd, unsigned long addr, int node);
void *vmemmap_alloc_block(unsigned long size, int node);
void vmemmap_verify(pte_t *, int, unsigned long, unsigned long);
int vmemmap_populate_basepages(struct page *start_page,
      unsigned long pages, int node);
int vmemmap_populate(struct page *start_page, unsigned long pages, int node);
# 8 "include/linux/pagemap.h" 2


# 1 "include/linux/highmem.h" 1





# 1 "include/linux/uaccess.h" 1




# 1 "include/asm/uaccess.h" 1



# 1 "include/asm/uaccess_64.h" 1
# 10 "include/asm/uaccess_64.h"
# 1 "include/asm/page.h" 1
# 11 "include/asm/uaccess_64.h" 2
# 63 "include/asm/uaccess_64.h"
struct exception_table_entry
{
 unsigned long insn, fixup;
};
# 107 "include/asm/uaccess_64.h"
extern void __put_user_1(void);
extern void __put_user_2(void);
extern void __put_user_4(void);
extern void __put_user_8(void);
extern void __put_user_bad(void);
# 166 "include/asm/uaccess_64.h"
struct __large_struct { unsigned long buf[100]; };
# 199 "include/asm/uaccess_64.h"
extern int __get_user_1(void);
extern int __get_user_2(void);
extern int __get_user_4(void);
extern int __get_user_8(void);
extern int __get_user_bad(void);
# 239 "include/asm/uaccess_64.h"
 unsigned long
copy_user_generic(void *to, const void *from, unsigned len);

 unsigned long
copy_to_user(void *to, const void *from, unsigned len);
 unsigned long
copy_from_user(void *to, const void *from, unsigned len);
 unsigned long
copy_in_user(void *to, const void *from, unsigned len);

static inline __attribute__((always_inline)) __attribute__((always_inline))
int __copy_from_user(void *dst, const void *src, unsigned size)
{
 int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(dst,( void *)src,size);
 switch (size) {
 case 1:asm volatile( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=q" (*(u8*)dst) : "m"((*(struct __large_struct *)((u8 *)src))), "i"(1), "0"(ret));
  return ret;
 case 2:asm volatile( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u16*)dst) : "m"((*(struct __large_struct *)((u16 *)src))), "i"(2), "0"(ret));
  return ret;
 case 4:asm volatile( "1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u32*)dst) : "m"((*(struct __large_struct *)((u32 *)src))), "i"(4), "0"(ret));
  return ret;
 case 8:asm volatile( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u64*)dst) : "m"((*(struct __large_struct *)((u64 *)src))), "i"(8), "0"(ret));
  return ret;
 case 10:
         asm volatile( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u64*)dst) : "m"((*(struct __large_struct *)((u64 *)src))), "i"(16), "0"(ret));
  if (__builtin_expect(!!(ret), 0)) return ret;
  asm volatile( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u16*)(8+(char*)dst)) : "m"((*(struct __large_struct *)((u16 *)(8+(char *)src)))), "i"(2), "0"(ret));
  return ret;
 case 16:
  asm volatile( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u64*)dst) : "m"((*(struct __large_struct *)((u64 *)src))), "i"(16), "0"(ret));
  if (__builtin_expect(!!(ret), 0)) return ret;
  asm volatile( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u64*)(8+(char*)dst)) : "m"((*(struct __large_struct *)((u64 *)(8+(char *)src)))), "i"(8), "0"(ret));
  return ret;
 default:
  return copy_user_generic(dst,( void *)src,size);
 }
}

static inline __attribute__((always_inline)) __attribute__((always_inline))
int __copy_to_user(void *dst, const void *src, unsigned size)
{
 int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(( void *)dst,src,size);
 switch (size) {
 case 1:asm volatile( "1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "iq" (*(u8*)src), "m"((*(struct __large_struct *)((u8 *)dst))), "i"(1), "0"(ret));
  return ret;
 case 2:asm volatile( "1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (*(u16*)src), "m"((*(struct __large_struct *)((u16 *)dst))), "i"(2), "0"(ret));
  return ret;
 case 4:asm volatile( "1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (*(u32*)src), "m"((*(struct __large_struct *)((u32 *)dst))), "i"(4), "0"(ret));
  return ret;
 case 8:asm volatile( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (*(u64*)src), "m"((*(struct __large_struct *)((u64 *)dst))), "i"(8), "0"(ret));
  return ret;
 case 10:
  asm volatile( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (*(u64*)src), "m"((*(struct __large_struct *)((u64 *)dst))), "i"(10), "0"(ret));
  if (__builtin_expect(!!(ret), 0)) return ret;
  asm("":::"memory");
  asm volatile( "1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (4[(u16*)src]), "m"((*(struct __large_struct *)(4+(u16 *)dst))), "i"(2), "0"(ret));
  return ret;
 case 16:
  asm volatile( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (*(u64*)src), "m"((*(struct __large_struct *)((u64 *)dst))), "i"(16), "0"(ret));
  if (__builtin_expect(!!(ret), 0)) return ret;
  asm("":::"memory");
  asm volatile( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (1[(u64*)src]), "m"((*(struct __large_struct *)(1+(u64 *)dst))), "i"(8), "0"(ret));
  return ret;
 default:
  return copy_user_generic(( void *)dst,src,size);
 }
}

static inline __attribute__((always_inline)) __attribute__((always_inline))
int __copy_in_user(void *dst, const void *src, unsigned size)
{
 int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(( void *)dst,( void *)src,size);
 switch (size) {
 case 1: {
  u8 tmp;
  asm volatile( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=q" (tmp) : "m"((*(struct __large_struct *)((u8 *)src))), "i"(1), "0"(ret));
  if (__builtin_expect(!!(!ret), 1))
   asm volatile( "1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "iq" (tmp), "m"((*(struct __large_struct *)((u8 *)dst))), "i"(1), "0"(ret));
  return ret;
 }
 case 2: {
  u16 tmp;
  asm volatile( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (tmp) : "m"((*(struct __large_struct *)((u16 *)src))), "i"(2), "0"(ret));
  if (__builtin_expect(!!(!ret), 1))
   asm volatile( "1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (tmp), "m"((*(struct __large_struct *)((u16 *)dst))), "i"(2), "0"(ret));
  return ret;
 }

 case 4: {
  u32 tmp;
  asm volatile( "1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (tmp) : "m"((*(struct __large_struct *)((u32 *)src))), "i"(4), "0"(ret));
  if (__builtin_expect(!!(!ret), 1))
   asm volatile( "1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (tmp), "m"((*(struct __large_struct *)((u32 *)dst))), "i"(4), "0"(ret));
  return ret;
 }
 case 8: {
  u64 tmp;
  asm volatile( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (tmp) : "m"((*(struct __large_struct *)((u64 *)src))), "i"(8), "0"(ret));
  if (__builtin_expect(!!(!ret), 1))
   asm volatile( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (tmp), "m"((*(struct __large_struct *)((u64 *)dst))), "i"(8), "0"(ret));
  return ret;
 }
 default:
  return copy_user_generic(( void *)dst,( void *)src,size);
 }
}

 long
strncpy_from_user(char *dst, const char *src, long count);
 long
__strncpy_from_user(char *dst, const char *src, long count);
 long strnlen_user(const char *str, long n);
 long __strnlen_user(const char *str, long n);
 long strlen_user(const char *str);
 unsigned long clear_user(void *mem, unsigned long len);
 unsigned long __clear_user(void *mem, unsigned long len);

 long __copy_from_user_inatomic(void *dst, const void *src, unsigned size);

static inline __attribute__((always_inline)) __attribute__((always_inline)) int
__copy_to_user_inatomic(void *dst, const void *src, unsigned size)
{
 return copy_user_generic(( void *)dst, src, size);
}


extern long __copy_user_nocache(void *dst, const void *src, unsigned size, int zerorest);

static inline __attribute__((always_inline)) int __copy_from_user_nocache(void *dst, const void *src, unsigned size)
{
 do { _cond_resched(); } while (0);
 return __copy_user_nocache(dst, src, size, 1);
}

static inline __attribute__((always_inline)) int __copy_from_user_inatomic_nocache(void *dst, const void *src, unsigned size)
{
 return __copy_user_nocache(dst, src, size, 0);
}
# 5 "include/asm/uaccess.h" 2
# 6 "include/linux/uaccess.h" 2
# 16 "include/linux/uaccess.h"
static inline __attribute__((always_inline)) void pagefault_disable(void)
{
 do { (current_thread_info()->preempt_count) += (1); } while (0);




 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((always_inline)) void pagefault_enable(void)
{




 __asm__ __volatile__("": : :"memory");
 do { (current_thread_info()->preempt_count) -= (1); } while (0);



 __asm__ __volatile__("": : :"memory");
 do { } while (0);
}
# 7 "include/linux/highmem.h" 2

# 1 "include/asm/cacheflush.h" 1
# 27 "include/asm/cacheflush.h"
void global_flush_tlb(void);
int change_page_attr(struct page *page, int numpages, pgprot_t prot);
int change_page_attr_addr(unsigned long addr, int numpages, pgprot_t prot);
void clflush_cache_range(void *addr, int size);
# 9 "include/linux/highmem.h" 2


static inline __attribute__((always_inline)) void flush_anon_page(struct vm_area_struct *vma, struct page *page, unsigned long vmaddr)
{
}



static inline __attribute__((always_inline)) void flush_kernel_dcache_page(struct page *page)
{
}
# 34 "include/linux/highmem.h"
static inline __attribute__((always_inline)) unsigned int nr_free_highpages(void) { return 0; }




static inline __attribute__((always_inline)) void *kmap(struct page *page)
{
 do { _cond_resched(); } while (0);
 return lowmem_page_address(page);
}



# 1 "include/asm/kmap_types.h" 1
# 10 "include/asm/kmap_types.h"
enum km_type {
 KM_BOUNCE_READ,
 KM_SKB_SUNRPC_DATA,
 KM_SKB_DATA_SOFTIRQ,
 KM_USER0,
 KM_USER1,
 KM_BIO_SRC_IRQ,
 KM_BIO_DST_IRQ,
 KM_PTE0,
 KM_PTE1,
 KM_IRQ0,
 KM_IRQ1,
 KM_SOFTIRQ0,
 KM_SOFTIRQ1,
 KM_TYPE_NR
};
# 48 "include/linux/highmem.h" 2

static inline __attribute__((always_inline)) void *kmap_atomic(struct page *page, enum km_type idx)
{
 pagefault_disable();
 return lowmem_page_address(page);
}
# 66 "include/linux/highmem.h"
static inline __attribute__((always_inline)) void clear_user_highpage(struct page *page, unsigned long vaddr)
{
 void *addr = kmap_atomic(page, KM_USER0);
 clear_page(addr);
 do { pagefault_enable(); } while (0);

 __asm__ __volatile__("": : :"memory");
}
# 113 "include/linux/highmem.h"
static inline __attribute__((always_inline)) struct page *
alloc_zeroed_user_highpage_movable(struct vm_area_struct *vma,
     unsigned long vaddr)
{
 return alloc_page_vma(((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u) | (( gfp_t)0x20000u) | (( gfp_t)0x02u)) | (( gfp_t)0x8000u) | (( gfp_t)0x100000u), vma, vaddr);
}

static inline __attribute__((always_inline)) void clear_highpage(struct page *page)
{
 void *kaddr = kmap_atomic(page, KM_USER0);
 clear_page(kaddr);
 do { pagefault_enable(); } while (0);
}
# 145 "include/linux/highmem.h"
static inline __attribute__((always_inline)) void __attribute__((deprecated)) memclear_highpage_flush(struct page *page,
   unsigned int offset, unsigned int size)
{
 do { void *kaddr; do { if (__builtin_expect(!!((offset) + (size) > ((1UL) << 12)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/highmem.h"), "i" (148), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0); kaddr = kmap_atomic(page, KM_USER0); memset((char *)kaddr + (offset), 0, (size)); do { } while (0); do { pagefault_enable(); } while (0); } while (0);
}



static inline __attribute__((always_inline)) void copy_user_highpage(struct page *to, struct page *from,
 unsigned long vaddr, struct vm_area_struct *vma)
{
 char *vfrom, *vto;

 vfrom = kmap_atomic(from, KM_USER0);
 vto = kmap_atomic(to, KM_USER1);
 copy_page(vto, vfrom);
 do { pagefault_enable(); } while (0);
 do { pagefault_enable(); } while (0);

 __asm__ __volatile__("": : :"memory");
}



static inline __attribute__((always_inline)) void copy_highpage(struct page *to, struct page *from)
{
 char *vfrom, *vto;

 vfrom = kmap_atomic(from, KM_USER0);
 vto = kmap_atomic(to, KM_USER1);
 copy_page(vto, vfrom);
 do { pagefault_enable(); } while (0);
 do { pagefault_enable(); } while (0);
}
# 11 "include/linux/pagemap.h" 2

# 1 "include/asm/uaccess.h" 1
# 13 "include/linux/pagemap.h" 2
# 23 "include/linux/pagemap.h"
static inline __attribute__((always_inline)) void mapping_set_error(struct address_space *mapping, int error)
{
 if (error) {
  if (error == -28)
   set_bit((21 + 1), &mapping->flags);
  else
   set_bit((21 + 0), &mapping->flags);
 }
}

static inline __attribute__((always_inline)) gfp_t mapping_gfp_mask(struct address_space * mapping)
{
 return ( gfp_t)mapping->flags & (( gfp_t)((1 << 21) - 1));
}





static inline __attribute__((always_inline)) void mapping_set_gfp_mask(struct address_space *m, gfp_t mask)
{
 m->flags = (m->flags & ~( unsigned long)(( gfp_t)((1 << 21) - 1))) |
    ( unsigned long)mask;
}
# 63 "include/linux/pagemap.h"
void release_pages(struct page **pages, int nr, int cold);


extern struct page *__page_cache_alloc(gfp_t gfp);







static inline __attribute__((always_inline)) struct page *page_cache_alloc(struct address_space *x)
{
 return __page_cache_alloc(mapping_gfp_mask(x));
}

static inline __attribute__((always_inline)) struct page *page_cache_alloc_cold(struct address_space *x)
{
 return __page_cache_alloc(mapping_gfp_mask(x)|(( gfp_t)0x100u));
}

typedef int filler_t(void *, struct page *);

extern struct page * find_get_page(struct address_space *mapping,
    unsigned long index);
extern struct page * find_lock_page(struct address_space *mapping,
    unsigned long index);
extern struct page * find_or_create_page(struct address_space *mapping,
    unsigned long index, gfp_t gfp_mask);
unsigned find_get_pages(struct address_space *mapping, unsigned long start,
   unsigned int nr_pages, struct page **pages);
unsigned find_get_pages_contig(struct address_space *mapping, unsigned long start,
          unsigned int nr_pages, struct page **pages);
unsigned find_get_pages_tag(struct address_space *mapping, unsigned long *index,
   int tag, unsigned int nr_pages, struct page **pages);

struct page *__grab_cache_page(struct address_space *mapping, unsigned long index);




static inline __attribute__((always_inline)) struct page *grab_cache_page(struct address_space *mapping,
        unsigned long index)
{
 return find_or_create_page(mapping, index, mapping_gfp_mask(mapping));
}

extern struct page * grab_cache_page_nowait(struct address_space *mapping,
    unsigned long index);
extern struct page * read_cache_page_async(struct address_space *mapping,
    unsigned long index, filler_t *filler,
    void *data);
extern struct page * read_cache_page(struct address_space *mapping,
    unsigned long index, filler_t *filler,
    void *data);
extern int read_cache_pages(struct address_space *mapping,
  struct list_head *pages, filler_t *filler, void *data);

static inline __attribute__((always_inline)) struct page *read_mapping_page_async(
      struct address_space *mapping,
           unsigned long index, void *data)
{
 filler_t *filler = (filler_t *)mapping->a_ops->readpage;
 return read_cache_page_async(mapping, index, filler, data);
}

static inline __attribute__((always_inline)) struct page *read_mapping_page(struct address_space *mapping,
          unsigned long index, void *data)
{
 filler_t *filler = (filler_t *)mapping->a_ops->readpage;
 return read_cache_page(mapping, index, filler, data);
}

int add_to_page_cache(struct page *page, struct address_space *mapping,
    unsigned long index, gfp_t gfp_mask);
int add_to_page_cache_lru(struct page *page, struct address_space *mapping,
    unsigned long index, gfp_t gfp_mask);
extern void remove_from_page_cache(struct page *page);
extern void __remove_from_page_cache(struct page *page);




static inline __attribute__((always_inline)) loff_t page_offset(struct page *page)
{
 return ((loff_t)page->index) << 12;
}

static inline __attribute__((always_inline)) unsigned long linear_page_index(struct vm_area_struct *vma,
     unsigned long address)
{
 unsigned long pgoff = (address - vma->vm_start) >> 12;
 pgoff += vma->vm_pgoff;
 return pgoff >> (12 - 12);
}

extern void __lock_page(struct page *page);
extern void __lock_page_nosync(struct page *page);
extern void unlock_page(struct page *page);




static inline __attribute__((always_inline)) void lock_page(struct page *page)
{
 do { _cond_resched(); } while (0);
 if (test_and_set_bit(0, &(page)->flags))
  __lock_page(page);
}





static inline __attribute__((always_inline)) void lock_page_nosync(struct page *page)
{
 do { _cond_resched(); } while (0);
 if (test_and_set_bit(0, &(page)->flags))
  __lock_page_nosync(page);
}





extern void wait_on_page_bit(struct page *page, int bit_nr);
# 197 "include/linux/pagemap.h"
static inline __attribute__((always_inline)) void wait_on_page_locked(struct page *page)
{
 if ((__builtin_constant_p(0) ? constant_test_bit((0),(&(page)->flags)) : variable_test_bit((0),(&(page)->flags))))
  wait_on_page_bit(page, 0);
}




static inline __attribute__((always_inline)) void wait_on_page_writeback(struct page *page)
{
 if ((__builtin_constant_p(12) ? constant_test_bit((12),(&(page)->flags)) : variable_test_bit((12),(&(page)->flags))))
  wait_on_page_bit(page, 12);
}

extern void end_page_writeback(struct page *page);







static inline __attribute__((always_inline)) int fault_in_pages_writeable(char *uaddr, int size)
{
 int ret;

 if (__builtin_expect(!!(size == 0), 0))
  return 0;





 ret = ({ int __pu_err; do { __pu_err = 0; (void)0; switch ((sizeof(*(uaddr)))) { case 1: asm volatile( "1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__pu_err) : "iq" (((__typeof__(*(uaddr)))(0))), "m"((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__pu_err)); break; case 2: asm volatile( "1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__pu_err) : "ir" (((__typeof__(*(uaddr)))(0))), "m"((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__pu_err)); break; case 4: asm volatile( "1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__pu_err) : "ir" (((__typeof__(*(uaddr)))(0))), "m"((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__pu_err)); break; case 8: asm volatile( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__pu_err) : "Zr" (((__typeof__(*(uaddr)))(0))), "m"((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__pu_err)); break; default: __put_user_bad(); } } while (0); __pu_err; });
 if (ret == 0) {
  char *end = uaddr + size - 1;





  if (((unsigned long)uaddr & (~(((1UL) << 12)-1))) !=
    ((unsigned long)end & (~(((1UL) << 12)-1))))
    ret = ({ int __pu_err; do { __pu_err = 0; (void)0; switch ((sizeof(*(end)))) { case 1: asm volatile( "1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__pu_err) : "iq" (((__typeof__(*(end)))(0))), "m"((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__pu_err)); break; case 2: asm volatile( "1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__pu_err) : "ir" (((__typeof__(*(end)))(0))), "m"((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__pu_err)); break; case 4: asm volatile( "1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__pu_err) : "ir" (((__typeof__(*(end)))(0))), "m"((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__pu_err)); break; case 8: asm volatile( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__pu_err) : "Zr" (((__typeof__(*(end)))(0))), "m"((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__pu_err)); break; default: __put_user_bad(); } } while (0); __pu_err; });
 }
 return ret;
}

static inline __attribute__((always_inline)) int fault_in_pages_readable(const char *uaddr, int size)
{
 volatile char c;
 int ret;

 if (__builtin_expect(!!(size == 0), 0))
  return 0;

 ret = ({ int __gu_err; unsigned long __gu_val; do { __gu_err = 0; (void)0; switch ((sizeof(*(uaddr)))) { case 1: asm volatile( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__gu_err), "=q" (__gu_val) : "m"((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__gu_err)); break; case 2: asm volatile( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__gu_err), "=r" (__gu_val) : "m"((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__gu_err)); break; case 4: asm volatile( "1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__gu_err), "=r" (__gu_val) : "m"((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__gu_err)); break; case 8: asm volatile( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__gu_err), "=r" (__gu_val) : "m"((*(struct __large_struct *)(((uaddr))))), "i"(-14), "0"(__gu_err)); break; default: (__gu_val) = __get_user_bad(); } } while (0); ((c)) = ( typeof(*((uaddr))))__gu_val; __gu_err; });
 if (ret == 0) {
  const char *end = uaddr + size - 1;

  if (((unsigned long)uaddr & (~(((1UL) << 12)-1))) !=
    ((unsigned long)end & (~(((1UL) << 12)-1))))
    ret = ({ int __gu_err; unsigned long __gu_val; do { __gu_err = 0; (void)0; switch ((sizeof(*(end)))) { case 1: asm volatile( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__gu_err), "=q" (__gu_val) : "m"((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__gu_err)); break; case 2: asm volatile( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__gu_err), "=r" (__gu_val) : "m"((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__gu_err)); break; case 4: asm volatile( "1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__gu_err), "=r" (__gu_val) : "m"((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__gu_err)); break; case 8: asm volatile( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(__gu_err), "=r" (__gu_val) : "m"((*(struct __large_struct *)(((end))))), "i"(-14), "0"(__gu_err)); break; default: (__gu_val) = __get_user_bad(); } } while (0); ((c)) = ( typeof(*((end))))__gu_val; __gu_err; });
 }
 return ret;
}
# 13 "include/linux/blkdev.h" 2
# 1 "include/linux/backing-dev.h" 1
# 14 "include/linux/backing-dev.h"
# 1 "include/asm/atomic.h" 1
# 15 "include/linux/backing-dev.h" 2

struct page;




enum bdi_state {
 BDI_pdflush,
 BDI_write_congested,
 BDI_read_congested,
 BDI_unused,
};

typedef int (congested_fn)(void *, int);

enum bdi_stat_item {
 BDI_RECLAIMABLE,
 BDI_WRITEBACK,
 NR_BDI_STAT_ITEMS
};



struct backing_dev_info {
 unsigned long ra_pages;
 unsigned long state;
 unsigned int capabilities;
 congested_fn *congested_fn;
 void *congested_data;
 void (*unplug_io_fn)(struct backing_dev_info *, struct page *);
 void *unplug_io_data;

 struct percpu_counter bdi_stat[NR_BDI_STAT_ITEMS];

 struct prop_local_percpu completions;
 int dirty_exceeded;
};

int bdi_init(struct backing_dev_info *bdi);
void bdi_destroy(struct backing_dev_info *bdi);

static inline __attribute__((always_inline)) void __add_bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item, s64 amount)
{
 __percpu_counter_add(&bdi->bdi_stat[item], amount, (8*(1+( __builtin_constant_p(nr_cpu_ids) ? ( (nr_cpu_ids) < 1 ? ____ilog2_NaN() : (nr_cpu_ids) & (1ULL << 63) ? 63 : (nr_cpu_ids) & (1ULL << 62) ? 62 : (nr_cpu_ids) & (1ULL << 61) ? 61 : (nr_cpu_ids) & (1ULL << 60) ? 60 : (nr_cpu_ids) & (1ULL << 59) ? 59 : (nr_cpu_ids) & (1ULL << 58) ? 58 : (nr_cpu_ids) & (1ULL << 57) ? 57 : (nr_cpu_ids) & (1ULL << 56) ? 56 : (nr_cpu_ids) & (1ULL << 55) ? 55 : (nr_cpu_ids) & (1ULL << 54) ? 54 : (nr_cpu_ids) & (1ULL << 53) ? 53 : (nr_cpu_ids) & (1ULL << 52) ? 52 : (nr_cpu_ids) & (1ULL << 51) ? 51 : (nr_cpu_ids) & (1ULL << 50) ? 50 : (nr_cpu_ids) & (1ULL << 49) ? 49 : (nr_cpu_ids) & (1ULL << 48) ? 48 : (nr_cpu_ids) & (1ULL << 47) ? 47 : (nr_cpu_ids) & (1ULL << 46) ? 46 : (nr_cpu_ids) & (1ULL << 45) ? 45 : (nr_cpu_ids) & (1ULL << 44) ? 44 : (nr_cpu_ids) & (1ULL << 43) ? 43 : (nr_cpu_ids) & (1ULL << 42) ? 42 : (nr_cpu_ids) & (1ULL << 41) ? 41 : (nr_cpu_ids) & (1ULL << 40) ? 40 : (nr_cpu_ids) & (1ULL << 39) ? 39 : (nr_cpu_ids) & (1ULL << 38) ? 38 : (nr_cpu_ids) & (1ULL << 37) ? 37 : (nr_cpu_ids) & (1ULL << 36) ? 36 : (nr_cpu_ids) & (1ULL << 35) ? 35 : (nr_cpu_ids) & (1ULL << 34) ? 34 : (nr_cpu_ids) & (1ULL << 33) ? 33 : (nr_cpu_ids) & (1ULL << 32) ? 32 : (nr_cpu_ids) & (1ULL << 31) ? 31 : (nr_cpu_ids) & (1ULL << 30) ? 30 : (nr_cpu_ids) & (1ULL << 29) ? 29 : (nr_cpu_ids) & (1ULL << 28) ? 28 : (nr_cpu_ids) & (1ULL << 27) ? 27 : (nr_cpu_ids) & (1ULL << 26) ? 26 : (nr_cpu_ids) & (1ULL << 25) ? 25 : (nr_cpu_ids) & (1ULL << 24) ? 24 : (nr_cpu_ids) & (1ULL << 23) ? 23 : (nr_cpu_ids) & (1ULL << 22) ? 22 : (nr_cpu_ids) & (1ULL << 21) ? 21 : (nr_cpu_ids) & (1ULL << 20) ? 20 : (nr_cpu_ids) & (1ULL << 19) ? 19 : (nr_cpu_ids) & (1ULL << 18) ? 18 : (nr_cpu_ids) & (1ULL << 17) ? 17 : (nr_cpu_ids) & (1ULL << 16) ? 16 : (nr_cpu_ids) & (1ULL << 15) ? 15 : (nr_cpu_ids) & (1ULL << 14) ? 14 : (nr_cpu_ids) & (1ULL << 13) ? 13 : (nr_cpu_ids) & (1ULL << 12) ? 12 : (nr_cpu_ids) & (1ULL << 11) ? 11 : (nr_cpu_ids) & (1ULL << 10) ? 10 : (nr_cpu_ids) & (1ULL << 9) ? 9 : (nr_cpu_ids) & (1ULL << 8) ? 8 : (nr_cpu_ids) & (1ULL << 7) ? 7 : (nr_cpu_ids) & (1ULL << 6) ? 6 : (nr_cpu_ids) & (1ULL << 5) ? 5 : (nr_cpu_ids) & (1ULL << 4) ? 4 : (nr_cpu_ids) & (1ULL << 3) ? 3 : (nr_cpu_ids) & (1ULL << 2) ? 2 : (nr_cpu_ids) & (1ULL << 1) ? 1 : (nr_cpu_ids) & (1ULL << 0) ? 0 : ____ilog2_NaN() ) : (sizeof(nr_cpu_ids) <= 4) ? __ilog2_u32(nr_cpu_ids) : __ilog2_u64(nr_cpu_ids) ))));
}

static inline __attribute__((always_inline)) void __inc_bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 __add_bdi_stat(bdi, item, 1);
}

static inline __attribute__((always_inline)) void inc_bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 unsigned long flags;

 do { do { (flags) = __raw_local_irq_save(); } while (0); do { } while (0); } while (0);
 __inc_bdi_stat(bdi, item);
 do { if (raw_irqs_disabled_flags(flags)) { raw_local_irq_restore(flags); do { } while (0); } else { do { } while (0); raw_local_irq_restore(flags); } } while (0);
}

static inline __attribute__((always_inline)) void __dec_bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 __add_bdi_stat(bdi, item, -1);
}

static inline __attribute__((always_inline)) void dec_bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 unsigned long flags;

 do { do { (flags) = __raw_local_irq_save(); } while (0); do { } while (0); } while (0);
 __dec_bdi_stat(bdi, item);
 do { if (raw_irqs_disabled_flags(flags)) { raw_local_irq_restore(flags); do { } while (0); } else { do { } while (0); raw_local_irq_restore(flags); } } while (0);
}

static inline __attribute__((always_inline)) s64 bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 return percpu_counter_read_positive(&bdi->bdi_stat[item]);
}

static inline __attribute__((always_inline)) s64 __bdi_stat_sum(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 return percpu_counter_sum_positive(&bdi->bdi_stat[item]);
}

static inline __attribute__((always_inline)) s64 bdi_stat_sum(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 s64 sum;
 unsigned long flags;

 do { do { (flags) = __raw_local_irq_save(); } while (0); do { } while (0); } while (0);
 sum = __bdi_stat_sum(bdi, item);
 do { if (raw_irqs_disabled_flags(flags)) { raw_local_irq_restore(flags); do { } while (0); } else { do { } while (0); raw_local_irq_restore(flags); } } while (0);

 return sum;
}




static inline __attribute__((always_inline)) unsigned long bdi_stat_error(struct backing_dev_info *bdi)
{

 return nr_cpu_ids * (8*(1+( __builtin_constant_p(nr_cpu_ids) ? ( (nr_cpu_ids) < 1 ? ____ilog2_NaN() : (nr_cpu_ids) & (1ULL << 63) ? 63 : (nr_cpu_ids) & (1ULL << 62) ? 62 : (nr_cpu_ids) & (1ULL << 61) ? 61 : (nr_cpu_ids) & (1ULL << 60) ? 60 : (nr_cpu_ids) & (1ULL << 59) ? 59 : (nr_cpu_ids) & (1ULL << 58) ? 58 : (nr_cpu_ids) & (1ULL << 57) ? 57 : (nr_cpu_ids) & (1ULL << 56) ? 56 : (nr_cpu_ids) & (1ULL << 55) ? 55 : (nr_cpu_ids) & (1ULL << 54) ? 54 : (nr_cpu_ids) & (1ULL << 53) ? 53 : (nr_cpu_ids) & (1ULL << 52) ? 52 : (nr_cpu_ids) & (1ULL << 51) ? 51 : (nr_cpu_ids) & (1ULL << 50) ? 50 : (nr_cpu_ids) & (1ULL << 49) ? 49 : (nr_cpu_ids) & (1ULL << 48) ? 48 : (nr_cpu_ids) & (1ULL << 47) ? 47 : (nr_cpu_ids) & (1ULL << 46) ? 46 : (nr_cpu_ids) & (1ULL << 45) ? 45 : (nr_cpu_ids) & (1ULL << 44) ? 44 : (nr_cpu_ids) & (1ULL << 43) ? 43 : (nr_cpu_ids) & (1ULL << 42) ? 42 : (nr_cpu_ids) & (1ULL << 41) ? 41 : (nr_cpu_ids) & (1ULL << 40) ? 40 : (nr_cpu_ids) & (1ULL << 39) ? 39 : (nr_cpu_ids) & (1ULL << 38) ? 38 : (nr_cpu_ids) & (1ULL << 37) ? 37 : (nr_cpu_ids) & (1ULL << 36) ? 36 : (nr_cpu_ids) & (1ULL << 35) ? 35 : (nr_cpu_ids) & (1ULL << 34) ? 34 : (nr_cpu_ids) & (1ULL << 33) ? 33 : (nr_cpu_ids) & (1ULL << 32) ? 32 : (nr_cpu_ids) & (1ULL << 31) ? 31 : (nr_cpu_ids) & (1ULL << 30) ? 30 : (nr_cpu_ids) & (1ULL << 29) ? 29 : (nr_cpu_ids) & (1ULL << 28) ? 28 : (nr_cpu_ids) & (1ULL << 27) ? 27 : (nr_cpu_ids) & (1ULL << 26) ? 26 : (nr_cpu_ids) & (1ULL << 25) ? 25 : (nr_cpu_ids) & (1ULL << 24) ? 24 : (nr_cpu_ids) & (1ULL << 23) ? 23 : (nr_cpu_ids) & (1ULL << 22) ? 22 : (nr_cpu_ids) & (1ULL << 21) ? 21 : (nr_cpu_ids) & (1ULL << 20) ? 20 : (nr_cpu_ids) & (1ULL << 19) ? 19 : (nr_cpu_ids) & (1ULL << 18) ? 18 : (nr_cpu_ids) & (1ULL << 17) ? 17 : (nr_cpu_ids) & (1ULL << 16) ? 16 : (nr_cpu_ids) & (1ULL << 15) ? 15 : (nr_cpu_ids) & (1ULL << 14) ? 14 : (nr_cpu_ids) & (1ULL << 13) ? 13 : (nr_cpu_ids) & (1ULL << 12) ? 12 : (nr_cpu_ids) & (1ULL << 11) ? 11 : (nr_cpu_ids) & (1ULL << 10) ? 10 : (nr_cpu_ids) & (1ULL << 9) ? 9 : (nr_cpu_ids) & (1ULL << 8) ? 8 : (nr_cpu_ids) & (1ULL << 7) ? 7 : (nr_cpu_ids) & (1ULL << 6) ? 6 : (nr_cpu_ids) & (1ULL << 5) ? 5 : (nr_cpu_ids) & (1ULL << 4) ? 4 : (nr_cpu_ids) & (1ULL << 3) ? 3 : (nr_cpu_ids) & (1ULL << 2) ? 2 : (nr_cpu_ids) & (1ULL << 1) ? 1 : (nr_cpu_ids) & (1ULL << 0) ? 0 : ____ilog2_NaN() ) : (sizeof(nr_cpu_ids) <= 4) ? __ilog2_u32(nr_cpu_ids) : __ilog2_u64(nr_cpu_ids) )));



}
# 156 "include/linux/backing-dev.h"
extern struct backing_dev_info default_backing_dev_info;
void default_unplug_io_fn(struct backing_dev_info *bdi, struct page *page);

int writeback_acquire(struct backing_dev_info *bdi);
int writeback_in_progress(struct backing_dev_info *bdi);
void writeback_release(struct backing_dev_info *bdi);

static inline __attribute__((always_inline)) int bdi_congested(struct backing_dev_info *bdi, int bdi_bits)
{
 if (bdi->congested_fn)
  return bdi->congested_fn(bdi->congested_data, bdi_bits);
 return (bdi->state & bdi_bits);
}

static inline __attribute__((always_inline)) int bdi_read_congested(struct backing_dev_info *bdi)
{
 return bdi_congested(bdi, 1 << BDI_read_congested);
}

static inline __attribute__((always_inline)) int bdi_write_congested(struct backing_dev_info *bdi)
{
 return bdi_congested(bdi, 1 << BDI_write_congested);
}

static inline __attribute__((always_inline)) int bdi_rw_congested(struct backing_dev_info *bdi)
{
 return bdi_congested(bdi, (1 << BDI_read_congested)|
      (1 << BDI_write_congested));
}

void clear_bdi_congested(struct backing_dev_info *bdi, int rw);
void set_bdi_congested(struct backing_dev_info *bdi, int rw);
long congestion_wait(int rw, long timeout);
# 14 "include/linux/blkdev.h" 2

# 1 "include/linux/mempool.h" 1
# 9 "include/linux/mempool.h"
struct kmem_cache;

typedef void * (mempool_alloc_t)(gfp_t gfp_mask, void *pool_data);
typedef void (mempool_free_t)(void *element, void *pool_data);

typedef struct mempool_s {
 spinlock_t lock;
 int min_nr;
 int curr_nr;
 void **elements;

 void *pool_data;
 mempool_alloc_t *alloc;
 mempool_free_t *free;
 wait_queue_head_t wait;
} mempool_t;

extern mempool_t *mempool_create(int min_nr, mempool_alloc_t *alloc_fn,
   mempool_free_t *free_fn, void *pool_data);
extern mempool_t *mempool_create_node(int min_nr, mempool_alloc_t *alloc_fn,
   mempool_free_t *free_fn, void *pool_data, int nid);

extern int mempool_resize(mempool_t *pool, int new_min_nr, gfp_t gfp_mask);
extern void mempool_destroy(mempool_t *pool);
extern void * mempool_alloc(mempool_t *pool, gfp_t gfp_mask);
extern void mempool_free(void *element, mempool_t *pool);





void *mempool_alloc_slab(gfp_t gfp_mask, void *pool_data);
void mempool_free_slab(void *element, void *pool_data);
static inline __attribute__((always_inline)) mempool_t *
mempool_create_slab_pool(int min_nr, struct kmem_cache *kc)
{
 return mempool_create(min_nr, mempool_alloc_slab, mempool_free_slab,
         (void *) kc);
}





void *mempool_kmalloc(gfp_t gfp_mask, void *pool_data);
void *mempool_kzalloc(gfp_t gfp_mask, void *pool_data);
void mempool_kfree(void *element, void *pool_data);
static inline __attribute__((always_inline)) mempool_t *mempool_create_kmalloc_pool(int min_nr, size_t size)
{
 return mempool_create(min_nr, mempool_kmalloc, mempool_kfree,
         (void *) size);
}
static inline __attribute__((always_inline)) mempool_t *mempool_create_kzalloc_pool(int min_nr, size_t size)
{
 return mempool_create(min_nr, mempool_kzalloc, mempool_kfree,
         (void *) size);
}





void *mempool_alloc_pages(gfp_t gfp_mask, void *pool_data);
void mempool_free_pages(void *element, void *pool_data);
static inline __attribute__((always_inline)) mempool_t *mempool_create_page_pool(int min_nr, int order)
{
 return mempool_create(min_nr, mempool_alloc_pages, mempool_free_pages,
         (void *)(long)order);
}
# 16 "include/linux/blkdev.h" 2
# 1 "include/linux/bio.h" 1
# 25 "include/linux/bio.h"
# 1 "include/linux/ioprio.h" 1




# 1 "include/linux/iocontext.h" 1
# 9 "include/linux/iocontext.h"
struct as_io_context {
 spinlock_t lock;

 void (*dtor)(struct as_io_context *aic);
 void (*exit)(struct as_io_context *aic);

 unsigned long state;
 atomic_t nr_queued;
 atomic_t nr_dispatched;



 unsigned long last_end_request;
 unsigned long ttime_total;
 unsigned long ttime_samples;
 unsigned long ttime_mean;

 unsigned int seek_samples;
 sector_t last_request_pos;
 u64 seek_total;
 sector_t seek_mean;
};

struct cfq_queue;
struct cfq_io_context {
 void *key;
 unsigned long dead_key;

 struct cfq_queue *cfqq[2];

 struct io_context *ioc;

 unsigned long last_end_request;
 sector_t last_request_pos;

 unsigned long ttime_total;
 unsigned long ttime_samples;
 unsigned long ttime_mean;

 unsigned int seek_samples;
 u64 seek_total;
 sector_t seek_mean;

 struct list_head queue_list;

 void (*dtor)(struct io_context *);
 void (*exit)(struct io_context *);
};





struct io_context {
 atomic_t refcount;
 atomic_t nr_tasks;


 spinlock_t lock;

 unsigned short ioprio;
 unsigned short ioprio_changed;




 unsigned long last_waited;
 int nr_batch_requests;

 struct as_io_context *aic;
 struct radix_tree_root radix_root;
 void *ioc_data;
};

static inline __attribute__((always_inline)) struct io_context *ioc_task_link(struct io_context *ioc)
{




 if (ioc && atomic_add_unless((&ioc->refcount), 1, 0))
  return ioc;

 return ((void *)0);
}
# 6 "include/linux/ioprio.h" 2
# 26 "include/linux/ioprio.h"
enum {
 IOPRIO_CLASS_NONE,
 IOPRIO_CLASS_RT,
 IOPRIO_CLASS_BE,
 IOPRIO_CLASS_IDLE,
};






enum {
 IOPRIO_WHO_PROCESS = 1,
 IOPRIO_WHO_PGRP,
 IOPRIO_WHO_USER,
};






static inline __attribute__((always_inline)) int task_ioprio(struct io_context *ioc)
{
 if (((((ioc->ioprio)) >> (13)) != IOPRIO_CLASS_NONE))
  return ((ioc->ioprio) & ((1UL << (13)) - 1));

 return (4);
}

static inline __attribute__((always_inline)) int task_ioprio_class(struct io_context *ioc)
{
 if (((((ioc->ioprio)) >> (13)) != IOPRIO_CLASS_NONE))
  return ((ioc->ioprio) >> (13));

 return IOPRIO_CLASS_BE;
}

static inline __attribute__((always_inline)) int task_nice_ioprio(struct task_struct *task)
{
 return (task_nice(task) + 20) / 5;
}




extern int ioprio_best(unsigned short aprio, unsigned short bprio);
# 26 "include/linux/bio.h" 2




# 1 "include/asm/io.h" 1



# 1 "include/asm/io_64.h" 1
# 80 "include/asm/io_64.h"
static inline __attribute__((always_inline)) unsigned char inb(unsigned short port) { unsigned char _v; __asm__ __volatile__ ("in" "b" " %" "w" "1,%" "" "0" : "=a" (_v) : "Nd" (port) ); return _v; } static inline __attribute__((always_inline)) unsigned char inb_p(unsigned short port) { unsigned char _v; __asm__ __volatile__ ("in" "b" " %" "w" "1,%" "" "0" "\noutb %%al,$0x80" : "=a" (_v) : "Nd" (port) ); return _v; }


static inline __attribute__((always_inline)) unsigned short inw(unsigned short port) { unsigned short _v; __asm__ __volatile__ ("in" "w" " %" "w" "1,%" "" "0" : "=a" (_v) : "Nd" (port) ); return _v; } static inline __attribute__((always_inline)) unsigned short inw_p(unsigned short port) { unsigned short _v; __asm__ __volatile__ ("in" "w" " %" "w" "1,%" "" "0" "\noutb %%al,$0x80" : "=a" (_v) : "Nd" (port) ); return _v; }


static inline __attribute__((always_inline)) unsigned int inl(unsigned short port) { unsigned int _v; __asm__ __volatile__ ("in" "l" " %" "w" "1,%" "" "0" : "=a" (_v) : "Nd" (port) ); return _v; } static inline __attribute__((always_inline)) unsigned int inl_p(unsigned short port) { unsigned int _v; __asm__ __volatile__ ("in" "l" " %" "w" "1,%" "" "0" "\noutb %%al,$0x80" : "=a" (_v) : "Nd" (port) ); return _v; }


static inline __attribute__((always_inline)) void outb(unsigned char value, unsigned short port) { __asm__ __volatile__ ("out" "b" " %" "b" "0,%" "w" "1" : : "a" (value), "Nd" (port)); } static inline __attribute__((always_inline)) void outb_p(unsigned char value, unsigned short port) { __asm__ __volatile__ ("out" "b" " %" "b" "0,%" "w" "1" "\noutb %%al,$0x80" : : "a" (value), "Nd" (port));}
static inline __attribute__((always_inline)) void outw(unsigned short value, unsigned short port) { __asm__ __volatile__ ("out" "w" " %" "w" "0,%" "w" "1" : : "a" (value), "Nd" (port)); } static inline __attribute__((always_inline)) void outw_p(unsigned short value, unsigned short port) { __asm__ __volatile__ ("out" "w" " %" "w" "0,%" "w" "1" "\noutb %%al,$0x80" : : "a" (value), "Nd" (port));}
static inline __attribute__((always_inline)) void outl(unsigned int value, unsigned short port) { __asm__ __volatile__ ("out" "l" " %" "0,%" "w" "1" : : "a" (value), "Nd" (port)); } static inline __attribute__((always_inline)) void outl_p(unsigned int value, unsigned short port) { __asm__ __volatile__ ("out" "l" " %" "0,%" "w" "1" "\noutb %%al,$0x80" : : "a" (value), "Nd" (port));}

static inline __attribute__((always_inline)) void insb(unsigned short port, void * addr, unsigned long count) { __asm__ __volatile__ ("rep ; ins" "b" : "=D" (addr), "=c" (count) : "d" (port),"0" (addr),"1" (count)); }
static inline __attribute__((always_inline)) void insw(unsigned short port, void * addr, unsigned long count) { __asm__ __volatile__ ("rep ; ins" "w" : "=D" (addr), "=c" (count) : "d" (port),"0" (addr),"1" (count)); }
static inline __attribute__((always_inline)) void insl(unsigned short port, void * addr, unsigned long count) { __asm__ __volatile__ ("rep ; ins" "l" : "=D" (addr), "=c" (count) : "d" (port),"0" (addr),"1" (count)); }

static inline __attribute__((always_inline)) void outsb(unsigned short port, const void * addr, unsigned long count) { __asm__ __volatile__ ("rep ; outs" "b" : "=S" (addr), "=c" (count) : "d" (port),"0" (addr),"1" (count)); }
static inline __attribute__((always_inline)) void outsw(unsigned short port, const void * addr, unsigned long count) { __asm__ __volatile__ ("rep ; outs" "w" : "=S" (addr), "=c" (count) : "d" (port),"0" (addr),"1" (count)); }
static inline __attribute__((always_inline)) void outsl(unsigned short port, const void * addr, unsigned long count) { __asm__ __volatile__ ("rep ; outs" "l" : "=S" (addr), "=c" (count) : "d" (port),"0" (addr),"1" (count)); }





# 1 "include/linux/vmalloc.h" 1




# 1 "include/asm/page.h" 1
# 6 "include/linux/vmalloc.h" 2

struct vm_area_struct;
# 25 "include/linux/vmalloc.h"
struct vm_struct {

 struct vm_struct *next;
 void *addr;
 unsigned long size;
 unsigned long flags;
 struct page **pages;
 unsigned int nr_pages;
 unsigned long phys_addr;
};




extern void *vmalloc(unsigned long size);
extern void *vmalloc_user(unsigned long size);
extern void *vmalloc_node(unsigned long size, int node);
extern void *vmalloc_exec(unsigned long size);
extern void *vmalloc_32(unsigned long size);
extern void *vmalloc_32_user(unsigned long size);
extern void *__vmalloc(unsigned long size, gfp_t gfp_mask, pgprot_t prot);
extern void *__vmalloc_area(struct vm_struct *area, gfp_t gfp_mask,
    pgprot_t prot);
extern void vfree(void *addr);

extern void *vmap(struct page **pages, unsigned int count,
   unsigned long flags, pgprot_t prot);
extern void vunmap(void *addr);

extern int remap_vmalloc_range(struct vm_area_struct *vma, void *addr,
       unsigned long pgoff);
void vmalloc_sync_all(void);





static inline __attribute__((always_inline)) size_t get_vm_area_size(const struct vm_struct *area)
{

 return area->size - ((1UL) << 12);
}

extern struct vm_struct *get_vm_area(unsigned long size, unsigned long flags);
extern struct vm_struct *__get_vm_area(unsigned long size, unsigned long flags,
     unsigned long start, unsigned long end);
extern struct vm_struct *get_vm_area_node(unsigned long size,
       unsigned long flags, int node,
       gfp_t gfp_mask);
extern struct vm_struct *remove_vm_area(void *addr);

extern int map_vm_area(struct vm_struct *area, pgprot_t prot,
   struct page ***pages);
extern void unmap_kernel_range(unsigned long addr, unsigned long size);


extern struct vm_struct *alloc_vm_area(size_t size);
extern void free_vm_area(struct vm_struct *area);




extern rwlock_t vmlist_lock;
extern struct vm_struct *vmlist;
# 106 "include/asm/io_64.h" 2






static inline __attribute__((always_inline)) unsigned long virt_to_phys(volatile void * address)
{
 return __phys_addr((unsigned long)(address));
}

static inline __attribute__((always_inline)) void * phys_to_virt(unsigned long address)
{
 return ((void *)((unsigned long)(address)+(0xffff810000000000UL)));
}







# 1 "include/asm-generic/iomap.h" 1
# 28 "include/asm-generic/iomap.h"
extern unsigned int ioread8(void *);
extern unsigned int ioread16(void *);
extern unsigned int ioread16be(void *);
extern unsigned int ioread32(void *);
extern unsigned int ioread32be(void *);

extern void iowrite8(u8, void *);
extern void iowrite16(u16, void *);
extern void iowrite16be(u16, void *);
extern void iowrite32(u32, void *);
extern void iowrite32be(u32, void *);
# 51 "include/asm-generic/iomap.h"
extern void ioread8_rep(void *port, void *buf, unsigned long count);
extern void ioread16_rep(void *port, void *buf, unsigned long count);
extern void ioread32_rep(void *port, void *buf, unsigned long count);

extern void iowrite8_rep(void *port, const void *buf, unsigned long count);
extern void iowrite16_rep(void *port, const void *buf, unsigned long count);
extern void iowrite32_rep(void *port, const void *buf, unsigned long count);


extern void *ioport_map(unsigned long port, unsigned int nr);
extern void ioport_unmap(void *);


struct pci_dev;
extern void *pci_iomap(struct pci_dev *dev, int bar, unsigned long max);
extern void pci_iounmap(struct pci_dev *dev, void *);
# 129 "include/asm/io_64.h" 2

extern void *__ioremap(unsigned long offset, unsigned long size, unsigned long flags);

static inline __attribute__((always_inline)) void * ioremap (unsigned long offset, unsigned long size)
{
 return __ioremap(offset, size, 0);
}

extern void *early_ioremap(unsigned long addr, unsigned long size);
extern void early_iounmap(void *addr, unsigned long size);






extern void * ioremap_nocache (unsigned long offset, unsigned long size);
extern void iounmap(volatile void *addr);
extern void *fix_ioremap(unsigned idx, unsigned long phys);
# 172 "include/asm/io_64.h"
static inline __attribute__((always_inline)) __u8 __readb(const volatile void *addr)
{
 return *( volatile __u8 *)addr;
}
static inline __attribute__((always_inline)) __u16 __readw(const volatile void *addr)
{
 return *( volatile __u16 *)addr;
}
static inline __attribute__((always_inline)) __attribute__((always_inline)) __u32 __readl(const volatile void *addr)
{
 return *( volatile __u32 *)addr;
}
static inline __attribute__((always_inline)) __u64 __readq(const volatile void *addr)
{
 return *( volatile __u64 *)addr;
}
# 203 "include/asm/io_64.h"
static inline __attribute__((always_inline)) void __writel(__u32 b, volatile void *addr)
{
 *( volatile __u32 *)addr = b;
}
static inline __attribute__((always_inline)) void __writeq(__u64 b, volatile void *addr)
{
 *( volatile __u64 *)addr = b;
}
static inline __attribute__((always_inline)) void __writeb(__u8 b, volatile void *addr)
{
 *( volatile __u8 *)addr = b;
}
static inline __attribute__((always_inline)) void __writew(__u16 b, volatile void *addr)
{
 *( volatile __u16 *)addr = b;
}
# 228 "include/asm/io_64.h"
void __memcpy_fromio(void*,unsigned long,unsigned);
void __memcpy_toio(unsigned long,const void*,unsigned);

static inline __attribute__((always_inline)) void memcpy_fromio(void *to, const volatile void *from, unsigned len)
{
 __memcpy_fromio(to,(unsigned long)from,len);
}
static inline __attribute__((always_inline)) void memcpy_toio(volatile void *to, const void *from, unsigned len)
{
 __memcpy_toio((unsigned long)to,from,len);
}

void memset_io(volatile void *a, int b, size_t c);
# 254 "include/asm/io_64.h"
extern int iommu_bio_merge;
# 5 "include/asm/io.h" 2
# 31 "include/linux/bio.h" 2
# 59 "include/linux/bio.h"
struct bio_vec {
 struct page *bv_page;
 unsigned int bv_len;
 unsigned int bv_offset;
};

struct bio_set;
struct bio;
typedef void (bio_end_io_t) (struct bio *, int);
typedef void (bio_destructor_t) (struct bio *);





struct bio {
 sector_t bi_sector;

 struct bio *bi_next;
 struct block_device *bi_bdev;
 unsigned long bi_flags;
 unsigned long bi_rw;



 unsigned short bi_vcnt;
 unsigned short bi_idx;




 unsigned short bi_phys_segments;




 unsigned short bi_hw_segments;

 unsigned int bi_size;






 unsigned int bi_hw_front_size;
 unsigned int bi_hw_back_size;

 unsigned int bi_max_vecs;

 struct bio_vec *bi_io_vec;

 bio_end_io_t *bi_end_io;
 atomic_t bi_cnt;

 void *bi_private;

 bio_destructor_t *bi_destructor;
};
# 186 "include/linux/bio.h"
static inline __attribute__((always_inline)) unsigned int bio_cur_sectors(struct bio *bio)
{
 if (bio->bi_vcnt)
  return (&(((bio))->bi_io_vec[((bio)->bi_idx)]))->bv_len >> 9;

 return 0;
}

static inline __attribute__((always_inline)) void *bio_data(struct bio *bio)
{
 if (bio->bi_vcnt)
  return lowmem_page_address((&((((bio)))->bi_io_vec[(((bio))->bi_idx)]))->bv_page) + (&((((bio)))->bi_io_vec[(((bio))->bi_idx)]))->bv_offset;

 return ((void *)0);
}
# 285 "include/linux/bio.h"
struct bio_pair {
 struct bio bio1, bio2;
 struct bio_vec bv1, bv2;
 atomic_t cnt;
 int error;
};
extern struct bio_pair *bio_split(struct bio *bi, mempool_t *pool,
      int first_sectors);
extern mempool_t *bio_split_pool;
extern void bio_pair_release(struct bio_pair *dbio);

extern struct bio_set *bioset_create(int, int);
extern void bioset_free(struct bio_set *);

extern struct bio *bio_alloc(gfp_t, int);
extern struct bio *bio_alloc_bioset(gfp_t, int, struct bio_set *);
extern void bio_put(struct bio *);
extern void bio_free(struct bio *, struct bio_set *);

extern void bio_endio(struct bio *, int);
struct request_queue;
extern int bio_phys_segments(struct request_queue *, struct bio *);
extern int bio_hw_segments(struct request_queue *, struct bio *);

extern void __bio_clone(struct bio *, struct bio *);
extern struct bio *bio_clone(struct bio *, gfp_t);

extern void bio_init(struct bio *);

extern int bio_add_page(struct bio *, struct page *, unsigned int,unsigned int);
extern int bio_add_pc_page(struct request_queue *, struct bio *, struct page *,
      unsigned int, unsigned int);
extern int bio_get_nr_vecs(struct block_device *);
extern struct bio *bio_map_user(struct request_queue *, struct block_device *,
    unsigned long, unsigned int, int);
struct sg_iovec;
extern struct bio *bio_map_user_iov(struct request_queue *,
        struct block_device *,
        struct sg_iovec *, int, int);
extern void bio_unmap_user(struct bio *);
extern struct bio *bio_map_kern(struct request_queue *, void *, unsigned int,
    gfp_t);
extern void bio_set_pages_dirty(struct bio *bio);
extern void bio_check_pages_dirty(struct bio *bio);
extern void bio_release_pages(struct bio *bio);
extern struct bio *bio_copy_user(struct request_queue *, unsigned long, unsigned int, int);
extern int bio_uncopy_user(struct bio *);
void zero_fill_bio(struct bio *bio);
# 370 "include/linux/bio.h"
static inline __attribute__((always_inline)) char *__bio_kmap_irq(struct bio *bio, unsigned short idx,
       unsigned long *flags)
{
 return (lowmem_page_address(((&((bio)->bi_io_vec[(idx)])))->bv_page) + ((&((bio)->bi_io_vec[(idx)])))->bv_offset);
}
# 17 "include/linux/blkdev.h" 2


# 1 "include/linux/bsg.h" 1
# 10 "include/linux/bsg.h"
struct sg_io_v4 {
 __s32 guard;
 __u32 protocol;
 __u32 subprotocol;


 __u32 request_len;
 __u64 request;
 __u64 request_tag;
 __u32 request_attr;
 __u32 request_priority;
 __u32 request_extra;
 __u32 max_response_len;
 __u64 response;


 __u32 dout_iovec_count;

 __u32 dout_xfer_len;
 __u32 din_iovec_count;
 __u32 din_xfer_len;
 __u64 dout_xferp;
 __u64 din_xferp;

 __u32 timeout;
 __u32 flags;
 __u64 usr_ptr;
 __u32 spare_in;

 __u32 driver_status;
 __u32 transport_status;
 __u32 device_status;
 __u32 retry_delay;
 __u32 info;
 __u32 duration;
 __u32 response_len;
 __s32 din_resid;
 __s32 dout_resid;
 __u64 generated_tag;
 __u32 spare_out;

 __u32 padding;
};
# 67 "include/linux/bsg.h"
static inline __attribute__((always_inline)) int bsg_register_queue(struct request_queue * rq, struct device *dev, const char *name)
{
 return 0;
}
static inline __attribute__((always_inline)) void bsg_unregister_queue(struct request_queue *rq)
{
}
# 20 "include/linux/blkdev.h" 2

# 1 "include/asm/scatterlist.h" 1



# 1 "include/asm/scatterlist_64.h" 1





struct scatterlist {



    unsigned long page_link;
    unsigned int offset;
    unsigned int length;
    dma_addr_t dma_address;
    unsigned int dma_length;
};
# 5 "include/asm/scatterlist.h" 2
# 22 "include/linux/blkdev.h" 2

struct scsi_ioctl_command;

struct request_queue;
typedef struct request_queue request_queue_t __attribute__((deprecated));
struct elevator_queue;
typedef struct elevator_queue elevator_t;
struct request_pm_state;
struct blk_trace;
struct request;
struct sg_io_hdr;




int put_io_context(struct io_context *ioc);
void exit_io_context(void);
struct io_context *get_io_context(gfp_t gfp_flags, int node);
struct io_context *alloc_io_context(gfp_t gfp_flags, int node);
void copy_io_context(struct io_context **pdst, struct io_context **psrc);
void swap_io_context(struct io_context **ioc1, struct io_context **ioc2);

struct request;
typedef void (rq_end_io_fn)(struct request *, int);

struct request_list {
 int count[2];
 int starved[2];
 int elvpriv;
 mempool_t *rq_pool;
 wait_queue_head_t wait[2];
};




enum rq_cmd_type_bits {
 REQ_TYPE_FS = 1,
 REQ_TYPE_BLOCK_PC,
 REQ_TYPE_SENSE,
 REQ_TYPE_PM_SUSPEND,
 REQ_TYPE_PM_RESUME,
 REQ_TYPE_PM_SHUTDOWN,
 REQ_TYPE_FLUSH,
 REQ_TYPE_SPECIAL,
 REQ_TYPE_LINUX_BLOCK,





 REQ_TYPE_ATA_TASKFILE,
 REQ_TYPE_ATA_PC,
};
# 86 "include/linux/blkdev.h"
enum {



 REQ_LB_OP_EJECT = 0x40,
 REQ_LB_OP_FLUSH = 0x41,
};




enum rq_flag_bits {
 __REQ_RW,
 __REQ_FAILFAST,
 __REQ_SORTED,
 __REQ_SOFTBARRIER,
 __REQ_HARDBARRIER,
 __REQ_FUA,
 __REQ_NOMERGE,
 __REQ_STARTED,
 __REQ_DONTPREP,
 __REQ_QUEUED,
 __REQ_ELVPRIV,
 __REQ_FAILED,
 __REQ_QUIET,
 __REQ_PREEMPT,
 __REQ_ORDERED_COLOR,
 __REQ_RW_SYNC,
 __REQ_ALLOCED,
 __REQ_RW_META,
 __REQ_NR_BITS,
};
# 143 "include/linux/blkdev.h"
struct request {
 struct list_head queuelist;
 struct list_head donelist;

 struct request_queue *q;

 unsigned int cmd_flags;
 enum rq_cmd_type_bits cmd_type;





 sector_t sector;
 sector_t hard_sector;
 unsigned long nr_sectors;
 unsigned long hard_nr_sectors;

 unsigned int current_nr_sectors;


 unsigned int hard_cur_sectors;

 struct bio *bio;
 struct bio *biotail;

 struct hlist_node hash;





 union {
  struct rb_node rb_node;
  void *completion_data;
 };





 void *elevator_private;
 void *elevator_private2;

 struct gendisk *rq_disk;
 unsigned long start_time;




 unsigned short nr_phys_segments;






 unsigned short nr_hw_segments;

 unsigned short ioprio;

 void *special;
 char *buffer;

 int tag;
 int errors;

 int ref_count;




 unsigned int cmd_len;
 unsigned char cmd[16];

 unsigned int data_len;
 unsigned int sense_len;
 void *data;
 void *sense;

 unsigned int timeout;
 int retries;




 rq_end_io_fn *end_io;
 void *end_io_data;


 struct request *next_rq;
};





struct request_pm_state
{

 int pm_step;

 u32 pm_state;
 void* data;
};

# 1 "include/linux/elevator.h" 1







typedef int (elevator_merge_fn) (struct request_queue *, struct request **,
     struct bio *);

typedef void (elevator_merge_req_fn) (struct request_queue *, struct request *, struct request *);

typedef void (elevator_merged_fn) (struct request_queue *, struct request *, int);

typedef int (elevator_allow_merge_fn) (struct request_queue *, struct request *, struct bio *);

typedef int (elevator_dispatch_fn) (struct request_queue *, int);

typedef void (elevator_add_req_fn) (struct request_queue *, struct request *);
typedef int (elevator_queue_empty_fn) (struct request_queue *);
typedef struct request *(elevator_request_list_fn) (struct request_queue *, struct request *);
typedef void (elevator_completed_req_fn) (struct request_queue *, struct request *);
typedef int (elevator_may_queue_fn) (struct request_queue *, int);

typedef int (elevator_set_req_fn) (struct request_queue *, struct request *, gfp_t);
typedef void (elevator_put_req_fn) (struct request *);
typedef void (elevator_activate_req_fn) (struct request_queue *, struct request *);
typedef void (elevator_deactivate_req_fn) (struct request_queue *, struct request *);

typedef void *(elevator_init_fn) (struct request_queue *);
typedef void (elevator_exit_fn) (elevator_t *);

struct elevator_ops
{
 elevator_merge_fn *elevator_merge_fn;
 elevator_merged_fn *elevator_merged_fn;
 elevator_merge_req_fn *elevator_merge_req_fn;
 elevator_allow_merge_fn *elevator_allow_merge_fn;

 elevator_dispatch_fn *elevator_dispatch_fn;
 elevator_add_req_fn *elevator_add_req_fn;
 elevator_activate_req_fn *elevator_activate_req_fn;
 elevator_deactivate_req_fn *elevator_deactivate_req_fn;

 elevator_queue_empty_fn *elevator_queue_empty_fn;
 elevator_completed_req_fn *elevator_completed_req_fn;

 elevator_request_list_fn *elevator_former_req_fn;
 elevator_request_list_fn *elevator_latter_req_fn;

 elevator_set_req_fn *elevator_set_req_fn;
 elevator_put_req_fn *elevator_put_req_fn;

 elevator_may_queue_fn *elevator_may_queue_fn;

 elevator_init_fn *elevator_init_fn;
 elevator_exit_fn *elevator_exit_fn;
 void (*trim)(struct io_context *);
};



struct elv_fs_entry {
 struct attribute attr;
 ssize_t (*show)(elevator_t *, char *);
 ssize_t (*store)(elevator_t *, const char *, size_t);
};




struct elevator_type
{
 struct list_head list;
 struct elevator_ops ops;
 struct elv_fs_entry *elevator_attrs;
 char elevator_name[(16)];
 struct module *elevator_owner;
};




struct elevator_queue
{
 struct elevator_ops *ops;
 void *elevator_data;
 struct kobject kobj;
 struct elevator_type *elevator_type;
 struct mutex sysfs_lock;
 struct hlist_head *hash;
};




extern void elv_dispatch_sort(struct request_queue *, struct request *);
extern void elv_dispatch_add_tail(struct request_queue *, struct request *);
extern void elv_add_request(struct request_queue *, struct request *, int, int);
extern void __elv_add_request(struct request_queue *, struct request *, int, int);
extern void elv_insert(struct request_queue *, struct request *, int);
extern int elv_merge(struct request_queue *, struct request **, struct bio *);
extern void elv_merge_requests(struct request_queue *, struct request *,
          struct request *);
extern void elv_merged_request(struct request_queue *, struct request *, int);
extern void elv_dequeue_request(struct request_queue *, struct request *);
extern void elv_requeue_request(struct request_queue *, struct request *);
extern int elv_queue_empty(struct request_queue *);
extern struct request *elv_next_request(struct request_queue *q);
extern struct request *elv_former_request(struct request_queue *, struct request *);
extern struct request *elv_latter_request(struct request_queue *, struct request *);
extern int elv_register_queue(struct request_queue *q);
extern void elv_unregister_queue(struct request_queue *q);
extern int elv_may_queue(struct request_queue *, int);
extern void elv_completed_request(struct request_queue *, struct request *);
extern int elv_set_request(struct request_queue *, struct request *, gfp_t);
extern void elv_put_request(struct request_queue *, struct request *);




extern void elv_register(struct elevator_type *);
extern void elv_unregister(struct elevator_type *);




extern ssize_t elv_iosched_show(struct request_queue *, char *);
extern ssize_t elv_iosched_store(struct request_queue *, const char *, size_t);

extern int elevator_init(struct request_queue *, char *);
extern void elevator_exit(elevator_t *);
extern int elv_rq_merge_ok(struct request *, struct bio *);




extern struct request *elv_rb_former_request(struct request_queue *, struct request *);
extern struct request *elv_rb_latter_request(struct request_queue *, struct request *);




extern struct request *elv_rb_add(struct rb_root *, struct request *);
extern void elv_rb_del(struct rb_root *, struct request *);
extern struct request *elv_rb_find(struct rb_root *, sector_t);
# 166 "include/linux/elevator.h"
enum {
 ELV_MQUEUE_MAY,
 ELV_MQUEUE_NO,
 ELV_MQUEUE_MUST,
};
# 250 "include/linux/blkdev.h" 2

typedef void (request_fn_proc) (struct request_queue *q);
typedef int (make_request_fn) (struct request_queue *q, struct bio *bio);
typedef int (prep_rq_fn) (struct request_queue *, struct request *);
typedef void (unplug_fn) (struct request_queue *);

struct bio_vec;
typedef int (merge_bvec_fn) (struct request_queue *, struct bio *, struct bio_vec *);
typedef void (prepare_flush_fn) (struct request_queue *, struct request *);
typedef void (softirq_done_fn)(struct request *);

enum blk_queue_state {
 Queue_down,
 Queue_up,
};

struct blk_queue_tag {
 struct request **tag_index;
 unsigned long *tag_map;
 int busy;
 int max_depth;
 int real_max_depth;
 atomic_t refcnt;
};

struct request_queue
{



 struct list_head queue_head;
 struct request *last_merge;
 elevator_t *elevator;




 struct request_list rq;

 request_fn_proc *request_fn;
 make_request_fn *make_request_fn;
 prep_rq_fn *prep_rq_fn;
 unplug_fn *unplug_fn;
 merge_bvec_fn *merge_bvec_fn;
 prepare_flush_fn *prepare_flush_fn;
 softirq_done_fn *softirq_done_fn;




 sector_t end_sector;
 struct request *boundary_rq;




 struct timer_list unplug_timer;
 int unplug_thresh;
 unsigned long unplug_delay;
 struct work_struct unplug_work;

 struct backing_dev_info backing_dev_info;





 void *queuedata;




 unsigned long bounce_pfn;
 gfp_t bounce_gfp;




 unsigned long queue_flags;






 spinlock_t __queue_lock;
 spinlock_t *queue_lock;




 struct kobject kobj;




 unsigned long nr_requests;
 unsigned int nr_congestion_on;
 unsigned int nr_congestion_off;
 unsigned int nr_batching;

 unsigned int max_sectors;
 unsigned int max_hw_sectors;
 unsigned short max_phys_segments;
 unsigned short max_hw_segments;
 unsigned short hardsect_size;
 unsigned int max_segment_size;

 unsigned long seg_boundary_mask;
 void *dma_drain_buffer;
 unsigned int dma_drain_size;
 unsigned int dma_alignment;

 struct blk_queue_tag *queue_tags;
 struct list_head tag_busy_list;

 unsigned int nr_sorted;
 unsigned int in_flight;




 unsigned int sg_timeout;
 unsigned int sg_reserved_size;
 int node;






 unsigned int ordered, next_ordered, ordseq;
 int orderr, ordcolor;
 struct request pre_flush_rq, bar_rq, post_flush_rq;
 struct request *orig_bar_rq;

 struct mutex sysfs_lock;




};
# 404 "include/linux/blkdev.h"
enum {
# 416 "include/linux/blkdev.h"
 QUEUE_ORDERED_NONE = 0x00,
 QUEUE_ORDERED_DRAIN = 0x01,
 QUEUE_ORDERED_TAG = 0x02,

 QUEUE_ORDERED_PREFLUSH = 0x10,
 QUEUE_ORDERED_POSTFLUSH = 0x20,
 QUEUE_ORDERED_FUA = 0x40,

 QUEUE_ORDERED_DRAIN_FLUSH = QUEUE_ORDERED_DRAIN |
   QUEUE_ORDERED_PREFLUSH | QUEUE_ORDERED_POSTFLUSH,
 QUEUE_ORDERED_DRAIN_FUA = QUEUE_ORDERED_DRAIN |
   QUEUE_ORDERED_PREFLUSH | QUEUE_ORDERED_FUA,
 QUEUE_ORDERED_TAG_FLUSH = QUEUE_ORDERED_TAG |
   QUEUE_ORDERED_PREFLUSH | QUEUE_ORDERED_POSTFLUSH,
 QUEUE_ORDERED_TAG_FUA = QUEUE_ORDERED_TAG |
   QUEUE_ORDERED_PREFLUSH | QUEUE_ORDERED_FUA,




 QUEUE_ORDSEQ_STARTED = 0x01,
 QUEUE_ORDSEQ_DRAIN = 0x02,
 QUEUE_ORDSEQ_PREFLUSH = 0x04,
 QUEUE_ORDSEQ_BAR = 0x08,
 QUEUE_ORDSEQ_POSTFLUSH = 0x10,
 QUEUE_ORDSEQ_DONE = 0x20,
};
# 482 "include/linux/blkdev.h"
static inline __attribute__((always_inline)) int blk_queue_full(struct request_queue *q, int rw)
{
 if (rw == 0)
  return (__builtin_constant_p(3) ? constant_test_bit((3),(&q->queue_flags)) : variable_test_bit((3),(&q->queue_flags)));
 return (__builtin_constant_p(4) ? constant_test_bit((4),(&q->queue_flags)) : variable_test_bit((4),(&q->queue_flags)));
}

static inline __attribute__((always_inline)) void blk_set_queue_full(struct request_queue *q, int rw)
{
 if (rw == 0)
  set_bit(3, &q->queue_flags);
 else
  set_bit(4, &q->queue_flags);
}

static inline __attribute__((always_inline)) void blk_clear_queue_full(struct request_queue *q, int rw)
{
 if (rw == 0)
  clear_bit(3, &q->queue_flags);
 else
  clear_bit(4, &q->queue_flags);
}
# 522 "include/linux/blkdev.h"
extern unsigned long blk_max_low_pfn, blk_max_pfn;
# 541 "include/linux/blkdev.h"
extern int init_emergency_isa_pool(void);
extern void blk_queue_bounce(struct request_queue *q, struct bio **bio);
# 553 "include/linux/blkdev.h"
struct req_iterator {
 int i;
 struct bio *bio;
};
# 570 "include/linux/blkdev.h"
extern int blk_register_queue(struct gendisk *disk);
extern void blk_unregister_queue(struct gendisk *disk);
extern void register_disk(struct gendisk *dev);
extern void generic_make_request(struct bio *bio);
extern void blk_put_request(struct request *);
extern void __blk_put_request(struct request_queue *, struct request *);
extern void blk_end_sync_rq(struct request *rq, int error);
extern struct request *blk_get_request(struct request_queue *, int, gfp_t);
extern void blk_insert_request(struct request_queue *, struct request *, int, void *);
extern void blk_requeue_request(struct request_queue *, struct request *);
extern void blk_plug_device(struct request_queue *);
extern int blk_remove_plug(struct request_queue *);
extern void blk_recount_segments(struct request_queue *, struct bio *);
extern int scsi_cmd_ioctl(struct file *, struct request_queue *,
     struct gendisk *, unsigned int, void *);
extern int sg_scsi_ioctl(struct file *, struct request_queue *,
  struct gendisk *, struct scsi_ioctl_command *);




extern int blk_rq_append_bio(struct request_queue *q, struct request *rq,
        struct bio *bio);






static inline __attribute__((always_inline)) void blk_clear_queue_congested(struct request_queue *q, int rw)
{
 clear_bdi_congested(&q->backing_dev_info, rw);
}





static inline __attribute__((always_inline)) void blk_set_queue_congested(struct request_queue *q, int rw)
{
 set_bdi_congested(&q->backing_dev_info, rw);
}

extern void blk_start_queue(struct request_queue *q);
extern void blk_stop_queue(struct request_queue *q);
extern void blk_sync_queue(struct request_queue *q);
extern void __blk_stop_queue(struct request_queue *q);
extern void blk_run_queue(struct request_queue *);
extern void blk_start_queueing(struct request_queue *);
extern int blk_rq_map_user(struct request_queue *, struct request *, void *, unsigned long);
extern int blk_rq_unmap_user(struct bio *);
extern int blk_rq_map_kern(struct request_queue *, struct request *, void *, unsigned int, gfp_t);
extern int blk_rq_map_user_iov(struct request_queue *, struct request *,
          struct sg_iovec *, int, unsigned int);
extern int blk_execute_rq(struct request_queue *, struct gendisk *,
     struct request *, int);
extern void blk_execute_rq_nowait(struct request_queue *, struct gendisk *,
      struct request *, int, rq_end_io_fn *);
extern int blk_verify_command(unsigned char *, int);
extern void blk_unplug(struct request_queue *q);

static inline __attribute__((always_inline)) struct request_queue *bdev_get_queue(struct block_device *bdev)
{
 return bdev->bd_disk->queue;
}

static inline __attribute__((always_inline)) void blk_run_backing_dev(struct backing_dev_info *bdi,
           struct page *page)
{
 if (bdi && bdi->unplug_io_fn)
  bdi->unplug_io_fn(bdi, page);
}

static inline __attribute__((always_inline)) void blk_run_address_space(struct address_space *mapping)
{
 if (mapping)
  blk_run_backing_dev(mapping->backing_dev_info, ((void *)0));
}
# 658 "include/linux/blkdev.h"
extern int blk_end_request(struct request *rq, int error, int nr_bytes);
extern int __blk_end_request(struct request *rq, int error, int nr_bytes);
extern int blk_end_bidi_request(struct request *rq, int error, int nr_bytes,
    int bidi_bytes);
extern void end_request(struct request *, int);
extern void end_queued_request(struct request *, int);
extern void end_dequeued_request(struct request *, int);
extern int blk_end_request_callback(struct request *rq, int error, int nr_bytes,
        int (drv_callback)(struct request *));
extern void blk_complete_request(struct request *);






extern unsigned int blk_rq_bytes(struct request *rq);
extern unsigned int blk_rq_cur_bytes(struct request *rq);

static inline __attribute__((always_inline)) void blkdev_dequeue_request(struct request *req)
{
 elv_dequeue_request(req->q, req);
}




extern struct request_queue *blk_init_queue_node(request_fn_proc *rfn,
     spinlock_t *lock, int node_id);
extern struct request_queue *blk_init_queue(request_fn_proc *, spinlock_t *);
extern void blk_cleanup_queue(struct request_queue *);
extern void blk_queue_make_request(struct request_queue *, make_request_fn *);
extern void blk_queue_bounce_limit(struct request_queue *, u64);
extern void blk_queue_max_sectors(struct request_queue *, unsigned int);
extern void blk_queue_max_phys_segments(struct request_queue *, unsigned short);
extern void blk_queue_max_hw_segments(struct request_queue *, unsigned short);
extern void blk_queue_max_segment_size(struct request_queue *, unsigned int);
extern void blk_queue_hardsect_size(struct request_queue *, unsigned short);
extern void blk_queue_stack_limits(struct request_queue *t, struct request_queue *b);
extern int blk_queue_dma_drain(struct request_queue *q, void *buf,
          unsigned int size);
extern void blk_queue_segment_boundary(struct request_queue *, unsigned long);
extern void blk_queue_prep_rq(struct request_queue *, prep_rq_fn *pfn);
extern void blk_queue_merge_bvec(struct request_queue *, merge_bvec_fn *);
extern void blk_queue_dma_alignment(struct request_queue *, int);
extern void blk_queue_update_dma_alignment(struct request_queue *, int);
extern void blk_queue_softirq_done(struct request_queue *, softirq_done_fn *);
extern struct backing_dev_info *blk_get_backing_dev_info(struct block_device *bdev);
extern int blk_queue_ordered(struct request_queue *, unsigned, prepare_flush_fn *);
extern int blk_do_ordered(struct request_queue *, struct request **);
extern unsigned blk_ordered_cur_seq(struct request_queue *);
extern unsigned blk_ordered_req_seq(struct request *);
extern void blk_ordered_complete_seq(struct request_queue *, unsigned, int);

extern int blk_rq_map_sg(struct request_queue *, struct request *, struct scatterlist *);
extern void blk_dump_rq_flags(struct request *, char *);
extern void generic_unplug_device(struct request_queue *);
extern void __generic_unplug_device(struct request_queue *);
extern long nr_blockdev_pages(void);

int blk_get_queue(struct request_queue *);
struct request_queue *blk_alloc_queue(gfp_t);
struct request_queue *blk_alloc_queue_node(gfp_t, int);
extern void blk_put_queue(struct request_queue *);







extern int blk_queue_start_tag(struct request_queue *, struct request *);
extern struct request *blk_queue_find_tag(struct request_queue *, int);
extern void blk_queue_end_tag(struct request_queue *, struct request *);
extern int blk_queue_init_tags(struct request_queue *, int, struct blk_queue_tag *);
extern void blk_queue_free_tags(struct request_queue *);
extern int blk_queue_resize_tags(struct request_queue *, int);
extern void blk_queue_invalidate_tags(struct request_queue *);
extern struct blk_queue_tag *blk_init_tags(int);
extern void blk_free_tags(struct blk_queue_tag *);

static inline __attribute__((always_inline)) struct request *blk_map_queue_find_tag(struct blk_queue_tag *bqt,
      int tag)
{
 if (__builtin_expect(!!(bqt == ((void *)0) || tag >= bqt->real_max_depth), 0))
  return ((void *)0);
 return bqt->tag_index[tag];
}

extern int blkdev_issue_flush(struct block_device *, sector_t *);
# 758 "include/linux/blkdev.h"
static inline __attribute__((always_inline)) int queue_hardsect_size(struct request_queue *q)
{
 int retval = 512;

 if (q && q->hardsect_size)
  retval = q->hardsect_size;

 return retval;
}

static inline __attribute__((always_inline)) int bdev_hardsect_size(struct block_device *bdev)
{
 return queue_hardsect_size(bdev_get_queue(bdev));
}

static inline __attribute__((always_inline)) int queue_dma_alignment(struct request_queue *q)
{
 return q ? q->dma_alignment : 511;
}


static inline __attribute__((always_inline)) unsigned int blksize_bits(unsigned int size)
{
 unsigned int bits = 8;
 do {
  bits++;
  size >>= 1;
 } while (size > 256);
 return bits;
}

static inline __attribute__((always_inline)) unsigned int block_size(struct block_device *bdev)
{
 return bdev->bd_block_size;
}

typedef struct {struct page *v;} Sector;

unsigned char *read_dev_sector(struct block_device *, sector_t, Sector *);

static inline __attribute__((always_inline)) void put_dev_sector(Sector p)
{
 put_page(p.v);
}

struct work_struct;
int kblockd_schedule_work(struct work_struct *work);
void kblockd_flush_work(struct work_struct *work);
# 11 "block/as-iosched.c" 2







# 1 "include/linux/interrupt.h" 1
# 10 "include/linux/interrupt.h"
# 1 "include/linux/irqreturn.h" 1
# 19 "include/linux/irqreturn.h"
typedef int irqreturn_t;
# 11 "include/linux/interrupt.h" 2
# 1 "include/linux/hardirq.h" 1




# 1 "include/linux/smp_lock.h" 1
# 9 "include/linux/smp_lock.h"
extern int __attribute__((section(".spinlock.text"))) __reacquire_kernel_lock(void);
extern void __attribute__((section(".spinlock.text"))) __release_kernel_lock(void);
# 20 "include/linux/smp_lock.h"
static inline __attribute__((always_inline)) int reacquire_kernel_lock(struct task_struct *task)
{
 if (__builtin_expect(!!(task->lock_depth >= 0), 0))
  return __reacquire_kernel_lock();
 return 0;
}

extern void __attribute__((section(".spinlock.text"))) lock_kernel(void) ;
extern void __attribute__((section(".spinlock.text"))) unlock_kernel(void) ;
# 6 "include/linux/hardirq.h" 2

# 1 "include/asm/hardirq.h" 1



# 1 "include/asm/hardirq_64.h" 1




# 1 "include/linux/irq.h" 1
# 23 "include/linux/irq.h"
# 1 "include/asm/irq.h" 1



# 1 "include/asm/irq_64.h" 1
# 37 "include/asm/irq_64.h"
static __inline__ __attribute__((always_inline)) int irq_canonicalize(int irq)
{
 return ((irq == 2) ? 9 : irq);
}





extern void fixup_irqs(cpumask_t map);
# 5 "include/asm/irq.h" 2
# 24 "include/linux/irq.h" 2

# 1 "include/asm/irq_regs.h" 1



# 1 "include/asm/irq_regs_64.h" 1
# 1 "include/asm-generic/irq_regs.h" 1
# 21 "include/asm-generic/irq_regs.h"
extern __typeof__(struct pt_regs *) per_cpu____irq_regs;

static inline __attribute__((always_inline)) struct pt_regs *get_irq_regs(void)
{
 return (*({ extern int simple_identifier___irq_regs(void); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"(&per_cpu____irq_regs)); (typeof(&per_cpu____irq_regs)) (__ptr + (({ typeof(_proxy_pda.data_offset) ret__; switch (sizeof(_proxy_pda.data_offset)) { case 2: asm("mov" "w %%gs:%c1,%0" : "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; case 4: asm("mov" "l %%gs:%c1,%0": "=r" (ret__): "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; case 8: asm("mov" "q %%gs:%c1,%0": "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; default: __bad_pda_field(); } ret__; }))); }); }));
}

static inline __attribute__((always_inline)) struct pt_regs *set_irq_regs(struct pt_regs *new_regs)
{
 struct pt_regs *old_regs, **pp_regs = &(*({ extern int simple_identifier___irq_regs(void); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"(&per_cpu____irq_regs)); (typeof(&per_cpu____irq_regs)) (__ptr + (({ typeof(_proxy_pda.data_offset) ret__; switch (sizeof(_proxy_pda.data_offset)) { case 2: asm("mov" "w %%gs:%c1,%0" : "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; case 4: asm("mov" "l %%gs:%c1,%0": "=r" (ret__): "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; case 8: asm("mov" "q %%gs:%c1,%0": "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; default: __bad_pda_field(); } ret__; }))); }); }));

 old_regs = *pp_regs;
 *pp_regs = new_regs;
 return old_regs;
}
# 1 "include/asm/irq_regs_64.h" 2
# 5 "include/asm/irq_regs.h" 2
# 26 "include/linux/irq.h" 2

struct irq_desc;
typedef void (*irq_flow_handler_t)(unsigned int irq,
         struct irq_desc *desc);
# 73 "include/linux/irq.h"
struct proc_dir_entry;
struct msi_desc;
# 98 "include/linux/irq.h"
struct irq_chip {
 const char *name;
 unsigned int (*startup)(unsigned int irq);
 void (*shutdown)(unsigned int irq);
 void (*enable)(unsigned int irq);
 void (*disable)(unsigned int irq);

 void (*ack)(unsigned int irq);
 void (*mask)(unsigned int irq);
 void (*mask_ack)(unsigned int irq);
 void (*unmask)(unsigned int irq);
 void (*eoi)(unsigned int irq);

 void (*end)(unsigned int irq);
 void (*set_affinity)(unsigned int irq, cpumask_t dest);
 int (*retrigger)(unsigned int irq);
 int (*set_type)(unsigned int irq, unsigned int flow_type);
 int (*set_wake)(unsigned int irq, unsigned int on);
# 125 "include/linux/irq.h"
 const char *typename;
};
# 152 "include/linux/irq.h"
struct irq_desc {
 irq_flow_handler_t handle_irq;
 struct irq_chip *chip;
 struct msi_desc *msi_desc;
 void *handler_data;
 void *chip_data;
 struct irqaction *action;
 unsigned int status;

 unsigned int depth;
 unsigned int wake_depth;
 unsigned int irq_count;
 unsigned int irqs_unhandled;
 unsigned long last_unhandled;
 spinlock_t lock;

 cpumask_t affinity;
 unsigned int cpu;


 cpumask_t pending_mask;


 struct proc_dir_entry *dir;

 const char *name;
} __attribute__((__aligned__(1 << ((7)))));

extern struct irq_desc irq_desc[(256 + (32 *32))];





typedef struct irq_chip hw_irq_controller;

typedef struct irq_desc irq_desc_t;




# 1 "include/asm/hw_irq.h" 1



# 1 "include/asm/hw_irq_64.h" 1
# 18 "include/asm/hw_irq_64.h"
# 1 "include/asm/atomic.h" 1
# 19 "include/asm/hw_irq_64.h" 2
# 1 "include/asm/irq.h" 1
# 20 "include/asm/hw_irq_64.h" 2
# 1 "include/linux/profile.h" 1
# 11 "include/linux/profile.h"
# 1 "include/asm/errno.h" 1
# 12 "include/linux/profile.h" 2

extern int prof_on __attribute__((__section__(".data.read_mostly")));






struct proc_dir_entry;
struct pt_regs;
struct notifier_block;


void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) profile_init(void);
void profile_tick(int);




void profile_hits(int, void *ip, unsigned int nr_hits);




static inline __attribute__((always_inline)) void profile_hit(int type, void *ip)
{



 if (__builtin_expect(!!(prof_on == type), 0))
  profile_hits(type, ip, 1);
}


void create_prof_cpu_mask(struct proc_dir_entry *);




enum profile_type {
 PROFILE_TASK_EXIT,
 PROFILE_MUNMAP
};



struct task_struct;
struct mm_struct;


void profile_task_exit(struct task_struct * task);




int profile_handoff_task(struct task_struct * task);


void profile_munmap(unsigned long addr);

int task_handoff_register(struct notifier_block * n);
int task_handoff_unregister(struct notifier_block * n);

int profile_event_register(enum profile_type, struct notifier_block * n);
int profile_event_unregister(enum profile_type, struct notifier_block * n);

int register_timer_hook(int (*hook)(struct pt_regs *));
void unregister_timer_hook(int (*hook)(struct pt_regs *));

struct pt_regs;
# 21 "include/asm/hw_irq_64.h" 2
# 100 "include/asm/hw_irq_64.h"
void apic_timer_interrupt(void);
void spurious_interrupt(void);
void error_interrupt(void);
void reschedule_interrupt(void);
void call_function_interrupt(void);
void irq_move_cleanup_interrupt(void);
void invalidate_interrupt0(void);
void invalidate_interrupt1(void);
void invalidate_interrupt2(void);
void invalidate_interrupt3(void);
void invalidate_interrupt4(void);
void invalidate_interrupt5(void);
void invalidate_interrupt6(void);
void invalidate_interrupt7(void);
void thermal_interrupt(void);
void threshold_interrupt(void);
void i8254_timer_resume(void);

typedef int vector_irq_t[256];
extern __typeof__(vector_irq_t) per_cpu__vector_irq;
extern void __setup_vector_irq(int cpu);
extern spinlock_t vector_lock;
# 130 "include/asm/hw_irq_64.h"
extern void disable_8259A_irq(unsigned int irq);
extern void enable_8259A_irq(unsigned int irq);
extern int i8259A_irq_pending(unsigned int irq);
extern void make_8259A_irq(unsigned int irq);
extern void init_8259A(int aeoi);
extern void send_IPI_self(int vector);
extern void init_VISWS_APIC_irqs(void);
extern void setup_IO_APIC(void);
extern void disable_IO_APIC(void);
extern void print_IO_APIC(void);
extern int IO_APIC_get_PCI_irq_vector(int bus, int slot, int fn);
extern void send_IPI(int dest, int vector);
extern void setup_ioapic_dest(void);

extern unsigned long io_apic_irqs;

extern atomic_t irq_err_count;
extern atomic_t irq_mis_count;
# 5 "include/asm/hw_irq.h" 2
# 194 "include/linux/irq.h" 2

extern int setup_irq(unsigned int irq, struct irqaction *new);
# 207 "include/linux/irq.h"
void set_pending_irq(unsigned int irq, cpumask_t mask);
void move_native_irq(int irq);
void move_masked_irq(int irq);
# 231 "include/linux/irq.h"
extern int irq_set_affinity(unsigned int irq, cpumask_t cpumask);
extern int irq_can_set_affinity(unsigned int irq);
# 251 "include/linux/irq.h"
static inline __attribute__((always_inline)) void set_balance_irq_affinity(unsigned int irq, cpumask_t mask)
{
}





static inline __attribute__((always_inline)) int select_smp_affinity(unsigned int irq)
{
 return 1;
}


extern int no_irq_affinity;

static inline __attribute__((always_inline)) int irq_balancing_disabled(unsigned int irq)
{
 return irq_desc[irq].status & 0x00400000;
}


extern int handle_IRQ_event(unsigned int irq, struct irqaction *action);





extern void handle_level_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_fasteoi_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_edge_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_simple_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_percpu_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_bad_irq(unsigned int irq, struct irq_desc *desc);






extern unsigned int __do_IRQ(unsigned int irq);
# 300 "include/linux/irq.h"
static inline __attribute__((always_inline)) void generic_handle_irq(unsigned int irq)
{
 struct irq_desc *desc = irq_desc + irq;




 if (__builtin_expect(!!(desc->handle_irq), 1))
  desc->handle_irq(irq, desc);
 else
  __do_IRQ(irq);

}


extern void note_interrupt(unsigned int irq, struct irq_desc *desc,
      int action_ret);


void check_irq_resend(struct irq_desc *desc, unsigned int irq);


extern int noirqdebug_setup(char *str);


extern int can_request_irq(unsigned int irq, unsigned long irqflags);


extern struct irq_chip no_irq_chip;
extern struct irq_chip dummy_irq_chip;

extern void
set_irq_chip_and_handler(unsigned int irq, struct irq_chip *chip,
    irq_flow_handler_t handle);
extern void
set_irq_chip_and_handler_name(unsigned int irq, struct irq_chip *chip,
         irq_flow_handler_t handle, const char *name);

extern void
__set_irq_handler(unsigned int irq, irq_flow_handler_t handle, int is_chained,
    const char *name);


static inline __attribute__((always_inline)) void __set_irq_handler_unlocked(int irq,
           irq_flow_handler_t handler)
{
 irq_desc[irq].handle_irq = handler;
}




static inline __attribute__((always_inline)) void
set_irq_handler(unsigned int irq, irq_flow_handler_t handle)
{
 __set_irq_handler(irq, handle, 0, ((void *)0));
}






static inline __attribute__((always_inline)) void
set_irq_chained_handler(unsigned int irq,
   irq_flow_handler_t handle)
{
 __set_irq_handler(irq, handle, 1, ((void *)0));
}


extern int create_irq(void);
extern void destroy_irq(unsigned int irq);


static inline __attribute__((always_inline)) int irq_has_action(unsigned int irq)
{
 struct irq_desc *desc = irq_desc + irq;
 return desc->action != ((void *)0);
}


extern void dynamic_irq_init(unsigned int irq);
extern void dynamic_irq_cleanup(unsigned int irq);


extern int set_irq_chip(unsigned int irq, struct irq_chip *chip);
extern int set_irq_data(unsigned int irq, void *data);
extern int set_irq_chip_data(unsigned int irq, void *data);
extern int set_irq_type(unsigned int irq, unsigned int type);
extern int set_irq_msi(unsigned int irq, struct msi_desc *entry);
# 6 "include/asm/hardirq_64.h" 2

# 1 "include/asm/apic.h" 1
# 8 "include/asm/hardirq_64.h" 2
# 21 "include/asm/hardirq_64.h"
extern void ack_bad_irq(unsigned int irq);
# 5 "include/asm/hardirq.h" 2
# 8 "include/linux/hardirq.h" 2
# 1 "include/asm/system.h" 1
# 9 "include/linux/hardirq.h" 2
# 99 "include/linux/hardirq.h"
extern void synchronize_irq(unsigned int irq);




struct task_struct;


static inline __attribute__((always_inline)) void account_system_vtime(struct task_struct *tsk)
{
}
# 128 "include/linux/hardirq.h"
extern void irq_enter(void);
# 143 "include/linux/hardirq.h"
extern void irq_exit(void);
# 12 "include/linux/interrupt.h" 2


# 1 "include/asm/atomic.h" 1
# 15 "include/linux/interrupt.h" 2

# 1 "include/asm/system.h" 1
# 17 "include/linux/interrupt.h" 2
# 58 "include/linux/interrupt.h"
typedef irqreturn_t (*irq_handler_t)(int, void *);

struct irqaction {
 irq_handler_t handler;
 unsigned long flags;
 cpumask_t mask;
 const char *name;
 void *dev_id;
 struct irqaction *next;
 int irq;
 struct proc_dir_entry *dir;
};

extern irqreturn_t no_action(int cpl, void *dev_id);
extern int request_irq(unsigned int, irq_handler_t handler,
         unsigned long, const char *, void *);
extern void free_irq(unsigned int, void *);

struct device;

extern int devm_request_irq(struct device *dev, unsigned int irq,
       irq_handler_t handler, unsigned long irqflags,
       const char *devname, void *dev_id);
extern void devm_free_irq(struct device *dev, unsigned int irq, void *dev_id);
# 101 "include/linux/interrupt.h"
extern void disable_irq_nosync(unsigned int irq);
extern void disable_irq(unsigned int irq);
extern void enable_irq(unsigned int irq);
# 117 "include/linux/interrupt.h"
static inline __attribute__((always_inline)) void disable_irq_nosync_lockdep(unsigned int irq)
{
 disable_irq_nosync(irq);



}

static inline __attribute__((always_inline)) void disable_irq_nosync_lockdep_irqsave(unsigned int irq, unsigned long *flags)
{
 disable_irq_nosync(irq);



}

static inline __attribute__((always_inline)) void disable_irq_lockdep(unsigned int irq)
{
 disable_irq(irq);



}

static inline __attribute__((always_inline)) void enable_irq_lockdep(unsigned int irq)
{



 enable_irq(irq);
}

static inline __attribute__((always_inline)) void enable_irq_lockdep_irqrestore(unsigned int irq, unsigned long *flags)
{



 enable_irq(irq);
}


extern int set_irq_wake(unsigned int irq, unsigned int on);

static inline __attribute__((always_inline)) int enable_irq_wake(unsigned int irq)
{
 return set_irq_wake(irq, 1);
}

static inline __attribute__((always_inline)) int disable_irq_wake(unsigned int irq)
{
 return set_irq_wake(irq, 0);
}
# 247 "include/linux/interrupt.h"
enum
{
 HI_SOFTIRQ=0,
 TIMER_SOFTIRQ,
 NET_TX_SOFTIRQ,
 NET_RX_SOFTIRQ,
 BLOCK_SOFTIRQ,
 TASKLET_SOFTIRQ,
 SCHED_SOFTIRQ,



 RCU_SOFTIRQ,
};





struct softirq_action
{
 void (*action)(struct softirq_action *);
 void *data;
};

 void do_softirq(void);
extern void open_softirq(int nr, void (*action)(struct softirq_action*), void *data);
extern void softirq_init(void);

extern void raise_softirq_irqoff(unsigned int nr);
extern void raise_softirq(unsigned int nr);
# 300 "include/linux/interrupt.h"
struct tasklet_struct
{
 struct tasklet_struct *next;
 unsigned long state;
 atomic_t count;
 void (*func)(unsigned long);
 unsigned long data;
};
# 316 "include/linux/interrupt.h"
enum
{
 TASKLET_STATE_SCHED,
 TASKLET_STATE_RUN
};


static inline __attribute__((always_inline)) int tasklet_trylock(struct tasklet_struct *t)
{
 return !test_and_set_bit(TASKLET_STATE_RUN, &(t)->state);
}

static inline __attribute__((always_inline)) void tasklet_unlock(struct tasklet_struct *t)
{
 __asm__ __volatile__("": : :"memory");
 clear_bit(TASKLET_STATE_RUN, &(t)->state);
}

static inline __attribute__((always_inline)) void tasklet_unlock_wait(struct tasklet_struct *t)
{
 while ((__builtin_constant_p(TASKLET_STATE_RUN) ? constant_test_bit((TASKLET_STATE_RUN),(&(t)->state)) : variable_test_bit((TASKLET_STATE_RUN),(&(t)->state)))) { __asm__ __volatile__("": : :"memory"); }
}






extern void __tasklet_schedule(struct tasklet_struct *t);

static inline __attribute__((always_inline)) void tasklet_schedule(struct tasklet_struct *t)
{
 if (!test_and_set_bit(TASKLET_STATE_SCHED, &t->state))
  __tasklet_schedule(t);
}

extern void __tasklet_hi_schedule(struct tasklet_struct *t);

static inline __attribute__((always_inline)) void tasklet_hi_schedule(struct tasklet_struct *t)
{
 if (!test_and_set_bit(TASKLET_STATE_SCHED, &t->state))
  __tasklet_hi_schedule(t);
}


static inline __attribute__((always_inline)) void tasklet_disable_nosync(struct tasklet_struct *t)
{
 atomic_inc(&t->count);
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((always_inline)) void tasklet_disable(struct tasklet_struct *t)
{
 tasklet_disable_nosync(t);
 tasklet_unlock_wait(t);
 asm volatile("mfence":::"memory");
}

static inline __attribute__((always_inline)) void tasklet_enable(struct tasklet_struct *t)
{
 __asm__ __volatile__("": : :"memory");
 atomic_dec(&t->count);
}

static inline __attribute__((always_inline)) void tasklet_hi_enable(struct tasklet_struct *t)
{
 __asm__ __volatile__("": : :"memory");
 atomic_dec(&t->count);
}

extern void tasklet_kill(struct tasklet_struct *t);
extern void tasklet_kill_immediate(struct tasklet_struct *t, unsigned int cpu);
extern void tasklet_init(struct tasklet_struct *t,
    void (*func)(unsigned long), unsigned long data);
# 433 "include/linux/interrupt.h"
extern unsigned long probe_irq_on(void);
extern int probe_irq_off(unsigned long);
extern unsigned int probe_irq_mask(unsigned long);




extern void init_irq_proc(void);
# 19 "block/as-iosched.c" 2
# 67 "block/as-iosched.c"
enum as_io_states {
 AS_TASK_RUNNING=0,
 AS_TASK_IOSTARTED,
 AS_TASK_IORUNNING,
};

enum anticipation_status {
 ANTIC_OFF=0,
 ANTIC_WAIT_REQ,
 ANTIC_WAIT_NEXT,

 ANTIC_FINISHED,

};

struct as_data {




 struct request_queue *q;




 struct rb_root sort_list[2];
 struct list_head fifo_list[2];

 struct request *next_rq[2];
 sector_t last_sector[2];

 unsigned long exit_prob;

 unsigned long exit_no_coop;


 unsigned long new_ttime_total;
 unsigned long new_ttime_mean;
 u64 new_seek_total;
 sector_t new_seek_mean;

 unsigned long current_batch_expires;
 unsigned long last_check_fifo[2];
 int changed_batch;
 int new_batch;
 int batch_data_dir;
 int write_batch_count;
 int current_write_count;
 int write_batch_idled;

 enum anticipation_status antic_status;
 unsigned long antic_start;
 struct timer_list antic_timer;
 struct work_struct antic_work;
 struct io_context *io_context;
 int ioc_finished;
 int nr_dispatched;




 unsigned long fifo_expire[2];
 unsigned long batch_expire[2];
 unsigned long antic_expire;
};




enum arq_state {
 AS_RQ_NEW=0,
 AS_RQ_QUEUED,

 AS_RQ_DISPATCHED,

 AS_RQ_PRESCHED,
 AS_RQ_REMOVED,
 AS_RQ_MERGED,
 AS_RQ_POSTSCHED,
};





static __attribute__((__section__(".data.percpu"))) __typeof__(unsigned long) per_cpu__ioc_count;
static struct completion *ioc_gone;

static void as_move_to_dispatch(struct as_data *ad, struct request *rq);
static void as_antic_stop(struct as_data *ad);






static void free_as_io_context(struct as_io_context *aic)
{
 kfree(aic);
 do { do { } while (0); (*({ extern int simple_identifier_ioc_count(void); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"(&per_cpu__ioc_count)); (typeof(&per_cpu__ioc_count)) (__ptr + (({ typeof(_proxy_pda.data_offset) ret__; switch (sizeof(_proxy_pda.data_offset)) { case 2: asm("mov" "w %%gs:%c1,%0" : "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; case 4: asm("mov" "l %%gs:%c1,%0": "=r" (ret__): "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; case 8: asm("mov" "q %%gs:%c1,%0": "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; default: __bad_pda_field(); } ret__; }))); }); })) += (-1); do { } while (0); } while (0);
 if (ioc_gone && !({ unsigned long __val = 0; int __cpu; __asm__ __volatile__("": : :"memory"); for (((__cpu)) = __first_cpu(&(cpu_possible_map)); ((__cpu)) < 32; ((__cpu)) = __next_cpu((((__cpu))), &((cpu_possible_map)))) __val += (*({ extern int simple_identifier_ioc_count(void); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"(&per_cpu__ioc_count)); (typeof(&per_cpu__ioc_count)) (__ptr + (((_cpu_pda[__cpu])->data_offset))); }); })); __val; }))
  complete(ioc_gone);
}

static void as_trim(struct io_context *ioc)
{
 _spin_lock(&ioc->lock);
 if (ioc->aic)
  free_as_io_context(ioc->aic);
 ioc->aic = ((void *)0);
 do {__raw_spin_unlock(&(&ioc->lock)->raw_lock); (void)0; } while (0);
}


static void exit_as_io_context(struct as_io_context *aic)
{
 ({ int __ret_warn_on = !!(!(__builtin_constant_p(AS_TASK_RUNNING) ? constant_test_bit((AS_TASK_RUNNING),(&aic->state)) : variable_test_bit((AS_TASK_RUNNING),(&aic->state)))); if (__builtin_expect(!!(__ret_warn_on), 0)) { printk("WARNING: at %s:%d %s()\n", "block/as-iosched.c", 183, (__func__)); dump_stack(); } __builtin_expect(!!(__ret_warn_on), 0); });
 clear_bit(AS_TASK_RUNNING, &aic->state);
}

static struct as_io_context *alloc_as_io_context(void)
{
 struct as_io_context *ret;

 ret = kmalloc(sizeof(*ret), ((( gfp_t)0x20u)));
 if (ret) {
  ret->dtor = free_as_io_context;
  ret->exit = exit_as_io_context;
  ret->state = 1 << AS_TASK_RUNNING;
  (((&ret->nr_queued)->counter) = (0));
  (((&ret->nr_dispatched)->counter) = (0));
  do { *(&ret->lock) = (spinlock_t) { .raw_lock = { 1 }, }; } while (0);
  ret->ttime_total = 0;
  ret->ttime_samples = 0;
  ret->ttime_mean = 0;
  ret->seek_total = 0;
  ret->seek_samples = 0;
  ret->seek_mean = 0;
  do { do { } while (0); (*({ extern int simple_identifier_ioc_count(void); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"(&per_cpu__ioc_count)); (typeof(&per_cpu__ioc_count)) (__ptr + (({ typeof(_proxy_pda.data_offset) ret__; switch (sizeof(_proxy_pda.data_offset)) { case 2: asm("mov" "w %%gs:%c1,%0" : "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; case 4: asm("mov" "l %%gs:%c1,%0": "=r" (ret__): "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; case 8: asm("mov" "q %%gs:%c1,%0": "=r" (ret__) : "i" (__builtin_offsetof(struct x8664_pda,data_offset)), "m" (_proxy_pda.data_offset)); break; default: __bad_pda_field(); } ret__; }))); }); })) += (1); do { } while (0); } while (0);
 }

 return ret;
}





static struct io_context *as_get_io_context(int node)
{
 struct io_context *ioc = get_io_context(((( gfp_t)0x20u)), node);
 if (ioc && !ioc->aic) {
  ioc->aic = alloc_as_io_context();
  if (!ioc->aic) {
   put_io_context(ioc);
   ioc = ((void *)0);
  }
 }
 return ioc;
}

static void as_put_io_context(struct request *rq)
{
 struct as_io_context *aic;

 if (__builtin_expect(!!(!((struct io_context *) (rq)->elevator_private)), 0))
  return;

 aic = ((struct io_context *) (rq)->elevator_private)->aic;

 if (((((rq))->cmd_flags & 1) == 0 || (rq)->cmd_flags & (1 << __REQ_RW_SYNC)) && aic) {
  _spin_lock(&aic->lock);
  set_bit(AS_TASK_IORUNNING, &aic->state);
  aic->last_end_request = jiffies;
  do {__raw_spin_unlock(&(&aic->lock)->raw_lock); (void)0; } while (0);
 }

 put_io_context(((struct io_context *) (rq)->elevator_private));
}






static void as_add_rq_rb(struct as_data *ad, struct request *rq)
{
 struct request *alias;

 while ((__builtin_expect(!!(alias = elv_rb_add((&(ad)->sort_list[(((((rq)))->cmd_flags & 1) == 0 || ((rq))->cmd_flags & (1 << __REQ_RW_SYNC))]), rq)), 0))) {
  as_move_to_dispatch(ad, alias);
  as_antic_stop(ad);
 }
}

static inline __attribute__((always_inline)) void as_del_rq_rb(struct as_data *ad, struct request *rq)
{
 elv_rb_del((&(ad)->sort_list[(((((rq)))->cmd_flags & 1) == 0 || ((rq))->cmd_flags & (1 << __REQ_RW_SYNC))]), rq);
}
# 282 "block/as-iosched.c"
static struct request *
as_choose_req(struct as_data *ad, struct request *rq1, struct request *rq2)
{
 int data_dir;
 sector_t last, s1, s2, d1, d2;
 int r1_wrap=0, r2_wrap=0;
 const sector_t maxback = (1024 * 1024);

 if (rq1 == ((void *)0) || rq1 == rq2)
  return rq2;
 if (rq2 == ((void *)0))
  return rq1;

 data_dir = ((((rq1))->cmd_flags & 1) == 0 || (rq1)->cmd_flags & (1 << __REQ_RW_SYNC));

 last = ad->last_sector[data_dir];
 s1 = rq1->sector;
 s2 = rq2->sector;

 do { if (__builtin_expect(!!(data_dir != ((((rq2))->cmd_flags & 1) == 0 || (rq2)->cmd_flags & (1 << __REQ_RW_SYNC))), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("block/as-iosched.c"), "i" (301), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0);






 if (s1 >= last)
  d1 = s1 - last;
 else if (s1+maxback >= last)
  d1 = (last - s1)*2;
 else {
  r1_wrap = 1;
  d1 = 0;
 }

 if (s2 >= last)
  d2 = s2 - last;
 else if (s2+maxback >= last)
  d2 = (last - s2)*2;
 else {
  r2_wrap = 1;
  d2 = 0;
 }


 if (!r1_wrap && r2_wrap)
  return rq1;
 else if (!r2_wrap && r1_wrap)
  return rq2;
 else if (r1_wrap && r2_wrap) {

  if (s1 <= s2)
   return rq1;
  else
   return rq2;
 }


 if (d1 < d2)
  return rq1;
 else if (d2 < d1)
  return rq2;
 else {
  if (s1 >= s2)
   return rq1;
  else
   return rq2;
 }
}






static struct request *
as_find_next_rq(struct as_data *ad, struct request *last)
{
 struct rb_node *rbnext = rb_next(&last->rb_node);
 struct rb_node *rbprev = rb_prev(&last->rb_node);
 struct request *next = ((void *)0), *prev = ((void *)0);

 do { if (__builtin_expect(!!((((struct rb_node *)((&last->rb_node)->rb_parent_color & ~3)) == &last->rb_node)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("block/as-iosched.c"), "i" (364), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0);

 if (rbprev)
  prev = ({ const typeof( ((struct request *)0)->rb_node ) *__mptr = ((rbprev)); (struct request *)( (char *)__mptr - __builtin_offsetof(struct request,rb_node) );});

 if (rbnext)
  next = ({ const typeof( ((struct request *)0)->rb_node ) *__mptr = ((rbnext)); (struct request *)( (char *)__mptr - __builtin_offsetof(struct request,rb_node) );});
 else {
  const int data_dir = ((((last))->cmd_flags & 1) == 0 || (last)->cmd_flags & (1 << __REQ_RW_SYNC));

  rbnext = rb_first(&ad->sort_list[data_dir]);
  if (rbnext && rbnext != &last->rb_node)
   next = ({ const typeof( ((struct request *)0)->rb_node ) *__mptr = ((rbnext)); (struct request *)( (char *)__mptr - __builtin_offsetof(struct request,rb_node) );});
 }

 return as_choose_req(ad, next, prev);
}
# 391 "block/as-iosched.c"
static int as_antic_expired(struct as_data *ad)
{
 long delta_jif;

 delta_jif = jiffies - ad->antic_start;
 if (__builtin_expect(!!(delta_jif < 0), 0))
  delta_jif = -delta_jif;
 if (delta_jif < ad->antic_expire)
  return 0;

 return 1;
}





static void as_antic_waitnext(struct as_data *ad)
{
 unsigned long timeout;

 do { if (__builtin_expect(!!(ad->antic_status != ANTIC_OFF && ad->antic_status != ANTIC_WAIT_REQ), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "block/as-iosched.c"
# 412 "block/as-iosched.c"
 ), "i" (
 413
# 412 "block/as-iosched.c"
 ), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0)
                                         ;

 timeout = ad->antic_start + ad->antic_expire;

 mod_timer(&ad->antic_timer, timeout);

 ad->antic_status = ANTIC_WAIT_NEXT;
}






static void as_antic_waitreq(struct as_data *ad)
{
 do { if (__builtin_expect(!!(ad->antic_status == ANTIC_FINISHED), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("block/as-iosched.c"), "i" (429), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0);
 if (ad->antic_status == ANTIC_OFF) {
  if (!ad->io_context || ad->ioc_finished)
   as_antic_waitnext(ad);
  else
   ad->antic_status = ANTIC_WAIT_REQ;
 }
}





static void as_antic_stop(struct as_data *ad)
{
 int status = ad->antic_status;

 if (status == ANTIC_WAIT_REQ || status == ANTIC_WAIT_NEXT) {
  if (status == ANTIC_WAIT_NEXT)
   del_timer(&ad->antic_timer);
  ad->antic_status = ANTIC_FINISHED;

  kblockd_schedule_work(&ad->antic_work);
 }
}




static void as_antic_timeout(unsigned long data)
{
 struct request_queue *q = (struct request_queue *)data;
 struct as_data *ad = q->elevator->elevator_data;
 unsigned long flags;

 flags = _spin_lock_irqsave(q->queue_lock);
 if (ad->antic_status == ANTIC_WAIT_REQ
   || ad->antic_status == ANTIC_WAIT_NEXT) {
  struct as_io_context *aic;
  _spin_lock(&ad->io_context->lock);
  aic = ad->io_context->aic;

  ad->antic_status = ANTIC_FINISHED;
  kblockd_schedule_work(&ad->antic_work);

  if (aic->ttime_samples == 0) {

   ad->exit_prob = (7*ad->exit_prob + 256)/8;
  }
  if (!(__builtin_constant_p(AS_TASK_RUNNING) ? constant_test_bit((AS_TASK_RUNNING),(&aic->state)) : variable_test_bit((AS_TASK_RUNNING),(&aic->state)))) {

   ad->exit_no_coop = (7*ad->exit_no_coop + 256)/8;
  }
  do {__raw_spin_unlock(&(&ad->io_context->lock)->raw_lock); (void)0; } while (0);
 }
 _spin_unlock_irqrestore(q->queue_lock, flags);
}

static void as_update_thinktime(struct as_data *ad, struct as_io_context *aic,
    unsigned long ttime)
{

 if (aic->ttime_samples == 0) {
  ad->new_ttime_total = (7*ad->new_ttime_total + 256*ttime) / 8;
  ad->new_ttime_mean = ad->new_ttime_total / 256;

  ad->exit_prob = (7*ad->exit_prob)/8;
 }
 aic->ttime_samples = (7*aic->ttime_samples + 256) / 8;
 aic->ttime_total = (7*aic->ttime_total + 256*ttime) / 8;
 aic->ttime_mean = (aic->ttime_total + 128) / aic->ttime_samples;
}

static void as_update_seekdist(struct as_data *ad, struct as_io_context *aic,
    sector_t sdist)
{
 u64 total;

 if (aic->seek_samples == 0) {
  ad->new_seek_total = (7*ad->new_seek_total + 256*(u64)sdist)/8;
  ad->new_seek_mean = ad->new_seek_total / 256;
 }





 if (aic->seek_samples <= 60)
  sdist = ({ typeof(sdist) _x = (sdist); typeof((aic->seek_mean * 4) + 2*1024*1024) _y = ((aic->seek_mean * 4) + 2*1024*1024); (void) (&_x == &_y); _x < _y ? _x : _y; });
 else
  sdist = ({ typeof(sdist) _x = (sdist); typeof((aic->seek_mean * 4) + 2*1024*64) _y = ((aic->seek_mean * 4) + 2*1024*64); (void) (&_x == &_y); _x < _y ? _x : _y; });

 aic->seek_samples = (7*aic->seek_samples + 256) / 8;
 aic->seek_total = (7*aic->seek_total + (u64)256*sdist) / 8;
 total = aic->seek_total + (aic->seek_samples/2);
 ({ uint32_t __base = (aic->seek_samples); uint32_t __rem; __rem = ((uint64_t)(total)) % __base; (total) = ((uint64_t)(total)) / __base; __rem; });
 aic->seek_mean = (sector_t)total;
}






static void as_update_iohist(struct as_data *ad, struct as_io_context *aic,
    struct request *rq)
{
 int data_dir = ((((rq))->cmd_flags & 1) == 0 || (rq)->cmd_flags & (1 << __REQ_RW_SYNC));
 unsigned long thinktime = 0;
 sector_t seek_dist;

 if (aic == ((void *)0))
  return;

 if (data_dir == 1) {
  unsigned long in_flight = ((&aic->nr_queued)->counter)
     + ((&aic->nr_dispatched)->counter);
  _spin_lock(&aic->lock);
  if ((__builtin_constant_p(AS_TASK_IORUNNING) ? constant_test_bit((AS_TASK_IORUNNING),(&aic->state)) : variable_test_bit((AS_TASK_IORUNNING),(&aic->state))) ||
   (__builtin_constant_p(AS_TASK_IOSTARTED) ? constant_test_bit((AS_TASK_IOSTARTED),(&aic->state)) : variable_test_bit((AS_TASK_IOSTARTED),(&aic->state)))) {

   if ((__builtin_constant_p(AS_TASK_IORUNNING) ? constant_test_bit((AS_TASK_IORUNNING),(&aic->state)) : variable_test_bit((AS_TASK_IORUNNING),(&aic->state)))
       && in_flight == 0) {
    thinktime = jiffies - aic->last_end_request;
    thinktime = ({ typeof(thinktime) _x = (thinktime); typeof((250/50UL)-1) _y = ((250/50UL)-1); (void) (&_x == &_y); _x < _y ? _x : _y; });
   }
   as_update_thinktime(ad, aic, thinktime);


   if (aic->last_request_pos < rq->sector)
    seek_dist = rq->sector - aic->last_request_pos;
   else
    seek_dist = aic->last_request_pos - rq->sector;
   as_update_seekdist(ad, aic, seek_dist);
  }
  aic->last_request_pos = rq->sector + rq->nr_sectors;
  set_bit(AS_TASK_IOSTARTED, &aic->state);
  do {__raw_spin_unlock(&(&aic->lock)->raw_lock); (void)0; } while (0);
 }
}





static int as_close_req(struct as_data *ad, struct as_io_context *aic,
   struct request *rq)
{
 unsigned long delay;
 sector_t last = ad->last_sector[ad->batch_data_dir];
 sector_t next = rq->sector;
 sector_t delta;
 sector_t s;

 if (ad->antic_status == ANTIC_OFF || !ad->ioc_finished)
  delay = 0;
 else
  delay = jiffies - ad->antic_start;

 if (delay == 0)
  delta = 8192;
 else if (delay <= (20 * 250 / 1000) && delay <= ad->antic_expire)
  delta = 8192 << delay;
 else
  return 1;

 if ((last <= next + (delta>>1)) && (next <= last + delta))
  return 1;

 if (last < next)
  s = next - last;
 else
  s = last - next;

 if (aic->seek_samples == 0) {




  if (ad->new_seek_mean > s) {

   return 1;
  }

 } else {
  if (aic->seek_mean > s) {

   return 1;
  }
 }

 return 0;
}
# 636 "block/as-iosched.c"
static int as_can_break_anticipation(struct as_data *ad, struct request *rq)
{
 struct io_context *ioc;
 struct as_io_context *aic;

 ioc = ad->io_context;
 do { if (__builtin_expect(!!(!ioc), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("block/as-iosched.c"), "i" (642), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0);
 _spin_lock(&ioc->lock);

 if (rq && ioc == ((struct io_context *) (rq)->elevator_private)) {

  do {__raw_spin_unlock(&(&ioc->lock)->raw_lock); (void)0; } while (0);
  return 1;
 }

 if (ad->ioc_finished && as_antic_expired(ad)) {




  do {__raw_spin_unlock(&(&ioc->lock)->raw_lock); (void)0; } while (0);
  return 1;
 }

 aic = ioc->aic;
 if (!aic) {
  do {__raw_spin_unlock(&(&ioc->lock)->raw_lock); (void)0; } while (0);
  return 0;
 }

 if (((&aic->nr_queued)->counter) > 0) {

  do {__raw_spin_unlock(&(&ioc->lock)->raw_lock); (void)0; } while (0);
  return 1;
 }

 if (((&aic->nr_dispatched)->counter) > 0) {

  do {__raw_spin_unlock(&(&ioc->lock)->raw_lock); (void)0; } while (0);
  return 1;
 }

 if (rq && ((((rq))->cmd_flags & 1) == 0 || (rq)->cmd_flags & (1 << __REQ_RW_SYNC)) && as_close_req(ad, aic, rq)) {
# 687 "block/as-iosched.c"
  if (!(__builtin_constant_p(AS_TASK_RUNNING) ? constant_test_bit((AS_TASK_RUNNING),(&aic->state)) : variable_test_bit((AS_TASK_RUNNING),(&aic->state)))) {
   if (aic->ttime_samples == 0)
    ad->exit_prob = (7*ad->exit_prob + 256)/8;

   ad->exit_no_coop = (7*ad->exit_no_coop)/8;
  }

  as_update_iohist(ad, aic, rq);
  do {__raw_spin_unlock(&(&ioc->lock)->raw_lock); (void)0; } while (0);
  return 1;
 }

 if (!(__builtin_constant_p(AS_TASK_RUNNING) ? constant_test_bit((AS_TASK_RUNNING),(&aic->state)) : variable_test_bit((AS_TASK_RUNNING),(&aic->state)))) {

  if (aic->ttime_samples == 0)
   ad->exit_prob = (7*ad->exit_prob + 256)/8;

  if (ad->exit_no_coop > 128) {
   do {__raw_spin_unlock(&(&ioc->lock)->raw_lock); (void)0; } while (0);
   return 1;
  }
 }

 if (aic->ttime_samples == 0) {
  if (ad->new_ttime_mean > ad->antic_expire) {
   do {__raw_spin_unlock(&(&ioc->lock)->raw_lock); (void)0; } while (0);
   return 1;
  }
  if (ad->exit_prob * ad->exit_no_coop > 128*256) {
   do {__raw_spin_unlock(&(&ioc->lock)->raw_lock); (void)0; } while (0);
   return 1;
  }
 } else if (aic->ttime_mean > ad->antic_expire) {

  do {__raw_spin_unlock(&(&ioc->lock)->raw_lock); (void)0; } while (0);
  return 1;
 }
 do {__raw_spin_unlock(&(&ioc->lock)->raw_lock); (void)0; } while (0);
 return 0;
}





static int as_can_anticipate(struct as_data *ad, struct request *rq)
{
 if (!ad->io_context)



  return 0;

 if (ad->antic_status == ANTIC_FINISHED)



  return 0;

 if (as_can_break_anticipation(ad, rq))




  return 0;
# 760 "block/as-iosched.c"
 return 1;
}






static void as_update_rq(struct as_data *ad, struct request *rq)
{
 const int data_dir = ((((rq))->cmd_flags & 1) == 0 || (rq)->cmd_flags & (1 << __REQ_RW_SYNC));


 ad->next_rq[data_dir] = as_choose_req(ad, rq, ad->next_rq[data_dir]);






 if (ad->antic_status == ANTIC_WAIT_REQ
   || ad->antic_status == ANTIC_WAIT_NEXT) {
  if (as_can_break_anticipation(ad, rq))
   as_antic_stop(ad);
 }
}




static void update_write_batch(struct as_data *ad)
{
 unsigned long batch = ad->batch_expire[0];
 long write_time;

 write_time = (jiffies - ad->current_batch_expires) + batch;
 if (write_time < 0)
  write_time = 0;

 if (write_time > batch && !ad->write_batch_idled) {
  if (write_time > batch * 3)
   ad->write_batch_count /= 2;
  else
   ad->write_batch_count--;
 } else if (write_time < batch && ad->current_write_count == 0) {
  if (batch > write_time * 3)
   ad->write_batch_count *= 2;
  else
   ad->write_batch_count++;
 }

 if (ad->write_batch_count < 1)
  ad->write_batch_count = 1;
}





static void as_completed_request(struct request_queue *q, struct request *rq)
{
 struct as_data *ad = q->elevator->elevator_data;

 ({ int __ret_warn_on = !!(!list_empty(&rq->queuelist)); if (__builtin_expect(!!(__ret_warn_on), 0)) { printk("WARNING: at %s:%d %s()\n", "block/as-iosched.c", 823, (__func__)); dump_stack(); } __builtin_expect(!!(__ret_warn_on), 0); });

 if (((enum arq_state)(rq)->elevator_private2) != AS_RQ_REMOVED) {
  printk("rq->state %d\n", ((enum arq_state)(rq)->elevator_private2));
  ({ int __ret_warn_on = !!(1); if (__builtin_expect(!!(__ret_warn_on), 0)) { printk("WARNING: at %s:%d %s()\n", "block/as-iosched.c", 827, (__func__)); dump_stack(); } __builtin_expect(!!(__ret_warn_on), 0); });
  goto out;
 }

 if (ad->changed_batch && ad->nr_dispatched == 1) {
  kblockd_schedule_work(&ad->antic_work);
  ad->changed_batch = 0;

  if (ad->batch_data_dir == 1)
   ad->new_batch = 1;
 }
 ({ int __ret_warn_on = !!(ad->nr_dispatched == 0); if (__builtin_expect(!!(__ret_warn_on), 0)) { printk("WARNING: at %s:%d %s()\n", "block/as-iosched.c", 838, (__func__)); dump_stack(); } __builtin_expect(!!(__ret_warn_on), 0); });
 ad->nr_dispatched--;






 if (ad->new_batch && ad->batch_data_dir == ((((rq))->cmd_flags & 1) == 0 || (rq)->cmd_flags & (1 << __REQ_RW_SYNC))) {
  update_write_batch(ad);
  ad->current_batch_expires = jiffies +
    ad->batch_expire[1];
  ad->new_batch = 0;
 }

 if (ad->io_context == ((struct io_context *) (rq)->elevator_private) && ad->io_context) {
  ad->antic_start = jiffies;
  ad->ioc_finished = 1;
  if (ad->antic_status == ANTIC_WAIT_REQ) {




   as_antic_waitnext(ad);
  }
 }

 as_put_io_context(rq);
out:
 ((rq)->elevator_private2 = (void *) AS_RQ_POSTSCHED);
}







static void as_remove_queued_request(struct request_queue *q,
         struct request *rq)
{
 const int data_dir = ((((rq))->cmd_flags & 1) == 0 || (rq)->cmd_flags & (1 << __REQ_RW_SYNC));
 struct as_data *ad = q->elevator->elevator_data;
 struct io_context *ioc;

 ({ int __ret_warn_on = !!(((enum arq_state)(rq)->elevator_private2) != AS_RQ_QUEUED); if (__builtin_expect(!!(__ret_warn_on), 0)) { printk("WARNING: at %s:%d %s()\n", "block/as-iosched.c", 883, (__func__)); dump_stack(); } __builtin_expect(!!(__ret_warn_on), 0); });

 ioc = ((struct io_context *) (rq)->elevator_private);
 if (ioc && ioc->aic) {
  do { if (__builtin_expect(!!(!((&ioc->aic->nr_queued)->counter)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("block/as-iosched.c"), "i" (887), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0);
  atomic_dec(&ioc->aic->nr_queued);
 }





 if (ad->next_rq[data_dir] == rq)
  ad->next_rq[data_dir] = as_find_next_rq(ad, rq);

 do { list_del_init(&(rq)->queuelist); INIT_LIST_HEAD(&(rq)->donelist); } while (0);
 as_del_rq_rb(ad, rq);
}
# 910 "block/as-iosched.c"
static int as_fifo_expired(struct as_data *ad, int adir)
{
 struct request *rq;
 long delta_jif;

 delta_jif = jiffies - ad->last_check_fifo[adir];
 if (__builtin_expect(!!(delta_jif < 0), 0))
  delta_jif = -delta_jif;
 if (delta_jif < ad->fifo_expire[adir])
  return 0;

 ad->last_check_fifo[adir] = jiffies;

 if (list_empty(&ad->fifo_list[adir]))
  return 0;

 rq = ({ const typeof( ((struct request *)0)->queuelist ) *__mptr = ((ad->fifo_list[adir].next)); (struct request *)( (char *)__mptr - __builtin_offsetof(struct request,queuelist) );});

 return (({ unsigned long __dummy; typeof(jiffies) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ({ unsigned long __dummy; typeof(((unsigned long) (rq)->donelist.next)) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ((long)(((unsigned long) (rq)->donelist.next)) - (long)(jiffies) < 0));
}





static inline __attribute__((always_inline)) int as_batch_expired(struct as_data *ad)
{
 if (ad->changed_batch || ad->new_batch)
  return 0;

 if (ad->batch_data_dir == 1)

  return (({ unsigned long __dummy; typeof(jiffies) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ({ unsigned long __dummy; typeof(ad->current_batch_expires) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ((long)(ad->current_batch_expires) - (long)(jiffies) < 0));

 return (({ unsigned long __dummy; typeof(jiffies) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ({ unsigned long __dummy; typeof(ad->current_batch_expires) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ((long)(ad->current_batch_expires) - (long)(jiffies) < 0))
  || ad->current_write_count == 0;
}




static void as_move_to_dispatch(struct as_data *ad, struct request *rq)
{
 const int data_dir = ((((rq))->cmd_flags & 1) == 0 || (rq)->cmd_flags & (1 << __REQ_RW_SYNC));

 do { if (__builtin_expect(!!((((struct rb_node *)((&rq->rb_node)->rb_parent_color & ~3)) == &rq->rb_node)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("block/as-iosched.c"), "i" (955), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0);

 as_antic_stop(ad);
 ad->antic_status = ANTIC_OFF;





 ad->last_sector[data_dir] = rq->sector + rq->nr_sectors;

 if (data_dir == 1) {
  struct io_context *ioc = ((struct io_context *) (rq)->elevator_private);

  copy_io_context(&ad->io_context, &ioc);
 } else {
  if (ad->io_context) {
   put_io_context(ad->io_context);
   ad->io_context = ((void *)0);
  }

  if (ad->current_write_count != 0)
   ad->current_write_count--;
 }
 ad->ioc_finished = 0;

 ad->next_rq[data_dir] = as_find_next_rq(ad, rq);




 as_remove_queued_request(ad->q, rq);
 ({ int __ret_warn_on = !!(((enum arq_state)(rq)->elevator_private2) != AS_RQ_QUEUED); if (__builtin_expect(!!(__ret_warn_on), 0)) { printk("WARNING: at %s:%d %s()\n", "block/as-iosched.c", 987, (__func__)); dump_stack(); } __builtin_expect(!!(__ret_warn_on), 0); });

 elv_dispatch_sort(ad->q, rq);

 ((rq)->elevator_private2 = (void *) AS_RQ_DISPATCHED);
 if (((struct io_context *) (rq)->elevator_private) && ((struct io_context *) (rq)->elevator_private)->aic)
  atomic_inc(&((struct io_context *) (rq)->elevator_private)->aic->nr_dispatched);
 ad->nr_dispatched++;
}






static int as_dispatch_request(struct request_queue *q, int force)
{
 struct as_data *ad = q->elevator->elevator_data;
 const int reads = !list_empty(&ad->fifo_list[1]);
 const int writes = !list_empty(&ad->fifo_list[0]);
 struct request *rq;

 if (__builtin_expect(!!(force), 0)) {







  int dispatched = 0;

  ad->batch_data_dir = 1;
  ad->changed_batch = 0;
  ad->new_batch = 0;

  while (ad->next_rq[1]) {
   as_move_to_dispatch(ad, ad->next_rq[1]);
   dispatched++;
  }
  ad->last_check_fifo[1] = jiffies;

  while (ad->next_rq[0]) {
   as_move_to_dispatch(ad, ad->next_rq[0]);
   dispatched++;
  }
  ad->last_check_fifo[0] = jiffies;

  return dispatched;
 }


 if (ad->batch_data_dir == 0 && !reads) {
  if (ad->current_write_count == 0 || !writes)
   ad->write_batch_idled = 1;
 }

 if (!(reads || writes)
  || ad->antic_status == ANTIC_WAIT_REQ
  || ad->antic_status == ANTIC_WAIT_NEXT
  || ad->changed_batch)
  return 0;

 if (!(reads && writes && as_batch_expired(ad))) {



  rq = ad->next_rq[ad->batch_data_dir];

  if (ad->batch_data_dir == 1 && ad->antic_expire) {
   if (as_fifo_expired(ad, 1))
    goto fifo_expired;

   if (as_can_anticipate(ad, rq)) {
    as_antic_waitreq(ad);
    return 0;
   }
  }

  if (rq) {

   if (reads && !writes)
    ad->current_batch_expires =
     jiffies + ad->batch_expire[1];
   goto dispatch_request;
  }
 }






 if (reads) {
  do { if (__builtin_expect(!!(((&ad->sort_list[1])->rb_node == ((void *)0))), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("block/as-iosched.c"), "i" (1081), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0);

  if (writes && ad->batch_data_dir == 1)



   goto dispatch_writes;

  if (ad->batch_data_dir == 0) {
   ({ int __ret_warn_on = !!(ad->new_batch); if (__builtin_expect(!!(__ret_warn_on), 0)) { printk("WARNING: at %s:%d %s()\n", "block/as-iosched.c", 1090, (__func__)); dump_stack(); } __builtin_expect(!!(__ret_warn_on), 0); });
   ad->changed_batch = 1;
  }
  ad->batch_data_dir = 1;
  rq = ({ const typeof( ((struct request *)0)->queuelist ) *__mptr = ((ad->fifo_list[1].next)); (struct request *)( (char *)__mptr - __builtin_offsetof(struct request,queuelist) );});
  ad->last_check_fifo[ad->batch_data_dir] = jiffies;
  goto dispatch_request;
 }





 if (writes) {
dispatch_writes:
  do { if (__builtin_expect(!!(((&ad->sort_list[0])->rb_node == ((void *)0))), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("block/as-iosched.c"), "i" (1105), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0);

  if (ad->batch_data_dir == 1) {
   ad->changed_batch = 1;






   ad->new_batch = 0;
  }
  ad->batch_data_dir = 0;
  ad->current_write_count = ad->write_batch_count;
  ad->write_batch_idled = 0;
  rq = ({ const typeof( ((struct request *)0)->queuelist ) *__mptr = ((ad->fifo_list[0].next)); (struct request *)( (char *)__mptr - __builtin_offsetof(struct request,queuelist) );});
  ad->last_check_fifo[0] = jiffies;
  goto dispatch_request;
 }

 do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("block/as-iosched.c"), "i" (1125), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0);
 return 0;

dispatch_request:




 if (as_fifo_expired(ad, ad->batch_data_dir)) {
fifo_expired:
  rq = ({ const typeof( ((struct request *)0)->queuelist ) *__mptr = ((ad->fifo_list[ad->batch_data_dir].next)); (struct request *)( (char *)__mptr - __builtin_offsetof(struct request,queuelist) );});
 }

 if (ad->changed_batch) {
  ({ int __ret_warn_on = !!(ad->new_batch); if (__builtin_expect(!!(__ret_warn_on), 0)) { printk("WARNING: at %s:%d %s()\n", "block/as-iosched.c", 1139, (__func__)); dump_stack(); } __builtin_expect(!!(__ret_warn_on), 0); });

  if (ad->nr_dispatched)
   return 0;

  if (ad->batch_data_dir == 0)
   ad->current_batch_expires = jiffies +
     ad->batch_expire[0];
  else
   ad->new_batch = 1;

  ad->changed_batch = 0;
 }




 as_move_to_dispatch(ad, rq);

 return 1;
}




static void as_add_request(struct request_queue *q, struct request *rq)
{
 struct as_data *ad = q->elevator->elevator_data;
 int data_dir;

 ((rq)->elevator_private2 = (void *) AS_RQ_NEW);

 data_dir = ((((rq))->cmd_flags & 1) == 0 || (rq)->cmd_flags & (1 << __REQ_RW_SYNC));

 rq->elevator_private = as_get_io_context(q->node);

 if (((struct io_context *) (rq)->elevator_private)) {
  as_update_iohist(ad, ((struct io_context *) (rq)->elevator_private)->aic, rq);
  atomic_inc(&((struct io_context *) (rq)->elevator_private)->aic->nr_queued);
 }

 as_add_rq_rb(ad, rq);




 ((rq)->donelist.next = (void *) (jiffies + ad->fifo_expire[data_dir]));
 list_add_tail(&rq->queuelist, &ad->fifo_list[data_dir]);

 as_update_rq(ad, rq);
 ((rq)->elevator_private2 = (void *) AS_RQ_QUEUED);
}

static void as_activate_request(struct request_queue *q, struct request *rq)
{
 ({ int __ret_warn_on = !!(((enum arq_state)(rq)->elevator_private2) != AS_RQ_DISPATCHED); if (__builtin_expect(!!(__ret_warn_on), 0)) { printk("WARNING: at %s:%d %s()\n", "block/as-iosched.c", 1194, (__func__)); dump_stack(); } __builtin_expect(!!(__ret_warn_on), 0); });
 ((rq)->elevator_private2 = (void *) AS_RQ_REMOVED);
 if (((struct io_context *) (rq)->elevator_private) && ((struct io_context *) (rq)->elevator_private)->aic)
  atomic_dec(&((struct io_context *) (rq)->elevator_private)->aic->nr_dispatched);
}

static void as_deactivate_request(struct request_queue *q, struct request *rq)
{
 ({ int __ret_warn_on = !!(((enum arq_state)(rq)->elevator_private2) != AS_RQ_REMOVED); if (__builtin_expect(!!(__ret_warn_on), 0)) { printk("WARNING: at %s:%d %s()\n", "block/as-iosched.c", 1202, (__func__)); dump_stack(); } __builtin_expect(!!(__ret_warn_on), 0); });
 ((rq)->elevator_private2 = (void *) AS_RQ_DISPATCHED);
 if (((struct io_context *) (rq)->elevator_private) && ((struct io_context *) (rq)->elevator_private)->aic)
  atomic_inc(&((struct io_context *) (rq)->elevator_private)->aic->nr_dispatched);
}







static int as_queue_empty(struct request_queue *q)
{
 struct as_data *ad = q->elevator->elevator_data;

 return list_empty(&ad->fifo_list[0])
  && list_empty(&ad->fifo_list[1]);
}

static int
as_merge(struct request_queue *q, struct request **req, struct bio *bio)
{
 struct as_data *ad = q->elevator->elevator_data;
 sector_t rb_key = bio->bi_sector + ((bio)->bi_size >> 9);
 struct request *__rq;




 __rq = elv_rb_find(&ad->sort_list[((bio)->bi_rw & 1)], rb_key);
 if (__rq && elv_rq_merge_ok(__rq, bio)) {
  *req = __rq;
  return 1;
 }

 return 0;
}

static void as_merged_request(struct request_queue *q, struct request *req,
         int type)
{
 struct as_data *ad = q->elevator->elevator_data;




 if (type == 1) {
  as_del_rq_rb(ad, req);
  as_add_rq_rb(ad, req);





 }
}

static void as_merged_requests(struct request_queue *q, struct request *req,
     struct request *next)
{




 if (!list_empty(&req->queuelist) && !list_empty(&next->queuelist)) {
  if ((({ unsigned long __dummy; typeof(((unsigned long) (req)->donelist.next)) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ({ unsigned long __dummy; typeof(((unsigned long) (next)->donelist.next)) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ((long)(((unsigned long) (next)->donelist.next)) - (long)(((unsigned long) (req)->donelist.next)) < 0))) {
   struct io_context *rioc = ((struct io_context *) (req)->elevator_private);
   struct io_context *nioc = ((struct io_context *) (next)->elevator_private);

   list_move(&req->queuelist, &next->queuelist);
   ((req)->donelist.next = (void *) (((unsigned long) (next)->donelist.next)));




   double_spin_lock(&rioc->lock, &nioc->lock, rioc < nioc);
   swap_io_context(&rioc, &nioc);
   double_spin_unlock(&rioc->lock, &nioc->lock, rioc < nioc);
  }
 }




 as_remove_queued_request(q, next);
 as_put_io_context(next);

 ((next)->elevator_private2 = (void *) AS_RQ_MERGED);
}
# 1302 "block/as-iosched.c"
static void as_work_handler(struct work_struct *work)
{
 struct as_data *ad = ({ const typeof( ((struct as_data *)0)->antic_work ) *__mptr = (work); (struct as_data *)( (char *)__mptr - __builtin_offsetof(struct as_data,antic_work) );});
 struct request_queue *q = ad->q;
 unsigned long flags;

 flags = _spin_lock_irqsave(q->queue_lock);
 blk_start_queueing(q);
 _spin_unlock_irqrestore(q->queue_lock, flags);
}

static int as_may_queue(struct request_queue *q, int rw)
{
 int ret = ELV_MQUEUE_MAY;
 struct as_data *ad = q->elevator->elevator_data;
 struct io_context *ioc;
 if (ad->antic_status == ANTIC_WAIT_REQ ||
   ad->antic_status == ANTIC_WAIT_NEXT) {
  ioc = as_get_io_context(q->node);
  if (ad->io_context == ioc)
   ret = ELV_MQUEUE_MUST;
  put_io_context(ioc);
 }

 return ret;
}

static void as_exit_queue(elevator_t *e)
{
 struct as_data *ad = e->elevator_data;

 del_timer_sync(&ad->antic_timer);
 kblockd_flush_work(&ad->antic_work);

 do { if (__builtin_expect(!!(!list_empty(&ad->fifo_list[1])), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("block/as-iosched.c"), "i" (1336), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0);
 do { if (__builtin_expect(!!(!list_empty(&ad->fifo_list[0])), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.quad 1b, %c0\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("block/as-iosched.c"), "i" (1337), "i" (sizeof(struct bug_entry))); for(;;) ; } while(0); } while(0);

 put_io_context(ad->io_context);
 kfree(ad);
}




static void *as_init_queue(struct request_queue *q)
{
 struct as_data *ad;

 ad = kmalloc_node(sizeof(*ad), ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)) | (( gfp_t)0x8000u), q->node);
 if (!ad)
  return ((void *)0);

 ad->q = q;


 ad->antic_timer.function = as_antic_timeout;
 ad->antic_timer.data = (unsigned long)q;
 init_timer(&ad->antic_timer);
 do { (&ad->antic_work)->data = (atomic_long_t) { (0) }; INIT_LIST_HEAD(&(&ad->antic_work)->entry); do { ((&ad->antic_work))->func = ((as_work_handler)); } while (0); } while (0);

 INIT_LIST_HEAD(&ad->fifo_list[1]);
 INIT_LIST_HEAD(&ad->fifo_list[0]);
 ad->sort_list[1] = (struct rb_root) { ((void *)0), };
 ad->sort_list[0] = (struct rb_root) { ((void *)0), };
 ad->fifo_expire[1] = (250 / 8);
 ad->fifo_expire[0] = (250 / 4);
 ad->antic_expire = ((250 / 150) ? 250 / 150 : 1);
 ad->batch_expire[1] = (250 / 2);
 ad->batch_expire[0] = (250 / 8);

 ad->current_batch_expires = jiffies + ad->batch_expire[1];
 ad->write_batch_count = ad->batch_expire[0] / 10;
 if (ad->write_batch_count < 2)
  ad->write_batch_count = 2;

 return ad;
}





static ssize_t
as_var_show(unsigned int var, char *page)
{
 return sprintf(page, "%d\n", var);
}

static ssize_t
as_var_store(unsigned long *var, const char *page, size_t count)
{
 char *p = (char *) page;

 *var = simple_strtoul(p, &p, 10);
 return count;
}

static ssize_t est_time_show(elevator_t *e, char *page)
{
 struct as_data *ad = e->elevator_data;
 int pos = 0;

 pos += sprintf(page+pos, "%lu %% exit probability\n",
    100*ad->exit_prob/256);
 pos += sprintf(page+pos, "%lu %% probability of exiting without a "
    "cooperating process submitting IO\n",
    100*ad->exit_no_coop/256);
 pos += sprintf(page+pos, "%lu ms new thinktime\n", ad->new_ttime_mean);
 pos += sprintf(page+pos, "%llu sectors new seek distance\n",
    (unsigned long long)ad->new_seek_mean);

 return pos;
}







static ssize_t as_read_expire_show(elevator_t *e, char *page) { struct as_data *ad = e->elevator_data; return as_var_show(jiffies_to_msecs((ad->fifo_expire[1])), (page)); };
static ssize_t as_write_expire_show(elevator_t *e, char *page) { struct as_data *ad = e->elevator_data; return as_var_show(jiffies_to_msecs((ad->fifo_expire[0])), (page)); };
static ssize_t as_antic_expire_show(elevator_t *e, char *page) { struct as_data *ad = e->elevator_data; return as_var_show(jiffies_to_msecs((ad->antic_expire)), (page)); };
static ssize_t as_read_batch_expire_show(elevator_t *e, char *page) { struct as_data *ad = e->elevator_data; return as_var_show(jiffies_to_msecs((ad->batch_expire[1])), (page)); };
static ssize_t as_write_batch_expire_show(elevator_t *e, char *page) { struct as_data *ad = e->elevator_data; return as_var_show(jiffies_to_msecs((ad->batch_expire[0])), (page)); };
# 1441 "block/as-iosched.c"
static ssize_t as_read_expire_store(elevator_t *e, const char *page, size_t count) { struct as_data *ad = e->elevator_data; int ret = as_var_store(&ad->fifo_expire[1], (page), count); if (*(&ad->fifo_expire[1]) < (0)) *(&ad->fifo_expire[1]) = (0); else if (*(&ad->fifo_expire[1]) > (((int)(~0U>>1)))) *(&ad->fifo_expire[1]) = (((int)(~0U>>1))); *(&ad->fifo_expire[1]) = msecs_to_jiffies(*(&ad->fifo_expire[1])); return ret; };
static ssize_t as_write_expire_store(elevator_t *e, const char *page, size_t count) { struct as_data *ad = e->elevator_data; int ret = as_var_store(&ad->fifo_expire[0], (page), count); if (*(&ad->fifo_expire[0]) < (0)) *(&ad->fifo_expire[0]) = (0); else if (*(&ad->fifo_expire[0]) > (((int)(~0U>>1)))) *(&ad->fifo_expire[0]) = (((int)(~0U>>1))); *(&ad->fifo_expire[0]) = msecs_to_jiffies(*(&ad->fifo_expire[0])); return ret; };
static ssize_t as_antic_expire_store(elevator_t *e, const char *page, size_t count) { struct as_data *ad = e->elevator_data; int ret = as_var_store(&ad->antic_expire, (page), count); if (*(&ad->antic_expire) < (0)) *(&ad->antic_expire) = (0); else if (*(&ad->antic_expire) > (((int)(~0U>>1)))) *(&ad->antic_expire) = (((int)(~0U>>1))); *(&ad->antic_expire) = msecs_to_jiffies(*(&ad->antic_expire)); return ret; };
static ssize_t as_read_batch_expire_store(elevator_t *e, const char *page, size_t count) { struct as_data *ad = e->elevator_data; int ret = as_var_store(&ad->batch_expire[1], (page), count); if (*(&ad->batch_expire[1]) < (0)) *(&ad->batch_expire[1]) = (0); else if (*(&ad->batch_expire[1]) > (((int)(~0U>>1)))) *(&ad->batch_expire[1]) = (((int)(~0U>>1))); *(&ad->batch_expire[1]) = msecs_to_jiffies(*(&ad->batch_expire[1])); return ret; }
                                           ;
static ssize_t as_write_batch_expire_store(elevator_t *e, const char *page, size_t count) { struct as_data *ad = e->elevator_data; int ret = as_var_store(&ad->batch_expire[0], (page), count); if (*(&ad->batch_expire[0]) < (0)) *(&ad->batch_expire[0]) = (0); else if (*(&ad->batch_expire[0]) > (((int)(~0U>>1)))) *(&ad->batch_expire[0]) = (((int)(~0U>>1))); *(&ad->batch_expire[0]) = msecs_to_jiffies(*(&ad->batch_expire[0])); return ret; }
                                            ;





static struct elv_fs_entry as_attrs[] = {
 { .attr = { .name = "est_time", .mode = 0444 }, .show = est_time_show, },
 { .attr = {.name = "read_expire", .mode = (00400|00040|00004)|00200 }, .show = as_read_expire_show, .store = as_read_expire_store, },
 { .attr = {.name = "write_expire", .mode = (00400|00040|00004)|00200 }, .show = as_write_expire_show, .store = as_write_expire_store, },
 { .attr = {.name = "antic_expire", .mode = (00400|00040|00004)|00200 }, .show = as_antic_expire_show, .store = as_antic_expire_store, },
 { .attr = {.name = "read_batch_expire", .mode = (00400|00040|00004)|00200 }, .show = as_read_batch_expire_show, .store = as_read_batch_expire_store, },
 { .attr = {.name = "write_batch_expire", .mode = (00400|00040|00004)|00200 }, .show = as_write_batch_expire_show, .store = as_write_batch_expire_store, },
 { .attr = { .name = ((void *)0) } }
};

static struct elevator_type iosched_as = {
 .ops = {
  .elevator_merge_fn = as_merge,
  .elevator_merged_fn = as_merged_request,
  .elevator_merge_req_fn = as_merged_requests,
  .elevator_dispatch_fn = as_dispatch_request,
  .elevator_add_req_fn = as_add_request,
  .elevator_activate_req_fn = as_activate_request,
  .elevator_deactivate_req_fn = as_deactivate_request,
  .elevator_queue_empty_fn = as_queue_empty,
  .elevator_completed_req_fn = as_completed_request,
  .elevator_former_req_fn = elv_rb_former_request,
  .elevator_latter_req_fn = elv_rb_latter_request,
  .elevator_may_queue_fn = as_may_queue,
  .elevator_init_fn = as_init_queue,
  .elevator_exit_fn = as_exit_queue,
  .trim = as_trim,
 },

 .elevator_attrs = as_attrs,
 .elevator_name = "anticipatory",
 .elevator_owner = ((struct module *)0),
};

static int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) as_init(void)
{
 elv_register(&iosched_as);

 return 0;
}

static void __attribute__ ((__section__(".exit.text"))) __attribute__((__used__)) __attribute__((__cold__)) as_exit(void)
{
 struct completion all_gone = { 0, { .lock = (spinlock_t) { .raw_lock = { 1 }, }, .task_list = { &((all_gone).wait).task_list, &((all_gone).wait).task_list } } };
 elv_unregister(&iosched_as);
 ioc_gone = &all_gone;

 __asm__ __volatile__("": : :"memory");
 if (({ unsigned long __val = 0; int __cpu; __asm__ __volatile__("": : :"memory"); for (((__cpu)) = __first_cpu(&(cpu_possible_map)); ((__cpu)) < 32; ((__cpu)) = __next_cpu((((__cpu))), &((cpu_possible_map)))) __val += (*({ extern int simple_identifier_ioc_count(void); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"(&per_cpu__ioc_count)); (typeof(&per_cpu__ioc_count)) (__ptr + (((_cpu_pda[__cpu])->data_offset))); }); })); __val; }))
  wait_for_completion(ioc_gone);
 synchronize_rcu();
}

static initcall_t __initcall_as_init6 __attribute__((__used__)) __attribute__((__section__(".initcall" "6" ".init"))) = as_init;;
static exitcall_t __exitcall_as_exit __attribute__((__used__)) __attribute__ ((__section__(".exitcall.exit"))) = as_exit;;

;
;
;
