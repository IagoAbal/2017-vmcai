# 1 "drivers/xen/xen-pciback/vpci.c"
# 1 "/home/iago/torvalds/linux//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/iago/torvalds/linux/include/linux/kconfig.h" 1



# 1 "include/generated/autoconf.h" 1
# 5 "/home/iago/torvalds/linux/include/linux/kconfig.h" 2
# 1 "<command-line>" 2
# 1 "drivers/xen/xen-pciback/vpci.c"







# 1 "include/linux/list.h" 1



# 1 "include/linux/types.h" 1



# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/types.h" 1



# 1 "include/asm-generic/types.h" 1






# 1 "include/asm-generic/int-ll64.h" 1
# 11 "include/asm-generic/int-ll64.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/bitsperlong.h" 1
# 10 "/home/iago/torvalds/linux/arch/x86/include/asm/bitsperlong.h"
# 1 "include/asm-generic/bitsperlong.h" 1
# 11 "/home/iago/torvalds/linux/arch/x86/include/asm/bitsperlong.h" 2
# 12 "include/asm-generic/int-ll64.h" 2







typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
# 42 "include/asm-generic/int-ll64.h"
typedef signed char s8;
typedef unsigned char u8;

typedef signed short s16;
typedef unsigned short u16;

typedef signed int s32;
typedef unsigned int u32;

typedef signed long long s64;
typedef unsigned long long u64;
# 8 "include/asm-generic/types.h" 2



typedef unsigned short umode_t;
# 5 "/home/iago/torvalds/linux/arch/x86/include/asm/types.h" 2
# 5 "include/linux/types.h" 2
# 17 "include/linux/types.h"
# 1 "include/linux/posix_types.h" 1



# 1 "include/linux/stddef.h" 1



# 1 "include/linux/compiler.h" 1
# 48 "include/linux/compiler.h"
# 1 "include/linux/compiler-gcc.h" 1
# 94 "include/linux/compiler-gcc.h"
# 1 "include/linux/compiler-gcc4.h" 1
# 95 "include/linux/compiler-gcc.h" 2
# 49 "include/linux/compiler.h" 2
# 66 "include/linux/compiler.h"
struct ftrace_branch_data {
 const char *func;
 const char *file;
 unsigned line;
 union {
  struct {
   unsigned long correct;
   unsigned long incorrect;
  };
  struct {
   unsigned long miss;
   unsigned long hit;
  };
  unsigned long miss_hit[2];
 };
};
# 5 "include/linux/stddef.h" 2
# 15 "include/linux/stddef.h"
enum {
 false = 0,
 true = 1
};
# 5 "include/linux/posix_types.h" 2
# 36 "include/linux/posix_types.h"
typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/posix_types.h" 1




# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/posix_types_64.h" 1
# 10 "/home/iago/torvalds/linux/arch/x86/include/asm/posix_types_64.h"
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




static inline void __FD_SET(unsigned long fd, __kernel_fd_set *fdsetp)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 fdsetp->fds_bits[_tmp] |= (1UL<<_rem);
}


static inline void __FD_CLR(unsigned long fd, __kernel_fd_set *fdsetp)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 fdsetp->fds_bits[_tmp] &= ~(1UL<<_rem);
}


static inline int __FD_ISSET(unsigned long fd, __const__ __kernel_fd_set *p)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 return (p->fds_bits[_tmp] & (1UL<<_rem)) != 0;
}






static inline void __FD_ZERO(__kernel_fd_set *p)
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
# 6 "/home/iago/torvalds/linux/arch/x86/include/asm/posix_types.h" 2
# 48 "include/linux/posix_types.h" 2
# 18 "include/linux/types.h" 2



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



typedef __kernel_loff_t loff_t;
# 62 "include/linux/types.h"
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
# 141 "include/linux/types.h"
typedef unsigned long sector_t;
typedef unsigned long blkcnt_t;
# 154 "include/linux/types.h"
typedef u64 dma_addr_t;
# 177 "include/linux/types.h"
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;
# 201 "include/linux/types.h"
typedef unsigned gfp_t;
typedef unsigned fmode_t;


typedef u64 phys_addr_t;




typedef phys_addr_t resource_size_t;

typedef struct {
 int counter;
} atomic_t;


typedef struct {
 long counter;
} atomic64_t;


struct list_head {
 struct list_head *next, *prev;
};

struct hlist_head {
 struct hlist_node *first;
};

struct hlist_node {
 struct hlist_node *next, **pprev;
};

struct ustat {
 __kernel_daddr_t f_tfree;
 __kernel_ino_t f_tinode;
 char f_fname[6];
 char f_fpack[6];
};
# 5 "include/linux/list.h" 2

# 1 "include/linux/poison.h" 1
# 7 "include/linux/list.h" 2
# 1 "include/linux/const.h" 1
# 8 "include/linux/list.h" 2
# 24 "include/linux/list.h"
static inline void INIT_LIST_HEAD(struct list_head *list)
{
 list->next = list;
 list->prev = list;
}
# 47 "include/linux/list.h"
extern void __list_add(struct list_head *new,
         struct list_head *prev,
         struct list_head *next);
# 60 "include/linux/list.h"
static inline void list_add(struct list_head *new, struct list_head *head)
{
 __list_add(new, head, head->next);
}
# 74 "include/linux/list.h"
static inline void list_add_tail(struct list_head *new, struct list_head *head)
{
 __list_add(new, head->prev, head);
}
# 86 "include/linux/list.h"
static inline void __list_del(struct list_head * prev, struct list_head * next)
{
 next->prev = prev;
 prev->next = next;
}
# 111 "include/linux/list.h"
extern void __list_del_entry(struct list_head *entry);
extern void list_del(struct list_head *entry);
# 122 "include/linux/list.h"
static inline void list_replace(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->next->prev = new;
 new->prev = old->prev;
 new->prev->next = new;
}

static inline void list_replace_init(struct list_head *old,
     struct list_head *new)
{
 list_replace(old, new);
 INIT_LIST_HEAD(old);
}





static inline void list_del_init(struct list_head *entry)
{
 __list_del_entry(entry);
 INIT_LIST_HEAD(entry);
}






static inline void list_move(struct list_head *list, struct list_head *head)
{
 __list_del_entry(list);
 list_add(list, head);
}






static inline void list_move_tail(struct list_head *list,
      struct list_head *head)
{
 __list_del_entry(list);
 list_add_tail(list, head);
}






static inline int list_is_last(const struct list_head *list,
    const struct list_head *head)
{
 return list->next == head;
}





static inline int list_empty(const struct list_head *head)
{
 return head->next == head;
}
# 204 "include/linux/list.h"
static inline int list_empty_careful(const struct list_head *head)
{
 struct list_head *next = head->next;
 return (next == head) && (next == head->prev);
}





static inline void list_rotate_left(struct list_head *head)
{
 struct list_head *first;

 if (!list_empty(head)) {
  first = head->next;
  list_move_tail(first, head);
 }
}





static inline int list_is_singular(const struct list_head *head)
{
 return !list_empty(head) && (head->next == head->prev);
}

static inline void __list_cut_position(struct list_head *list,
  struct list_head *head, struct list_head *entry)
{
 struct list_head *new_first = entry->next;
 list->next = head->next;
 list->next->prev = list;
 list->prev = entry;
 entry->next = list;
 head->next = new_first;
 new_first->prev = head;
}
# 259 "include/linux/list.h"
static inline void list_cut_position(struct list_head *list,
  struct list_head *head, struct list_head *entry)
{
 if (list_empty(head))
  return;
 if (list_is_singular(head) &&
  (head->next != entry && head != entry))
  return;
 if (entry == head)
  INIT_LIST_HEAD(list);
 else
  __list_cut_position(list, head, entry);
}

static inline void __list_splice(const struct list_head *list,
     struct list_head *prev,
     struct list_head *next)
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;

 first->prev = prev;
 prev->next = first;

 last->next = next;
 next->prev = last;
}






static inline void list_splice(const struct list_head *list,
    struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head, head->next);
}






static inline void list_splice_tail(struct list_head *list,
    struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head->prev, head);
}
# 318 "include/linux/list.h"
static inline void list_splice_init(struct list_head *list,
        struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head, head->next);
  INIT_LIST_HEAD(list);
 }
}
# 335 "include/linux/list.h"
static inline void list_splice_tail_init(struct list_head *list,
      struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head->prev, head);
  INIT_LIST_HEAD(list);
 }
}
# 570 "include/linux/list.h"
static inline void INIT_HLIST_NODE(struct hlist_node *h)
{
 h->next = ((void *)0);
 h->pprev = ((void *)0);
}

static inline int hlist_unhashed(const struct hlist_node *h)
{
 return !h->pprev;
}

static inline int hlist_empty(const struct hlist_head *h)
{
 return !h->first;
}

static inline void __hlist_del(struct hlist_node *n)
{
 struct hlist_node *next = n->next;
 struct hlist_node **pprev = n->pprev;
 *pprev = next;
 if (next)
  next->pprev = pprev;
}

static inline void hlist_del(struct hlist_node *n)
{
 __hlist_del(n);
 n->next = ((void *) 0x00100100 + (0xdead000000000000UL));
 n->pprev = ((void *) 0x00200200 + (0xdead000000000000UL));
}

static inline void hlist_del_init(struct hlist_node *n)
{
 if (!hlist_unhashed(n)) {
  __hlist_del(n);
  INIT_HLIST_NODE(n);
 }
}

static inline void hlist_add_head(struct hlist_node *n, struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 if (first)
  first->pprev = &n->next;
 h->first = n;
 n->pprev = &h->first;
}


static inline void hlist_add_before(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 next->pprev = &n->next;
 *(n->pprev) = n;
}

static inline void hlist_add_after(struct hlist_node *n,
     struct hlist_node *next)
{
 next->next = n->next;
 n->next = next;
 next->pprev = &n->next;

 if(next->next)
  next->next->pprev = &next->next;
}


static inline void hlist_add_fake(struct hlist_node *n)
{
 n->pprev = &n->next;
}





static inline void hlist_move_list(struct hlist_head *old,
       struct hlist_head *new)
{
 new->first = old->first;
 if (new->first)
  new->first->pprev = &new->first;
 old->first = ((void *)0);
}
# 9 "drivers/xen/xen-pciback/vpci.c" 2
# 1 "include/linux/slab.h" 1
# 12 "include/linux/slab.h"
# 1 "include/linux/gfp.h" 1



# 1 "include/linux/mmzone.h" 1






# 1 "include/linux/spinlock.h" 1
# 49 "include/linux/spinlock.h"
# 1 "include/linux/typecheck.h" 1
# 50 "include/linux/spinlock.h" 2
# 1 "include/linux/preempt.h" 1
# 9 "include/linux/preempt.h"
# 1 "include/linux/thread_info.h" 1
# 12 "include/linux/thread_info.h"
struct timespec;
struct compat_timespec;




struct restart_block {
 long (*fn)(struct restart_block *);
 union {

  struct {
   u32 *uaddr;
   u32 val;
   u32 flags;
   u32 bitset;
   u64 time;
   u32 *uaddr2;
  } futex;

  struct {
   clockid_t clockid;
   struct timespec *rmtp;

   struct compat_timespec *compat_rmtp;

   u64 expires;
  } nanosleep;

  struct {
   struct pollfd *ufds;
   int nfds;
   int has_timeout;
   unsigned long tv_sec;
   unsigned long tv_nsec;
  } poll;
 };
};

extern long do_no_restart_syscall(struct restart_block *parm);

# 1 "include/linux/bitops.h" 1
# 13 "include/linux/bitops.h"
extern unsigned int __sw_hweight8(unsigned int w);
extern unsigned int __sw_hweight16(unsigned int w);
extern unsigned int __sw_hweight32(unsigned int w);
extern unsigned long __sw_hweight64(__u64 w);





# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h" 1
# 16 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/alternative.h" 1





# 1 "include/linux/stringify.h" 1
# 7 "/home/iago/torvalds/linux/arch/x86/include/asm/alternative.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/asm.h" 1
# 8 "/home/iago/torvalds/linux/arch/x86/include/asm/alternative.h" 2
# 45 "/home/iago/torvalds/linux/arch/x86/include/asm/alternative.h"
struct alt_instr {
 s32 instr_offset;
 s32 repl_offset;
 u16 cpuid;
 u8 instrlen;
 u8 replacementlen;

 u32 pad2;

};

extern void alternative_instructions(void);
extern void apply_alternatives(struct alt_instr *start, struct alt_instr *end);

struct module;


extern void alternatives_smp_module_add(struct module *mod, char *name,
     void *locks, void *locks_end,
     void *text, void *text_end);
extern void alternatives_smp_module_del(struct module *mod);
extern void alternatives_smp_switch(int smp);
extern int alternatives_text_reserved(void *start, void *end);
extern bool skip_smp_alternatives;
# 104 "/home/iago/torvalds/linux/arch/x86/include/asm/alternative.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/cpufeature.h" 1






# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/required-features.h" 1
# 8 "/home/iago/torvalds/linux/arch/x86/include/asm/cpufeature.h" 2
# 204 "/home/iago/torvalds/linux/arch/x86/include/asm/cpufeature.h"
# 1 "include/linux/bitops.h" 1
# 205 "/home/iago/torvalds/linux/arch/x86/include/asm/cpufeature.h" 2

extern const char * const x86_cap_flags[10*32];
extern const char * const x86_power_flags[32];
# 329 "/home/iago/torvalds/linux/arch/x86/include/asm/cpufeature.h"
static inline __attribute__((always_inline)) __attribute__((pure)) bool __static_cpu_has(u16 bit)
{
# 348 "/home/iago/torvalds/linux/arch/x86/include/asm/cpufeature.h"
  u8 flag;

  asm volatile("1: movb $0,%0\n"
        "2:\n"
        ".section .altinstructions,\"a\"\n"
        " " ".balign 8" " " "\n"
        " .long 1b - .\n"
        " .long 3f - .\n"
        " .word %P1\n"
        " .byte 2b - 1b\n"
        " .byte 4f - 3f\n"
        ".previous\n"
        ".section .discard,\"aw\",@progbits\n"
        " .byte 0xff + (4f-3f) - (2b-1b)\n"
        ".previous\n"
        ".section .altinstr_replacement,\"ax\"\n"
        "3: movb $1,%0\n"
        "4:\n"
        ".previous\n"
        : "=qm" (flag) : "i" (bit));
  return flag;

}
# 105 "/home/iago/torvalds/linux/arch/x86/include/asm/alternative.h" 2
# 152 "/home/iago/torvalds/linux/arch/x86/include/asm/alternative.h"
struct paravirt_patch_site;

void apply_paravirt(struct paravirt_patch_site *start,
      struct paravirt_patch_site *end);
# 164 "/home/iago/torvalds/linux/arch/x86/include/asm/alternative.h"
extern void *text_poke_early(void *addr, const void *opcode, size_t len);
# 183 "/home/iago/torvalds/linux/arch/x86/include/asm/alternative.h"
struct text_poke_param {
 void *addr;
 const void *opcode;
 size_t len;
};

extern void *text_poke(void *addr, const void *opcode, size_t len);
extern void *text_poke_smp(void *addr, const void *opcode, size_t len);
extern void text_poke_smp_batch(struct text_poke_param *params, int n);
# 17 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h" 2
# 59 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h"
static inline __attribute__((always_inline)) void
set_bit(unsigned int nr, volatile unsigned long *addr)
{
 if ((__builtin_constant_p(nr))) {
  asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "orb %1,%0"
   : "+m" (*(volatile long *) ((void *)(addr) + ((nr)>>3)))
   : "iq" ((u8)(1 << ((nr) & 7)))
   : "memory");
 } else {
  asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "bts %1,%0"
   : "+m" (*(volatile long *) (addr)) : "Ir" (nr) : "memory");
 }
}
# 82 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h"
static inline void __set_bit(int nr, volatile unsigned long *addr)
{
 asm volatile("bts %1,%0" : "+m" (*(volatile long *) (addr)) : "Ir" (nr) : "memory");
}
# 97 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h"
static inline __attribute__((always_inline)) void
clear_bit(int nr, volatile unsigned long *addr)
{
 if ((__builtin_constant_p(nr))) {
  asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "andb %1,%0"
   : "+m" (*(volatile long *) ((void *)(addr) + ((nr)>>3)))
   : "iq" ((u8)~(1 << ((nr) & 7))));
 } else {
  asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "btr %1,%0"
   : "+m" (*(volatile long *) (addr))
   : "Ir" (nr));
 }
}
# 119 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h"
static inline void clear_bit_unlock(unsigned nr, volatile unsigned long *addr)
{
 __asm__ __volatile__("": : :"memory");
 clear_bit(nr, addr);
}

static inline void __clear_bit(int nr, volatile unsigned long *addr)
{
 asm volatile("btr %1,%0" : "+m" (*(volatile long *) (addr)) : "Ir" (nr));
}
# 142 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h"
static inline void __clear_bit_unlock(unsigned nr, volatile unsigned long *addr)
{
 __asm__ __volatile__("": : :"memory");
 __clear_bit(nr, addr);
}
# 160 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h"
static inline void __change_bit(int nr, volatile unsigned long *addr)
{
 asm volatile("btc %1,%0" : "+m" (*(volatile long *) (addr)) : "Ir" (nr));
}
# 174 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h"
static inline void change_bit(int nr, volatile unsigned long *addr)
{
 if ((__builtin_constant_p(nr))) {
  asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "xorb %1,%0"
   : "+m" (*(volatile long *) ((void *)(addr) + ((nr)>>3)))
   : "iq" ((u8)(1 << ((nr) & 7))));
 } else {
  asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "btc %1,%0"
   : "+m" (*(volatile long *) (addr))
   : "Ir" (nr));
 }
}
# 195 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h"
static inline int test_and_set_bit(int nr, volatile unsigned long *addr)
{
 int oldbit;

 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "bts %2,%1\n\t"
       "sbb %0,%0" : "=r" (oldbit), "+m" (*(volatile long *) (addr)) : "Ir" (nr) : "memory");

 return oldbit;
}
# 212 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h"
static inline __attribute__((always_inline)) int
test_and_set_bit_lock(int nr, volatile unsigned long *addr)
{
 return test_and_set_bit(nr, addr);
}
# 227 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h"
static inline int __test_and_set_bit(int nr, volatile unsigned long *addr)
{
 int oldbit;

 asm("bts %2,%1\n\t"
     "sbb %0,%0"
     : "=r" (oldbit), "+m" (*(volatile long *) (addr))
     : "Ir" (nr));
 return oldbit;
}
# 246 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h"
static inline int test_and_clear_bit(int nr, volatile unsigned long *addr)
{
 int oldbit;

 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "btr %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*(volatile long *) (addr)) : "Ir" (nr) : "memory");

 return oldbit;
}
# 266 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h"
static inline int __test_and_clear_bit(int nr, volatile unsigned long *addr)
{
 int oldbit;

 asm volatile("btr %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*(volatile long *) (addr))
       : "Ir" (nr));
 return oldbit;
}


static inline int __test_and_change_bit(int nr, volatile unsigned long *addr)
{
 int oldbit;

 asm volatile("btc %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*(volatile long *) (addr))
       : "Ir" (nr) : "memory");

 return oldbit;
}
# 298 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h"
static inline int test_and_change_bit(int nr, volatile unsigned long *addr)
{
 int oldbit;

 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "btc %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*(volatile long *) (addr)) : "Ir" (nr) : "memory");

 return oldbit;
}

static inline __attribute__((always_inline)) int constant_test_bit(unsigned int nr, const volatile unsigned long *addr)
{
 return ((1UL << (nr % 64)) &
  (addr[nr / 64])) != 0;
}

static inline int variable_test_bit(int nr, volatile const unsigned long *addr)
{
 int oldbit;

 asm volatile("bt %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit)
       : "m" (*(unsigned long *)addr), "Ir" (nr));

 return oldbit;
}
# 347 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h"
static inline unsigned long __ffs(unsigned long word)
{
 asm("bsf %1,%0"
  : "=r" (word)
  : "rm" (word));
 return word;
}







static inline unsigned long ffz(unsigned long word)
{
 asm("bsf %1,%0"
  : "=r" (word)
  : "r" (~word));
 return word;
}







static inline unsigned long __fls(unsigned long word)
{
 asm("bsr %1,%0"
     : "=r" (word)
     : "rm" (word));
 return word;
}
# 395 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h"
static inline int ffs(int x)
{
 int r;

 asm("bsfl %1,%0\n\t"
     "cmovzl %2,%0"
     : "=r" (r) : "rm" (x), "r" (-1));






 return r + 1;
}
# 422 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h"
static inline int fls(int x)
{
 int r;

 asm("bsrl %1,%0\n\t"
     "cmovzl %2,%0"
     : "=&r" (r) : "rm" (x), "rm" (-1));






 return r + 1;
}






# 1 "include/asm-generic/bitops/find.h" 1
# 11 "include/asm-generic/bitops/find.h"
extern unsigned long find_next_bit(const unsigned long *addr, unsigned long
  size, unsigned long offset);
# 22 "include/asm-generic/bitops/find.h"
extern unsigned long find_next_zero_bit(const unsigned long *addr, unsigned
  long size, unsigned long offset);
# 35 "include/asm-generic/bitops/find.h"
extern unsigned long find_first_bit(const unsigned long *addr,
        unsigned long size);
# 45 "include/asm-generic/bitops/find.h"
extern unsigned long find_first_zero_bit(const unsigned long *addr,
      unsigned long size);
# 444 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h" 2

# 1 "include/asm-generic/bitops/sched.h" 1
# 12 "include/asm-generic/bitops/sched.h"
static inline int sched_find_first_bit(const unsigned long *b)
{

 if (b[0])
  return __ffs(b[0]);
 return __ffs(b[1]) + 64;
# 29 "include/asm-generic/bitops/sched.h"
}
# 446 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h" 2



# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/arch_hweight.h" 1
# 24 "/home/iago/torvalds/linux/arch/x86/include/asm/arch_hweight.h"
static inline unsigned int __arch_hweight32(unsigned int w)
{
 unsigned int res = 0;

 asm ("661:\n\t" "call __sw_hweight32" "\n662:\n" ".section .altinstructions,\"a\"\n" " " ".balign 8" " " "\n" "	 .long 661b - .\n" "	 .long 663f - .\n" "	 .word " "(4*32+23)" "\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .discard,\"aw\",@progbits\n" "	 .byte 0xff + (664f-663f) - (662b-661b)\n" ".previous\n" ".section .altinstr_replacement, \"ax\"\n" "663:\n\t" ".byte 0xf3,0x40,0x0f,0xb8,0xc7" "\n664:\n" ".previous"
       : "=""a" (res)
       : "D" (w));

 return res;
}

static inline unsigned int __arch_hweight16(unsigned int w)
{
 return __arch_hweight32(w & 0xffff);
}

static inline unsigned int __arch_hweight8(unsigned int w)
{
 return __arch_hweight32(w & 0xff);
}

static inline unsigned long __arch_hweight64(__u64 w)
{
 unsigned long res = 0;





 asm ("661:\n\t" "call __sw_hweight64" "\n662:\n" ".section .altinstructions,\"a\"\n" " " ".balign 8" " " "\n" "	 .long 661b - .\n" "	 .long 663f - .\n" "	 .word " "(4*32+23)" "\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .discard,\"aw\",@progbits\n" "	 .byte 0xff + (664f-663f) - (662b-661b)\n" ".previous\n" ".section .altinstr_replacement, \"ax\"\n" "663:\n\t" ".byte 0xf3,0x48,0x0f,0xb8,0xc7" "\n664:\n" ".previous"
       : "=""a" (res)
       : "D" (w));


 return res;
}
# 450 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h" 2

# 1 "include/asm-generic/bitops/const_hweight.h" 1
# 452 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h" 2



# 1 "include/asm-generic/bitops/fls64.h" 1
# 26 "include/asm-generic/bitops/fls64.h"
static inline __attribute__((always_inline)) int fls64(__u64 x)
{
 if (x == 0)
  return 0;
 return __fls(x) + 1;
}
# 456 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h" 2



# 1 "include/asm-generic/bitops/le.h" 1




# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/byteorder.h" 1



# 1 "include/linux/byteorder/little_endian.h" 1
# 12 "include/linux/byteorder/little_endian.h"
# 1 "include/linux/swab.h" 1





# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/swab.h" 1






static inline __attribute__((__const__)) __u32 __arch_swab32(__u32 val)
{
# 21 "/home/iago/torvalds/linux/arch/x86/include/asm/swab.h"
 asm("bswapl %0"
     : "=r" (val)
     : "0" (val));

 return val;
}


static inline __attribute__((__const__)) __u64 __arch_swab64(__u64 val)
{
# 53 "/home/iago/torvalds/linux/arch/x86/include/asm/swab.h"
 asm("bswapq %0"
     : "=r" (val)
     : "0" (val));
 return val;

}
# 7 "include/linux/swab.h" 2
# 46 "include/linux/swab.h"
static inline __attribute__((__const__)) __u16 __fswab16(__u16 val)
{



 return ((__u16)( (((__u16)(val) & (__u16)0x00ffU) << 8) | (((__u16)(val) & (__u16)0xff00U) >> 8)));

}

static inline __attribute__((__const__)) __u32 __fswab32(__u32 val)
{

 return __arch_swab32(val);



}

static inline __attribute__((__const__)) __u64 __fswab64(__u64 val)
{

 return __arch_swab64(val);







}

static inline __attribute__((__const__)) __u32 __fswahw32(__u32 val)
{



 return ((__u32)( (((__u32)(val) & (__u32)0x0000ffffUL) << 16) | (((__u32)(val) & (__u32)0xffff0000UL) >> 16)));

}

static inline __attribute__((__const__)) __u32 __fswahb32(__u32 val)
{



 return ((__u32)( (((__u32)(val) & (__u32)0x00ff00ffUL) << 8) | (((__u32)(val) & (__u32)0xff00ff00UL) >> 8)));

}
# 148 "include/linux/swab.h"
static inline __u16 __swab16p(const __u16 *p)
{



 return (__builtin_constant_p((__u16)(*p)) ? ((__u16)( (((__u16)(*p) & (__u16)0x00ffU) << 8) | (((__u16)(*p) & (__u16)0xff00U) >> 8))) : __fswab16(*p));

}





static inline __u32 __swab32p(const __u32 *p)
{



 return (__builtin_constant_p((__u32)(*p)) ? ((__u32)( (((__u32)(*p) & (__u32)0x000000ffUL) << 24) | (((__u32)(*p) & (__u32)0x0000ff00UL) << 8) | (((__u32)(*p) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(*p) & (__u32)0xff000000UL) >> 24))) : __fswab32(*p));

}





static inline __u64 __swab64p(const __u64 *p)
{



 return (__builtin_constant_p((__u64)(*p)) ? ((__u64)( (((__u64)(*p) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(*p) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(*p) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(*p) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(*p) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(*p) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(*p) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(*p) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(*p));

}







static inline __u32 __swahw32p(const __u32 *p)
{



 return (__builtin_constant_p((__u32)(*p)) ? ((__u32)( (((__u32)(*p) & (__u32)0x0000ffffUL) << 16) | (((__u32)(*p) & (__u32)0xffff0000UL) >> 16))) : __fswahw32(*p));

}







static inline __u32 __swahb32p(const __u32 *p)
{



 return (__builtin_constant_p((__u32)(*p)) ? ((__u32)( (((__u32)(*p) & (__u32)0x00ff00ffUL) << 8) | (((__u32)(*p) & (__u32)0xff00ff00UL) >> 8))) : __fswahb32(*p));

}





static inline void __swab16s(__u16 *p)
{



 *p = __swab16p(p);

}




static inline void __swab32s(__u32 *p)
{



 *p = __swab32p(p);

}





static inline void __swab64s(__u64 *p)
{



 *p = __swab64p(p);

}







static inline void __swahw32s(__u32 *p)
{



 *p = __swahw32p(p);

}







static inline void __swahb32s(__u32 *p)
{



 *p = __swahb32p(p);

}
# 13 "include/linux/byteorder/little_endian.h" 2
# 43 "include/linux/byteorder/little_endian.h"
static inline __le64 __cpu_to_le64p(const __u64 *p)
{
 return ( __le64)*p;
}
static inline __u64 __le64_to_cpup(const __le64 *p)
{
 return ( __u64)*p;
}
static inline __le32 __cpu_to_le32p(const __u32 *p)
{
 return ( __le32)*p;
}
static inline __u32 __le32_to_cpup(const __le32 *p)
{
 return ( __u32)*p;
}
static inline __le16 __cpu_to_le16p(const __u16 *p)
{
 return ( __le16)*p;
}
static inline __u16 __le16_to_cpup(const __le16 *p)
{
 return ( __u16)*p;
}
static inline __be64 __cpu_to_be64p(const __u64 *p)
{
 return ( __be64)__swab64p(p);
}
static inline __u64 __be64_to_cpup(const __be64 *p)
{
 return __swab64p((__u64 *)p);
}
static inline __be32 __cpu_to_be32p(const __u32 *p)
{
 return ( __be32)__swab32p(p);
}
static inline __u32 __be32_to_cpup(const __be32 *p)
{
 return __swab32p((__u32 *)p);
}
static inline __be16 __cpu_to_be16p(const __u16 *p)
{
 return ( __be16)__swab16p(p);
}
static inline __u16 __be16_to_cpup(const __be16 *p)
{
 return __swab16p((__u16 *)p);
}
# 105 "include/linux/byteorder/little_endian.h"
# 1 "include/linux/byteorder/generic.h" 1
# 143 "include/linux/byteorder/generic.h"
static inline void le16_add_cpu(__le16 *var, u16 val)
{
 *var = (( __le16)(__u16)((( __u16)(__le16)(*var)) + val));
}

static inline void le32_add_cpu(__le32 *var, u32 val)
{
 *var = (( __le32)(__u32)((( __u32)(__le32)(*var)) + val));
}

static inline void le64_add_cpu(__le64 *var, u64 val)
{
 *var = (( __le64)(__u64)((( __u64)(__le64)(*var)) + val));
}

static inline void be16_add_cpu(__be16 *var, u16 val)
{
 *var = (( __be16)(__builtin_constant_p((__u16)(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val))) ? ((__u16)( (((__u16)(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val)) & (__u16)0x00ffU) << 8) | (((__u16)(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val)) & (__u16)0xff00U) >> 8))) : __fswab16(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val))));
}

static inline void be32_add_cpu(__be32 *var, u32 val)
{
 *var = (( __be32)(__builtin_constant_p((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val))) ? ((__u32)( (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0x000000ffUL) << 24) | (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0xff000000UL) >> 24))) : __fswab32(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val))));
}

static inline void be64_add_cpu(__be64 *var, u64 val)
{
 *var = (( __be64)(__builtin_constant_p((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val))) ? ((__u64)( (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val))));
}
# 106 "include/linux/byteorder/little_endian.h" 2
# 5 "/home/iago/torvalds/linux/arch/x86/include/asm/byteorder.h" 2
# 6 "include/asm-generic/bitops/le.h" 2





static inline unsigned long find_next_zero_bit_le(const void *addr,
  unsigned long size, unsigned long offset)
{
 return find_next_zero_bit(addr, size, offset);
}

static inline unsigned long find_next_bit_le(const void *addr,
  unsigned long size, unsigned long offset)
{
 return find_next_bit(addr, size, offset);
}

static inline unsigned long find_first_zero_bit_le(const void *addr,
  unsigned long size)
{
 return find_first_zero_bit(addr, size);
}
# 52 "include/asm-generic/bitops/le.h"
static inline int test_bit_le(int nr, const void *addr)
{
 return (__builtin_constant_p((nr ^ 0)) ? constant_test_bit((nr ^ 0), (addr)) : variable_test_bit((nr ^ 0), (addr)));
}

static inline void __set_bit_le(int nr, void *addr)
{
 __set_bit(nr ^ 0, addr);
}

static inline void __clear_bit_le(int nr, void *addr)
{
 __clear_bit(nr ^ 0, addr);
}

static inline int test_and_set_bit_le(int nr, void *addr)
{
 return test_and_set_bit(nr ^ 0, addr);
}

static inline int test_and_clear_bit_le(int nr, void *addr)
{
 return test_and_clear_bit(nr ^ 0, addr);
}

static inline int __test_and_set_bit_le(int nr, void *addr)
{
 return __test_and_set_bit(nr ^ 0, addr);
}

static inline int __test_and_clear_bit_le(int nr, void *addr)
{
 return __test_and_clear_bit(nr ^ 0, addr);
}
# 460 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h" 2

# 1 "include/asm-generic/bitops/ext2-atomic-setbit.h" 1
# 462 "/home/iago/torvalds/linux/arch/x86/include/asm/bitops.h" 2
# 23 "include/linux/bitops.h" 2






static __inline__ int get_bitmask_order(unsigned int count)
{
 int order;

 order = fls(count);
 return order;
}

static __inline__ int get_count_order(unsigned int count)
{
 int order;

 order = fls(count) - 1;
 if (count & (count - 1))
  order++;
 return order;
}

static inline unsigned long hweight_long(unsigned long w)
{
 return sizeof(w) == 4 ? (__builtin_constant_p(w) ? ((( (!!((w) & (1ULL << 0))) + (!!((w) & (1ULL << 1))) + (!!((w) & (1ULL << 2))) + (!!((w) & (1ULL << 3))) + (!!((w) & (1ULL << 4))) + (!!((w) & (1ULL << 5))) + (!!((w) & (1ULL << 6))) + (!!((w) & (1ULL << 7))) ) + ( (!!(((w) >> 8) & (1ULL << 0))) + (!!(((w) >> 8) & (1ULL << 1))) + (!!(((w) >> 8) & (1ULL << 2))) + (!!(((w) >> 8) & (1ULL << 3))) + (!!(((w) >> 8) & (1ULL << 4))) + (!!(((w) >> 8) & (1ULL << 5))) + (!!(((w) >> 8) & (1ULL << 6))) + (!!(((w) >> 8) & (1ULL << 7))) )) + (( (!!(((w) >> 16) & (1ULL << 0))) + (!!(((w) >> 16) & (1ULL << 1))) + (!!(((w) >> 16) & (1ULL << 2))) + (!!(((w) >> 16) & (1ULL << 3))) + (!!(((w) >> 16) & (1ULL << 4))) + (!!(((w) >> 16) & (1ULL << 5))) + (!!(((w) >> 16) & (1ULL << 6))) + (!!(((w) >> 16) & (1ULL << 7))) ) + ( (!!((((w) >> 16) >> 8) & (1ULL << 0))) + (!!((((w) >> 16) >> 8) & (1ULL << 1))) + (!!((((w) >> 16) >> 8) & (1ULL << 2))) + (!!((((w) >> 16) >> 8) & (1ULL << 3))) + (!!((((w) >> 16) >> 8) & (1ULL << 4))) + (!!((((w) >> 16) >> 8) & (1ULL << 5))) + (!!((((w) >> 16) >> 8) & (1ULL << 6))) + (!!((((w) >> 16) >> 8) & (1ULL << 7))) ))) : __arch_hweight32(w)) : (__builtin_constant_p(w) ? (((( (!!((w) & (1ULL << 0))) + (!!((w) & (1ULL << 1))) + (!!((w) & (1ULL << 2))) + (!!((w) & (1ULL << 3))) + (!!((w) & (1ULL << 4))) + (!!((w) & (1ULL << 5))) + (!!((w) & (1ULL << 6))) + (!!((w) & (1ULL << 7))) ) + ( (!!(((w) >> 8) & (1ULL << 0))) + (!!(((w) >> 8) & (1ULL << 1))) + (!!(((w) >> 8) & (1ULL << 2))) + (!!(((w) >> 8) & (1ULL << 3))) + (!!(((w) >> 8) & (1ULL << 4))) + (!!(((w) >> 8) & (1ULL << 5))) + (!!(((w) >> 8) & (1ULL << 6))) + (!!(((w) >> 8) & (1ULL << 7))) )) + (( (!!(((w) >> 16) & (1ULL << 0))) + (!!(((w) >> 16) & (1ULL << 1))) + (!!(((w) >> 16) & (1ULL << 2))) + (!!(((w) >> 16) & (1ULL << 3))) + (!!(((w) >> 16) & (1ULL << 4))) + (!!(((w) >> 16) & (1ULL << 5))) + (!!(((w) >> 16) & (1ULL << 6))) + (!!(((w) >> 16) & (1ULL << 7))) ) + ( (!!((((w) >> 16) >> 8) & (1ULL << 0))) + (!!((((w) >> 16) >> 8) & (1ULL << 1))) + (!!((((w) >> 16) >> 8) & (1ULL << 2))) + (!!((((w) >> 16) >> 8) & (1ULL << 3))) + (!!((((w) >> 16) >> 8) & (1ULL << 4))) + (!!((((w) >> 16) >> 8) & (1ULL << 5))) + (!!((((w) >> 16) >> 8) & (1ULL << 6))) + (!!((((w) >> 16) >> 8) & (1ULL << 7))) ))) + ((( (!!(((w) >> 32) & (1ULL << 0))) + (!!(((w) >> 32) & (1ULL << 1))) + (!!(((w) >> 32) & (1ULL << 2))) + (!!(((w) >> 32) & (1ULL << 3))) + (!!(((w) >> 32) & (1ULL << 4))) + (!!(((w) >> 32) & (1ULL << 5))) + (!!(((w) >> 32) & (1ULL << 6))) + (!!(((w) >> 32) & (1ULL << 7))) ) + ( (!!((((w) >> 32) >> 8) & (1ULL << 0))) + (!!((((w) >> 32) >> 8) & (1ULL << 1))) + (!!((((w) >> 32) >> 8) & (1ULL << 2))) + (!!((((w) >> 32) >> 8) & (1ULL << 3))) + (!!((((w) >> 32) >> 8) & (1ULL << 4))) + (!!((((w) >> 32) >> 8) & (1ULL << 5))) + (!!((((w) >> 32) >> 8) & (1ULL << 6))) + (!!((((w) >> 32) >> 8) & (1ULL << 7))) )) + (( (!!((((w) >> 32) >> 16) & (1ULL << 0))) + (!!((((w) >> 32) >> 16) & (1ULL << 1))) + (!!((((w) >> 32) >> 16) & (1ULL << 2))) + (!!((((w) >> 32) >> 16) & (1ULL << 3))) + (!!((((w) >> 32) >> 16) & (1ULL << 4))) + (!!((((w) >> 32) >> 16) & (1ULL << 5))) + (!!((((w) >> 32) >> 16) & (1ULL << 6))) + (!!((((w) >> 32) >> 16) & (1ULL << 7))) ) + ( (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 0))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 1))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 2))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 3))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 4))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 5))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 6))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 7))) )))) : __arch_hweight64(w));
}






static inline __u32 rol32(__u32 word, unsigned int shift)
{
 return (word << shift) | (word >> (32 - shift));
}






static inline __u32 ror32(__u32 word, unsigned int shift)
{
 return (word >> shift) | (word << (32 - shift));
}






static inline __u16 rol16(__u16 word, unsigned int shift)
{
 return (word << shift) | (word >> (16 - shift));
}






static inline __u16 ror16(__u16 word, unsigned int shift)
{
 return (word >> shift) | (word << (16 - shift));
}






static inline __u8 rol8(__u8 word, unsigned int shift)
{
 return (word << shift) | (word >> (8 - shift));
}






static inline __u8 ror8(__u8 word, unsigned int shift)
{
 return (word >> shift) | (word << (8 - shift));
}






static inline __s32 sign_extend32(__u32 value, int index)
{
 __u8 shift = 31 - index;
 return (__s32)(value << shift) >> shift;
}

static inline unsigned fls_long(unsigned long l)
{
 if (sizeof(l) == 4)
  return fls(l);
 return fls64(l);
}
# 138 "include/linux/bitops.h"
static inline unsigned long __ffs64(u64 word)
{






 return __ffs((unsigned long)word);
}
# 159 "include/linux/bitops.h"
extern unsigned long find_last_bit(const unsigned long *addr,
       unsigned long size);
# 53 "include/linux/thread_info.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/thread_info.h" 1
# 11 "/home/iago/torvalds/linux/arch/x86/include/asm/thread_info.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/page.h" 1







# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/page_types.h" 1
# 37 "/home/iago/torvalds/linux/arch/x86/include/asm/page_types.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/page_64_types.h" 1
# 54 "/home/iago/torvalds/linux/arch/x86/include/asm/page_64_types.h"
void clear_page(void *page);
void copy_page(void *to, void *from);


extern unsigned long max_pfn;
extern unsigned long phys_base;

extern unsigned long __phys_addr(unsigned long);




extern void init_extra_mapping_uc(unsigned long phys, unsigned long size);
extern void init_extra_mapping_wb(unsigned long phys, unsigned long size);
# 38 "/home/iago/torvalds/linux/arch/x86/include/asm/page_types.h" 2






extern int devmem_is_allowed(unsigned long pagenr);

extern unsigned long max_low_pfn_mapped;
extern unsigned long max_pfn_mapped;

static inline phys_addr_t get_max_mapped(void)
{
 return (phys_addr_t)max_pfn_mapped << 12;
}

extern unsigned long init_memory_mapping(unsigned long start,
      unsigned long end);

extern void initmem_init(void);
extern void free_initmem(void);
# 9 "/home/iago/torvalds/linux/arch/x86/include/asm/page.h" 2


# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/page_64.h" 1
# 12 "/home/iago/torvalds/linux/arch/x86/include/asm/page.h" 2






struct page;

static inline void clear_user_page(void *page, unsigned long vaddr,
       struct page *pg)
{
 clear_page(page);
}

static inline void copy_user_page(void *to, void *from, unsigned long vaddr,
      struct page *topage)
{
 copy_page(to, from);
}
# 60 "/home/iago/torvalds/linux/arch/x86/include/asm/page.h"
extern bool __virt_addr_valid(unsigned long kaddr);




# 1 "include/asm-generic/memory_model.h" 1
# 66 "/home/iago/torvalds/linux/arch/x86/include/asm/page.h" 2
# 1 "include/asm-generic/getorder.h" 1
# 9 "include/asm-generic/getorder.h"
static inline __attribute__((__const__)) int get_order(unsigned long size)
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
# 67 "/home/iago/torvalds/linux/arch/x86/include/asm/page.h" 2
# 12 "/home/iago/torvalds/linux/arch/x86/include/asm/thread_info.h" 2
# 20 "/home/iago/torvalds/linux/arch/x86/include/asm/thread_info.h"
struct task_struct;
struct exec_domain;
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h" 1



# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/processor-flags.h" 1
# 5 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h" 2


struct task_struct;
struct mm_struct;

# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/vm86.h" 1
# 62 "/home/iago/torvalds/linux/arch/x86/include/asm/vm86.h"
struct vm86_regs {



 long ebx;
 long ecx;
 long edx;
 long esi;
 long edi;
 long ebp;
 long eax;
 long __null_ds;
 long __null_es;
 long __null_fs;
 long __null_gs;
 long orig_eax;
 long eip;
 unsigned short cs, __csh;
 long eflags;
 long esp;
 unsigned short ss, __ssh;



 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned short fs, __fsh;
 unsigned short gs, __gsh;
};

struct revectored_struct {
 unsigned long __map[8];
};

struct vm86_struct {
 struct vm86_regs regs;
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
};






struct vm86plus_info_struct {
 unsigned long force_return_for_pic:1;
 unsigned long vm86dbg_active:1;
 unsigned long vm86dbg_TFpendig:1;
 unsigned long unused:28;
 unsigned long is_vm86pus:1;
 unsigned char vm86dbg_intxxtab[32];
};
struct vm86plus_struct {
 struct vm86_regs regs;
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
 struct vm86plus_info_struct vm86plus;
};



# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/ptrace.h" 1




# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/ptrace-abi.h" 1
# 6 "/home/iago/torvalds/linux/arch/x86/include/asm/ptrace.h" 2



# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/segment.h" 1
# 148 "/home/iago/torvalds/linux/arch/x86/include/asm/segment.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/cache.h" 1



# 1 "include/linux/linkage.h" 1




# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/linkage.h" 1
# 6 "include/linux/linkage.h" 2
# 5 "/home/iago/torvalds/linux/arch/x86/include/asm/cache.h" 2
# 149 "/home/iago/torvalds/linux/arch/x86/include/asm/segment.h" 2
# 214 "/home/iago/torvalds/linux/arch/x86/include/asm/segment.h"
extern const char early_idt_handlers[32][10];
# 10 "/home/iago/torvalds/linux/arch/x86/include/asm/ptrace.h" 2
# 99 "/home/iago/torvalds/linux/arch/x86/include/asm/ptrace.h"
struct pt_regs {
 unsigned long r15;
 unsigned long r14;
 unsigned long r13;
 unsigned long r12;
 unsigned long bp;
 unsigned long bx;

 unsigned long r11;
 unsigned long r10;
 unsigned long r9;
 unsigned long r8;
 unsigned long ax;
 unsigned long cx;
 unsigned long dx;
 unsigned long si;
 unsigned long di;
 unsigned long orig_ax;


 unsigned long ip;
 unsigned long cs;
 unsigned long flags;
 unsigned long sp;
 unsigned long ss;

};







# 1 "include/linux/init.h" 1
# 138 "include/linux/init.h"
typedef int (*initcall_t)(void);
typedef void (*exitcall_t)(void);

extern initcall_t __con_initcall_start[], __con_initcall_end[];
extern initcall_t __security_initcall_start[], __security_initcall_end[];


typedef void (*ctor_fn_t)(void);


extern int do_one_initcall(initcall_t fn);
extern char __attribute__ ((__section__(".init.data"))) boot_command_line[];
extern char *saved_command_line;
extern unsigned int reset_devices;


void setup_arch(char **);
void prepare_namespace(void);

extern void (*late_time_init)(void);

extern int initcall_debug;
# 225 "include/linux/init.h"
struct obs_kernel_param {
 const char *str;
 int (*setup_func)(char *);
 int early;
};
# 254 "include/linux/init.h"
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) parse_early_param(void);
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) parse_early_options(char *cmdline);
# 134 "/home/iago/torvalds/linux/arch/x86/include/asm/ptrace.h" 2

# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt_types.h" 1
# 42 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt_types.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/desc_defs.h" 1
# 22 "/home/iago/torvalds/linux/arch/x86/include/asm/desc_defs.h"
struct desc_struct {
 union {
  struct {
   unsigned int a;
   unsigned int b;
  };
  struct {
   u16 limit0;
   u16 base0;
   unsigned base1: 8, type: 4, s: 1, dpl: 2, p: 1;
   unsigned limit: 4, avl: 1, l: 1, d: 1, g: 1, base2: 8;
  };
 };
} __attribute__((packed));







enum {
 GATE_INTERRUPT = 0xE,
 GATE_TRAP = 0xF,
 GATE_CALL = 0xC,
 GATE_TASK = 0x5,
};


struct gate_struct64 {
 u16 offset_low;
 u16 segment;
 unsigned ist : 3, zero0 : 5, type : 5, dpl : 2, p : 1;
 u16 offset_middle;
 u32 offset_high;
 u32 zero1;
} __attribute__((packed));





enum {
 DESC_TSS = 0x9,
 DESC_LDT = 0x2,
 DESCTYPE_S = 0x10,
};


struct ldttss_desc64 {
 u16 limit0;
 u16 base0;
 unsigned base1 : 8, type : 5, dpl : 2, p : 1;
 unsigned limit1 : 4, zero0 : 3, g : 1, base2 : 8;
 u32 base3;
 u32 zero1;
} __attribute__((packed));


typedef struct gate_struct64 gate_desc;
typedef struct ldttss_desc64 ldt_desc;
typedef struct ldttss_desc64 tss_desc;
# 94 "/home/iago/torvalds/linux/arch/x86/include/asm/desc_defs.h"
struct desc_ptr {
 unsigned short size;
 unsigned long address;
} __attribute__((packed)) ;
# 43 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt_types.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/kmap_types.h" 1







# 1 "include/asm-generic/kmap_types.h" 1
# 10 "include/asm-generic/kmap_types.h"
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
 KM_SYNC_ICACHE,
 KM_SYNC_DCACHE,

 KM_UML_USERCOPY,
 KM_IRQ_PTE,
 KM_NMI,
 KM_NMI_PTE,
 KM_KDB,



 KM_TYPE_NR
};
# 9 "/home/iago/torvalds/linux/arch/x86/include/asm/kmap_types.h" 2
# 44 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt_types.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable_types.h" 1
# 179 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable_types.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable_64_types.h" 1
# 10 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable_64_types.h"
typedef unsigned long pteval_t;
typedef unsigned long pmdval_t;
typedef unsigned long pudval_t;
typedef unsigned long pgdval_t;
typedef unsigned long pgprotval_t;

typedef struct { pteval_t pte; } pte_t;
# 180 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable_types.h" 2
# 192 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable_types.h"
typedef struct pgprot { pgprotval_t pgprot; } pgprot_t;

typedef struct { pgdval_t pgd; } pgd_t;

static inline pgd_t native_make_pgd(pgdval_t val)
{
 return (pgd_t) { val };
}

static inline pgdval_t native_pgd_val(pgd_t pgd)
{
 return pgd.pgd;
}

static inline pgdval_t pgd_flags(pgd_t pgd)
{
 return native_pgd_val(pgd) & (~((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))));
}


typedef struct { pudval_t pud; } pud_t;

static inline pud_t native_make_pud(pmdval_t val)
{
 return (pud_t) { val };
}

static inline pudval_t native_pud_val(pud_t pud)
{
 return pud.pud;
}
# 233 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable_types.h"
typedef struct { pmdval_t pmd; } pmd_t;

static inline pmd_t native_make_pmd(pmdval_t val)
{
 return (pmd_t) { val };
}

static inline pmdval_t native_pmd_val(pmd_t pmd)
{
 return pmd.pmd;
}
# 253 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable_types.h"
static inline pudval_t pud_flags(pud_t pud)
{
 return native_pud_val(pud) & (~((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))));
}

static inline pmdval_t pmd_flags(pmd_t pmd)
{
 return native_pmd_val(pmd) & (~((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))));
}

static inline pte_t native_make_pte(pteval_t val)
{
 return (pte_t) { .pte = val };
}

static inline pteval_t native_pte_val(pte_t pte)
{
 return pte.pte;
}

static inline pteval_t pte_flags(pte_t pte)
{
 return native_pte_val(pte) & (~((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))));
}





typedef struct page *pgtable_t;

extern pteval_t __supported_pte_mask;
extern void set_nx(void);
extern int nx_enabled;


extern pgprot_t pgprot_writecombine(pgprot_t prot);





struct file;
pgprot_t phys_mem_access_prot(struct file *file, unsigned long pfn,
                              unsigned long size, pgprot_t vma_prot);
int phys_mem_access_prot_allowed(struct file *file, unsigned long pfn,
                              unsigned long size, pgprot_t *vma_prot);


void set_pte_vaddr(unsigned long vaddr, pte_t pte);

extern void native_pagetable_reserve(u64 start, u64 end);
# 313 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable_types.h"
struct seq_file;
extern void arch_report_meminfo(struct seq_file *m);

enum {
 PG_LEVEL_NONE,
 PG_LEVEL_4K,
 PG_LEVEL_2M,
 PG_LEVEL_1G,
 PG_LEVEL_NUM
};


extern void update_page_count(int level, unsigned long pages);
# 336 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable_types.h"
extern pte_t *lookup_address(unsigned long address, unsigned int *level);
# 45 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt_types.h" 2

struct page;
struct thread_struct;
struct desc_ptr;
struct tss_struct;
struct mm_struct;
struct desc_struct;
struct task_struct;
struct cpumask;





struct paravirt_callee_save {
 void *func;
};


struct pv_info {
 unsigned int kernel_rpl;
 int shared_kernel_pmd;


 u16 extra_user_64bit_cs;


 int paravirt_enabled;
 const char *name;
};

struct pv_init_ops {
# 85 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt_types.h"
 unsigned (*patch)(u8 type, u16 clobber, void *insnbuf,
     unsigned long addr, unsigned len);
};


struct pv_lazy_ops {

 void (*enter)(void);
 void (*leave)(void);
};

struct pv_time_ops {
 unsigned long long (*sched_clock)(void);
 unsigned long long (*steal_clock)(int cpu);
 unsigned long (*get_tsc_khz)(void);
};

struct pv_cpu_ops {

 unsigned long (*get_debugreg)(int regno);
 void (*set_debugreg)(int regno, unsigned long value);

 void (*clts)(void);

 unsigned long (*read_cr0)(void);
 void (*write_cr0)(unsigned long);

 unsigned long (*read_cr4_safe)(void);
 unsigned long (*read_cr4)(void);
 void (*write_cr4)(unsigned long);


 unsigned long (*read_cr8)(void);
 void (*write_cr8)(unsigned long);



 void (*load_tr_desc)(void);
 void (*load_gdt)(const struct desc_ptr *);
 void (*load_idt)(const struct desc_ptr *);
 void (*store_gdt)(struct desc_ptr *);
 void (*store_idt)(struct desc_ptr *);
 void (*set_ldt)(const void *desc, unsigned entries);
 unsigned long (*store_tr)(void);
 void (*load_tls)(struct thread_struct *t, unsigned int cpu);

 void (*load_gs_index)(unsigned int idx);

 void (*write_ldt_entry)(struct desc_struct *ldt, int entrynum,
    const void *desc);
 void (*write_gdt_entry)(struct desc_struct *,
    int entrynum, const void *desc, int size);
 void (*write_idt_entry)(gate_desc *,
    int entrynum, const gate_desc *gate);
 void (*alloc_ldt)(struct desc_struct *ldt, unsigned entries);
 void (*free_ldt)(struct desc_struct *ldt, unsigned entries);

 void (*load_sp0)(struct tss_struct *tss, struct thread_struct *t);

 void (*set_iopl_mask)(unsigned mask);

 void (*wbinvd)(void);
 void (*io_delay)(void);


 void (*cpuid)(unsigned int *eax, unsigned int *ebx,
        unsigned int *ecx, unsigned int *edx);



 u64 (*read_msr)(unsigned int msr, int *err);
 int (*rdmsr_regs)(u32 *regs);
 int (*write_msr)(unsigned int msr, unsigned low, unsigned high);
 int (*wrmsr_regs)(u32 *regs);

 u64 (*read_tsc)(void);
 u64 (*read_pmc)(int counter);
 unsigned long long (*read_tscp)(unsigned int *aux);







 void (*irq_enable_sysexit)(void);







 void (*usergs_sysret64)(void);







 void (*usergs_sysret32)(void);



 void (*iret)(void);

 void (*swapgs)(void);

 void (*start_context_switch)(struct task_struct *prev);
 void (*end_context_switch)(struct task_struct *next);
};

struct pv_irq_ops {
# 208 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt_types.h"
 struct paravirt_callee_save save_fl;
 struct paravirt_callee_save restore_fl;
 struct paravirt_callee_save irq_disable;
 struct paravirt_callee_save irq_enable;

 void (*safe_halt)(void);
 void (*halt)(void);


 void (*adjust_exception_frame)(void);

};

struct pv_apic_ops {

 void (*startup_ipi_hook)(int phys_apicid,
     unsigned long start_eip,
     unsigned long start_esp);

};

struct pv_mmu_ops {
 unsigned long (*read_cr2)(void);
 void (*write_cr2)(unsigned long);

 unsigned long (*read_cr3)(void);
 void (*write_cr3)(unsigned long);





 void (*activate_mm)(struct mm_struct *prev,
       struct mm_struct *next);
 void (*dup_mmap)(struct mm_struct *oldmm,
    struct mm_struct *mm);
 void (*exit_mmap)(struct mm_struct *mm);



 void (*flush_tlb_user)(void);
 void (*flush_tlb_kernel)(void);
 void (*flush_tlb_single)(unsigned long addr);
 void (*flush_tlb_others)(const struct cpumask *cpus,
     struct mm_struct *mm,
     unsigned long va);


 int (*pgd_alloc)(struct mm_struct *mm);
 void (*pgd_free)(struct mm_struct *mm, pgd_t *pgd);





 void (*alloc_pte)(struct mm_struct *mm, unsigned long pfn);
 void (*alloc_pmd)(struct mm_struct *mm, unsigned long pfn);
 void (*alloc_pud)(struct mm_struct *mm, unsigned long pfn);
 void (*release_pte)(unsigned long pfn);
 void (*release_pmd)(unsigned long pfn);
 void (*release_pud)(unsigned long pfn);


 void (*set_pte)(pte_t *ptep, pte_t pteval);
 void (*set_pte_at)(struct mm_struct *mm, unsigned long addr,
      pte_t *ptep, pte_t pteval);
 void (*set_pmd)(pmd_t *pmdp, pmd_t pmdval);
 void (*set_pmd_at)(struct mm_struct *mm, unsigned long addr,
      pmd_t *pmdp, pmd_t pmdval);
 void (*pte_update)(struct mm_struct *mm, unsigned long addr,
      pte_t *ptep);
 void (*pte_update_defer)(struct mm_struct *mm,
     unsigned long addr, pte_t *ptep);
 void (*pmd_update)(struct mm_struct *mm, unsigned long addr,
      pmd_t *pmdp);
 void (*pmd_update_defer)(struct mm_struct *mm,
     unsigned long addr, pmd_t *pmdp);

 pte_t (*ptep_modify_prot_start)(struct mm_struct *mm, unsigned long addr,
     pte_t *ptep);
 void (*ptep_modify_prot_commit)(struct mm_struct *mm, unsigned long addr,
     pte_t *ptep, pte_t pte);

 struct paravirt_callee_save pte_val;
 struct paravirt_callee_save make_pte;

 struct paravirt_callee_save pgd_val;
 struct paravirt_callee_save make_pgd;
# 306 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt_types.h"
 void (*set_pud)(pud_t *pudp, pud_t pudval);

 struct paravirt_callee_save pmd_val;
 struct paravirt_callee_save make_pmd;


 struct paravirt_callee_save pud_val;
 struct paravirt_callee_save make_pud;

 void (*set_pgd)(pgd_t *pudp, pgd_t pgdval);



 struct pv_lazy_ops lazy_mode;





 void (*set_fixmap)(unsigned idx,
      phys_addr_t phys, pgprot_t flags);
};

struct arch_spinlock;
struct pv_lock_ops {
 int (*spin_is_locked)(struct arch_spinlock *lock);
 int (*spin_is_contended)(struct arch_spinlock *lock);
 void (*spin_lock)(struct arch_spinlock *lock);
 void (*spin_lock_flags)(struct arch_spinlock *lock, unsigned long flags);
 int (*spin_trylock)(struct arch_spinlock *lock);
 void (*spin_unlock)(struct arch_spinlock *lock);
};




struct paravirt_patch_template {
 struct pv_init_ops pv_init_ops;
 struct pv_time_ops pv_time_ops;
 struct pv_cpu_ops pv_cpu_ops;
 struct pv_irq_ops pv_irq_ops;
 struct pv_apic_ops pv_apic_ops;
 struct pv_mmu_ops pv_mmu_ops;
 struct pv_lock_ops pv_lock_ops;
};

extern struct pv_info pv_info;
extern struct pv_init_ops pv_init_ops;
extern struct pv_time_ops pv_time_ops;
extern struct pv_cpu_ops pv_cpu_ops;
extern struct pv_irq_ops pv_irq_ops;
extern struct pv_apic_ops pv_apic_ops;
extern struct pv_mmu_ops pv_mmu_ops;
extern struct pv_lock_ops pv_lock_ops;
# 393 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt_types.h"
unsigned paravirt_patch_nop(void);
unsigned paravirt_patch_ident_32(void *insnbuf, unsigned len);
unsigned paravirt_patch_ident_64(void *insnbuf, unsigned len);
unsigned paravirt_patch_ignore(unsigned len);
unsigned paravirt_patch_call(void *insnbuf,
        const void *target, u16 tgt_clobbers,
        unsigned long addr, u16 site_clobbers,
        unsigned len);
unsigned paravirt_patch_jmp(void *insnbuf, const void *target,
       unsigned long addr, unsigned len);
unsigned paravirt_patch_default(u8 type, u16 clobbers, void *insnbuf,
    unsigned long addr, unsigned len);

unsigned paravirt_patch_insns(void *insnbuf, unsigned len,
         const char *start, const char *end);

unsigned native_patch(u8 type, u16 clobbers, void *ibuf,
        unsigned long addr, unsigned len);

int paravirt_disable_iospace(void);
# 671 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt_types.h"
enum paravirt_lazy_mode {
 PARAVIRT_LAZY_NONE,
 PARAVIRT_LAZY_MMU,
 PARAVIRT_LAZY_CPU,
};

enum paravirt_lazy_mode paravirt_get_lazy_mode(void);
void paravirt_start_context_switch(struct task_struct *prev);
void paravirt_end_context_switch(struct task_struct *next);

void paravirt_enter_lazy_mmu(void);
void paravirt_leave_lazy_mmu(void);

void _paravirt_nop(void);
u32 _paravirt_ident_32(u32);
u64 _paravirt_ident_64(u64);




struct paravirt_patch_site {
 u8 *instr;
 u8 instrtype;
 u8 len;
 u16 clobbers;
};

extern struct paravirt_patch_site __parainstructions[],
 __parainstructions_end[];
# 136 "/home/iago/torvalds/linux/arch/x86/include/asm/ptrace.h" 2


struct cpuinfo_x86;
struct task_struct;

extern unsigned long profile_pc(struct pt_regs *regs);


extern unsigned long
convert_ip_to_linear(struct task_struct *child, struct pt_regs *regs);
extern void send_sigtrap(struct task_struct *tsk, struct pt_regs *regs,
    int error_code, int si_code);
void signal_fault(struct pt_regs *regs, void *frame, char *where);

extern long syscall_trace_enter(struct pt_regs *);
extern void syscall_trace_leave(struct pt_regs *);

static inline unsigned long regs_return_value(struct pt_regs *regs)
{
 return regs->ax;
}
# 165 "/home/iago/torvalds/linux/arch/x86/include/asm/ptrace.h"
static inline int user_mode(struct pt_regs *regs)
{



 return !!(regs->cs & 3);

}

static inline int user_mode_vm(struct pt_regs *regs)
{




 return user_mode(regs);

}

static inline int v8086_mode(struct pt_regs *regs)
{



 return 0;

}


static inline bool user_64bit_mode(struct pt_regs *regs)
{
# 204 "/home/iago/torvalds/linux/arch/x86/include/asm/ptrace.h"
 return regs->cs == (6*8+3) || regs->cs == pv_info.extra_user_64bit_cs;

}
# 216 "/home/iago/torvalds/linux/arch/x86/include/asm/ptrace.h"
static inline unsigned long kernel_stack_pointer(struct pt_regs *regs)
{



 return regs->sp;

}





# 1 "include/asm-generic/ptrace.h" 1
# 22 "include/asm-generic/ptrace.h"
static inline unsigned long instruction_pointer(struct pt_regs *regs)
{
 return ((regs)->ip);
}
static inline void instruction_pointer_set(struct pt_regs *regs,
                                           unsigned long val)
{
 (((regs)->ip) = (val));
}
# 44 "include/asm-generic/ptrace.h"
static inline unsigned long user_stack_pointer(struct pt_regs *regs)
{
 return ((regs)->sp);
}
static inline void user_stack_pointer_set(struct pt_regs *regs,
                                          unsigned long val)
{
 (((regs)->sp) = (val));
}
# 62 "include/asm-generic/ptrace.h"
static inline unsigned long frame_pointer(struct pt_regs *regs)
{
 return ((regs)->bp);
}
static inline void frame_pointer_set(struct pt_regs *regs,
                                     unsigned long val)
{
 (((regs)->bp) = (val));
}
# 230 "/home/iago/torvalds/linux/arch/x86/include/asm/ptrace.h" 2


extern int regs_query_register_offset(const char *name);
extern const char *regs_query_register_name(unsigned int offset);
# 245 "/home/iago/torvalds/linux/arch/x86/include/asm/ptrace.h"
static inline unsigned long regs_get_register(struct pt_regs *regs,
           unsigned int offset)
{
 if (__builtin_expect(!!(offset > (__builtin_offsetof(struct pt_regs,ss))), 0))
  return 0;
 return *(unsigned long *)((unsigned long)regs + offset);
}
# 261 "/home/iago/torvalds/linux/arch/x86/include/asm/ptrace.h"
static inline int regs_within_kernel_stack(struct pt_regs *regs,
        unsigned long addr)
{
 return ((addr & ~((((1UL) << 12) << 1) - 1)) ==
  (kernel_stack_pointer(regs) & ~((((1UL) << 12) << 1) - 1)));
}
# 277 "/home/iago/torvalds/linux/arch/x86/include/asm/ptrace.h"
static inline unsigned long regs_get_kernel_stack_nth(struct pt_regs *regs,
            unsigned int n)
{
 unsigned long *addr = (unsigned long *)kernel_stack_pointer(regs);
 addr += n;
 if (regs_within_kernel_stack(regs, (unsigned long)addr))
  return *addr;
 else
  return 0;
}
# 297 "/home/iago/torvalds/linux/arch/x86/include/asm/ptrace.h"
struct user_desc;
extern int do_get_thread_area(struct task_struct *p, int idx,
         struct user_desc *info);
extern int do_set_thread_area(struct task_struct *p, int idx,
         struct user_desc *info, int can_allocate);
# 131 "/home/iago/torvalds/linux/arch/x86/include/asm/vm86.h" 2
# 141 "/home/iago/torvalds/linux/arch/x86/include/asm/vm86.h"
struct kernel_vm86_regs {



 struct pt_regs pt;



 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned short fs, __fsh;
 unsigned short gs, __gsh;
};

struct kernel_vm86_struct {
 struct kernel_vm86_regs regs;
# 166 "/home/iago/torvalds/linux/arch/x86/include/asm/vm86.h"
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
 struct vm86plus_info_struct vm86plus;
 struct pt_regs *regs32;
# 183 "/home/iago/torvalds/linux/arch/x86/include/asm/vm86.h"
};
# 199 "/home/iago/torvalds/linux/arch/x86/include/asm/vm86.h"
static inline int handle_vm86_trap(struct kernel_vm86_regs *a, long b, int c)
{
 return 0;
}
# 11 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/math_emu.h" 1
# 11 "/home/iago/torvalds/linux/arch/x86/include/asm/math_emu.h"
struct math_emu_info {
 long ___orig_eip;
 union {
  struct pt_regs *regs;
  struct kernel_vm86_regs *vm86;
 };
};
# 12 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h" 2


# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/sigcontext.h" 1
# 23 "/home/iago/torvalds/linux/arch/x86/include/asm/sigcontext.h"
struct _fpx_sw_bytes {
 __u32 magic1;
 __u32 extended_size;


 __u64 xstate_bv;




 __u32 xstate_size;




 __u32 padding[7];
};
# 169 "/home/iago/torvalds/linux/arch/x86/include/asm/sigcontext.h"
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
 __u32 reserved2[12];
 union {
  __u32 reserved3[12];
  struct _fpx_sw_bytes sw_reserved;

 };
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
 unsigned long di;
 unsigned long si;
 unsigned long bp;
 unsigned long bx;
 unsigned long dx;
 unsigned long ax;
 unsigned long cx;
 unsigned long sp;
 unsigned long ip;
 unsigned long flags;
 unsigned short cs;
 unsigned short gs;
 unsigned short fs;
 unsigned short __pad0;
 unsigned long err;
 unsigned long trapno;
 unsigned long oldmask;
 unsigned long cr2;
# 225 "/home/iago/torvalds/linux/arch/x86/include/asm/sigcontext.h"
 void *fpstate;
 unsigned long reserved1[8];
};
# 266 "/home/iago/torvalds/linux/arch/x86/include/asm/sigcontext.h"
struct _xsave_hdr {
 __u64 xstate_bv;
 __u64 reserved1[2];
 __u64 reserved2[5];
};

struct _ymmh_state {

 __u32 ymmh_space[64];
};







struct _xstate {
 struct _fpstate fpstate;
 struct _xsave_hdr xstate_hdr;
 struct _ymmh_state ymmh;

};
# 15 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/current.h" 1




# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/percpu.h" 1
# 44 "/home/iago/torvalds/linux/arch/x86/include/asm/percpu.h"
# 1 "include/linux/kernel.h" 1
# 12 "include/linux/kernel.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 102 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 13 "include/linux/kernel.h" 2





# 1 "include/linux/log2.h" 1
# 21 "include/linux/log2.h"
extern __attribute__((const, noreturn))
int ____ilog2_NaN(void);
# 31 "include/linux/log2.h"
static inline __attribute__((const))
int __ilog2_u32(u32 n)
{
 return fls(n) - 1;
}



static inline __attribute__((const))
int __ilog2_u64(u64 n)
{
 return fls64(n) - 1;
}







static inline __attribute__((const))
bool is_power_of_2(unsigned long n)
{
 return (n != 0 && ((n & (n - 1)) == 0));
}




static inline __attribute__((const))
unsigned long __roundup_pow_of_two(unsigned long n)
{
 return 1UL << fls_long(n - 1);
}




static inline __attribute__((const))
unsigned long __rounddown_pow_of_two(unsigned long n)
{
 return 1UL << (fls_long(n) - 1);
}
# 19 "include/linux/kernel.h" 2

# 1 "include/linux/printk.h" 1





extern const char linux_banner[];
extern const char linux_proc_banner[];
# 27 "include/linux/printk.h"
extern int console_printk[];






static inline void console_silent(void)
{
 (console_printk[0]) = 0;
}

static inline void console_verbose(void)
{
 if ((console_printk[0]))
  (console_printk[0]) = 15;
}

struct va_format {
 const char *fmt;
 va_list *va;
};
# 85 "include/linux/printk.h"
static inline __attribute__ ((format (printf, 1, 2)))
int no_printk(const char *fmt, ...)
{
 return 0;
}

extern __attribute__ ((format (printf, 1, 2)))
void early_printk(const char *fmt, ...);

extern int printk_needs_cpu(int cpu);
extern void printk_tick(void);


 __attribute__ ((format (printf, 1, 0)))
int vprintk(const char *fmt, va_list args);
 __attribute__ ((format (printf, 1, 2))) __attribute__((__cold__))
int printk(const char *fmt, ...);






extern int __printk_ratelimit(const char *func);

extern bool printk_timed_ratelimit(unsigned long *caller_jiffies,
       unsigned int interval_msec);

extern int printk_delay_msec;
extern int dmesg_restrict;
extern int kptr_restrict;

void log_buf_kexec_setup(void);
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) setup_log_buf(int early);
# 149 "include/linux/printk.h"
extern void dump_stack(void) __attribute__((__cold__));
# 282 "include/linux/printk.h"
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
# 21 "include/linux/kernel.h" 2
# 1 "include/linux/dynamic_debug.h" 1







extern long long dynamic_debug_enabled;
extern long long dynamic_debug_enabled2;






struct _ddebug {




 const char *modname;
 const char *function;
 const char *filename;
 const char *format;
 unsigned int lineno:24;
# 37 "include/linux/dynamic_debug.h"
 unsigned int flags:8;
 char enabled;
} __attribute__((aligned(8)));


int ddebug_add_module(struct _ddebug *tab, unsigned int n,
    const char *modname);


extern int ddebug_remove_module(const char *mod_name);
extern int __dynamic_pr_debug(struct _ddebug *descriptor, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3)));
# 22 "include/linux/kernel.h" 2

# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/bug.h" 1
# 38 "/home/iago/torvalds/linux/arch/x86/include/asm/bug.h"
# 1 "include/asm-generic/bug.h" 1
# 10 "include/asm-generic/bug.h"
struct bug_entry {



 signed int bug_addr_disp;





 signed int file_disp;

 unsigned short line;

 unsigned short flags;
};
# 64 "include/asm-generic/bug.h"
extern void warn_slowpath_fmt(const char *file, const int line,
  const char *fmt, ...) __attribute__((format(printf, 3, 4)));
extern void warn_slowpath_fmt_taint(const char *file, const int line,
        unsigned taint, const char *fmt, ...)
 __attribute__((format(printf, 4, 5)));
extern void warn_slowpath_null(const char *file, const int line);
# 39 "/home/iago/torvalds/linux/arch/x86/include/asm/bug.h" 2
# 24 "include/linux/kernel.h" 2
# 121 "include/linux/kernel.h"
struct completion;
struct pt_regs;
struct user;
# 133 "include/linux/kernel.h"
  void __might_sleep(const char *file, int line, int preempt_offset);
# 178 "include/linux/kernel.h"
void might_fault(void);







extern struct atomic_notifier_head panic_notifier_list;
extern long (*panic_blink)(int state);
 void panic(const char * fmt, ...)
 __attribute__ ((noreturn, format (printf, 1, 2))) __attribute__((__cold__));
extern void oops_enter(void);
extern void oops_exit(void);
void print_oops_end_marker(void);
extern int oops_may_print(void);
 void do_exit(long error_code)
 __attribute__((noreturn));
 void complete_and_exit(struct completion *, long)
 __attribute__((noreturn));


int __attribute__((warn_unused_result)) _kstrtoul(const char *s, unsigned int base, unsigned long *res);
int __attribute__((warn_unused_result)) _kstrtol(const char *s, unsigned int base, long *res);

int __attribute__((warn_unused_result)) kstrtoull(const char *s, unsigned int base, unsigned long long *res);
int __attribute__((warn_unused_result)) kstrtoll(const char *s, unsigned int base, long long *res);
static inline int __attribute__((warn_unused_result)) kstrtoul(const char *s, unsigned int base, unsigned long *res)
{




 if (sizeof(unsigned long) == sizeof(unsigned long long) &&
     __alignof__(unsigned long) == __alignof__(unsigned long long))
  return kstrtoull(s, base, (unsigned long long *)res);
 else
  return _kstrtoul(s, base, res);
}

static inline int __attribute__((warn_unused_result)) kstrtol(const char *s, unsigned int base, long *res)
{




 if (sizeof(long) == sizeof(long long) &&
     __alignof__(long) == __alignof__(long long))
  return kstrtoll(s, base, (long long *)res);
 else
  return _kstrtol(s, base, res);
}

int __attribute__((warn_unused_result)) kstrtouint(const char *s, unsigned int base, unsigned int *res);
int __attribute__((warn_unused_result)) kstrtoint(const char *s, unsigned int base, int *res);

static inline int __attribute__((warn_unused_result)) kstrtou64(const char *s, unsigned int base, u64 *res)
{
 return kstrtoull(s, base, res);
}

static inline int __attribute__((warn_unused_result)) kstrtos64(const char *s, unsigned int base, s64 *res)
{
 return kstrtoll(s, base, res);
}

static inline int __attribute__((warn_unused_result)) kstrtou32(const char *s, unsigned int base, u32 *res)
{
 return kstrtouint(s, base, res);
}

static inline int __attribute__((warn_unused_result)) kstrtos32(const char *s, unsigned int base, s32 *res)
{
 return kstrtoint(s, base, res);
}

int __attribute__((warn_unused_result)) kstrtou16(const char *s, unsigned int base, u16 *res);
int __attribute__((warn_unused_result)) kstrtos16(const char *s, unsigned int base, s16 *res);
int __attribute__((warn_unused_result)) kstrtou8(const char *s, unsigned int base, u8 *res);
int __attribute__((warn_unused_result)) kstrtos8(const char *s, unsigned int base, s8 *res);

int __attribute__((warn_unused_result)) kstrtoull_from_user(const char *s, size_t count, unsigned int base, unsigned long long *res);
int __attribute__((warn_unused_result)) kstrtoll_from_user(const char *s, size_t count, unsigned int base, long long *res);
int __attribute__((warn_unused_result)) kstrtoul_from_user(const char *s, size_t count, unsigned int base, unsigned long *res);
int __attribute__((warn_unused_result)) kstrtol_from_user(const char *s, size_t count, unsigned int base, long *res);
int __attribute__((warn_unused_result)) kstrtouint_from_user(const char *s, size_t count, unsigned int base, unsigned int *res);
int __attribute__((warn_unused_result)) kstrtoint_from_user(const char *s, size_t count, unsigned int base, int *res);
int __attribute__((warn_unused_result)) kstrtou16_from_user(const char *s, size_t count, unsigned int base, u16 *res);
int __attribute__((warn_unused_result)) kstrtos16_from_user(const char *s, size_t count, unsigned int base, s16 *res);
int __attribute__((warn_unused_result)) kstrtou8_from_user(const char *s, size_t count, unsigned int base, u8 *res);
int __attribute__((warn_unused_result)) kstrtos8_from_user(const char *s, size_t count, unsigned int base, s8 *res);

static inline int __attribute__((warn_unused_result)) kstrtou64_from_user(const char *s, size_t count, unsigned int base, u64 *res)
{
 return kstrtoull_from_user(s, count, base, res);
}

static inline int __attribute__((warn_unused_result)) kstrtos64_from_user(const char *s, size_t count, unsigned int base, s64 *res)
{
 return kstrtoll_from_user(s, count, base, res);
}

static inline int __attribute__((warn_unused_result)) kstrtou32_from_user(const char *s, size_t count, unsigned int base, u32 *res)
{
 return kstrtouint_from_user(s, count, base, res);
}

static inline int __attribute__((warn_unused_result)) kstrtos32_from_user(const char *s, size_t count, unsigned int base, s32 *res)
{
 return kstrtoint_from_user(s, count, base, res);
}

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
extern unsigned long long memparse(const char *ptr, char **retptr);

extern int core_kernel_text(unsigned long addr);
extern int core_kernel_data(unsigned long addr);
extern int __kernel_text_address(unsigned long addr);
extern int kernel_text_address(unsigned long addr);
extern int func_ptr_is_kernel_text(void *ptr);

struct pid;
extern struct pid *session_of_pgrp(struct pid *pgrp);

unsigned long int_sqrt(unsigned long);

extern void bust_spinlocks(int yes);
extern void wake_up_klogd(void);
extern int oops_in_progress;
extern int panic_timeout;
extern int panic_on_oops;
extern int panic_on_unrecovered_nmi;
extern int panic_on_io_nmi;
extern const char *print_tainted(void);
extern void add_taint(unsigned flag);
extern int test_taint(unsigned flag);
extern unsigned long get_taint(void);
extern int root_mountflags;

extern bool early_boot_irqs_disabled;


extern enum system_states {
 SYSTEM_BOOTING,
 SYSTEM_RUNNING,
 SYSTEM_HALT,
 SYSTEM_POWER_OFF,
 SYSTEM_RESTART,
 SYSTEM_SUSPEND_DISK,
} system_state;
# 373 "include/linux/kernel.h"
extern const char hex_asc[];



static inline char *pack_hex_byte(char *buf, u8 byte)
{
 *buf++ = hex_asc[((byte) & 0xf0) >> 4];
 *buf++ = hex_asc[((byte) & 0x0f)];
 return buf;
}

extern int hex_to_bin(char ch);
extern void hex2bin(u8 *dst, const char *src, size_t count);
# 407 "include/linux/kernel.h"
void tracing_on(void);
void tracing_off(void);

void tracing_off_permanent(void);
int tracing_is_on(void);







enum ftrace_dump_mode {
 DUMP_NONE,
 DUMP_ALL,
 DUMP_ORIG,
};


extern void tracing_start(void);
extern void tracing_stop(void);
extern void ftrace_off_permanent(void);

static inline void __attribute__ ((format (printf, 1, 2)))
____trace_printk_check_format(const char *fmt, ...)
{
}
# 470 "include/linux/kernel.h"
extern int
__trace_bprintk(unsigned long ip, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3)));

extern int
__trace_printk(unsigned long ip, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3)));

extern void trace_dump_stack(void);
# 497 "include/linux/kernel.h"
extern int
__ftrace_vbprintk(unsigned long ip, const char *fmt, va_list ap);

extern int
__ftrace_vprintk(unsigned long ip, const char *fmt, va_list ap);

extern void ftrace_dump(enum ftrace_dump_mode oops_dump_mode);
# 693 "include/linux/kernel.h"
extern int __build_bug_on_failed;
# 724 "include/linux/kernel.h"
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
# 45 "/home/iago/torvalds/linux/arch/x86/include/asm/percpu.h" 2
# 88 "/home/iago/torvalds/linux/arch/x86/include/asm/percpu.h"
extern void __bad_percpu_size(void);
# 549 "/home/iago/torvalds/linux/arch/x86/include/asm/percpu.h"
static inline __attribute__((always_inline)) int x86_this_cpu_constant_test_bit(unsigned int nr,
                        const unsigned long *addr)
{
 unsigned long *a = (unsigned long *)addr + nr / 64;

 return ((1UL << (nr % 64)) & ({ typeof(*a) pfo_ret__; switch (sizeof(*a)) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m" (*a)); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m" (*a)); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m" (*a)); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m" (*a)); break; default: __bad_percpu_size(); } pfo_ret__; })) != 0;
}

static inline int x86_this_cpu_variable_test_bit(int nr,
                        const unsigned long *addr)
{
 int oldbit;

 asm volatile("bt ""%%""gs"":" "%P" "2"",%1\n\t"
   "sbb %0,%0"
   : "=r" (oldbit)
   : "m" (*(unsigned long *)addr), "Ir" (nr));

 return oldbit;
}







# 1 "include/asm-generic/percpu.h" 1




# 1 "include/linux/threads.h" 1
# 6 "include/asm-generic/percpu.h" 2
# 1 "include/linux/percpu-defs.h" 1
# 7 "include/asm-generic/percpu.h" 2
# 18 "include/asm-generic/percpu.h"
extern unsigned long __per_cpu_offset[4096];
# 72 "include/asm-generic/percpu.h"
extern void setup_per_cpu_areas(void);
# 577 "/home/iago/torvalds/linux/arch/x86/include/asm/percpu.h" 2


extern __attribute__((section(".discard"), unused)) char __pcpu_scope_this_cpu_off; extern __attribute__((section(".data..percpu" ""))) __typeof__(unsigned long) this_cpu_off;
# 6 "/home/iago/torvalds/linux/arch/x86/include/asm/current.h" 2


struct task_struct;

extern __attribute__((section(".discard"), unused)) char __pcpu_scope_current_task; extern __attribute__((section(".data..percpu" ""))) __typeof__(struct task_struct *) current_task;

static inline __attribute__((always_inline)) struct task_struct *get_current(void)
{
 return ({ typeof(current_task) pfo_ret__; switch (sizeof(current_task)) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "p" (&(current_task))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "p" (&(current_task))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "p" (&(current_task))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "p" (&(current_task))); break; default: __bad_percpu_size(); } pfo_ret__; });
}
# 16 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h" 2

# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/system.h" 1






# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/cmpxchg.h" 1



# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/cmpxchg_64.h" 1





static inline void set_64bit(volatile u64 *ptr, u64 val)
{
 *ptr = val;
}

extern void __xchg_wrong_size(void);
extern void __cmpxchg_wrong_size(void);
# 5 "/home/iago/torvalds/linux/arch/x86/include/asm/cmpxchg.h" 2
# 8 "/home/iago/torvalds/linux/arch/x86/include/asm/system.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/nops.h" 1
# 138 "/home/iago/torvalds/linux/arch/x86/include/asm/nops.h"
extern const unsigned char * const *ideal_nops;
extern void arch_init_ideal_nops(void);
# 9 "/home/iago/torvalds/linux/arch/x86/include/asm/system.h" 2


# 1 "include/linux/irqflags.h" 1
# 15 "include/linux/irqflags.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/irqflags.h" 1
# 11 "/home/iago/torvalds/linux/arch/x86/include/asm/irqflags.h"
static inline unsigned long native_save_fl(void)
{
 unsigned long flags;






 asm volatile("# __raw_save_flags\n\t"
       "pushf ; pop %0"
       : "=rm" (flags)
       :
       : "memory");

 return flags;
}

static inline void native_restore_fl(unsigned long flags)
{
 asm volatile("push %0 ; popf"
       :
       :"g" (flags)
       :"memory", "cc");
}

static inline void native_irq_disable(void)
{
 asm volatile("cli": : :"memory");
}

static inline void native_irq_enable(void)
{
 asm volatile("sti": : :"memory");
}

static inline void native_safe_halt(void)
{
 asm volatile("sti; hlt": : :"memory");
}

static inline void native_halt(void)
{
 asm volatile("hlt": : :"memory");
}




# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h" 1
# 14 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 1 "include/linux/cpumask.h" 1
# 11 "include/linux/cpumask.h"
# 1 "include/linux/bitmap.h" 1







# 1 "include/linux/string.h" 1
# 15 "include/linux/string.h"
extern char *strndup_user(const char *, long);
extern void *memdup_user(const void *, size_t);




# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/string.h" 1



# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/string_64.h" 1
# 9 "/home/iago/torvalds/linux/arch/x86/include/asm/string_64.h"
static inline __attribute__((always_inline)) void *__inline_memcpy(void *to, const void *from, size_t n)
{
 unsigned long d0, d1, d2;
 asm volatile("rep ; movsl\n\t"
       "testb $2,%b4\n\t"
       "je 1f\n\t"
       "movsw\n"
       "1:\ttestb $1,%b4\n\t"
       "je 2f\n\t"
       "movsb\n"
       "2:"
       : "=&c" (d0), "=&D" (d1), "=&S" (d2)
       : "0" (n / 4), "q" (n), "1" ((long)to), "2" ((long)from)
       : "memory");
 return to;
}







extern void *memcpy(void *to, const void *from, size_t len);
# 55 "/home/iago/torvalds/linux/arch/x86/include/asm/string_64.h"
void *memset(void *s, int c, size_t n);


void *memmove(void *dest, const void *src, size_t count);

int memcmp(const void *cs, const void *ct, size_t count);
size_t strlen(const char *s);
char *strcpy(char *dest, const char *src);
char *strcat(char *dest, const char *src);
int strcmp(const char *cs, const char *ct);
# 5 "/home/iago/torvalds/linux/arch/x86/include/asm/string.h" 2
# 22 "include/linux/string.h" 2


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

extern char * __attribute__((warn_unused_result)) skip_spaces(const char *);

extern char *strim(char *);

static inline __attribute__((warn_unused_result)) char *strstrip(char *str)
{
 return strim(str);
}


extern char * strstr(const char *, const char *);


extern char * strnstr(const char *, const char *, size_t);


extern __kernel_size_t strlen(const char *);


extern __kernel_size_t strnlen(const char *,__kernel_size_t);


extern char * strpbrk(const char *,const char *);


extern char * strsep(char **,const char *);


extern __kernel_size_t strspn(const char *,const char *);


extern __kernel_size_t strcspn(const char *,const char *);
# 109 "include/linux/string.h"
extern void * memscan(void *,int,__kernel_size_t);


extern int memcmp(const void *,const void *,__kernel_size_t);


extern void * memchr(const void *,int,__kernel_size_t);


extern char *kstrdup(const char *s, gfp_t gfp);
extern char *kstrndup(const char *s, size_t len, gfp_t gfp);
extern void *kmemdup(const void *src, size_t len, gfp_t gfp);

extern char **argv_split(gfp_t gfp, const char *str, int *argcp);
extern void argv_free(char **argv);

extern bool sysfs_streq(const char *s1, const char *s2);
extern int strtobool(const char *s, bool *res);


int vbin_printf(u32 *bin_buf, size_t size, const char *fmt, va_list args);
int bstr_printf(char *buf, size_t size, const char *fmt, const u32 *bin_buf);
int bprintf(u32 *bin_buf, size_t size, const char *fmt, ...) __attribute__((format(printf,3,4)));


extern ssize_t memory_read_from_buffer(void *to, size_t count, loff_t *ppos,
   const void *from, size_t available);






static inline bool strstarts(const char *str, const char *prefix)
{
 return strncmp(str, prefix, strlen(prefix)) == 0;
}
# 9 "include/linux/bitmap.h" 2
# 91 "include/linux/bitmap.h"
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
extern int __bitmap_and(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_or(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_xor(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_andnot(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_intersects(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_subset(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_weight(const unsigned long *bitmap, int bits);

extern void bitmap_set(unsigned long *map, int i, int len);
extern void bitmap_clear(unsigned long *map, int start, int nr);
extern unsigned long bitmap_find_next_zero_area(unsigned long *map,
      unsigned long size,
      unsigned long start,
      unsigned int nr,
      unsigned long align_mask);

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
extern int bitmap_parselist_user(const char *ubuf, unsigned int ulen,
   unsigned long *dst, int nbits);
extern void bitmap_remap(unsigned long *dst, const unsigned long *src,
  const unsigned long *old, const unsigned long *new, int bits);
extern int bitmap_bitremap(int oldbit,
  const unsigned long *old, const unsigned long *new, int bits);
extern void bitmap_onto(unsigned long *dst, const unsigned long *orig,
  const unsigned long *relmap, int bits);
extern void bitmap_fold(unsigned long *dst, const unsigned long *orig,
  int sz, int bits);
extern int bitmap_find_free_region(unsigned long *bitmap, int bits, int order);
extern void bitmap_release_region(unsigned long *bitmap, int pos, int order);
extern int bitmap_allocate_region(unsigned long *bitmap, int pos, int order);
extern void bitmap_copy_le(void *dst, const unsigned long *src, int nbits);
extern int bitmap_ord_to_pos(const unsigned long *bitmap, int n, int bits);
# 159 "include/linux/bitmap.h"
static inline void bitmap_zero(unsigned long *dst, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = 0UL;
 else {
  int len = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(unsigned long);
  memset(dst, 0, len);
 }
}

static inline void bitmap_fill(unsigned long *dst, int nbits)
{
 size_t nlongs = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)));
 if (!(__builtin_constant_p(nbits) && (nbits) <= 64)) {
  int len = (nlongs - 1) * sizeof(unsigned long);
  memset(dst, 0xff, len);
 }
 dst[nlongs - 1] = ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
}

static inline void bitmap_copy(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = *src;
 else {
  int len = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(unsigned long);
  memcpy(dst, src, len);
 }
}

static inline int bitmap_and(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return (*dst = *src1 & *src2) != 0;
 return __bitmap_and(dst, src1, src2, nbits);
}

static inline void bitmap_or(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = *src1 | *src2;
 else
  __bitmap_or(dst, src1, src2, nbits);
}

static inline void bitmap_xor(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = *src1 ^ *src2;
 else
  __bitmap_xor(dst, src1, src2, nbits);
}

static inline int bitmap_andnot(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return (*dst = *src1 & ~(*src2)) != 0;
 return __bitmap_andnot(dst, src1, src2, nbits);
}

static inline void bitmap_complement(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = ~(*src) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
 else
  __bitmap_complement(dst, src, nbits);
}

static inline int bitmap_equal(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return ! ((*src1 ^ *src2) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_equal(src1, src2, nbits);
}

static inline int bitmap_intersects(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return ((*src1 & *src2) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL )) != 0;
 else
  return __bitmap_intersects(src1, src2, nbits);
}

static inline int bitmap_subset(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return ! ((*src1 & ~(*src2)) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_subset(src1, src2, nbits);
}

static inline int bitmap_empty(const unsigned long *src, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return ! (*src & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_empty(src, nbits);
}

static inline int bitmap_full(const unsigned long *src, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return ! (~(*src) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_full(src, nbits);
}

static inline int bitmap_weight(const unsigned long *src, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return hweight_long(*src & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 return __bitmap_weight(src, nbits);
}

static inline void bitmap_shift_right(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = *src >> n;
 else
  __bitmap_shift_right(dst, src, n, nbits);
}

static inline void bitmap_shift_left(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = (*src << n) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
 else
  __bitmap_shift_left(dst, src, n, nbits);
}

static inline int bitmap_parse(const char *buf, unsigned int buflen,
   unsigned long *maskp, int nmaskbits)
{
 return __bitmap_parse(buf, buflen, 0, maskp, nmaskbits);
}
# 12 "include/linux/cpumask.h" 2

typedef struct cpumask { unsigned long bits[(((4096) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))]; } cpumask_t;
# 27 "include/linux/cpumask.h"
extern int nr_cpu_ids;
# 78 "include/linux/cpumask.h"
extern const struct cpumask *const cpu_possible_mask;
extern const struct cpumask *const cpu_online_mask;
extern const struct cpumask *const cpu_present_mask;
extern const struct cpumask *const cpu_active_mask;
# 104 "include/linux/cpumask.h"
static inline unsigned int cpumask_check(unsigned int cpu)
{

 ({ static bool __warned; int __ret_warn_once = !!(cpu >= nr_cpu_ids); if (__builtin_expect(!!(__ret_warn_once), 0)) if (({ int __ret_warn_on = !!(!__warned); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath_null("include/linux/cpumask.h", 107); __builtin_expect(!!(__ret_warn_on), 0); })) __warned = true; __builtin_expect(!!(__ret_warn_once), 0); });

 return cpu;
}
# 157 "include/linux/cpumask.h"
static inline unsigned int cpumask_first(const struct cpumask *srcp)
{
 return find_first_bit(((srcp)->bits), nr_cpu_ids);
}
# 169 "include/linux/cpumask.h"
static inline unsigned int cpumask_next(int n, const struct cpumask *srcp)
{

 if (n != -1)
  cpumask_check(n);
 return find_next_bit(((srcp)->bits), nr_cpu_ids, n+1);
}
# 184 "include/linux/cpumask.h"
static inline unsigned int cpumask_next_zero(int n, const struct cpumask *srcp)
{

 if (n != -1)
  cpumask_check(n);
 return find_next_zero_bit(((srcp)->bits), nr_cpu_ids, n+1);
}

int cpumask_next_and(int n, const struct cpumask *, const struct cpumask *);
int cpumask_any_but(const struct cpumask *mask, unsigned int cpu);
# 254 "include/linux/cpumask.h"
static inline void cpumask_set_cpu(unsigned int cpu, struct cpumask *dstp)
{
 set_bit(cpumask_check(cpu), ((dstp)->bits));
}






static inline void cpumask_clear_cpu(int cpu, struct cpumask *dstp)
{
 clear_bit(cpumask_check(cpu), ((dstp)->bits));
}
# 286 "include/linux/cpumask.h"
static inline int cpumask_test_and_set_cpu(int cpu, struct cpumask *cpumask)
{
 return test_and_set_bit(cpumask_check(cpu), ((cpumask)->bits));
}
# 298 "include/linux/cpumask.h"
static inline int cpumask_test_and_clear_cpu(int cpu, struct cpumask *cpumask)
{
 return test_and_clear_bit(cpumask_check(cpu), ((cpumask)->bits));
}





static inline void cpumask_setall(struct cpumask *dstp)
{
 bitmap_fill(((dstp)->bits), nr_cpu_ids);
}





static inline void cpumask_clear(struct cpumask *dstp)
{
 bitmap_zero(((dstp)->bits), nr_cpu_ids);
}







static inline int cpumask_and(struct cpumask *dstp,
          const struct cpumask *src1p,
          const struct cpumask *src2p)
{
 return bitmap_and(((dstp)->bits), ((src1p)->bits),
           ((src2p)->bits), nr_cpu_ids);
}







static inline void cpumask_or(struct cpumask *dstp, const struct cpumask *src1p,
         const struct cpumask *src2p)
{
 bitmap_or(((dstp)->bits), ((src1p)->bits),
          ((src2p)->bits), nr_cpu_ids);
}







static inline void cpumask_xor(struct cpumask *dstp,
          const struct cpumask *src1p,
          const struct cpumask *src2p)
{
 bitmap_xor(((dstp)->bits), ((src1p)->bits),
           ((src2p)->bits), nr_cpu_ids);
}







static inline int cpumask_andnot(struct cpumask *dstp,
      const struct cpumask *src1p,
      const struct cpumask *src2p)
{
 return bitmap_andnot(((dstp)->bits), ((src1p)->bits),
       ((src2p)->bits), nr_cpu_ids);
}






static inline void cpumask_complement(struct cpumask *dstp,
          const struct cpumask *srcp)
{
 bitmap_complement(((dstp)->bits), ((srcp)->bits),
           nr_cpu_ids);
}






static inline bool cpumask_equal(const struct cpumask *src1p,
    const struct cpumask *src2p)
{
 return bitmap_equal(((src1p)->bits), ((src2p)->bits),
       nr_cpu_ids);
}






static inline bool cpumask_intersects(const struct cpumask *src1p,
         const struct cpumask *src2p)
{
 return bitmap_intersects(((src1p)->bits), ((src2p)->bits),
            nr_cpu_ids);
}






static inline int cpumask_subset(const struct cpumask *src1p,
     const struct cpumask *src2p)
{
 return bitmap_subset(((src1p)->bits), ((src2p)->bits),
        nr_cpu_ids);
}





static inline bool cpumask_empty(const struct cpumask *srcp)
{
 return bitmap_empty(((srcp)->bits), nr_cpu_ids);
}





static inline bool cpumask_full(const struct cpumask *srcp)
{
 return bitmap_full(((srcp)->bits), nr_cpu_ids);
}





static inline unsigned int cpumask_weight(const struct cpumask *srcp)
{
 return bitmap_weight(((srcp)->bits), nr_cpu_ids);
}







static inline void cpumask_shift_right(struct cpumask *dstp,
           const struct cpumask *srcp, int n)
{
 bitmap_shift_right(((dstp)->bits), ((srcp)->bits), n,
            nr_cpu_ids);
}







static inline void cpumask_shift_left(struct cpumask *dstp,
          const struct cpumask *srcp, int n)
{
 bitmap_shift_left(((dstp)->bits), ((srcp)->bits), n,
           nr_cpu_ids);
}






static inline void cpumask_copy(struct cpumask *dstp,
    const struct cpumask *srcp)
{
 bitmap_copy(((dstp)->bits), ((srcp)->bits), nr_cpu_ids);
}
# 529 "include/linux/cpumask.h"
static inline int cpumask_scnprintf(char *buf, int len,
        const struct cpumask *srcp)
{
 return bitmap_scnprintf(buf, len, ((srcp)->bits), nr_cpu_ids);
}
# 543 "include/linux/cpumask.h"
static inline int cpumask_parse_user(const char *buf, int len,
         struct cpumask *dstp)
{
 return bitmap_parse_user(buf, len, ((dstp)->bits), nr_cpu_ids);
}
# 557 "include/linux/cpumask.h"
static inline int cpumask_parselist_user(const char *buf, int len,
         struct cpumask *dstp)
{
 return bitmap_parselist_user(buf, len, ((dstp)->bits),
       nr_cpu_ids);
}
# 573 "include/linux/cpumask.h"
static inline int cpulist_scnprintf(char *buf, int len,
        const struct cpumask *srcp)
{
 return bitmap_scnlistprintf(buf, len, ((srcp)->bits),
        nr_cpu_ids);
}
# 588 "include/linux/cpumask.h"
static inline int cpulist_parse(const char *buf, struct cpumask *dstp)
{
 return bitmap_parselist(buf, ((dstp)->bits), nr_cpu_ids);
}






static inline size_t cpumask_size(void)
{


 return (((4096) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(long);
}
# 636 "include/linux/cpumask.h"
typedef struct cpumask *cpumask_var_t;

bool alloc_cpumask_var_node(cpumask_var_t *mask, gfp_t flags, int node);
bool alloc_cpumask_var(cpumask_var_t *mask, gfp_t flags);
bool zalloc_cpumask_var_node(cpumask_var_t *mask, gfp_t flags, int node);
bool zalloc_cpumask_var(cpumask_var_t *mask, gfp_t flags);
void alloc_bootmem_cpumask_var(cpumask_var_t *mask);
void free_cpumask_var(cpumask_var_t mask);
void free_bootmem_cpumask_var(cpumask_var_t mask);
# 688 "include/linux/cpumask.h"
extern const unsigned long cpu_all_bits[(((4096) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];
# 699 "include/linux/cpumask.h"
void set_cpu_possible(unsigned int cpu, bool possible);
void set_cpu_present(unsigned int cpu, bool present);
void set_cpu_online(unsigned int cpu, bool online);
void set_cpu_active(unsigned int cpu, bool active);
void init_cpu_present(const struct cpumask *src);
void init_cpu_possible(const struct cpumask *src);
void init_cpu_online(const struct cpumask *src);
# 721 "include/linux/cpumask.h"
static inline int __check_is_bitmap(const unsigned long *bitmap)
{
 return 1;
}
# 733 "include/linux/cpumask.h"
extern const unsigned long
 cpu_bit_bitmap[64 +1][(((4096) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];

static inline const struct cpumask *get_cpu_mask(unsigned int cpu)
{
 const unsigned long *p = cpu_bit_bitmap[1 + cpu % 64];
 p -= cpu / 64;
 return ((struct cpumask *)(1 ? (p) : (void *)sizeof(__check_is_bitmap(p))));
}
# 810 "include/linux/cpumask.h"
int __first_cpu(const cpumask_t *srcp);
int __next_cpu(int n, const cpumask_t *srcp);
int __any_online_cpu(const cpumask_t *mask);
# 829 "include/linux/cpumask.h"
int __next_cpu_nr(int n, const cpumask_t *srcp);
# 840 "include/linux/cpumask.h"
static inline void __cpu_set(int cpu, volatile cpumask_t *dstp)
{
 set_bit(cpu, dstp->bits);
}


static inline void __cpu_clear(int cpu, volatile cpumask_t *dstp)
{
 clear_bit(cpu, dstp->bits);
}


static inline void __cpus_setall(cpumask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline void __cpus_clear(cpumask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}





static inline int __cpu_test_and_set(int cpu, cpumask_t *addr)
{
 return test_and_set_bit(cpu, addr->bits);
}


static inline int __cpus_and(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline void __cpus_or(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline void __cpus_xor(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline int __cpus_andnot(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline int __cpus_equal(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}


static inline int __cpus_intersects(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}


static inline int __cpus_subset(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline int __cpus_empty(const cpumask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline int __cpus_weight(const cpumask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline void __cpus_shift_left(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}
# 15 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h" 2

static inline int paravirt_enabled(void)
{
 return pv_info.paravirt_enabled;
}

static inline void load_sp0(struct tss_struct *tss,
        struct thread_struct *thread)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.load_sp0 == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (24), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.load_sp0) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.load_sp0)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(tss)), "S" ((unsigned long)(thread)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline void __cpuid(unsigned int *eax, unsigned int *ebx,
      unsigned int *ecx, unsigned int *edx)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.cpuid == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (31), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.cpuid) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.cpuid)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(eax)), "S" ((unsigned long)(ebx)), "d" ((unsigned long)(ecx)), "c" ((unsigned long)(edx)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}




static inline unsigned long paravirt_get_debugreg(int reg)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.get_debugreg == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (39), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.get_debugreg) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.get_debugreg)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(reg)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.get_debugreg) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.get_debugreg)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(reg)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline void set_debugreg(unsigned long val, int reg)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.set_debugreg == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (44), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.set_debugreg) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.set_debugreg)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(reg)), "S" ((unsigned long)(val)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void clts(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.clts == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (49), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.clts) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.clts)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline unsigned long read_cr0(void)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.read_cr0 == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (54), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_cr0) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_cr0)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_cr0) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_cr0)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline void write_cr0(unsigned long x)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.write_cr0 == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (59), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.write_cr0) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.write_cr0)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(x)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline unsigned long read_cr2(void)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.read_cr2 == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (64), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.read_cr2) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.read_cr2)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.read_cr2) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.read_cr2)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline void write_cr2(unsigned long x)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.write_cr2 == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (69), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.write_cr2) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.write_cr2)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(x)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline unsigned long read_cr3(void)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.read_cr3 == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (74), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.read_cr3) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.read_cr3)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.read_cr3) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.read_cr3)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline void write_cr3(unsigned long x)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.write_cr3 == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (79), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.write_cr3) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.write_cr3)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(x)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline unsigned long read_cr4(void)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.read_cr4 == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (84), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_cr4) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_cr4)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_cr4) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_cr4)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}
static inline unsigned long read_cr4_safe(void)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.read_cr4_safe == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (88), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_cr4_safe) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_cr4_safe)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_cr4_safe) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_cr4_safe)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline void write_cr4(unsigned long x)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.write_cr4 == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (93), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.write_cr4) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.write_cr4)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(x)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline unsigned long read_cr8(void)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.read_cr8 == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (99), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_cr8) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_cr8)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_cr8) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_cr8)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline void write_cr8(unsigned long x)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.write_cr8 == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (104), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.write_cr8) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.write_cr8)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(x)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline void arch_safe_halt(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_irq_ops.safe_halt == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (110), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_irq_ops.safe_halt) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_irq_ops.safe_halt)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void halt(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_irq_ops.halt == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (115), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_irq_ops.halt) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_irq_ops.halt)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void wbinvd(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.wbinvd == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (120), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.wbinvd) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.wbinvd)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}



static inline u64 paravirt_read_msr(unsigned msr, int *err)
{
 return ({ u64 __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.read_msr == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (127), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(u64) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_msr) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_msr)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(msr)), "S" ((unsigned long)(err)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_msr) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_msr)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(msr)), "S" ((unsigned long)(err)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)__eax; } __ret; });
}

static inline int paravirt_rdmsr_regs(u32 *regs)
{
 return ({ int __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.rdmsr_regs == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (132), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(int) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.rdmsr_regs) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.rdmsr_regs)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(regs)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.rdmsr_regs) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.rdmsr_regs)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(regs)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}

static inline int paravirt_write_msr(unsigned msr, unsigned low, unsigned high)
{
 return ({ int __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.write_msr == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (137), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(int) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.write_msr) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.write_msr)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(msr)), "S" ((unsigned long)(low)), "d" ((unsigned long)(high)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.write_msr) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.write_msr)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(msr)), "S" ((unsigned long)(low)), "d" ((unsigned long)(high)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}

static inline int paravirt_wrmsr_regs(u32 *regs)
{
 return ({ int __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.wrmsr_regs == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (142), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(int) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.wrmsr_regs) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.wrmsr_regs)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(regs)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.wrmsr_regs) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.wrmsr_regs)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(regs)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}
# 181 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
static inline int rdmsrl_safe(unsigned msr, unsigned long long *p)
{
 int err;

 *p = paravirt_read_msr(msr, &err);
 return err;
}
static inline int rdmsrl_amd_safe(unsigned msr, unsigned long long *p)
{
 u32 gprs[8] = { 0 };
 int err;

 gprs[1] = msr;
 gprs[7] = 0x9c5a203a;

 err = paravirt_rdmsr_regs(gprs);

 *p = gprs[0] | ((u64)gprs[2] << 32);

 return err;
}

static inline int wrmsrl_amd_safe(unsigned msr, unsigned long long val)
{
 u32 gprs[8] = { 0 };

 gprs[0] = (u32)val;
 gprs[1] = msr;
 gprs[2] = val >> 32;
 gprs[7] = 0x9c5a203a;

 return paravirt_wrmsr_regs(gprs);
}

static inline u64 paravirt_read_tsc(void)
{
 return ({ u64 __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.read_tsc == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (217), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(u64) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_tsc) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_tsc)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_tsc) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_tsc)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)__eax; } __ret; });
}
# 228 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
static inline unsigned long long paravirt_sched_clock(void)
{
 return ({ unsigned long long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_time_ops.sched_clock == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (230), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(unsigned long long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_time_ops.sched_clock) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_time_ops.sched_clock)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_time_ops.sched_clock) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_time_ops.sched_clock)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long long)__eax; } __ret; });
}

struct jump_label_key;
extern struct jump_label_key paravirt_steal_enabled;
extern struct jump_label_key paravirt_steal_rq_enabled;

static inline u64 paravirt_steal_clock(int cpu)
{
 return ({ u64 __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_time_ops.steal_clock == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (239), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(u64) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_time_ops.steal_clock) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_time_ops.steal_clock)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(cpu)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_time_ops.steal_clock) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_time_ops.steal_clock)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(cpu)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)__eax; } __ret; });
}

static inline unsigned long long paravirt_read_pmc(int counter)
{
 return ({ u64 __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.read_pmc == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (244), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(u64) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_pmc) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_pmc)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(counter)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_pmc) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_pmc)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(counter)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)__eax; } __ret; });
}
# 254 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
static inline unsigned long long paravirt_rdtscp(unsigned int *aux)
{
 return ({ u64 __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.read_tscp == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (256), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(u64) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_tscp) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_tscp)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(aux)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_tscp) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_tscp)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(aux)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)__eax; } __ret; });
}
# 275 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
static inline void paravirt_alloc_ldt(struct desc_struct *ldt, unsigned entries)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.alloc_ldt == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (277), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.alloc_ldt) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.alloc_ldt)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(ldt)), "S" ((unsigned long)(entries)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void paravirt_free_ldt(struct desc_struct *ldt, unsigned entries)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.free_ldt == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (282), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.free_ldt) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.free_ldt)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(ldt)), "S" ((unsigned long)(entries)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void load_TR_desc(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.load_tr_desc == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (287), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.load_tr_desc) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.load_tr_desc)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void load_gdt(const struct desc_ptr *dtr)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.load_gdt == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (291), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.load_gdt) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.load_gdt)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(dtr)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void load_idt(const struct desc_ptr *dtr)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.load_idt == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (295), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.load_idt) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.load_idt)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(dtr)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void set_ldt(const void *addr, unsigned entries)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.set_ldt == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (299), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.set_ldt) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.set_ldt)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(addr)), "S" ((unsigned long)(entries)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void store_gdt(struct desc_ptr *dtr)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.store_gdt == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (303), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.store_gdt) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.store_gdt)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(dtr)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void store_idt(struct desc_ptr *dtr)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.store_idt == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (307), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.store_idt) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.store_idt)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(dtr)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline unsigned long paravirt_store_tr(void)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.store_tr == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (311), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.store_tr) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.store_tr)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.store_tr) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.store_tr)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline void load_TLS(struct thread_struct *t, unsigned cpu)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.load_tls == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (316), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.load_tls) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.load_tls)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(t)), "S" ((unsigned long)(cpu)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline void load_gs_index(unsigned int gs)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.load_gs_index == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (322), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.load_gs_index) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.load_gs_index)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(gs)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline void write_ldt_entry(struct desc_struct *dt, int entry,
       const void *desc)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.write_ldt_entry == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (329), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.write_ldt_entry) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.write_ldt_entry)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(dt)), "S" ((unsigned long)(entry)), "d" ((unsigned long)(desc)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void write_gdt_entry(struct desc_struct *dt, int entry,
       void *desc, int type)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.write_gdt_entry == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (335), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.write_gdt_entry) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.write_gdt_entry)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(dt)), "S" ((unsigned long)(entry)), "d" ((unsigned long)(desc)), "c" ((unsigned long)(type)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void write_idt_entry(gate_desc *dt, int entry, const gate_desc *g)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.write_idt_entry == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (340), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.write_idt_entry) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.write_idt_entry)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(dt)), "S" ((unsigned long)(entry)), "d" ((unsigned long)(g)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void set_iopl_mask(unsigned mask)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.set_iopl_mask == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (344), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.set_iopl_mask) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.set_iopl_mask)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mask)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline void slow_down_io(void)
{
 pv_cpu_ops.io_delay();





}


static inline void startup_ipi_hook(int phys_apicid, unsigned long start_eip,
        unsigned long start_esp)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_apic_ops.startup_ipi_hook == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 362 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
 ), "i" (
 363
# 362 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
 ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_apic_ops.startup_ipi_hook) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_apic_ops.startup_ipi_hook)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(phys_apicid)), "S" ((unsigned long)(start_eip)), "d" ((unsigned long)(start_esp)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
                                        ;
}


static inline void paravirt_activate_mm(struct mm_struct *prev,
     struct mm_struct *next)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.activate_mm == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (370), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.activate_mm) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.activate_mm)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(prev)), "S" ((unsigned long)(next)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void arch_dup_mmap(struct mm_struct *oldmm,
     struct mm_struct *mm)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.dup_mmap == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (376), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.dup_mmap) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.dup_mmap)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(oldmm)), "S" ((unsigned long)(mm)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void arch_exit_mmap(struct mm_struct *mm)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.exit_mmap == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (381), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.exit_mmap) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.exit_mmap)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void __flush_tlb(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.flush_tlb_user == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (386), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.flush_tlb_user) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.flush_tlb_user)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void __flush_tlb_global(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.flush_tlb_kernel == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (390), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.flush_tlb_kernel) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.flush_tlb_kernel)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void __flush_tlb_single(unsigned long addr)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.flush_tlb_single == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (394), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.flush_tlb_single) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.flush_tlb_single)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(addr)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void flush_tlb_others(const struct cpumask *cpumask,
        struct mm_struct *mm,
        unsigned long va)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.flush_tlb_others == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (401), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.flush_tlb_others) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.flush_tlb_others)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(cpumask)), "S" ((unsigned long)(mm)), "d" ((unsigned long)(va)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline int paravirt_pgd_alloc(struct mm_struct *mm)
{
 return ({ int __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.pgd_alloc == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (406), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(int) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pgd_alloc) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pgd_alloc)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pgd_alloc) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pgd_alloc)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}

static inline void paravirt_pgd_free(struct mm_struct *mm, pgd_t *pgd)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.pgd_free == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (411), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pgd_free) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pgd_free)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(pgd)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void paravirt_alloc_pte(struct mm_struct *mm, unsigned long pfn)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.alloc_pte == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (416), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.alloc_pte) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.alloc_pte)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void paravirt_release_pte(unsigned long pfn)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.release_pte == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (420), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.release_pte) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.release_pte)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void paravirt_alloc_pmd(struct mm_struct *mm, unsigned long pfn)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.alloc_pmd == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (425), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.alloc_pmd) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.alloc_pmd)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void paravirt_release_pmd(unsigned long pfn)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.release_pmd == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (430), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.release_pmd) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.release_pmd)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void paravirt_alloc_pud(struct mm_struct *mm, unsigned long pfn)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.alloc_pud == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (435), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.alloc_pud) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.alloc_pud)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void paravirt_release_pud(unsigned long pfn)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.release_pud == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (439), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.release_pud) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.release_pud)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void pte_update(struct mm_struct *mm, unsigned long addr,
         pte_t *ptep)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.pte_update == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (445), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pte_update) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pte_update)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(ptep)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void pmd_update(struct mm_struct *mm, unsigned long addr,
         pmd_t *pmdp)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.pmd_update == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (450), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pmd_update) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pmd_update)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(pmdp)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void pte_update_defer(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.pte_update_defer == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (456), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pte_update_defer) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pte_update_defer)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(ptep)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void pmd_update_defer(struct mm_struct *mm, unsigned long addr,
        pmd_t *pmdp)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.pmd_update_defer == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (462), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pmd_update_defer) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pmd_update_defer)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(pmdp)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline pte_t __pte(pteval_t val)
{
 pteval_t ret;

 if (sizeof(pteval_t) > sizeof(long))
  ret = ({ pteval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.make_pte.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (

 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 470 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (

 472
# 470 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(pteval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pte.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pte.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)), "S" ((unsigned long)((u64)val >> 32)) : "memory", "cc" ); __ret = (pteval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pte.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pte.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)), "S" ((unsigned long)((u64)val >> 32)) : "memory", "cc" ); __ret = (pteval_t)__eax; } __ret; })

                           ;
 else
  ret = ({ pteval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.make_pte.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (

 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 474 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (

 476
# 474 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(pteval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pte.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pte.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)) : "memory", "cc" ); __ret = (pteval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pte.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pte.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)) : "memory", "cc" ); __ret = (pteval_t)__eax; } __ret; })

           ;

 return (pte_t) { .pte = ret };
}

static inline pteval_t pte_val(pte_t pte)
{
 pteval_t ret;

 if (sizeof(pteval_t) > sizeof(long))
  ret = ({ pteval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.pte_val.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 486 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (
 487
# 486 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(pteval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pte_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pte_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pte.pte)), "S" ((unsigned long)((u64)pte.pte >> 32)) : "memory", "cc" ); __ret = (pteval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pte_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pte_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pte.pte)), "S" ((unsigned long)((u64)pte.pte >> 32)) : "memory", "cc" ); __ret = (pteval_t)__eax; } __ret; })
                                   ;
 else
  ret = ({ pteval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.pte_val.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 489 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (
 490
# 489 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(pteval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pte_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pte_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pte.pte)) : "memory", "cc" ); __ret = (pteval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pte_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pte_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pte.pte)) : "memory", "cc" ); __ret = (pteval_t)__eax; } __ret; })
               ;

 return ret;
}

static inline pgd_t __pgd(pgdval_t val)
{
 pgdval_t ret;

 if (sizeof(pgdval_t) > sizeof(long))
  ret = ({ pgdval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.make_pgd.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 500 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (
 501
# 500 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(pgdval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pgd.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pgd.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)), "S" ((unsigned long)((u64)val >> 32)) : "memory", "cc" ); __ret = (pgdval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pgd.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pgd.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)), "S" ((unsigned long)((u64)val >> 32)) : "memory", "cc" ); __ret = (pgdval_t)__eax; } __ret; })
                           ;
 else
  ret = ({ pgdval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.make_pgd.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 503 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (
 504
# 503 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(pgdval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pgd.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pgd.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)) : "memory", "cc" ); __ret = (pgdval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pgd.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pgd.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)) : "memory", "cc" ); __ret = (pgdval_t)__eax; } __ret; })
           ;

 return (pgd_t) { ret };
}

static inline pgdval_t pgd_val(pgd_t pgd)
{
 pgdval_t ret;

 if (sizeof(pgdval_t) > sizeof(long))
  ret = ({ pgdval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.pgd_val.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 514 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
         ), "i" (
 515
# 514 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
         ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(pgdval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pgd_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pgd_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pgd.pgd)), "S" ((unsigned long)((u64)pgd.pgd >> 32)) : "memory", "cc" ); __ret = (pgdval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pgd_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pgd_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pgd.pgd)), "S" ((unsigned long)((u64)pgd.pgd >> 32)) : "memory", "cc" ); __ret = (pgdval_t)__eax; } __ret; })
                                    ;
 else
  ret = ({ pgdval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.pgd_val.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 517 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
         ), "i" (
 518
# 517 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
         ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(pgdval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pgd_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pgd_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pgd.pgd)) : "memory", "cc" ); __ret = (pgdval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pgd_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pgd_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pgd.pgd)) : "memory", "cc" ); __ret = (pgdval_t)__eax; } __ret; })
                ;

 return ret;
}


static inline pte_t ptep_modify_prot_start(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep)
{
 pteval_t ret;

 ret = ({ pteval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.ptep_modify_prot_start == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 529 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
       ), "i" (
 530
# 529 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
       ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(pteval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.ptep_modify_prot_start) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.ptep_modify_prot_start)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(ptep)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.ptep_modify_prot_start) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.ptep_modify_prot_start)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(ptep)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)__eax; } __ret; })
                   ;

 return (pte_t) { .pte = ret };
}

static inline void ptep_modify_prot_commit(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep, pte_t pte)
{
 if (sizeof(pteval_t) > sizeof(long))

  pv_mmu_ops.ptep_modify_prot_commit(mm, addr, ptep, pte);
 else
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.ptep_modify_prot_commit == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 542 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
  ), "i" (
 543
# 542 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
  ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.ptep_modify_prot_commit) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.ptep_modify_prot_commit)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(ptep)), "c" ((unsigned long)(pte.pte)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
                               ;
}

static inline void set_pte(pte_t *ptep, pte_t pte)
{
 if (sizeof(pteval_t) > sizeof(long))
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.set_pte == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 549 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
  ), "i" (
 550
# 549 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
  ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pte) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pte)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(ptep)), "S" ((unsigned long)(pte.pte)), "d" ((unsigned long)((u64)pte.pte >> 32)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
                                   ;
 else
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.set_pte == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 552 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
  ), "i" (
 553
# 552 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
  ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pte) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pte)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(ptep)), "S" ((unsigned long)(pte.pte)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
               ;
}

static inline void set_pte_at(struct mm_struct *mm, unsigned long addr,
         pte_t *ptep, pte_t pte)
{
 if (sizeof(pteval_t) > sizeof(long))

  pv_mmu_ops.set_pte_at(mm, addr, ptep, pte);
 else
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.set_pte_at == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (563), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pte_at) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pte_at)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(ptep)), "c" ((unsigned long)(pte.pte)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline void set_pmd_at(struct mm_struct *mm, unsigned long addr,
         pmd_t *pmdp, pmd_t pmd)
{
 if (sizeof(pmdval_t) > sizeof(long))

  pv_mmu_ops.set_pmd_at(mm, addr, pmdp, pmd);
 else
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.set_pmd_at == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 574 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
  ), "i" (
 575
# 574 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
  ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pmd_at) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pmd_at)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(pmdp)), "c" ((unsigned long)(native_pmd_val(pmd))) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
                           ;
}


static inline void set_pmd(pmd_t *pmdp, pmd_t pmd)
{
 pmdval_t val = native_pmd_val(pmd);

 if (sizeof(pmdval_t) > sizeof(long))
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.set_pmd == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (584), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pmd) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pmd)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pmdp)), "S" ((unsigned long)(val)), "d" ((unsigned long)((u64)val >> 32)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
 else
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.set_pmd == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (586), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pmd) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pmd)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pmdp)), "S" ((unsigned long)(val)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline pmd_t __pmd(pmdval_t val)
{
 pmdval_t ret;

 if (sizeof(pmdval_t) > sizeof(long))
  ret = ({ pmdval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.make_pmd.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 595 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (
 596
# 595 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(pmdval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pmd.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pmd.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)), "S" ((unsigned long)((u64)val >> 32)) : "memory", "cc" ); __ret = (pmdval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pmd.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pmd.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)), "S" ((unsigned long)((u64)val >> 32)) : "memory", "cc" ); __ret = (pmdval_t)__eax; } __ret; })
                           ;
 else
  ret = ({ pmdval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.make_pmd.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 598 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (
 599
# 598 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(pmdval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pmd.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pmd.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)) : "memory", "cc" ); __ret = (pmdval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pmd.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pmd.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)) : "memory", "cc" ); __ret = (pmdval_t)__eax; } __ret; })
           ;

 return (pmd_t) { ret };
}

static inline pmdval_t pmd_val(pmd_t pmd)
{
 pmdval_t ret;

 if (sizeof(pmdval_t) > sizeof(long))
  ret = ({ pmdval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.pmd_val.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 609 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
         ), "i" (
 610
# 609 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
         ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(pmdval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pmd_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pmd_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pmd.pmd)), "S" ((unsigned long)((u64)pmd.pmd >> 32)) : "memory", "cc" ); __ret = (pmdval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pmd_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pmd_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pmd.pmd)), "S" ((unsigned long)((u64)pmd.pmd >> 32)) : "memory", "cc" ); __ret = (pmdval_t)__eax; } __ret; })
                                    ;
 else
  ret = ({ pmdval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.pmd_val.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 612 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
         ), "i" (
 613
# 612 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
         ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(pmdval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pmd_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pmd_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pmd.pmd)) : "memory", "cc" ); __ret = (pmdval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pmd_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pmd_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pmd.pmd)) : "memory", "cc" ); __ret = (pmdval_t)__eax; } __ret; })
                ;

 return ret;
}

static inline void set_pud(pud_t *pudp, pud_t pud)
{
 pudval_t val = native_pud_val(pud);

 if (sizeof(pudval_t) > sizeof(long))
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.set_pud == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 623 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
  ), "i" (
 624
# 623 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
  ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pud) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pud)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pudp)), "S" ((unsigned long)(val)), "d" ((unsigned long)((u64)val >> 32)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
                           ;
 else
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.set_pud == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 626 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
  ), "i" (
 627
# 626 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
  ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pud) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pud)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pudp)), "S" ((unsigned long)(val)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
           ;
}

static inline pud_t __pud(pudval_t val)
{
 pudval_t ret;

 if (sizeof(pudval_t) > sizeof(long))
  ret = ({ pudval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.make_pud.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 635 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (
 636
# 635 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(pudval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pud.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pud.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)), "S" ((unsigned long)((u64)val >> 32)) : "memory", "cc" ); __ret = (pudval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pud.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pud.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)), "S" ((unsigned long)((u64)val >> 32)) : "memory", "cc" ); __ret = (pudval_t)__eax; } __ret; })
                           ;
 else
  ret = ({ pudval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.make_pud.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 638 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (
 639
# 638 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
        ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(pudval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pud.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pud.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)) : "memory", "cc" ); __ret = (pudval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pud.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pud.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)) : "memory", "cc" ); __ret = (pudval_t)__eax; } __ret; })
           ;

 return (pud_t) { ret };
}

static inline pudval_t pud_val(pud_t pud)
{
 pudval_t ret;

 if (sizeof(pudval_t) > sizeof(long))
  ret = ({ pudval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.pud_val.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 649 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
         ), "i" (
 650
# 649 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
         ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(pudval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pud_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pud_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pud.pud)), "S" ((unsigned long)((u64)pud.pud >> 32)) : "memory", "cc" ); __ret = (pudval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pud_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pud_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pud.pud)), "S" ((unsigned long)((u64)pud.pud >> 32)) : "memory", "cc" ); __ret = (pudval_t)__eax; } __ret; })
                                    ;
 else
  ret = ({ pudval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.pud_val.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 652 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
         ), "i" (
 653
# 652 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
         ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(pudval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pud_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pud_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pud.pud)) : "memory", "cc" ); __ret = (pudval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pud_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pud_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pud.pud)) : "memory", "cc" ); __ret = (pudval_t)__eax; } __ret; })
                ;

 return ret;
}

static inline void set_pgd(pgd_t *pgdp, pgd_t pgd)
{
 pgdval_t val = native_pgd_val(pgd);

 if (sizeof(pgdval_t) > sizeof(long))
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.set_pgd == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 663 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
  ), "i" (
 664
# 663 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
  ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pgd) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pgd)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pgdp)), "S" ((unsigned long)(val)), "d" ((unsigned long)((u64)val >> 32)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
                           ;
 else
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.set_pgd == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" (
 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
# 666 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
  ), "i" (
 667
# 666 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
  ), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pgd) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pgd)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pgdp)), "S" ((unsigned long)(val)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
           ;
}

static inline void pgd_clear(pgd_t *pgdp)
{
 set_pgd(pgdp, __pgd(0));
}

static inline void pud_clear(pud_t *pudp)
{
 set_pud(pudp, __pud(0));
}
# 704 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
static inline void set_pte_atomic(pte_t *ptep, pte_t pte)
{
 set_pte(ptep, pte);
}

static inline void pte_clear(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep)
{
 set_pte_at(mm, addr, ptep, __pte(0));
}

static inline void pmd_clear(pmd_t *pmdp)
{
 set_pmd(pmdp, __pmd(0));
}



static inline void arch_start_context_switch(struct task_struct *prev)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.start_context_switch == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (724), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.start_context_switch) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.start_context_switch)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(prev)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void arch_end_context_switch(struct task_struct *next)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_cpu_ops.end_context_switch == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (729), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.end_context_switch) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.end_context_switch)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(next)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline void arch_enter_lazy_mmu_mode(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.lazy_mode.enter == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (735), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.lazy_mode.enter) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.lazy_mode.enter)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void arch_leave_lazy_mmu_mode(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_mmu_ops.lazy_mode.leave == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (740), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.lazy_mode.leave) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.lazy_mode.leave)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

void arch_flush_lazy_mmu_mode(void);

static inline void __set_fixmap(unsigned idx,
    phys_addr_t phys, pgprot_t flags)
{
 pv_mmu_ops.set_fixmap(idx, phys, flags);
}



static inline int arch_spin_is_locked(struct arch_spinlock *lock)
{
 return ({ int __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_lock_ops.spin_is_locked == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (755), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(int) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_is_locked) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_is_locked)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_is_locked) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_is_locked)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}

static inline int arch_spin_is_contended(struct arch_spinlock *lock)
{
 return ({ int __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_lock_ops.spin_is_contended == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (760), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(int) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_is_contended) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_is_contended)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_is_contended) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_is_contended)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}


static inline __attribute__((always_inline)) void arch_spin_lock(struct arch_spinlock *lock)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_lock_ops.spin_lock == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (766), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_lock) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_lock)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((always_inline)) void arch_spin_lock_flags(struct arch_spinlock *lock,
        unsigned long flags)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_lock_ops.spin_lock_flags == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (772), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_lock_flags) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_lock_flags)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)), "S" ((unsigned long)(flags)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((always_inline)) int arch_spin_trylock(struct arch_spinlock *lock)
{
 return ({ int __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_lock_ops.spin_trylock == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (777), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(int) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_trylock) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_trylock)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_trylock) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_trylock)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}

static inline __attribute__((always_inline)) void arch_spin_unlock(struct arch_spinlock *lock)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_lock_ops.spin_unlock == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (782), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_unlock) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_unlock)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
# 860 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
static inline __attribute__((no_instrument_function)) unsigned long arch_local_save_flags(void)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_irq_ops.save_fl.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (862), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_irq_ops.save_fl.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_irq_ops.save_fl.func)), [paravirt_clobber] "i" (((1 << 0))) : "memory", "cc" ); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_irq_ops.save_fl.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_irq_ops.save_fl.func)), [paravirt_clobber] "i" (((1 << 0))) : "memory", "cc" ); __ret = (unsigned long)__eax; } __ret; });
}

static inline __attribute__((no_instrument_function)) void arch_local_irq_restore(unsigned long f)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_irq_ops.restore_fl.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (867), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_irq_ops.restore_fl.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_irq_ops.restore_fl.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(f)) : "memory", "cc" ); });
}

static inline __attribute__((no_instrument_function)) void arch_local_irq_disable(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_irq_ops.irq_disable.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (872), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_irq_ops.irq_disable.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_irq_ops.irq_disable.func)), [paravirt_clobber] "i" (((1 << 0))) : "memory", "cc" ); });
}

static inline __attribute__((no_instrument_function)) void arch_local_irq_enable(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; do { if (__builtin_expect(!!(pv_irq_ops.irq_enable.func == ((void *)0)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"), "i" (877), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_irq_ops.irq_enable.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_irq_ops.irq_enable.func)), [paravirt_clobber] "i" (((1 << 0))) : "memory", "cc" ); });
}

static inline __attribute__((no_instrument_function)) unsigned long arch_local_irq_save(void)
{
 unsigned long f;

 f = arch_local_save_flags();
 arch_local_irq_disable();
 return f;
}
# 905 "/home/iago/torvalds/linux/arch/x86/include/asm/paravirt.h"
extern void default_banner(void);
# 61 "/home/iago/torvalds/linux/arch/x86/include/asm/irqflags.h" 2
# 155 "/home/iago/torvalds/linux/arch/x86/include/asm/irqflags.h"
static inline int arch_irqs_disabled_flags(unsigned long flags)
{
 return !(flags & 0x00000200);
}

static inline int arch_irqs_disabled(void)
{
 unsigned long flags = arch_local_save_flags();

 return arch_irqs_disabled_flags(flags);
}
# 16 "include/linux/irqflags.h" 2


  extern void trace_softirqs_on(unsigned long ip);
  extern void trace_softirqs_off(unsigned long ip);
  extern void trace_hardirqs_on(void);
  extern void trace_hardirqs_off(void);
# 49 "include/linux/irqflags.h"
 extern void stop_critical_timings(void);
 extern void start_critical_timings(void);
# 12 "/home/iago/torvalds/linux/arch/x86/include/asm/system.h" 2
# 20 "/home/iago/torvalds/linux/arch/x86/include/asm/system.h"
struct task_struct;
struct task_struct *__switch_to(struct task_struct *prev,
    struct task_struct *next);
struct tss_struct;
void __switch_to_xtra(struct task_struct *prev_p, struct task_struct *next_p,
        struct tss_struct *tss);
extern void show_regs_common(void);
# 151 "/home/iago/torvalds/linux/arch/x86/include/asm/system.h"
extern void native_load_gs_index(unsigned);
# 199 "/home/iago/torvalds/linux/arch/x86/include/asm/system.h"
static inline unsigned long get_limit(unsigned long segment)
{
 unsigned long __limit;
 asm("lsll %1,%0" : "=r" (__limit) : "r" (segment));
 return __limit + 1;
}

static inline void native_clts(void)
{
 asm volatile("clts");
}
# 218 "/home/iago/torvalds/linux/arch/x86/include/asm/system.h"
static unsigned long __force_order;

static inline unsigned long native_read_cr0(void)
{
 unsigned long val;
 asm volatile("mov %%cr0,%0\n\t" : "=r" (val), "=m" (__force_order));
 return val;
}

static inline void native_write_cr0(unsigned long val)
{
 asm volatile("mov %0,%%cr0": : "r" (val), "m" (__force_order));
}

static inline unsigned long native_read_cr2(void)
{
 unsigned long val;
 asm volatile("mov %%cr2,%0\n\t" : "=r" (val), "=m" (__force_order));
 return val;
}

static inline void native_write_cr2(unsigned long val)
{
 asm volatile("mov %0,%%cr2": : "r" (val), "m" (__force_order));
}

static inline unsigned long native_read_cr3(void)
{
 unsigned long val;
 asm volatile("mov %%cr3,%0\n\t" : "=r" (val), "=m" (__force_order));
 return val;
}

static inline void native_write_cr3(unsigned long val)
{
 asm volatile("mov %0,%%cr3": : "r" (val), "m" (__force_order));
}

static inline unsigned long native_read_cr4(void)
{
 unsigned long val;
 asm volatile("mov %%cr4,%0\n\t" : "=r" (val), "=m" (__force_order));
 return val;
}

static inline unsigned long native_read_cr4_safe(void)
{
 unsigned long val;
# 274 "/home/iago/torvalds/linux/arch/x86/include/asm/system.h"
 val = native_read_cr4();

 return val;
}

static inline void native_write_cr4(unsigned long val)
{
 asm volatile("mov %0,%%cr4": : "r" (val), "m" (__force_order));
}


static inline unsigned long native_read_cr8(void)
{
 unsigned long cr8;
 asm volatile("movq %%cr8,%0" : "=r" (cr8));
 return cr8;
}

static inline void native_write_cr8(unsigned long val)
{
 asm volatile("movq %0,%%cr8" :: "r" (val) : "memory");
}


static inline void native_wbinvd(void)
{
 asm volatile("wbinvd": : :"memory");
}
# 388 "/home/iago/torvalds/linux/arch/x86/include/asm/system.h"
static inline void clflush(volatile void *__p)
{
 asm volatile("clflush %0" : "+m" (*(volatile char *)__p));
}



void disable_hlt(void);
void enable_hlt(void);

void cpu_idle_wait(void);

extern unsigned long arch_align_stack(unsigned long sp);
extern void free_init_pages(char *what, unsigned long begin, unsigned long end);

void default_idle(void);

void stop_this_cpu(void *dummy);
# 509 "/home/iago/torvalds/linux/arch/x86/include/asm/system.h"
static inline __attribute__((always_inline)) void rdtsc_barrier(void)
{
 asm volatile ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".section .altinstructions,\"a\"\n" " " ".balign 8" " " "\n" "	 .long 661b - .\n" "	 .long 663f - .\n" "	 .word " "(3*32+17)" "\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .discard,\"aw\",@progbits\n" "	 .byte 0xff + (664f-663f) - (662b-661b)\n" ".previous\n" ".section .altinstr_replacement, \"ax\"\n" "663:\n\t" "mfence" "\n664:\n" ".previous" : : : "memory");
 asm volatile ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".section .altinstructions,\"a\"\n" " " ".balign 8" " " "\n" "	 .long 661b - .\n" "	 .long 663f - .\n" "	 .word " "(3*32+18)" "\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .discard,\"aw\",@progbits\n" "	 .byte 0xff + (664f-663f) - (662b-661b)\n" ".previous\n" ".section .altinstr_replacement, \"ax\"\n" "663:\n\t" "lfence" "\n664:\n" ".previous" : : : "memory");
}
# 18 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h" 2



# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/msr.h" 1



# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/msr-index.h" 1
# 5 "/home/iago/torvalds/linux/arch/x86/include/asm/msr.h" 2




# 1 "include/linux/ioctl.h" 1



# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/ioctl.h" 1
# 1 "include/asm-generic/ioctl.h" 1
# 73 "include/asm-generic/ioctl.h"
extern unsigned int __invalid_size_argument_for_IOC;
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/ioctl.h" 2
# 5 "include/linux/ioctl.h" 2
# 10 "/home/iago/torvalds/linux/arch/x86/include/asm/msr.h" 2







# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/errno.h" 1
# 1 "include/asm-generic/errno.h" 1



# 1 "include/asm-generic/errno-base.h" 1
# 5 "include/asm-generic/errno.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/errno.h" 2
# 18 "/home/iago/torvalds/linux/arch/x86/include/asm/msr.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/cpumask.h" 1





extern cpumask_var_t cpu_callin_mask;
extern cpumask_var_t cpu_callout_mask;
extern cpumask_var_t cpu_initialized_mask;
extern cpumask_var_t cpu_sibling_setup_mask;

extern void setup_cpu_local_masks(void);
# 19 "/home/iago/torvalds/linux/arch/x86/include/asm/msr.h" 2

struct msr {
 union {
  struct {
   u32 l;
   u32 h;
  };
  u64 q;
 };
};

struct msr_info {
 u32 msr_no;
 struct msr reg;
 struct msr *msrs;
 int err;
};

struct msr_regs_info {
 u32 *regs;
 int err;
};

static inline unsigned long long native_read_tscp(unsigned int *aux)
{
 unsigned long low, high;
 asm volatile(".byte 0x0f,0x01,0xf9"
       : "=a" (low), "=d" (high), "=c" (*aux));
 return low | ((u64)high << 32);
}
# 68 "/home/iago/torvalds/linux/arch/x86/include/asm/msr.h"
static inline unsigned long long native_read_msr(unsigned int msr)
{
 unsigned low, high;

 asm volatile("rdmsr" : "=a" (low), "=d" (high) : "c" (msr));
 return ((low) | ((u64)(high) << 32));
}

static inline unsigned long long native_read_msr_safe(unsigned int msr,
            int *err)
{
 unsigned low, high;

 asm volatile("2: rdmsr ; xor %[err],%[err]\n"
       "1:\n\t"
       ".section .fixup,\"ax\"\n\t"
       "3:  mov %[fault],%[err] ; jmp 1b\n\t"
       ".previous\n\t"
       " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "2b" "," "3b" "\n" " .previous\n"
       : [err] "=r" (*err), "=a" (low), "=d" (high)
       : "c" (msr), [fault] "i" (-5));
 return ((low) | ((u64)(high) << 32));
}

static inline void native_write_msr(unsigned int msr,
        unsigned low, unsigned high)
{
 asm volatile("wrmsr" : : "c" (msr), "a"(low), "d" (high) : "memory");
}


__attribute__((no_instrument_function)) static inline int native_write_msr_safe(unsigned int msr,
     unsigned low, unsigned high)
{
 int err;
 asm volatile("2: wrmsr ; xor %[err],%[err]\n"
       "1:\n\t"
       ".section .fixup,\"ax\"\n\t"
       "3:  mov %[fault],%[err] ; jmp 1b\n\t"
       ".previous\n\t"
       " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "2b" "," "3b" "\n" " .previous\n"
       : [err] "=a" (err)
       : "c" (msr), "0" (low), "d" (high),
         [fault] "i" (-5)
       : "memory");
 return err;
}

extern unsigned long long native_read_tsc(void);

extern int native_rdmsr_safe_regs(u32 regs[8]);
extern int native_wrmsr_safe_regs(u32 regs[8]);

static inline __attribute__((always_inline)) unsigned long long __native_read_tsc(void)
{
 unsigned low, high;

 asm volatile("rdtsc" : "=a" (low), "=d" (high));

 return ((low) | ((u64)(high) << 32));
}

static inline unsigned long long native_read_pmc(int counter)
{
 unsigned low, high;

 asm volatile("rdpmc" : "=a" (low), "=d" (high) : "c" (counter));
 return ((low) | ((u64)(high) << 32));
}
# 259 "/home/iago/torvalds/linux/arch/x86/include/asm/msr.h"
struct msr *msrs_alloc(void);
void msrs_free(struct msr *msrs);


int rdmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 *l, u32 *h);
int wrmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h);
void rdmsr_on_cpus(const struct cpumask *mask, u32 msr_no, struct msr *msrs);
void wrmsr_on_cpus(const struct cpumask *mask, u32 msr_no, struct msr *msrs);
int rdmsr_safe_on_cpu(unsigned int cpu, u32 msr_no, u32 *l, u32 *h);
int wrmsr_safe_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h);
int rdmsr_safe_regs_on_cpu(unsigned int cpu, u32 regs[8]);
int wrmsr_safe_regs_on_cpu(unsigned int cpu, u32 regs[8]);
# 22 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h" 2



# 1 "include/linux/personality.h" 1
# 10 "include/linux/personality.h"
struct exec_domain;
struct pt_regs;

extern int register_exec_domain(struct exec_domain *);
extern int unregister_exec_domain(struct exec_domain *);
extern int __set_personality(unsigned int);
# 24 "include/linux/personality.h"
enum {
 UNAME26 = 0x0020000,
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
# 55 "include/linux/personality.h"
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
# 90 "include/linux/personality.h"
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
# 26 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h" 2

# 1 "include/linux/cache.h" 1
# 28 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h" 2

# 1 "include/linux/math64.h" 1




# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/div64.h" 1
# 57 "/home/iago/torvalds/linux/arch/x86/include/asm/div64.h"
# 1 "include/asm-generic/div64.h" 1
# 58 "/home/iago/torvalds/linux/arch/x86/include/asm/div64.h" 2
# 6 "include/linux/math64.h" 2
# 15 "include/linux/math64.h"
static inline u64 div_u64_rem(u64 dividend, u32 divisor, u32 *remainder)
{
 *remainder = dividend % divisor;
 return dividend / divisor;
}




static inline s64 div_s64_rem(s64 dividend, s32 divisor, s32 *remainder)
{
 *remainder = dividend % divisor;
 return dividend / divisor;
}




static inline u64 div64_u64(u64 dividend, u64 divisor)
{
 return dividend / divisor;
}




static inline s64 div64_s64(s64 dividend, s64 divisor)
{
 return dividend / divisor;
}
# 78 "include/linux/math64.h"
static inline u64 div_u64(u64 dividend, u32 divisor)
{
 u32 remainder;
 return div_u64_rem(dividend, divisor, &remainder);
}






static inline s64 div_s64(s64 dividend, s32 divisor)
{
 s32 remainder;
 return div_s64_rem(dividend, divisor, &remainder);
}


u32 iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder);

static inline __attribute__((always_inline)) u32
__iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder)
{
 u32 ret = 0;

 while (dividend >= divisor) {


  asm("" : "+rm"(dividend));

  dividend -= divisor;
  ret++;
 }

 *remainder = dividend;

 return ret;
}
# 30 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h" 2

# 1 "include/linux/err.h" 1





# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/errno.h" 1
# 7 "include/linux/err.h" 2
# 22 "include/linux/err.h"
static inline void * __attribute__((warn_unused_result)) ERR_PTR(long error)
{
 return (void *) error;
}

static inline long __attribute__((warn_unused_result)) PTR_ERR(const void *ptr)
{
 return (long) ptr;
}

static inline long __attribute__((warn_unused_result)) IS_ERR(const void *ptr)
{
 return __builtin_expect(!!(((unsigned long)ptr) >= (unsigned long)-4095), 0);
}

static inline long __attribute__((warn_unused_result)) IS_ERR_OR_NULL(const void *ptr)
{
 return !ptr || __builtin_expect(!!(((unsigned long)ptr) >= (unsigned long)-4095), 0);
}
# 49 "include/linux/err.h"
static inline void * __attribute__((warn_unused_result)) ERR_CAST(const void *ptr)
{

 return (void *) ptr;
}

static inline int __attribute__((warn_unused_result)) PTR_RET(const void *ptr)
{
 if (IS_ERR(ptr))
  return PTR_ERR(ptr);
 else
  return 0;
}
# 32 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h" 2






static inline void *current_text_addr(void)
{
 void *pc;

 asm volatile("mov $1f, %0; 1:":"=r" (pc));

 return pc;
}
# 61 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h"
struct cpuinfo_x86 {
 __u8 x86;
 __u8 x86_vendor;
 __u8 x86_model;
 __u8 x86_mask;
# 79 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h"
 int x86_tlbsize;

 __u8 x86_virt_bits;
 __u8 x86_phys_bits;

 __u8 x86_coreid_bits;

 __u32 extended_cpuid_level;

 int cpuid_level;
 __u32 x86_capability[10];
 char x86_vendor_id[16];
 char x86_model_id[64];

 int x86_cache_size;
 int x86_cache_alignment;
 int x86_power;
 unsigned long loops_per_jiffy;

 u16 x86_max_cores;
 u16 apicid;
 u16 initial_apicid;
 u16 x86_clflush_size;


 u16 booted_cores;

 u16 phys_proc_id;

 u16 cpu_core_id;

 u8 compute_unit_id;

 u16 cpu_index;

} __attribute__((__aligned__((1 << (6)))));
# 130 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h"
extern struct cpuinfo_x86 boot_cpu_data;
extern struct cpuinfo_x86 new_cpu_data;

extern struct tss_struct doublefault_tss;
extern __u32 cpu_caps_cleared[10];
extern __u32 cpu_caps_set[10];


extern __attribute__((section(".discard"), unused)) char __pcpu_scope_cpu_info; extern __attribute__((section(".data..percpu" "..shared_aligned"))) __typeof__(struct cpuinfo_x86) cpu_info __attribute__((__aligned__((1 << (6)))));






extern const struct seq_operations cpuinfo_op;

static inline int hlt_works(int cpu)
{



 return 1;

}



extern void cpu_detect(struct cpuinfo_x86 *c);

extern struct pt_regs *idle_regs(struct pt_regs *);

extern void early_cpu_init(void);
extern void identify_boot_cpu(void);
extern void identify_secondary_cpu(struct cpuinfo_x86 *);
extern void print_cpu_info(struct cpuinfo_x86 *);
extern void init_scattered_cpuid_features(struct cpuinfo_x86 *c);
extern unsigned int init_intel_cacheinfo(struct cpuinfo_x86 *c);
extern unsigned short num_cache_leaves;

extern void detect_extended_topology(struct cpuinfo_x86 *c);
extern void detect_ht(struct cpuinfo_x86 *c);

static inline void native_cpuid(unsigned int *eax, unsigned int *ebx,
    unsigned int *ecx, unsigned int *edx)
{

 asm volatile("cpuid"
     : "=a" (*eax),
       "=b" (*ebx),
       "=c" (*ecx),
       "=d" (*edx)
     : "0" (*eax), "2" (*ecx));
}

static inline void load_cr3(pgd_t *pgdir)
{
 write_cr3(__phys_addr((unsigned long)(pgdir)));
}
# 224 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h"
struct x86_hw_tss {
 u32 reserved1;
 u64 sp0;
 u64 sp1;
 u64 sp2;
 u64 reserved2;
 u64 ist[7];
 u32 reserved3;
 u32 reserved4;
 u16 reserved5;
 u16 io_bitmap_base;

} __attribute__((packed)) __attribute__((__aligned__((1 << (6)))));
# 248 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h"
struct tss_struct {



 struct x86_hw_tss x86_tss;







 unsigned long io_bitmap[((65536/8)/sizeof(long)) + 1];




 unsigned long stack[64];

} __attribute__((__aligned__((1 << (6)))));

extern __attribute__((section(".discard"), unused)) char __pcpu_scope_init_tss; extern __attribute__((section(".data..percpu" "..shared_aligned"))) __typeof__(struct tss_struct) init_tss __attribute__((__aligned__((1 << (6)))));




struct orig_ist {
 unsigned long ist[7];
};



struct i387_fsave_struct {
 u32 cwd;
 u32 swd;
 u32 twd;
 u32 fip;
 u32 fcs;
 u32 foo;
 u32 fos;


 u32 st_space[20];


 u32 status;
};

struct i387_fxsave_struct {
 u16 cwd;
 u16 swd;
 u16 twd;
 u16 fop;
 union {
  struct {
   u64 rip;
   u64 rdp;
  };
  struct {
   u32 fip;
   u32 fcs;
   u32 foo;
   u32 fos;
  };
 };
 u32 mxcsr;
 u32 mxcsr_mask;


 u32 st_space[32];


 u32 xmm_space[64];

 u32 padding[12];

 union {
  u32 padding1[12];
  u32 sw_reserved[12];
 };

} __attribute__((aligned(16)));

struct i387_soft_struct {
 u32 cwd;
 u32 swd;
 u32 twd;
 u32 fip;
 u32 fcs;
 u32 foo;
 u32 fos;

 u32 st_space[20];
 u8 ftop;
 u8 changed;
 u8 lookahead;
 u8 no_update;
 u8 rm;
 u8 alimit;
 struct math_emu_info *info;
 u32 entry_eip;
};

struct ymmh_struct {

 u32 ymmh_space[64];
};

struct xsave_hdr_struct {
 u64 xstate_bv;
 u64 reserved1[2];
 u64 reserved2[5];
} __attribute__((packed));

struct xsave_struct {
 struct i387_fxsave_struct i387;
 struct xsave_hdr_struct xsave_hdr;
 struct ymmh_struct ymmh;

} __attribute__ ((packed, aligned (64)));

union thread_xstate {
 struct i387_fsave_struct fsave;
 struct i387_fxsave_struct fxsave;
 struct i387_soft_struct soft;
 struct xsave_struct xsave;
};

struct fpu {
 union thread_xstate *state;
};


extern __attribute__((section(".discard"), unused)) char __pcpu_scope_orig_ist; extern __attribute__((section(".data..percpu" ""))) __typeof__(struct orig_ist) orig_ist;

union irq_stack_union {
 char irq_stack[(((1UL) << 12) << 2)];





 struct {
  char gs_base[40];
  unsigned long stack_canary;
 };
};

extern __attribute__((section(".discard"), unused)) char __pcpu_scope_irq_stack_union; extern __attribute__((section(".data..percpu" "..first"))) __typeof__(union irq_stack_union) irq_stack_union;
extern typeof(irq_stack_union) init_per_cpu__irq_stack_union;

extern __attribute__((section(".discard"), unused)) char __pcpu_scope_irq_stack_ptr; extern __attribute__((section(".data..percpu" ""))) __typeof__(char *) irq_stack_ptr;
extern __attribute__((section(".discard"), unused)) char __pcpu_scope_irq_count; extern __attribute__((section(".data..percpu" ""))) __typeof__(unsigned int) irq_count;
extern unsigned long kernel_eflags;
extern void ignore_sysret(void);
# 419 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h"
extern unsigned int xstate_size;
extern void free_thread_xstate(struct task_struct *);
extern struct kmem_cache *task_xstate_cachep;

struct perf_event;

struct thread_struct {

 struct desc_struct tls_array[3];
 unsigned long sp0;
 unsigned long sp;



 unsigned long usersp;
 unsigned short es;
 unsigned short ds;
 unsigned short fsindex;
 unsigned short gsindex;





 unsigned long fs;

 unsigned long gs;

 struct perf_event *ptrace_bps[4];

 unsigned long debugreg6;

 unsigned long ptrace_dr7;

 unsigned long cr2;
 unsigned long trap_no;
 unsigned long error_code;

 struct fpu fpu;
# 469 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h"
 unsigned long *io_bitmap_ptr;
 unsigned long iopl;

 unsigned io_bitmap_max;
};

static inline unsigned long native_get_debugreg(int regno)
{
 unsigned long val = 0;

 switch (regno) {
 case 0:
  asm("mov %%db0, %0" :"=r" (val));
  break;
 case 1:
  asm("mov %%db1, %0" :"=r" (val));
  break;
 case 2:
  asm("mov %%db2, %0" :"=r" (val));
  break;
 case 3:
  asm("mov %%db3, %0" :"=r" (val));
  break;
 case 6:
  asm("mov %%db6, %0" :"=r" (val));
  break;
 case 7:
  asm("mov %%db7, %0" :"=r" (val));
  break;
 default:
  do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/processor.h"), "i" (499), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0);
 }
 return val;
}

static inline void native_set_debugreg(int regno, unsigned long value)
{
 switch (regno) {
 case 0:
  asm("mov %0, %%db0" ::"r" (value));
  break;
 case 1:
  asm("mov %0, %%db1" ::"r" (value));
  break;
 case 2:
  asm("mov %0, %%db2" ::"r" (value));
  break;
 case 3:
  asm("mov %0, %%db3" ::"r" (value));
  break;
 case 6:
  asm("mov %0, %%db6" ::"r" (value));
  break;
 case 7:
  asm("mov %0, %%db7" ::"r" (value));
  break;
 default:
  do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/processor.h"), "i" (526), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0);
 }
}




static inline void native_set_iopl_mask(unsigned mask)
{
# 547 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h"
}

static inline void
native_load_sp0(struct tss_struct *tss, struct thread_struct *thread)
{
 tss->x86_tss.sp0 = thread->sp0;







}

static inline void native_swapgs(void)
{

 asm volatile("swapgs" ::: "memory");

}
# 598 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h"
extern unsigned long mmu_cr4_features;

static inline void set_in_cr4(unsigned long mask)
{
 unsigned long cr4;

 mmu_cr4_features |= mask;
 cr4 = read_cr4();
 cr4 |= mask;
 write_cr4(cr4);
}

static inline void clear_in_cr4(unsigned long mask)
{
 unsigned long cr4;

 mmu_cr4_features &= ~mask;
 cr4 = read_cr4();
 cr4 &= ~mask;
 write_cr4(cr4);
}

typedef struct {
 unsigned long seg;
} mm_segment_t;





extern int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);


extern void release_thread(struct task_struct *);


extern void prepare_to_copy(struct task_struct *tsk);

unsigned long get_wchan(struct task_struct *p);






static inline void cpuid(unsigned int op,
    unsigned int *eax, unsigned int *ebx,
    unsigned int *ecx, unsigned int *edx)
{
 *eax = op;
 *ecx = 0;
 __cpuid(eax, ebx, ecx, edx);
}


static inline void cpuid_count(unsigned int op, int count,
          unsigned int *eax, unsigned int *ebx,
          unsigned int *ecx, unsigned int *edx)
{
 *eax = op;
 *ecx = count;
 __cpuid(eax, ebx, ecx, edx);
}




static inline unsigned int cpuid_eax(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return eax;
}

static inline unsigned int cpuid_ebx(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return ebx;
}

static inline unsigned int cpuid_ecx(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return ecx;
}

static inline unsigned int cpuid_edx(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return edx;
}


static inline void rep_nop(void)
{
 asm volatile("rep; nop" ::: "memory");
}

static inline void cpu_relax(void)
{
 rep_nop();
}


static inline void sync_core(void)
{
 int tmp;
# 727 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h"
  asm volatile("cpuid" : "=a" (tmp) : "0" (1)
        : "ebx", "ecx", "edx", "memory");
}

static inline void __monitor(const void *eax, unsigned long ecx,
        unsigned long edx)
{

 asm volatile(".byte 0x0f, 0x01, 0xc8;"
       :: "a" (eax), "c" (ecx), "d"(edx));
}

static inline void __mwait(unsigned long eax, unsigned long ecx)
{

 asm volatile(".byte 0x0f, 0x01, 0xc9;"
       :: "a" (eax), "c" (ecx));
}

static inline void __sti_mwait(unsigned long eax, unsigned long ecx)
{
 trace_hardirqs_on();

 asm volatile("sti; .byte 0x0f, 0x01, 0xc9;"
       :: "a" (eax), "c" (ecx));
}

extern void select_idle_routine(const struct cpuinfo_x86 *c);
extern void init_amd_e400_c1e_mask(void);

extern unsigned long boot_option_idle_override;
extern bool amd_e400_c1e_detected;

enum idle_boot_override {IDLE_NO_OVERRIDE=0, IDLE_HALT, IDLE_NOMWAIT,
    IDLE_POLL, IDLE_FORCE_MWAIT};

extern void enable_sep_cpu(void);
extern int sysenter_setup(void);

extern void early_trap_init(void);


extern struct desc_ptr early_gdt_descr;

extern void cpu_set_gdt(int);
extern void switch_to_new_gdt(int);
extern void load_percpu_segment(int);
extern void cpu_init(void);

static inline unsigned long get_debugctlmsr(void)
{
 unsigned long debugctlmsr = 0;





 do { int _err; debugctlmsr = paravirt_read_msr(0x000001d9, &_err); } while (0);

 return debugctlmsr;
}

static inline void update_debugctlmsr(unsigned long debugctlmsr)
{




 do { paravirt_write_msr(0x000001d9, (u32)((u64)(debugctlmsr)), ((u64)(debugctlmsr))>>32); } while (0);
}





extern unsigned int machine_id;
extern unsigned int machine_submodel_id;
extern unsigned int BIOS_revision;


extern int bootloader_type;
extern int bootloader_version;

extern char ignore_fpu_irq;
# 829 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h"
static inline void prefetch(const void *x)
{
 asm volatile ("661:\n\t" "prefetcht0 (%1)" "\n662:\n" ".section .altinstructions,\"a\"\n" " " ".balign 8" " " "\n" "	 .long 661b - .\n" "	 .long 663f - .\n" "	 .word " "(0*32+25)" "\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .discard,\"aw\",@progbits\n" "	 .byte 0xff + (664f-663f) - (662b-661b)\n" ".previous\n" ".section .altinstr_replacement, \"ax\"\n" "663:\n\t" "prefetchnta (%1)" "\n664:\n" ".previous" : : "i" (0), "r" (x))


             ;
}






static inline void prefetchw(const void *x)
{
 asm volatile ("661:\n\t" "prefetcht0 (%1)" "\n662:\n" ".section .altinstructions,\"a\"\n" " " ".balign 8" " " "\n" "	 .long 661b - .\n" "	 .long 663f - .\n" "	 .word " "(1*32+31)" "\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .discard,\"aw\",@progbits\n" "	 .byte 0xff + (664f-663f) - (662b-661b)\n" ".previous\n" ".section .altinstr_replacement, \"ax\"\n" "663:\n\t" "prefetchw (%1)" "\n664:\n" ".previous" : : "i" (0), "r" (x))


             ;
}

static inline void spin_lock_prefetch(const void *x)
{
 prefetchw(x);
}
# 950 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h"
extern unsigned long KSTK_ESP(struct task_struct *task);


extern void start_thread(struct pt_regs *regs, unsigned long new_ip,
            unsigned long new_sp);
# 968 "/home/iago/torvalds/linux/arch/x86/include/asm/processor.h"
extern int get_tsc_mode(unsigned long adr);
extern int set_tsc_mode(unsigned int val);

extern int amd_get_nb_id(int cpu);

struct aperfmperf {
 u64 aperf, mperf;
};

static inline void get_aperfmperf(struct aperfmperf *am)
{
 ({ static bool __warned; int __ret_warn_once = !!(!(__builtin_constant_p((3*32+28)) && ( ((((3*32+28))>>5)==0 && (1UL<<(((3*32+28))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((3*32+28))>>5)==1 && (1UL<<(((3*32+28))&31) & ((1<<((1*32+29) & 31))|0))) || ((((3*32+28))>>5)==2 && (1UL<<(((3*32+28))&31) & 0)) || ((((3*32+28))>>5)==3 && (1UL<<(((3*32+28))&31) & ((1<<((3*32+20) & 31))))) || ((((3*32+28))>>5)==4 && (1UL<<(((3*32+28))&31) & 0)) || ((((3*32+28))>>5)==5 && (1UL<<(((3*32+28))&31) & 0)) || ((((3*32+28))>>5)==6 && (1UL<<(((3*32+28))&31) & 0)) || ((((3*32+28))>>5)==7 && (1UL<<(((3*32+28))&31) & 0)) || ((((3*32+28))>>5)==8 && (1UL<<(((3*32+28))&31) & 0)) || ((((3*32+28))>>5)==9 && (1UL<<(((3*32+28))&31) & 0)) ) ? 1 : (__builtin_constant_p(((3*32+28))) ? constant_test_bit(((3*32+28)), ((unsigned long *)((&boot_cpu_data)->x86_capability))) : variable_test_bit(((3*32+28)), ((unsigned long *)((&boot_cpu_data)->x86_capability)))))); if (__builtin_expect(!!(__ret_warn_once), 0)) if (({ int __ret_warn_on = !!(!__warned); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath_null("/home/iago/torvalds/linux/arch/x86/include/asm/processor.h", 979); __builtin_expect(!!(__ret_warn_on), 0); })) __warned = true; __builtin_expect(!!(__ret_warn_once), 0); });

 do { int _err; am->aperf = paravirt_read_msr(0x000000e8, &_err); } while (0);
 do { int _err; am->mperf = paravirt_read_msr(0x000000e7, &_err); } while (0);
}



static inline
unsigned long calc_aperfmperf_ratio(struct aperfmperf *old,
        struct aperfmperf *new)
{
 u64 aperf = new->aperf - old->aperf;
 u64 mperf = new->mperf - old->mperf;
 unsigned long ratio = aperf;

 mperf >>= 10;
 if (mperf)
  ratio = div64_u64(aperf, mperf);

 return ratio;
}





extern const int amd_erratum_383[];
extern const int amd_erratum_400[];
extern bool cpu_has_amd_erratum(const int *);
# 23 "/home/iago/torvalds/linux/arch/x86/include/asm/thread_info.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/ftrace.h" 1
# 36 "/home/iago/torvalds/linux/arch/x86/include/asm/ftrace.h"
extern void mcount(void);

static inline unsigned long ftrace_call_adjust(unsigned long addr)
{




 return addr;
}



struct dyn_arch_ftrace {

};
# 24 "/home/iago/torvalds/linux/arch/x86/include/asm/thread_info.h" 2
# 1 "include/linux/atomic.h" 1



# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h" 1







# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/cmpxchg.h" 1
# 9 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h" 2
# 23 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h"
static inline int atomic_read(const atomic_t *v)
{
 return (*(volatile int *)&(v)->counter);
}
# 35 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h"
static inline void atomic_set(atomic_t *v, int i)
{
 v->counter = i;
}
# 47 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h"
static inline void atomic_add(int i, atomic_t *v)
{
 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "addl %1,%0"
       : "+m" (v->counter)
       : "ir" (i));
}
# 61 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h"
static inline void atomic_sub(int i, atomic_t *v)
{
 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "subl %1,%0"
       : "+m" (v->counter)
       : "ir" (i));
}
# 77 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h"
static inline int atomic_sub_and_test(int i, atomic_t *v)
{
 unsigned char c;

 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "subl %2,%0; sete %1"
       : "+m" (v->counter), "=qm" (c)
       : "ir" (i) : "memory");
 return c;
}







static inline void atomic_inc(atomic_t *v)
{
 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "incl %0"
       : "+m" (v->counter));
}







static inline void atomic_dec(atomic_t *v)
{
 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "decl %0"
       : "+m" (v->counter));
}
# 119 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h"
static inline int atomic_dec_and_test(atomic_t *v)
{
 unsigned char c;

 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "decl %0; sete %1"
       : "+m" (v->counter), "=qm" (c)
       : : "memory");
 return c != 0;
}
# 137 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h"
static inline int atomic_inc_and_test(atomic_t *v)
{
 unsigned char c;

 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "incl %0; sete %1"
       : "+m" (v->counter), "=qm" (c)
       : : "memory");
 return c != 0;
}
# 156 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h"
static inline int atomic_add_negative(int i, atomic_t *v)
{
 unsigned char c;

 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "addl %2,%0; sets %1"
       : "+m" (v->counter), "=qm" (c)
       : "ir" (i) : "memory");
 return c;
}
# 173 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h"
static inline int atomic_add_return(int i, atomic_t *v)
{
 int __i;






 __i = i;
 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "xaddl %0, %1"
       : "+r" (i), "+m" (v->counter)
       : : "memory");
 return i + __i;
# 196 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h"
}
# 205 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h"
static inline int atomic_sub_return(int i, atomic_t *v)
{
 return atomic_add_return(-i, v);
}




static inline int atomic_cmpxchg(atomic_t *v, int old, int new)
{
 return ({ __typeof__(*(((&v->counter)))) __ret; __typeof__(*(((&v->counter)))) __old = (((old))); __typeof__(*(((&v->counter)))) __new = (((new))); switch ((sizeof(*&v->counter))) { case 1: { volatile u8 *__ptr = (volatile u8 *)(((&v->counter))); asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "cmpxchgb %2,%1" : "=a" (__ret), "+m" (*__ptr) : "q" (__new), "0" (__old) : "memory"); break; } case 2: { volatile u16 *__ptr = (volatile u16 *)(((&v->counter))); asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "cmpxchgw %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } case 4: { volatile u32 *__ptr = (volatile u32 *)(((&v->counter))); asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "cmpxchgl %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } case 8: { volatile u64 *__ptr = (volatile u64 *)(((&v->counter))); asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "cmpxchgq %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } default: __cmpxchg_wrong_size(); } __ret; });
}

static inline int atomic_xchg(atomic_t *v, int new)
{
 return ({ __typeof(*((&v->counter))) __x = ((new)); switch (sizeof(*&v->counter)) { case 1: { volatile u8 *__ptr = (volatile u8 *)((&v->counter)); asm volatile("xchgb %0,%1" : "=q" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } case 2: { volatile u16 *__ptr = (volatile u16 *)((&v->counter)); asm volatile("xchgw %0,%1" : "=r" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } case 4: { volatile u32 *__ptr = (volatile u32 *)((&v->counter)); asm volatile("xchgl %0,%1" : "=r" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } case 8: { volatile u64 *__ptr = (volatile u64 *)((&v->counter)); asm volatile("xchgq %0,%1" : "=r" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } default: __xchg_wrong_size(); } __x; });
}
# 232 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h"
static inline int __atomic_add_unless(atomic_t *v, int a, int u)
{
 int c, old;
 c = atomic_read(v);
 for (;;) {
  if (__builtin_expect(!!(c == (u)), 0))
   break;
  old = atomic_cmpxchg((v), c, c + (a));
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return c;
}
# 255 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h"
static inline int atomic_dec_if_positive(atomic_t *v)
{
 int c, old, dec;
 c = atomic_read(v);
 for (;;) {
  dec = c - 1;
  if (__builtin_expect(!!(dec < 0), 0))
   break;
  old = atomic_cmpxchg((v), c, dec);
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return dec;
}
# 278 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h"
static inline short int atomic_inc_short(short int *v)
{
 asm(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "addw $1, %0" : "+m" (*v));
 return *v;
}
# 293 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h"
static inline void atomic_or_long(unsigned long *v1, unsigned long v2)
{
 asm(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "orq %1, %0" : "+m" (*v1) : "r" (v2));
}
# 318 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic64_64.h" 1





# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/cmpxchg.h" 1
# 7 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic64_64.h" 2
# 19 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic64_64.h"
static inline long atomic64_read(const atomic64_t *v)
{
 return (*(volatile long *)&(v)->counter);
}
# 31 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic64_64.h"
static inline void atomic64_set(atomic64_t *v, long i)
{
 v->counter = i;
}
# 43 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic64_64.h"
static inline void atomic64_add(long i, atomic64_t *v)
{
 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "addq %1,%0"
       : "=m" (v->counter)
       : "er" (i), "m" (v->counter));
}
# 57 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic64_64.h"
static inline void atomic64_sub(long i, atomic64_t *v)
{
 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "subq %1,%0"
       : "=m" (v->counter)
       : "er" (i), "m" (v->counter));
}
# 73 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic64_64.h"
static inline int atomic64_sub_and_test(long i, atomic64_t *v)
{
 unsigned char c;

 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "subq %2,%0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "er" (i), "m" (v->counter) : "memory");
 return c;
}







static inline void atomic64_inc(atomic64_t *v)
{
 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "incq %0"
       : "=m" (v->counter)
       : "m" (v->counter));
}







static inline void atomic64_dec(atomic64_t *v)
{
 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "decq %0"
       : "=m" (v->counter)
       : "m" (v->counter));
}
# 117 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic64_64.h"
static inline int atomic64_dec_and_test(atomic64_t *v)
{
 unsigned char c;

 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "decq %0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "m" (v->counter) : "memory");
 return c != 0;
}
# 135 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic64_64.h"
static inline int atomic64_inc_and_test(atomic64_t *v)
{
 unsigned char c;

 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "incq %0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "m" (v->counter) : "memory");
 return c != 0;
}
# 154 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic64_64.h"
static inline int atomic64_add_negative(long i, atomic64_t *v)
{
 unsigned char c;

 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "addq %2,%0; sets %1"
       : "=m" (v->counter), "=qm" (c)
       : "er" (i), "m" (v->counter) : "memory");
 return c;
}
# 171 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic64_64.h"
static inline long atomic64_add_return(long i, atomic64_t *v)
{
 long __i = i;
 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "xaddq %0, %1;"
       : "+r" (i), "+m" (v->counter)
       : : "memory");
 return i + __i;
}

static inline long atomic64_sub_return(long i, atomic64_t *v)
{
 return atomic64_add_return(-i, v);
}




static inline long atomic64_cmpxchg(atomic64_t *v, long old, long new)
{
 return ({ __typeof__(*(((&v->counter)))) __ret; __typeof__(*(((&v->counter)))) __old = (((old))); __typeof__(*(((&v->counter)))) __new = (((new))); switch ((sizeof(*&v->counter))) { case 1: { volatile u8 *__ptr = (volatile u8 *)(((&v->counter))); asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "cmpxchgb %2,%1" : "=a" (__ret), "+m" (*__ptr) : "q" (__new), "0" (__old) : "memory"); break; } case 2: { volatile u16 *__ptr = (volatile u16 *)(((&v->counter))); asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "cmpxchgw %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } case 4: { volatile u32 *__ptr = (volatile u32 *)(((&v->counter))); asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "cmpxchgl %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } case 8: { volatile u64 *__ptr = (volatile u64 *)(((&v->counter))); asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "cmpxchgq %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } default: __cmpxchg_wrong_size(); } __ret; });
}

static inline long atomic64_xchg(atomic64_t *v, long new)
{
 return ({ __typeof(*((&v->counter))) __x = ((new)); switch (sizeof(*&v->counter)) { case 1: { volatile u8 *__ptr = (volatile u8 *)((&v->counter)); asm volatile("xchgb %0,%1" : "=q" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } case 2: { volatile u16 *__ptr = (volatile u16 *)((&v->counter)); asm volatile("xchgw %0,%1" : "=r" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } case 4: { volatile u32 *__ptr = (volatile u32 *)((&v->counter)); asm volatile("xchgl %0,%1" : "=r" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } case 8: { volatile u64 *__ptr = (volatile u64 *)((&v->counter)); asm volatile("xchgq %0,%1" : "=r" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } default: __xchg_wrong_size(); } __x; });
}
# 207 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic64_64.h"
static inline int atomic64_add_unless(atomic64_t *v, long a, long u)
{
 long c, old;
 c = atomic64_read(v);
 for (;;) {
  if (__builtin_expect(!!(c == (u)), 0))
   break;
  old = atomic64_cmpxchg((v), c, c + (a));
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return c != (u);
}
# 231 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic64_64.h"
static inline long atomic64_dec_if_positive(atomic64_t *v)
{
 long c, old, dec;
 c = atomic64_read(v);
 for (;;) {
  dec = c - 1;
  if (__builtin_expect(!!(dec < 0), 0))
   break;
  old = atomic64_cmpxchg((v), c, dec);
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return dec;
}
# 319 "/home/iago/torvalds/linux/arch/x86/include/asm/atomic.h" 2
# 5 "include/linux/atomic.h" 2
# 15 "include/linux/atomic.h"
static inline int atomic_add_unless(atomic_t *v, int a, int u)
{
 return __atomic_add_unless(v, a, u) != u;
}
# 42 "include/linux/atomic.h"
static inline int atomic_inc_not_zero_hint(atomic_t *v, int hint)
{
 int val, c = hint;


 if (!hint)
  return atomic_add_unless((v), 1, 0);

 do {
  val = atomic_cmpxchg(v, c, c + 1);
  if (val == c)
   return 1;
  c = val;
 } while (c);

 return 0;
}



static inline int atomic_inc_unless_negative(atomic_t *p)
{
 int v, v1;
 for (v = 0; v >= 0; v = v1) {
  v1 = atomic_cmpxchg(p, v, v + 1);
  if (__builtin_expect(!!(v1 == v), 1))
   return 1;
 }
 return 0;
}



static inline int atomic_dec_unless_positive(atomic_t *p)
{
 int v, v1;
 for (v = 0; v <= 0; v = v1) {
  v1 = atomic_cmpxchg(p, v, v - 1);
  if (__builtin_expect(!!(v1 == v), 1))
   return 1;
 }
 return 0;
}



static inline void atomic_or(int i, atomic_t *v)
{
 int old;
 int new;

 do {
  old = atomic_read(v);
  new = old | i;
 } while (atomic_cmpxchg(v, old, new) != old);
}


# 1 "include/asm-generic/atomic-long.h" 1
# 23 "include/asm-generic/atomic-long.h"
typedef atomic64_t atomic_long_t;



static inline long atomic_long_read(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_read(v);
}

static inline void atomic_long_set(atomic_long_t *l, long i)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_set(v, i);
}

static inline void atomic_long_inc(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_inc(v);
}

static inline void atomic_long_dec(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_dec(v);
}

static inline void atomic_long_add(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_add(i, v);
}

static inline void atomic_long_sub(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_sub(i, v);
}

static inline int atomic_long_sub_and_test(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_sub_and_test(i, v);
}

static inline int atomic_long_dec_and_test(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_dec_and_test(v);
}

static inline int atomic_long_inc_and_test(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_inc_and_test(v);
}

static inline int atomic_long_add_negative(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_add_negative(i, v);
}

static inline long atomic_long_add_return(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_add_return(i, v);
}

static inline long atomic_long_sub_return(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_sub_return(i, v);
}

static inline long atomic_long_inc_return(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)(atomic64_add_return(1, (v)));
}

static inline long atomic_long_dec_return(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)(atomic64_sub_return(1, (v)));
}

static inline long atomic_long_add_unless(atomic_long_t *l, long a, long u)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_add_unless(v, a, u);
}
# 101 "include/linux/atomic.h" 2
# 25 "/home/iago/torvalds/linux/arch/x86/include/asm/thread_info.h" 2

struct thread_info {
 struct task_struct *task;
 struct exec_domain *exec_domain;
 __u32 flags;
 __u32 status;
 __u32 cpu;
 int preempt_count;

 mm_segment_t addr_limit;
 struct restart_block restart_block;
 void *sysenter_return;






 int uaccess_err;
};
# 217 "/home/iago/torvalds/linux/arch/x86/include/asm/thread_info.h"
extern __attribute__((section(".discard"), unused)) char __pcpu_scope_kernel_stack; extern __attribute__((section(".data..percpu" ""))) __typeof__(unsigned long) kernel_stack;

static inline struct thread_info *current_thread_info(void)
{
 struct thread_info *ti;
 ti = (void *)(({ typeof(kernel_stack) pfo_ret__; switch (sizeof(kernel_stack)) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "p" (&(kernel_stack))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "p" (&(kernel_stack))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "p" (&(kernel_stack))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "p" (&(kernel_stack))); break; default: __bad_percpu_size(); } pfo_ret__; }) +
        (5*8) - (((1UL) << 12) << 1));
 return ti;
}
# 256 "/home/iago/torvalds/linux/arch/x86/include/asm/thread_info.h"
static inline void set_restore_sigmask(void)
{
 struct thread_info *ti = current_thread_info();
 ti->status |= 0x0008;
 set_bit(2, (unsigned long *)&ti->flags);
}



extern void arch_task_cache_init(void);
extern void free_thread_info(struct thread_info *ti);
extern int arch_dup_task_struct(struct task_struct *dst, struct task_struct *src);
# 54 "include/linux/thread_info.h" 2
# 62 "include/linux/thread_info.h"
static inline void set_ti_thread_flag(struct thread_info *ti, int flag)
{
 set_bit(flag, (unsigned long *)&ti->flags);
}

static inline void clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 clear_bit(flag, (unsigned long *)&ti->flags);
}

static inline int test_and_set_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_set_bit(flag, (unsigned long *)&ti->flags);
}

static inline int test_and_clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_clear_bit(flag, (unsigned long *)&ti->flags);
}

static inline int test_ti_thread_flag(struct thread_info *ti, int flag)
{
 return (__builtin_constant_p((flag)) ? constant_test_bit((flag), ((unsigned long *)&ti->flags)) : variable_test_bit((flag), ((unsigned long *)&ti->flags)));
}
# 10 "include/linux/preempt.h" 2
# 106 "include/linux/preempt.h"
struct preempt_notifier;
# 122 "include/linux/preempt.h"
struct preempt_ops {
 void (*sched_in)(struct preempt_notifier *notifier, int cpu);
 void (*sched_out)(struct preempt_notifier *notifier,
     struct task_struct *next);
};
# 135 "include/linux/preempt.h"
struct preempt_notifier {
 struct hlist_node link;
 struct preempt_ops *ops;
};

void preempt_notifier_register(struct preempt_notifier *notifier);
void preempt_notifier_unregister(struct preempt_notifier *notifier);

static inline void preempt_notifier_init(struct preempt_notifier *notifier,
         struct preempt_ops *ops)
{
 INIT_HLIST_NODE(&notifier->link);
 notifier->ops = ops;
}
# 51 "include/linux/spinlock.h" 2






# 1 "include/linux/bottom_half.h" 1



extern void local_bh_disable(void);
extern void _local_bh_enable(void);
extern void local_bh_enable(void);
extern void local_bh_enable_ip(unsigned long ip);
# 58 "include/linux/spinlock.h" 2
# 81 "include/linux/spinlock.h"
# 1 "include/linux/spinlock_types.h" 1
# 13 "include/linux/spinlock_types.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/spinlock_types.h" 1







typedef struct arch_spinlock {
 unsigned int slock;
} arch_spinlock_t;



# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/rwlock.h" 1
# 27 "/home/iago/torvalds/linux/arch/x86/include/asm/rwlock.h"
typedef union {
 s64 lock;
 struct {
  u32 read;
  s32 write;
 };
} arch_rwlock_t;
# 15 "/home/iago/torvalds/linux/arch/x86/include/asm/spinlock_types.h" 2
# 14 "include/linux/spinlock_types.h" 2




# 1 "include/linux/lockdep.h" 1
# 12 "include/linux/lockdep.h"
struct task_struct;
struct lockdep_map;


extern int prove_locking;
extern int lock_stat;





# 1 "include/linux/debug_locks.h" 1







struct task_struct;

extern int debug_locks;
extern int debug_locks_silent;


static inline int __debug_locks_off(void)
{
 return ({ __typeof(*((&debug_locks))) __x = ((0)); switch (sizeof(*&debug_locks)) { case 1: { volatile u8 *__ptr = (volatile u8 *)((&debug_locks)); asm volatile("xchgb %0,%1" : "=q" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } case 2: { volatile u16 *__ptr = (volatile u16 *)((&debug_locks)); asm volatile("xchgw %0,%1" : "=r" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } case 4: { volatile u32 *__ptr = (volatile u32 *)((&debug_locks)); asm volatile("xchgl %0,%1" : "=r" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } case 8: { volatile u64 *__ptr = (volatile u64 *)((&debug_locks)); asm volatile("xchgq %0,%1" : "=r" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } default: __xchg_wrong_size(); } __x; });
}




extern int debug_locks_off(void);
# 43 "include/linux/debug_locks.h"
  extern void locking_selftest(void);




struct task_struct;


extern void debug_show_all_locks(void);
extern void debug_show_held_locks(struct task_struct *task);
extern void debug_check_no_locks_freed(const void *from, unsigned long len);
extern void debug_check_no_locks_held(struct task_struct *task);
# 24 "include/linux/lockdep.h" 2
# 1 "include/linux/stacktrace.h" 1



struct task_struct;
struct pt_regs;


struct task_struct;

struct stack_trace {
 unsigned int nr_entries, max_entries;
 unsigned long *entries;
 int skip;
};

extern void save_stack_trace(struct stack_trace *trace);
extern void save_stack_trace_regs(struct pt_regs *regs,
      struct stack_trace *trace);
extern void save_stack_trace_tsk(struct task_struct *tsk,
    struct stack_trace *trace);

extern void print_stack_trace(struct stack_trace *trace, int spaces);


extern void save_stack_trace_user(struct stack_trace *trace);
# 25 "include/linux/lockdep.h" 2
# 50 "include/linux/lockdep.h"
struct lockdep_subclass_key {
 char __one_byte;
} __attribute__ ((__packed__));

struct lock_class_key {
 struct lockdep_subclass_key subkeys[8UL];
};

extern struct lock_class_key __lockdep_no_validate__;






struct lock_class {



 struct list_head hash_entry;




 struct list_head lock_entry;

 struct lockdep_subclass_key *key;
 unsigned int subclass;
 unsigned int dep_gen_id;




 unsigned long usage_mask;
 struct stack_trace usage_traces[(1+3*4)];






 struct list_head locks_after, locks_before;





 unsigned int version;




 unsigned long ops;

 const char *name;
 int name_version;


 unsigned long contention_point[4];
 unsigned long contending_point[4];

};


struct lock_time {
 s64 min;
 s64 max;
 s64 total;
 unsigned long nr;
};

enum bounce_type {
 bounce_acquired_write,
 bounce_acquired_read,
 bounce_contended_write,
 bounce_contended_read,
 nr_bounce_types,

 bounce_acquired = bounce_acquired_write,
 bounce_contended = bounce_contended_write,
};

struct lock_class_stats {
 unsigned long contention_point[4];
 unsigned long contending_point[4];
 struct lock_time read_waittime;
 struct lock_time write_waittime;
 struct lock_time read_holdtime;
 struct lock_time write_holdtime;
 unsigned long bounces[nr_bounce_types];
};

struct lock_class_stats lock_stats(struct lock_class *class);
void clear_lock_stats(struct lock_class *class);






struct lockdep_map {
 struct lock_class_key *key;
 struct lock_class *class_cache[2];
 const char *name;

 int cpu;
 unsigned long ip;

};





struct lock_list {
 struct list_head entry;
 struct lock_class *class;
 struct stack_trace trace;
 int distance;





 struct lock_list *parent;
};




struct lock_chain {
 u8 irq_context;
 u8 depth;
 u16 base;
 struct list_head entry;
 u64 chain_key;
};
# 196 "include/linux/lockdep.h"
struct held_lock {
# 211 "include/linux/lockdep.h"
 u64 prev_chain_key;
 unsigned long acquire_ip;
 struct lockdep_map *instance;
 struct lockdep_map *nest_lock;

 u64 waittime_stamp;
 u64 holdtime_stamp;

 unsigned int class_idx:13;
# 233 "include/linux/lockdep.h"
 unsigned int irq_context:2;
 unsigned int trylock:1;

 unsigned int read:2;
 unsigned int check:2;
 unsigned int hardirqs_off:1;
 unsigned int references:11;
};




extern void lockdep_init(void);
extern void lockdep_info(void);
extern void lockdep_reset(void);
extern void lockdep_reset_lock(struct lockdep_map *lock);
extern void lockdep_free_key_range(void *start, unsigned long size);
extern void lockdep_sys_exit(void);

extern void lockdep_off(void);
extern void lockdep_on(void);







extern void lockdep_init_map(struct lockdep_map *lock, const char *name,
        struct lock_class_key *key, int subclass);
# 294 "include/linux/lockdep.h"
static inline int lockdep_match_key(struct lockdep_map *lock,
        struct lock_class_key *key)
{
 return lock->key == key;
}
# 315 "include/linux/lockdep.h"
extern void lock_acquire(struct lockdep_map *lock, unsigned int subclass,
    int trylock, int read, int check,
    struct lockdep_map *nest_lock, unsigned long ip);

extern void lock_release(struct lockdep_map *lock, int nested,
    unsigned long ip);



extern int lock_is_held(struct lockdep_map *lock);

extern void lock_set_class(struct lockdep_map *lock, const char *name,
      struct lock_class_key *key, unsigned int subclass,
      unsigned long ip);

static inline void lock_set_subclass(struct lockdep_map *lock,
  unsigned int subclass, unsigned long ip)
{
 lock_set_class(lock, lock->name, lock->key, subclass, ip);
}

extern void lockdep_set_current_reclaim_state(gfp_t gfp_mask);
extern void lockdep_clear_current_reclaim_state(void);
extern void lockdep_trace_alloc(gfp_t mask);
# 399 "include/linux/lockdep.h"
extern void lock_contended(struct lockdep_map *lock, unsigned long ip);
extern void lock_acquired(struct lockdep_map *lock, unsigned long ip);
# 439 "include/linux/lockdep.h"
extern void print_irqtrace_events(struct task_struct *curr);
# 551 "include/linux/lockdep.h"
extern void lockdep_rcu_dereference(const char *file, const int line);
# 19 "include/linux/spinlock_types.h" 2

typedef struct raw_spinlock {
 arch_spinlock_t raw_lock;




 unsigned int magic, owner_cpu;
 void *owner;


 struct lockdep_map dep_map;

} raw_spinlock_t;
# 64 "include/linux/spinlock_types.h"
typedef struct spinlock {
 union {
  struct raw_spinlock rlock;



  struct {
   u8 __padding[(__builtin_offsetof(struct raw_spinlock,dep_map))];
   struct lockdep_map dep_map;
  };

 };
} spinlock_t;
# 86 "include/linux/spinlock_types.h"
# 1 "include/linux/rwlock_types.h" 1
# 11 "include/linux/rwlock_types.h"
typedef struct {
 arch_rwlock_t raw_lock;




 unsigned int magic, owner_cpu;
 void *owner;


 struct lockdep_map dep_map;

} rwlock_t;
# 87 "include/linux/spinlock_types.h" 2
# 82 "include/linux/spinlock.h" 2





# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/spinlock.h" 1
# 108 "/home/iago/torvalds/linux/arch/x86/include/asm/spinlock.h"
static inline __attribute__((always_inline)) void __ticket_spin_lock(arch_spinlock_t *lock)
{
 int inc = 0x00010000;
 int tmp;

 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "xaddl %0, %1\n"
       "movzwl %w0, %2\n\t"
       "shrl $16, %0\n\t"
       "1:\t"
       "cmpl %0, %2\n\t"
       "je 2f\n\t"
       "rep ; nop\n\t"
       "movzwl %1, %2\n\t"

       "jmp 1b\n"
       "2:"
       : "+r" (inc), "+m" (lock->slock), "=&r" (tmp)
       :
       : "memory", "cc");
}

static inline __attribute__((always_inline)) int __ticket_spin_trylock(arch_spinlock_t *lock)
{
 int tmp;
 int new;

 asm volatile("movl %2,%0\n\t"
       "movl %0,%1\n\t"
       "roll $16, %0\n\t"
       "cmpl %0,%1\n\t"
       "leal 0x00010000(%" "q" "0), %1\n\t"
       "jne 1f\n\t"
       ".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "cmpxchgl %1,%2\n\t"
       "1:"
       "sete %b1\n\t"
       "movzbl %b1,%0\n\t"
       : "=&a" (tmp), "=&q" (new), "+m" (lock->slock)
       :
       : "memory", "cc");

 return tmp;
}

static inline __attribute__((always_inline)) void __ticket_spin_unlock(arch_spinlock_t *lock)
{
 asm volatile( "incw %0"
       : "+m" (lock->slock)
       :
       : "memory", "cc");
}


static inline int __ticket_spin_is_locked(arch_spinlock_t *lock)
{
 int tmp = (*(volatile typeof(lock->slock) *)&(lock->slock));

 return !!(((tmp >> 16) ^ tmp) & ((1 << 16) - 1));
}

static inline int __ticket_spin_is_contended(arch_spinlock_t *lock)
{
 int tmp = (*(volatile typeof(lock->slock) *)&(lock->slock));

 return (((tmp >> 16) - tmp) & ((1 << 16) - 1)) > 1;
}
# 210 "/home/iago/torvalds/linux/arch/x86/include/asm/spinlock.h"
static inline void arch_spin_unlock_wait(arch_spinlock_t *lock)
{
 while (arch_spin_is_locked(lock))
  cpu_relax();
}
# 234 "/home/iago/torvalds/linux/arch/x86/include/asm/spinlock.h"
static inline int arch_read_can_lock(arch_rwlock_t *lock)
{
 return lock->lock > 0;
}





static inline int arch_write_can_lock(arch_rwlock_t *lock)
{
 return lock->write == 1;
}

static inline void arch_read_lock(arch_rwlock_t *rw)
{
 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " " " "decq" " " " (%0)\n\t"
       "jns 1f\n"
       "call __read_lock_failed\n\t"
       "1:\n"
       ::"D" (rw) : "memory");
}

static inline void arch_write_lock(arch_rwlock_t *rw)
{
 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " " " "decl" " " "(%0)\n\t"
       "jz 1f\n"
       "call __write_lock_failed\n\t"
       "1:\n"
       ::"D" (&rw->write), "i" (((1L) << 32))
       : "memory");
}

static inline int arch_read_trylock(arch_rwlock_t *lock)
{
 atomic64_t *count = (atomic64_t *)lock;

 if ((atomic64_sub_return(1, (count))) >= 0)
  return 1;
 atomic64_inc(count);
 return 0;
}

static inline int arch_write_trylock(arch_rwlock_t *lock)
{
 atomic_t *count = (atomic_t *)&lock->write;

 if (atomic_sub_and_test(1, count))
  return 1;
 atomic_add(1, count);
 return 0;
}

static inline void arch_read_unlock(arch_rwlock_t *rw)
{
 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " " " "incq" " " " %0"
       :"+m" (rw->lock) : : "memory");
}

static inline void arch_write_unlock(arch_rwlock_t *rw)
{
 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " " " "incl" " " "%0"
       : "+m" (rw->write) : "i" (((1L) << 32)) : "memory");
}
# 313 "/home/iago/torvalds/linux/arch/x86/include/asm/spinlock.h"
static inline void smp_mb__after_lock(void) { }
# 88 "include/linux/spinlock.h" 2





  extern void __raw_spin_lock_init(raw_spinlock_t *lock, const char *name,
       struct lock_class_key *key);
# 132 "include/linux/spinlock.h"
 extern void do_raw_spin_lock(raw_spinlock_t *lock) ;

 extern int do_raw_spin_trylock(raw_spinlock_t *lock);
 extern void do_raw_spin_unlock(raw_spinlock_t *lock) ;
# 257 "include/linux/spinlock.h"
# 1 "include/linux/rwlock.h" 1
# 18 "include/linux/rwlock.h"
  extern void __rwlock_init(rwlock_t *lock, const char *name,
       struct lock_class_key *key);
# 32 "include/linux/rwlock.h"
 extern void do_raw_read_lock(rwlock_t *lock) ;

 extern int do_raw_read_trylock(rwlock_t *lock);
 extern void do_raw_read_unlock(rwlock_t *lock) ;
 extern void do_raw_write_lock(rwlock_t *lock) ;

 extern int do_raw_write_trylock(rwlock_t *lock);
 extern void do_raw_write_unlock(rwlock_t *lock) ;
# 258 "include/linux/spinlock.h" 2





# 1 "include/linux/spinlock_api_smp.h" 1
# 18 "include/linux/spinlock_api_smp.h"
int in_lock_functions(unsigned long addr);



void __attribute__((section(".spinlock.text"))) _raw_spin_lock(raw_spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_spin_lock_nested(raw_spinlock_t *lock, int subclass)
        ;
void __attribute__((section(".spinlock.text")))
_raw_spin_lock_nest_lock(raw_spinlock_t *lock, struct lockdep_map *map)
        ;
void __attribute__((section(".spinlock.text"))) _raw_spin_lock_bh(raw_spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_spin_lock_irq(raw_spinlock_t *lock)
        ;

unsigned long __attribute__((section(".spinlock.text"))) _raw_spin_lock_irqsave(raw_spinlock_t *lock)
        ;
unsigned long __attribute__((section(".spinlock.text")))
_raw_spin_lock_irqsave_nested(raw_spinlock_t *lock, int subclass)
        ;
int __attribute__((section(".spinlock.text"))) _raw_spin_trylock(raw_spinlock_t *lock);
int __attribute__((section(".spinlock.text"))) _raw_spin_trylock_bh(raw_spinlock_t *lock);
void __attribute__((section(".spinlock.text"))) _raw_spin_unlock(raw_spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_spin_unlock_bh(raw_spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_spin_unlock_irq(raw_spinlock_t *lock) ;
void __attribute__((section(".spinlock.text")))
_raw_spin_unlock_irqrestore(raw_spinlock_t *lock, unsigned long flags)
        ;
# 86 "include/linux/spinlock_api_smp.h"
static inline int __raw_spin_trylock(raw_spinlock_t *lock)
{
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 if (do_raw_spin_trylock(lock)) {
  lock_acquire(&lock->dep_map, 0, 1, 0, 2, ((void *)0), (unsigned long)__builtin_return_address(0));
  return 1;
 }
 do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
 return 0;
}
# 104 "include/linux/spinlock_api_smp.h"
static inline unsigned long __raw_spin_lock_irqsave(raw_spinlock_t *lock)
{
 unsigned long flags;

 do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); flags = arch_local_irq_save(); } while (0); trace_hardirqs_off(); } while (0);
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 lock_acquire(&lock->dep_map, 0, 0, 0, 2, ((void *)0), (unsigned long)__builtin_return_address(0));






 do { if (!do_raw_spin_trylock(lock)) { lock_contended(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); do_raw_spin_lock(lock); } lock_acquired(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); } while (0);



 return flags;
}

static inline void __raw_spin_lock_irq(raw_spinlock_t *lock)
{
 do { arch_local_irq_disable(); trace_hardirqs_off(); } while (0);
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 lock_acquire(&lock->dep_map, 0, 0, 0, 2, ((void *)0), (unsigned long)__builtin_return_address(0));
 do { if (!do_raw_spin_trylock(lock)) { lock_contended(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); do_raw_spin_lock(lock); } lock_acquired(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); } while (0);
}

static inline void __raw_spin_lock_bh(raw_spinlock_t *lock)
{
 local_bh_disable();
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 lock_acquire(&lock->dep_map, 0, 0, 0, 2, ((void *)0), (unsigned long)__builtin_return_address(0));
 do { if (!do_raw_spin_trylock(lock)) { lock_contended(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); do_raw_spin_lock(lock); } lock_acquired(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); } while (0);
}

static inline void __raw_spin_lock(raw_spinlock_t *lock)
{
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 lock_acquire(&lock->dep_map, 0, 0, 0, 2, ((void *)0), (unsigned long)__builtin_return_address(0));
 do { if (!do_raw_spin_trylock(lock)) { lock_contended(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); do_raw_spin_lock(lock); } lock_acquired(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); } while (0);
}



static inline void __raw_spin_unlock(raw_spinlock_t *lock)
{
 lock_release(&lock->dep_map, 1, (unsigned long)__builtin_return_address(0));
 do_raw_spin_unlock(lock);
 do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
}

static inline void __raw_spin_unlock_irqrestore(raw_spinlock_t *lock,
         unsigned long flags)
{
 lock_release(&lock->dep_map, 1, (unsigned long)__builtin_return_address(0));
 do_raw_spin_unlock(lock);
 do { if (({ ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_irqs_disabled_flags(flags); })) { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); trace_hardirqs_off(); } else { trace_hardirqs_on(); do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); } } while (0);
 do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
}

static inline void __raw_spin_unlock_irq(raw_spinlock_t *lock)
{
 lock_release(&lock->dep_map, 1, (unsigned long)__builtin_return_address(0));
 do_raw_spin_unlock(lock);
 do { trace_hardirqs_on(); arch_local_irq_enable(); } while (0);
 do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
}

static inline void __raw_spin_unlock_bh(raw_spinlock_t *lock)
{
 lock_release(&lock->dep_map, 1, (unsigned long)__builtin_return_address(0));
 do_raw_spin_unlock(lock);
 do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0);
 local_bh_enable_ip((unsigned long)__builtin_return_address(0));
}

static inline int __raw_spin_trylock_bh(raw_spinlock_t *lock)
{
 local_bh_disable();
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 if (do_raw_spin_trylock(lock)) {
  lock_acquire(&lock->dep_map, 0, 1, 0, 2, ((void *)0), (unsigned long)__builtin_return_address(0));
  return 1;
 }
 do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0);
 local_bh_enable_ip((unsigned long)__builtin_return_address(0));
 return 0;
}

# 1 "include/linux/rwlock_api_smp.h" 1
# 18 "include/linux/rwlock_api_smp.h"
void __attribute__((section(".spinlock.text"))) _raw_read_lock(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_write_lock(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_read_lock_bh(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_write_lock_bh(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_read_lock_irq(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_write_lock_irq(rwlock_t *lock) ;
unsigned long __attribute__((section(".spinlock.text"))) _raw_read_lock_irqsave(rwlock_t *lock)
       ;
unsigned long __attribute__((section(".spinlock.text"))) _raw_write_lock_irqsave(rwlock_t *lock)
       ;
int __attribute__((section(".spinlock.text"))) _raw_read_trylock(rwlock_t *lock);
int __attribute__((section(".spinlock.text"))) _raw_write_trylock(rwlock_t *lock);
void __attribute__((section(".spinlock.text"))) _raw_read_unlock(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_write_unlock(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_read_unlock_bh(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_write_unlock_bh(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_read_unlock_irq(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_write_unlock_irq(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text")))
_raw_read_unlock_irqrestore(rwlock_t *lock, unsigned long flags)
       ;
void __attribute__((section(".spinlock.text")))
_raw_write_unlock_irqrestore(rwlock_t *lock, unsigned long flags)
       ;
# 117 "include/linux/rwlock_api_smp.h"
static inline int __raw_read_trylock(rwlock_t *lock)
{
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 if (do_raw_read_trylock(lock)) {
  lock_acquire(&lock->dep_map, 0, 1, 2, 2, ((void *)0), (unsigned long)__builtin_return_address(0));
  return 1;
 }
 do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
 return 0;
}

static inline int __raw_write_trylock(rwlock_t *lock)
{
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 if (do_raw_write_trylock(lock)) {
  lock_acquire(&lock->dep_map, 0, 1, 0, 2, ((void *)0), (unsigned long)__builtin_return_address(0));
  return 1;
 }
 do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
 return 0;
}
# 146 "include/linux/rwlock_api_smp.h"
static inline void __raw_read_lock(rwlock_t *lock)
{
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 lock_acquire(&lock->dep_map, 0, 0, 2, 2, ((void *)0), (unsigned long)__builtin_return_address(0));
 do { if (!do_raw_read_trylock(lock)) { lock_contended(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); do_raw_read_lock(lock); } lock_acquired(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); } while (0);
}

static inline unsigned long __raw_read_lock_irqsave(rwlock_t *lock)
{
 unsigned long flags;

 do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); flags = arch_local_irq_save(); } while (0); trace_hardirqs_off(); } while (0);
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 lock_acquire(&lock->dep_map, 0, 0, 2, 2, ((void *)0), (unsigned long)__builtin_return_address(0));
 do { if (!(do_raw_read_trylock)((lock))) { lock_contended(&((lock))->dep_map, (unsigned long)__builtin_return_address(0)); (do_raw_read_lock)((lock)); } lock_acquired(&((lock))->dep_map, (unsigned long)__builtin_return_address(0)); } while (0)
                                       ;
 return flags;
}

static inline void __raw_read_lock_irq(rwlock_t *lock)
{
 do { arch_local_irq_disable(); trace_hardirqs_off(); } while (0);
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 lock_acquire(&lock->dep_map, 0, 0, 2, 2, ((void *)0), (unsigned long)__builtin_return_address(0));
 do { if (!do_raw_read_trylock(lock)) { lock_contended(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); do_raw_read_lock(lock); } lock_acquired(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); } while (0);
}

static inline void __raw_read_lock_bh(rwlock_t *lock)
{
 local_bh_disable();
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 lock_acquire(&lock->dep_map, 0, 0, 2, 2, ((void *)0), (unsigned long)__builtin_return_address(0));
 do { if (!do_raw_read_trylock(lock)) { lock_contended(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); do_raw_read_lock(lock); } lock_acquired(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); } while (0);
}

static inline unsigned long __raw_write_lock_irqsave(rwlock_t *lock)
{
 unsigned long flags;

 do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); flags = arch_local_irq_save(); } while (0); trace_hardirqs_off(); } while (0);
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 lock_acquire(&lock->dep_map, 0, 0, 0, 2, ((void *)0), (unsigned long)__builtin_return_address(0));
 do { if (!(do_raw_write_trylock)((lock))) { lock_contended(&((lock))->dep_map, (unsigned long)__builtin_return_address(0)); (do_raw_write_lock)((lock)); } lock_acquired(&((lock))->dep_map, (unsigned long)__builtin_return_address(0)); } while (0)
                                        ;
 return flags;
}

static inline void __raw_write_lock_irq(rwlock_t *lock)
{
 do { arch_local_irq_disable(); trace_hardirqs_off(); } while (0);
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 lock_acquire(&lock->dep_map, 0, 0, 0, 2, ((void *)0), (unsigned long)__builtin_return_address(0));
 do { if (!do_raw_write_trylock(lock)) { lock_contended(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); do_raw_write_lock(lock); } lock_acquired(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); } while (0);
}

static inline void __raw_write_lock_bh(rwlock_t *lock)
{
 local_bh_disable();
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 lock_acquire(&lock->dep_map, 0, 0, 0, 2, ((void *)0), (unsigned long)__builtin_return_address(0));
 do { if (!do_raw_write_trylock(lock)) { lock_contended(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); do_raw_write_lock(lock); } lock_acquired(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); } while (0);
}

static inline void __raw_write_lock(rwlock_t *lock)
{
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 lock_acquire(&lock->dep_map, 0, 0, 0, 2, ((void *)0), (unsigned long)__builtin_return_address(0));
 do { if (!do_raw_write_trylock(lock)) { lock_contended(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); do_raw_write_lock(lock); } lock_acquired(&(lock)->dep_map, (unsigned long)__builtin_return_address(0)); } while (0);
}



static inline void __raw_write_unlock(rwlock_t *lock)
{
 lock_release(&lock->dep_map, 1, (unsigned long)__builtin_return_address(0));
 do_raw_write_unlock(lock);
 do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
}

static inline void __raw_read_unlock(rwlock_t *lock)
{
 lock_release(&lock->dep_map, 1, (unsigned long)__builtin_return_address(0));
 do_raw_read_unlock(lock);
 do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
}

static inline void
__raw_read_unlock_irqrestore(rwlock_t *lock, unsigned long flags)
{
 lock_release(&lock->dep_map, 1, (unsigned long)__builtin_return_address(0));
 do_raw_read_unlock(lock);
 do { if (({ ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_irqs_disabled_flags(flags); })) { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); trace_hardirqs_off(); } else { trace_hardirqs_on(); do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); } } while (0);
 do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
}

static inline void __raw_read_unlock_irq(rwlock_t *lock)
{
 lock_release(&lock->dep_map, 1, (unsigned long)__builtin_return_address(0));
 do_raw_read_unlock(lock);
 do { trace_hardirqs_on(); arch_local_irq_enable(); } while (0);
 do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
}

static inline void __raw_read_unlock_bh(rwlock_t *lock)
{
 lock_release(&lock->dep_map, 1, (unsigned long)__builtin_return_address(0));
 do_raw_read_unlock(lock);
 do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0);
 local_bh_enable_ip((unsigned long)__builtin_return_address(0));
}

static inline void __raw_write_unlock_irqrestore(rwlock_t *lock,
          unsigned long flags)
{
 lock_release(&lock->dep_map, 1, (unsigned long)__builtin_return_address(0));
 do_raw_write_unlock(lock);
 do { if (({ ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_irqs_disabled_flags(flags); })) { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); trace_hardirqs_off(); } else { trace_hardirqs_on(); do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); } } while (0);
 do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
}

static inline void __raw_write_unlock_irq(rwlock_t *lock)
{
 lock_release(&lock->dep_map, 1, (unsigned long)__builtin_return_address(0));
 do_raw_write_unlock(lock);
 do { trace_hardirqs_on(); arch_local_irq_enable(); } while (0);
 do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
}

static inline void __raw_write_unlock_bh(rwlock_t *lock)
{
 lock_release(&lock->dep_map, 1, (unsigned long)__builtin_return_address(0));
 do_raw_write_unlock(lock);
 do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0);
 local_bh_enable_ip((unsigned long)__builtin_return_address(0));
}
# 195 "include/linux/spinlock_api_smp.h" 2
# 264 "include/linux/spinlock.h" 2
# 272 "include/linux/spinlock.h"
static inline raw_spinlock_t *spinlock_check(spinlock_t *lock)
{
 return &lock->rlock;
}







static inline void spin_lock(spinlock_t *lock)
{
 _raw_spin_lock(&lock->rlock);
}

static inline void spin_lock_bh(spinlock_t *lock)
{
 _raw_spin_lock_bh(&lock->rlock);
}

static inline int spin_trylock(spinlock_t *lock)
{
 return (_raw_spin_trylock(&lock->rlock));
}
# 308 "include/linux/spinlock.h"
static inline void spin_lock_irq(spinlock_t *lock)
{
 _raw_spin_lock_irq(&lock->rlock);
}
# 323 "include/linux/spinlock.h"
static inline void spin_unlock(spinlock_t *lock)
{
 _raw_spin_unlock(&lock->rlock);
}

static inline void spin_unlock_bh(spinlock_t *lock)
{
 _raw_spin_unlock_bh(&lock->rlock);
}

static inline void spin_unlock_irq(spinlock_t *lock)
{
 _raw_spin_unlock_irq(&lock->rlock);
}

static inline void spin_unlock_irqrestore(spinlock_t *lock, unsigned long flags)
{
 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); _raw_spin_unlock_irqrestore(&lock->rlock, flags); } while (0);
}

static inline int spin_trylock_bh(spinlock_t *lock)
{
 return (_raw_spin_trylock_bh(&lock->rlock));
}

static inline int spin_trylock_irq(spinlock_t *lock)
{
 return ({ do { arch_local_irq_disable(); trace_hardirqs_off(); } while (0); (_raw_spin_trylock(&lock->rlock)) ? 1 : ({ do { trace_hardirqs_on(); arch_local_irq_enable(); } while (0); 0; }); });
}






static inline void spin_unlock_wait(spinlock_t *lock)
{
 arch_spin_unlock_wait(&(&lock->rlock)->raw_lock);
}

static inline int spin_is_locked(spinlock_t *lock)
{
 return arch_spin_is_locked(&(&lock->rlock)->raw_lock);
}

static inline int spin_is_contended(spinlock_t *lock)
{
 return arch_spin_is_contended(&(&lock->rlock)->raw_lock);
}

static inline int spin_can_lock(spinlock_t *lock)
{
 return (!arch_spin_is_locked(&(&lock->rlock)->raw_lock));
}

static inline void assert_spin_locked(spinlock_t *lock)
{
 do { if (__builtin_expect(!!(!arch_spin_is_locked(&(&lock->rlock)->raw_lock)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/spinlock.h"), "i" (380), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
}
# 396 "include/linux/spinlock.h"
extern int _atomic_dec_and_lock(atomic_t *atomic, spinlock_t *lock);
# 8 "include/linux/mmzone.h" 2

# 1 "include/linux/wait.h" 1
# 28 "include/linux/wait.h"
typedef struct __wait_queue wait_queue_t;
typedef int (*wait_queue_func_t)(wait_queue_t *wait, unsigned mode, int flags, void *key);
int default_wake_function(wait_queue_t *wait, unsigned mode, int flags, void *key);

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
extern void __init_waitqueue_head(wait_queue_head_t *q, struct lock_class_key *);
# 98 "include/linux/wait.h"
static inline void init_waitqueue_entry(wait_queue_t *q, struct task_struct *p)
{
 q->flags = 0;
 q->private = p;
 q->func = default_wake_function;
}

static inline void init_waitqueue_func_entry(wait_queue_t *q,
     wait_queue_func_t func)
{
 q->flags = 0;
 q->private = ((void *)0);
 q->func = func;
}

static inline int waitqueue_active(wait_queue_head_t *q)
{
 return !list_empty(&q->task_list);
}

extern void add_wait_queue(wait_queue_head_t *q, wait_queue_t *wait);
extern void add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t *wait);
extern void remove_wait_queue(wait_queue_head_t *q, wait_queue_t *wait);

static inline void __add_wait_queue(wait_queue_head_t *head, wait_queue_t *new)
{
 list_add(&new->task_list, &head->task_list);
}




static inline void __add_wait_queue_exclusive(wait_queue_head_t *q,
           wait_queue_t *wait)
{
 wait->flags |= 0x01;
 __add_wait_queue(q, wait);
}

static inline void __add_wait_queue_tail(wait_queue_head_t *head,
      wait_queue_t *new)
{
 list_add_tail(&new->task_list, &head->task_list);
}

static inline void __add_wait_queue_tail_exclusive(wait_queue_head_t *q,
           wait_queue_t *wait)
{
 wait->flags |= 0x01;
 __add_wait_queue_tail(q, wait);
}

static inline void __remove_wait_queue(wait_queue_head_t *head,
       wait_queue_t *old)
{
 list_del(&old->task_list);
}

void __wake_up(wait_queue_head_t *q, unsigned int mode, int nr, void *key);
void __wake_up_locked_key(wait_queue_head_t *q, unsigned int mode, void *key);
void __wake_up_sync_key(wait_queue_head_t *q, unsigned int mode, int nr,
   void *key);
void __wake_up_locked(wait_queue_head_t *q, unsigned int mode);
void __wake_up_sync(wait_queue_head_t *q, unsigned int mode, int nr);
void __wake_up_bit(wait_queue_head_t *, void *, int);
int __wait_on_bit(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
int __wait_on_bit_lock(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
void wake_up_bit(void *, int);
int out_of_line_wait_on_bit(void *, int, int (*)(void *), unsigned);
int out_of_line_wait_on_bit_lock(void *, int, int (*)(void *), unsigned);
wait_queue_head_t *bit_waitqueue(void *, int);
# 574 "include/linux/wait.h"
extern void sleep_on(wait_queue_head_t *q);
extern long sleep_on_timeout(wait_queue_head_t *q,
          signed long timeout);
extern void interruptible_sleep_on(wait_queue_head_t *q);
extern long interruptible_sleep_on_timeout(wait_queue_head_t *q,
        signed long timeout);




void prepare_to_wait(wait_queue_head_t *q, wait_queue_t *wait, int state);
void prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state);
void finish_wait(wait_queue_head_t *q, wait_queue_t *wait);
void abort_exclusive_wait(wait_queue_head_t *q, wait_queue_t *wait,
   unsigned int mode, void *key);
int autoremove_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
int wake_bit_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
# 634 "include/linux/wait.h"
static inline int wait_on_bit(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!(__builtin_constant_p((bit)) ? constant_test_bit((bit), (word)) : variable_test_bit((bit), (word))))
  return 0;
 return out_of_line_wait_on_bit(word, bit, action, mode);
}
# 658 "include/linux/wait.h"
static inline int wait_on_bit_lock(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!test_and_set_bit(bit, word))
  return 0;
 return out_of_line_wait_on_bit_lock(word, bit, action, mode);
}
# 10 "include/linux/mmzone.h" 2



# 1 "include/linux/numa.h" 1
# 14 "include/linux/mmzone.h" 2

# 1 "include/linux/seqlock.h" 1
# 33 "include/linux/seqlock.h"
typedef struct {
 unsigned sequence;
 spinlock_t lock;
} seqlock_t;
# 58 "include/linux/seqlock.h"
static inline void write_seqlock(seqlock_t *sl)
{
 spin_lock(&sl->lock);
 ++sl->sequence;
 __asm__ __volatile__("": : :"memory");
}

static inline void write_sequnlock(seqlock_t *sl)
{
 __asm__ __volatile__("": : :"memory");
 sl->sequence++;
 spin_unlock(&sl->lock);
}

static inline int write_tryseqlock(seqlock_t *sl)
{
 int ret = spin_trylock(&sl->lock);

 if (ret) {
  ++sl->sequence;
  __asm__ __volatile__("": : :"memory");
 }
 return ret;
}


static inline __attribute__((always_inline)) unsigned read_seqbegin(const seqlock_t *sl)
{
 unsigned ret;

repeat:
 ret = (*(volatile typeof(sl->sequence) *)&(sl->sequence));
 if (__builtin_expect(!!(ret & 1), 0)) {
  cpu_relax();
  goto repeat;
 }
 __asm__ __volatile__("": : :"memory");

 return ret;
}






static inline __attribute__((always_inline)) int read_seqretry(const seqlock_t *sl, unsigned start)
{
 __asm__ __volatile__("": : :"memory");

 return __builtin_expect(!!(sl->sequence != start), 0);
}
# 119 "include/linux/seqlock.h"
typedef struct seqcount {
 unsigned sequence;
} seqcount_t;
# 139 "include/linux/seqlock.h"
static inline unsigned __read_seqcount_begin(const seqcount_t *s)
{
 unsigned ret;

repeat:
 ret = s->sequence;
 if (__builtin_expect(!!(ret & 1), 0)) {
  cpu_relax();
  goto repeat;
 }
 return ret;
}
# 161 "include/linux/seqlock.h"
static inline unsigned read_seqcount_begin(const seqcount_t *s)
{
 unsigned ret = __read_seqcount_begin(s);
 __asm__ __volatile__("": : :"memory");
 return ret;
}
# 182 "include/linux/seqlock.h"
static inline int __read_seqcount_retry(const seqcount_t *s, unsigned start)
{
 return __builtin_expect(!!(s->sequence != start), 0);
}
# 197 "include/linux/seqlock.h"
static inline int read_seqcount_retry(const seqcount_t *s, unsigned start)
{
 __asm__ __volatile__("": : :"memory");

 return __read_seqcount_retry(s, start);
}






static inline void write_seqcount_begin(seqcount_t *s)
{
 s->sequence++;
 __asm__ __volatile__("": : :"memory");
}

static inline void write_seqcount_end(seqcount_t *s)
{
 __asm__ __volatile__("": : :"memory");
 s->sequence++;
}
# 228 "include/linux/seqlock.h"
static inline void write_seqcount_barrier(seqcount_t *s)
{
 __asm__ __volatile__("": : :"memory");
 s->sequence+=2;
}
# 16 "include/linux/mmzone.h" 2
# 1 "include/linux/nodemask.h" 1
# 98 "include/linux/nodemask.h"
typedef struct { unsigned long bits[((((1 << 10)) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))]; } nodemask_t;
extern nodemask_t _unused_nodemask_arg_;


static inline void __node_set(int node, volatile nodemask_t *dstp)
{
 set_bit(node, dstp->bits);
}


static inline void __node_clear(int node, volatile nodemask_t *dstp)
{
 clear_bit(node, dstp->bits);
}


static inline void __nodes_setall(nodemask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline void __nodes_clear(nodemask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}






static inline int __node_test_and_set(int node, nodemask_t *addr)
{
 return test_and_set_bit(node, addr->bits);
}



static inline void __nodes_and(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline void __nodes_or(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline void __nodes_xor(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline void __nodes_andnot(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline void __nodes_complement(nodemask_t *dstp,
     const nodemask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}



static inline int __nodes_equal(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}



static inline int __nodes_intersects(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}



static inline int __nodes_subset(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline int __nodes_empty(const nodemask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline int __nodes_full(const nodemask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline int __nodes_weight(const nodemask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline void __nodes_shift_right(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline void __nodes_shift_left(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}





static inline int __first_node(const nodemask_t *srcp)
{
 return ({ int __min1 = ((1 << 10)); int __min2 = (find_first_bit(srcp->bits, (1 << 10))); __min1 < __min2 ? __min1: __min2; });
}


static inline int __next_node(int n, const nodemask_t *srcp)
{
 return ({ int __min1 = ((1 << 10)); int __min2 = (find_next_bit(srcp->bits, (1 << 10), n+1)); __min1 < __min2 ? __min1: __min2; });
}

static inline void init_nodemask_of_node(nodemask_t *mask, int node)
{
 __nodes_clear(&(*mask), (1 << 10));
 __node_set((node), &(*mask));
}
# 266 "include/linux/nodemask.h"
static inline int __first_unset_node(const nodemask_t *maskp)
{
 return ({ int __min1 = ((1 << 10)); int __min2 = (find_first_zero_bit(maskp->bits, (1 << 10))); __min1 < __min2 ? __min1: __min2; })
                                                  ;
}
# 300 "include/linux/nodemask.h"
static inline int __nodemask_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline int __nodemask_parse_user(const char *buf, int len,
     nodemask_t *dstp, int nbits)
{
 return bitmap_parse_user(buf, len, dstp->bits, nbits);
}



static inline int __nodelist_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline int __nodelist_parse(const char *buf, nodemask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline int __node_remap(int oldbit,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline void __nodes_remap(nodemask_t *dstp, const nodemask_t *srcp,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}



static inline void __nodes_onto(nodemask_t *dstp, const nodemask_t *origp,
  const nodemask_t *relmapp, int nbits)
{
 bitmap_onto(dstp->bits, origp->bits, relmapp->bits, nbits);
}



static inline void __nodes_fold(nodemask_t *dstp, const nodemask_t *origp,
  int sz, int nbits)
{
 bitmap_fold(dstp->bits, origp->bits, sz, nbits);
}
# 374 "include/linux/nodemask.h"
enum node_states {
 N_POSSIBLE,
 N_ONLINE,
 N_NORMAL_MEMORY,



 N_HIGH_MEMORY = N_NORMAL_MEMORY,

 N_CPU,
 NR_NODE_STATES
};






extern nodemask_t node_states[NR_NODE_STATES];


static inline int node_state(int node, enum node_states state)
{
 return (__builtin_constant_p(((node))) ? constant_test_bit(((node)), ((node_states[state]).bits)) : variable_test_bit(((node)), ((node_states[state]).bits)));
}

static inline void node_set_state(int node, enum node_states state)
{
 __node_set(node, &node_states[state]);
}

static inline void node_clear_state(int node, enum node_states state)
{
 __node_clear(node, &node_states[state]);
}

static inline int num_node_state(enum node_states state)
{
 return __nodes_weight(&(node_states[state]), (1 << 10));
}







extern int nr_node_ids;
extern int nr_online_nodes;

static inline void node_set_online(int nid)
{
 node_set_state(nid, N_ONLINE);
 nr_online_nodes = num_node_state(N_ONLINE);
}

static inline void node_set_offline(int nid)
{
 node_clear_state(nid, N_ONLINE);
 nr_online_nodes = num_node_state(N_ONLINE);
}
# 470 "include/linux/nodemask.h"
extern int node_random(const nodemask_t *maskp);
# 504 "include/linux/nodemask.h"
struct nodemask_scratch {
 nodemask_t mask1;
 nodemask_t mask2;
};
# 17 "include/linux/mmzone.h" 2
# 1 "include/linux/pageblock-flags.h" 1
# 29 "include/linux/pageblock-flags.h"
enum pageblock_bits {
 PB_migrate,
 PB_migrate_end = PB_migrate + 3 - 1,

 NR_PAGEBLOCK_BITS
};
# 60 "include/linux/pageblock-flags.h"
struct page;


unsigned long get_pageblock_flags_group(struct page *page,
     int start_bitidx, int end_bitidx);
void set_pageblock_flags_group(struct page *page, unsigned long flags,
     int start_bitidx, int end_bitidx);
# 18 "include/linux/mmzone.h" 2
# 1 "include/generated/bounds.h" 1
# 19 "include/linux/mmzone.h" 2
# 50 "include/linux/mmzone.h"
extern int page_group_by_mobility_disabled;

static inline int get_pageblock_migratetype(struct page *page)
{
 return get_pageblock_flags_group(page, PB_migrate, PB_migrate_end);
}

struct free_area {
 struct list_head free_list[5];
 unsigned long nr_free;
};

struct pglist_data;
# 71 "include/linux/mmzone.h"
struct zone_padding {
 char x[0];
} __attribute__((__aligned__(1 << (12))));





enum zone_stat_item {

 NR_FREE_PAGES,
 NR_LRU_BASE,
 NR_INACTIVE_ANON = NR_LRU_BASE,
 NR_ACTIVE_ANON,
 NR_INACTIVE_FILE,
 NR_ACTIVE_FILE,
 NR_UNEVICTABLE,
 NR_MLOCK,
 NR_ANON_PAGES,
 NR_FILE_MAPPED,

 NR_FILE_PAGES,
 NR_FILE_DIRTY,
 NR_WRITEBACK,
 NR_SLAB_RECLAIMABLE,
 NR_SLAB_UNRECLAIMABLE,
 NR_PAGETABLE,
 NR_KERNEL_STACK,

 NR_UNSTABLE_NFS,
 NR_BOUNCE,
 NR_VMSCAN_WRITE,
 NR_WRITEBACK_TEMP,
 NR_ISOLATED_ANON,
 NR_ISOLATED_FILE,
 NR_SHMEM,
 NR_DIRTIED,
 NR_WRITTEN,

 NUMA_HIT,
 NUMA_MISS,
 NUMA_FOREIGN,
 NUMA_INTERLEAVE_HIT,
 NUMA_LOCAL,
 NUMA_OTHER,

 NR_ANON_TRANSPARENT_HUGEPAGES,
 NR_VM_ZONE_STAT_ITEMS };
# 133 "include/linux/mmzone.h"
enum lru_list {
 LRU_INACTIVE_ANON = 0,
 LRU_ACTIVE_ANON = 0 + 1,
 LRU_INACTIVE_FILE = 0 + 2,
 LRU_ACTIVE_FILE = 0 + 2 + 1,
 LRU_UNEVICTABLE,
 NR_LRU_LISTS
};





static inline int is_file_lru(enum lru_list l)
{
 return (l == LRU_INACTIVE_FILE || l == LRU_ACTIVE_FILE);
}

static inline int is_active_lru(enum lru_list l)
{
 return (l == LRU_ACTIVE_ANON || l == LRU_ACTIVE_FILE);
}

static inline int is_unevictable_lru(enum lru_list l)
{
 return (l == LRU_UNEVICTABLE);
}







enum zone_watermarks {
 WMARK_MIN,
 WMARK_LOW,
 WMARK_HIGH,
 NR_WMARK
};





struct per_cpu_pages {
 int count;
 int high;
 int batch;


 struct list_head lists[3];
};

struct per_cpu_pageset {
 struct per_cpu_pages pcp;

 s8 expire;


 s8 stat_threshold;
 s8 vm_stat_diff[NR_VM_ZONE_STAT_ITEMS];

};



enum zone_type {
# 220 "include/linux/mmzone.h"
 ZONE_DMA,







 ZONE_DMA32,






 ZONE_NORMAL,
# 247 "include/linux/mmzone.h"
 ZONE_MOVABLE,
 __MAX_NR_ZONES
};
# 271 "include/linux/mmzone.h"
struct zone_reclaim_stat {
# 280 "include/linux/mmzone.h"
 unsigned long recent_rotated[2];
 unsigned long recent_scanned[2];
};

struct zone {



 unsigned long watermark[NR_WMARK];






 unsigned long percpu_drift_mark;
# 305 "include/linux/mmzone.h"
 unsigned long lowmem_reserve[4];


 int node;



 unsigned long min_unmapped_pages;
 unsigned long min_slab_pages;

 struct per_cpu_pageset *pageset;



 spinlock_t lock;
 int all_unreclaimable;


 seqlock_t span_seqlock;

 struct free_area free_area[11];
# 341 "include/linux/mmzone.h"
 unsigned int compact_considered;
 unsigned int compact_defer_shift;


 struct zone_padding _pad1_;


 spinlock_t lru_lock;
 struct zone_lru {
  struct list_head list;
 } lru[NR_LRU_LISTS];

 struct zone_reclaim_stat reclaim_stat;

 unsigned long pages_scanned;
 unsigned long flags;


 atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];





 unsigned int inactive_ratio;


 struct zone_padding _pad2_;
# 395 "include/linux/mmzone.h"
 wait_queue_head_t * wait_table;
 unsigned long wait_table_hash_nr_entries;
 unsigned long wait_table_bits;




 struct pglist_data *zone_pgdat;

 unsigned long zone_start_pfn;
# 416 "include/linux/mmzone.h"
 unsigned long spanned_pages;
 unsigned long present_pages;




 const char *name;
} __attribute__((__aligned__(1 << (12))));

typedef enum {
 ZONE_RECLAIM_LOCKED,
 ZONE_OOM_LOCKED,
 ZONE_CONGESTED,


} zone_flags_t;

static inline void zone_set_flag(struct zone *zone, zone_flags_t flag)
{
 set_bit(flag, &zone->flags);
}

static inline int zone_test_and_set_flag(struct zone *zone, zone_flags_t flag)
{
 return test_and_set_bit(flag, &zone->flags);
}

static inline void zone_clear_flag(struct zone *zone, zone_flags_t flag)
{
 clear_bit(flag, &zone->flags);
}

static inline int zone_is_reclaim_congested(const struct zone *zone)
{
 return (__builtin_constant_p((ZONE_CONGESTED)) ? constant_test_bit((ZONE_CONGESTED), (&zone->flags)) : variable_test_bit((ZONE_CONGESTED), (&zone->flags)));
}

static inline int zone_is_reclaim_locked(const struct zone *zone)
{
 return (__builtin_constant_p((ZONE_RECLAIM_LOCKED)) ? constant_test_bit((ZONE_RECLAIM_LOCKED), (&zone->flags)) : variable_test_bit((ZONE_RECLAIM_LOCKED), (&zone->flags)));
}

static inline int zone_is_oom_locked(const struct zone *zone)
{
 return (__builtin_constant_p((ZONE_OOM_LOCKED)) ? constant_test_bit((ZONE_OOM_LOCKED), (&zone->flags)) : variable_test_bit((ZONE_OOM_LOCKED), (&zone->flags)));
}
# 544 "include/linux/mmzone.h"
struct zonelist_cache {
 unsigned short z_to_n[((1 << 10) * 4)];
 unsigned long fullzones[(((((1 << 10) * 4)) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];
 unsigned long last_full_zap;
};
# 558 "include/linux/mmzone.h"
struct zoneref {
 struct zone *zone;
 int zone_idx;
};
# 580 "include/linux/mmzone.h"
struct zonelist {
 struct zonelist_cache *zlcache_ptr;
 struct zoneref _zonerefs[((1 << 10) * 4) + 1];

 struct zonelist_cache zlcache;

};


struct node_active_region {
 unsigned long start_pfn;
 unsigned long end_pfn;
 int nid;
};




extern struct page *mem_map;
# 612 "include/linux/mmzone.h"
struct bootmem_data;
typedef struct pglist_data {
 struct zone node_zones[4];
 struct zonelist node_zonelists[2];
 int nr_zones;
# 634 "include/linux/mmzone.h"
 spinlock_t node_size_lock;

 unsigned long node_start_pfn;
 unsigned long node_present_pages;
 unsigned long node_spanned_pages;

 int node_id;
 wait_queue_head_t kswapd_wait;
 struct task_struct *kswapd;
 int kswapd_max_order;
 enum zone_type classzone_idx;
} pg_data_t;
# 663 "include/linux/mmzone.h"
# 1 "include/linux/memory_hotplug.h" 1



# 1 "include/linux/mmzone.h" 1
# 5 "include/linux/memory_hotplug.h" 2

# 1 "include/linux/notifier.h" 1
# 12 "include/linux/notifier.h"
# 1 "include/linux/errno.h" 1



# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/errno.h" 1
# 5 "include/linux/errno.h" 2
# 13 "include/linux/notifier.h" 2
# 1 "include/linux/mutex.h" 1
# 48 "include/linux/mutex.h"
struct mutex {

 atomic_t count;
 spinlock_t wait_lock;
 struct list_head wait_list;

 struct task_struct *owner;


 const char *name;
 void *magic;


 struct lockdep_map dep_map;

};





struct mutex_waiter {
 struct list_head list;
 struct task_struct *task;

 void *magic;

};


# 1 "include/linux/mutex-debug.h" 1
# 21 "include/linux/mutex-debug.h"
extern void mutex_destroy(struct mutex *lock);
# 79 "include/linux/mutex.h" 2
# 115 "include/linux/mutex.h"
extern void __mutex_init(struct mutex *lock, const char *name,
    struct lock_class_key *key);







static inline int mutex_is_locked(struct mutex *lock)
{
 return atomic_read(&lock->count) != 1;
}






extern void mutex_lock_nested(struct mutex *lock, unsigned int subclass);
extern void _mutex_lock_nest_lock(struct mutex *lock, struct lockdep_map *nest_lock);
extern int __attribute__((warn_unused_result)) mutex_lock_interruptible_nested(struct mutex *lock,
     unsigned int subclass);
extern int __attribute__((warn_unused_result)) mutex_lock_killable_nested(struct mutex *lock,
     unsigned int subclass);
# 168 "include/linux/mutex.h"
extern int mutex_trylock(struct mutex *lock);
extern void mutex_unlock(struct mutex *lock);
extern int atomic_dec_and_mutex_lock(atomic_t *cnt, struct mutex *lock);
# 14 "include/linux/notifier.h" 2
# 1 "include/linux/rwsem.h" 1
# 20 "include/linux/rwsem.h"
struct rw_semaphore;





struct rw_semaphore {
 long count;
 spinlock_t wait_lock;
 struct list_head wait_list;

 struct lockdep_map dep_map;

};

extern struct rw_semaphore *rwsem_down_read_failed(struct rw_semaphore *sem);
extern struct rw_semaphore *rwsem_down_write_failed(struct rw_semaphore *sem);
extern struct rw_semaphore *rwsem_wake(struct rw_semaphore *);
extern struct rw_semaphore *rwsem_downgrade_wake(struct rw_semaphore *sem);


# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/rwsem.h" 1
# 63 "/home/iago/torvalds/linux/arch/x86/include/asm/rwsem.h"
static inline void __down_read(struct rw_semaphore *sem)
{
 asm volatile("# beginning down_read\n\t"
       ".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " " " "incq" " " "(%1)\n\t"

       "  jns        1f\n"
       "  call call_rwsem_down_read_failed\n"
       "1:\n\t"
       "# ending down_read\n\t"
       : "+m" (sem->count)
       : "a" (sem)
       : "memory", "cc");
}




static inline int __down_read_trylock(struct rw_semaphore *sem)
{
 long result, tmp;
 asm volatile("# beginning __down_read_trylock\n\t"
       "  mov          %0,%1\n\t"
       "1:\n\t"
       "  mov          %1,%2\n\t"
       "  add          %3,%2\n\t"
       "  jle	     2f\n\t"
       ".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "  cmpxchg  %2,%0\n\t"
       "  jnz	     1b\n\t"
       "2:\n\t"
       "# ending __down_read_trylock\n\t"
       : "+m" (sem->count), "=&a" (result), "=&r" (tmp)
       : "i" (0x00000001L)
       : "memory", "cc");
 return result >= 0 ? 1 : 0;
}




static inline void __down_write_nested(struct rw_semaphore *sem, int subclass)
{
 long tmp;
 asm volatile("# beginning down_write\n\t"
       ".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "  xadd      %1,(%2)\n\t"

       "  test      %1,%1\n\t"

       "  jz        1f\n"
       "  call call_rwsem_down_write_failed\n"
       "1:\n"
       "# ending down_write"
       : "+m" (sem->count), "=d" (tmp)
       : "a" (sem), "1" (((-0xffffffffL -1) + 0x00000001L))
       : "memory", "cc");
}

static inline void __down_write(struct rw_semaphore *sem)
{
 __down_write_nested(sem, 0);
}




static inline int __down_write_trylock(struct rw_semaphore *sem)
{
 long ret = ({ __typeof__(*(((&sem->count)))) __ret; __typeof__(*(((&sem->count)))) __old = (((0x00000000L))); __typeof__(*(((&sem->count)))) __new = (((((-0xffffffffL -1) + 0x00000001L)))); switch ((sizeof(*&sem->count))) { case 1: { volatile u8 *__ptr = (volatile u8 *)(((&sem->count))); asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "cmpxchgb %2,%1" : "=a" (__ret), "+m" (*__ptr) : "q" (__new), "0" (__old) : "memory"); break; } case 2: { volatile u16 *__ptr = (volatile u16 *)(((&sem->count))); asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "cmpxchgw %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } case 4: { volatile u32 *__ptr = (volatile u32 *)(((&sem->count))); asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "cmpxchgl %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } case 8: { volatile u64 *__ptr = (volatile u64 *)(((&sem->count))); asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "cmpxchgq %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } default: __cmpxchg_wrong_size(); } __ret; })
                              ;
 if (ret == 0x00000000L)
  return 1;
 return 0;
}




static inline void __up_read(struct rw_semaphore *sem)
{
 long tmp;
 asm volatile("# beginning __up_read\n\t"
       ".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "  xadd      %1,(%2)\n\t"

       "  jns        1f\n\t"
       "  call call_rwsem_wake\n"
       "1:\n"
       "# ending __up_read\n"
       : "+m" (sem->count), "=d" (tmp)
       : "a" (sem), "1" (-0x00000001L)
       : "memory", "cc");
}




static inline void __up_write(struct rw_semaphore *sem)
{
 long tmp;
 asm volatile("# beginning __up_write\n\t"
       ".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "  xadd      %1,(%2)\n\t"

       "  jns        1f\n\t"
       "  call call_rwsem_wake\n"
       "1:\n\t"
       "# ending __up_write\n"
       : "+m" (sem->count), "=d" (tmp)
       : "a" (sem), "1" (-((-0xffffffffL -1) + 0x00000001L))
       : "memory", "cc");
}




static inline void __downgrade_write(struct rw_semaphore *sem)
{
 asm volatile("# beginning __downgrade_write\n\t"
       ".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " " " "addq" " " "%2,(%1)\n\t"




       "  jns       1f\n\t"
       "  call call_rwsem_downgrade_wake\n"
       "1:\n\t"
       "# ending __downgrade_write\n"
       : "+m" (sem->count)
       : "a" (sem), "er" (-(-0xffffffffL -1))
       : "memory", "cc");
}




static inline void rwsem_atomic_add(long delta, struct rw_semaphore *sem)
{
 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " " " "addq" " " "%1,%0"
       : "+m" (sem->count)
       : "er" (delta));
}




static inline long rwsem_atomic_update(long delta, struct rw_semaphore *sem)
{
 long tmp = delta;

 asm volatile(".section .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".previous\n" "671:" "\n\tlock; " "xadd %0,%1"
       : "+r" (tmp), "+m" (sem->count)
       : : "memory");

 return tmp + delta;
}
# 42 "include/linux/rwsem.h" 2


static inline int rwsem_is_locked(struct rw_semaphore *sem)
{
 return sem->count != 0;
}
# 66 "include/linux/rwsem.h"
extern void __init_rwsem(struct rw_semaphore *sem, const char *name,
    struct lock_class_key *key);
# 79 "include/linux/rwsem.h"
extern void down_read(struct rw_semaphore *sem);




extern int down_read_trylock(struct rw_semaphore *sem);




extern void down_write(struct rw_semaphore *sem);




extern int down_write_trylock(struct rw_semaphore *sem);




extern void up_read(struct rw_semaphore *sem);




extern void up_write(struct rw_semaphore *sem);




extern void downgrade_write(struct rw_semaphore *sem);
# 125 "include/linux/rwsem.h"
extern void down_read_nested(struct rw_semaphore *sem, int subclass);
extern void down_write_nested(struct rw_semaphore *sem, int subclass);
# 15 "include/linux/notifier.h" 2
# 1 "include/linux/srcu.h" 1
# 32 "include/linux/srcu.h"
struct srcu_struct_array {
 int c[2];
};

struct srcu_struct {
 int completed;
 struct srcu_struct_array *per_cpu_ref;
 struct mutex mutex;

 struct lockdep_map dep_map;

};
# 53 "include/linux/srcu.h"
int __init_srcu_struct(struct srcu_struct *sp, const char *name,
         struct lock_class_key *key);
# 77 "include/linux/srcu.h"
void cleanup_srcu_struct(struct srcu_struct *sp);
int __srcu_read_lock(struct srcu_struct *sp) ;
void __srcu_read_unlock(struct srcu_struct *sp, int idx) ;
void synchronize_srcu(struct srcu_struct *sp);
void synchronize_srcu_expedited(struct srcu_struct *sp);
long srcu_batches_completed(struct srcu_struct *sp);
# 94 "include/linux/srcu.h"
static inline int srcu_read_lock_held(struct srcu_struct *sp)
{
 if (debug_locks)
  return lock_is_held(&sp->dep_map);
 return 1;
}
# 149 "include/linux/srcu.h"
static inline int srcu_read_lock(struct srcu_struct *sp)
{
 int retval = __srcu_read_lock(sp);

 lock_acquire(&(sp)->dep_map, 0, 0, 2, 1, ((void *)0), ({ __label__ __here; __here: (unsigned long)&&__here; }));
 return retval;
}
# 164 "include/linux/srcu.h"
static inline void srcu_read_unlock(struct srcu_struct *sp, int idx)

{
 lock_release(&(sp)->dep_map, 1, ({ __label__ __here; __here: (unsigned long)&&__here; }));
 __srcu_read_unlock(sp, idx);
}
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

extern int blocking_notifier_chain_cond_register(
  struct blocking_notifier_head *nh,
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
# 165 "include/linux/notifier.h"
static inline int notifier_from_errno(int err)
{
 if (err)
  return 0x8000 | (0x0001 - err);

 return 0x0001;
}


static inline int notifier_to_errno(int ret)
{
 ret &= ~0x8000;
 return ret > 0x0001 ? 0x0001 - ret : 0;
}
# 209 "include/linux/notifier.h"
extern struct blocking_notifier_head reboot_notifier_list;
# 7 "include/linux/memory_hotplug.h" 2

struct page;
struct zone;
struct pglist_data;
struct mem_section;







enum {
 MEMORY_HOTPLUG_MIN_BOOTMEM_TYPE = 12,
 SECTION_INFO = MEMORY_HOTPLUG_MIN_BOOTMEM_TYPE,
 MIX_SECTION_INFO,
 NODE_INFO,
 MEMORY_HOTPLUG_MAX_BOOTMEM_TYPE = NODE_INFO,
};




static inline
void pgdat_resize_lock(struct pglist_data *pgdat, unsigned long *flags)
{
 do { do { ({ unsigned long __dummy; typeof(*flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); *flags = _raw_spin_lock_irqsave(spinlock_check(&pgdat->node_size_lock)); } while (0); } while (0);
}
static inline
void pgdat_resize_unlock(struct pglist_data *pgdat, unsigned long *flags)
{
 spin_unlock_irqrestore(&pgdat->node_size_lock, *flags);
}
static inline
void pgdat_resize_init(struct pglist_data *pgdat)
{
 do { spinlock_check(&pgdat->node_size_lock); do { static struct lock_class_key __key; __raw_spin_lock_init((&(&pgdat->node_size_lock)->rlock), "&(&pgdat->node_size_lock)->rlock", &__key); } while (0); } while (0);
}



static inline unsigned zone_span_seqbegin(struct zone *zone)
{
 return read_seqbegin(&zone->span_seqlock);
}
static inline int zone_span_seqretry(struct zone *zone, unsigned iv)
{
 return read_seqretry(&zone->span_seqlock, iv);
}
static inline void zone_span_writelock(struct zone *zone)
{
 write_seqlock(&zone->span_seqlock);
}
static inline void zone_span_writeunlock(struct zone *zone)
{
 write_sequnlock(&zone->span_seqlock);
}
static inline void zone_seqlock_init(struct zone *zone)
{
 do { (&zone->span_seqlock)->sequence = 0; do { spinlock_check(&(&zone->span_seqlock)->lock); do { static struct lock_class_key __key; __raw_spin_lock_init((&(&(&zone->span_seqlock)->lock)->rlock), "&(&(&zone->span_seqlock)->lock)->rlock", &__key); } while (0); } while (0); } while (0);
}
extern int zone_grow_free_lists(struct zone *zone, unsigned long new_nr_pages);
extern int zone_grow_waitqueues(struct zone *zone, unsigned long nr_pages);
extern int add_one_highpage(struct page *page, int pfn, int bad_ppro);

extern int online_pages(unsigned long, unsigned long);
extern void __offline_isolated_pages(unsigned long, unsigned long);

typedef void (*online_page_callback_t)(struct page *page);

extern int set_online_page_callback(online_page_callback_t callback);
extern int restore_online_page_callback(online_page_callback_t callback);

extern void __online_page_set_limits(struct page *page);
extern void __online_page_increment_counters(struct page *page);
extern void __online_page_free(struct page *page);


extern bool is_pageblock_removable_nolock(struct page *page);



extern int __add_pages(int nid, struct zone *zone, unsigned long start_pfn,
 unsigned long nr_pages);
extern int __remove_pages(struct zone *zone, unsigned long start_pfn,
 unsigned long nr_pages);


extern int memory_add_physaddr_to_nid(u64 start);
# 140 "include/linux/memory_hotplug.h"
extern pg_data_t *node_data[];
static inline void arch_refresh_nodedata(int nid, pg_data_t *pgdat)
{
 node_data[nid] = pgdat;
}
# 164 "include/linux/memory_hotplug.h"
static inline void register_page_bootmem_info_node(struct pglist_data *pgdat)
{
}
static inline void put_page_bootmem(struct page *page)
{
}
# 181 "include/linux/memory_hotplug.h"
void lock_memory_hotplug(void);
void unlock_memory_hotplug(void);
# 222 "include/linux/memory_hotplug.h"
extern int is_mem_section_removable(unsigned long pfn, unsigned long nr_pages);
# 232 "include/linux/memory_hotplug.h"
extern int mem_online_node(int nid);
extern int add_memory(int nid, u64 start, u64 size);
extern int arch_add_memory(int nid, u64 start, u64 size);
extern int remove_memory(u64 start, u64 size);
extern int sparse_add_one_section(struct zone *zone, unsigned long start_pfn,
        int nr_pages);
extern void sparse_remove_one_section(struct zone *zone, struct mem_section *ms);
extern struct page *sparse_decode_mem_map(unsigned long coded_mem_map,
       unsigned long pnum);
# 664 "include/linux/mmzone.h" 2

extern struct mutex zonelists_mutex;
void build_all_zonelists(void *data);
void wakeup_kswapd(struct zone *zone, int order, enum zone_type classzone_idx);
bool zone_watermark_ok(struct zone *z, int order, unsigned long mark,
  int classzone_idx, int alloc_flags);
bool zone_watermark_ok_safe(struct zone *z, int order, unsigned long mark,
  int classzone_idx, int alloc_flags);
enum memmap_context {
 MEMMAP_EARLY,
 MEMMAP_HOTPLUG,
};
extern int init_currently_empty_zone(struct zone *zone, unsigned long start_pfn,
         unsigned long size,
         enum memmap_context context);


void memory_present(int nid, unsigned long start, unsigned long end);







static inline int local_memory_node(int node_id) { return node_id; };
# 701 "include/linux/mmzone.h"
static inline int populated_zone(struct zone *zone)
{
 return (!!zone->present_pages);
}

extern int movable_zone;

static inline int zone_movable_is_highmem(void)
{



 return 0;

}

static inline int is_highmem_idx(enum zone_type idx)
{




 return 0;

}

static inline int is_normal_idx(enum zone_type idx)
{
 return (idx == ZONE_NORMAL);
}







static inline int is_highmem(struct zone *zone)
{






 return 0;

}

static inline int is_normal(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + ZONE_NORMAL;
}

static inline int is_dma32(struct zone *zone)
{

 return zone == zone->zone_pgdat->node_zones + ZONE_DMA32;



}

static inline int is_dma(struct zone *zone)
{

 return zone == zone->zone_pgdat->node_zones + ZONE_DMA;



}


struct ctl_table;
int min_free_kbytes_sysctl_handler(struct ctl_table *, int,
     void *, size_t *, loff_t *);
extern int sysctl_lowmem_reserve_ratio[4 -1];
int lowmem_reserve_ratio_sysctl_handler(struct ctl_table *, int,
     void *, size_t *, loff_t *);
int percpu_pagelist_fraction_sysctl_handler(struct ctl_table *, int,
     void *, size_t *, loff_t *);
int sysctl_min_unmapped_ratio_sysctl_handler(struct ctl_table *, int,
   void *, size_t *, loff_t *);
int sysctl_min_slab_ratio_sysctl_handler(struct ctl_table *, int,
   void *, size_t *, loff_t *);

extern int numa_zonelist_order_handler(struct ctl_table *, int,
   void *, size_t *, loff_t *);
extern char numa_zonelist_order[];
# 800 "include/linux/mmzone.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/mmzone.h" 1



# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/mmzone_64.h" 1
# 9 "/home/iago/torvalds/linux/arch/x86/include/asm/mmzone_64.h"
# 1 "include/linux/mmdebug.h" 1
# 10 "/home/iago/torvalds/linux/arch/x86/include/asm/mmzone_64.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/smp.h" 1
# 12 "/home/iago/torvalds/linux/arch/x86/include/asm/smp.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/mpspec.h" 1





# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/mpspec_def.h" 1
# 21 "/home/iago/torvalds/linux/arch/x86/include/asm/mpspec_def.h"
struct mpf_intel {
 char signature[4];
 unsigned int physptr;
 unsigned char length;
 unsigned char specification;
 unsigned char checksum;
 unsigned char feature1;
 unsigned char feature2;
 unsigned char feature3;
 unsigned char feature4;
 unsigned char feature5;
};



struct mpc_table {
 char signature[4];
 unsigned short length;
 char spec;
 char checksum;
 char oem[8];
 char productid[12];
 unsigned int oemptr;
 unsigned short oemsize;
 unsigned short oemcount;
 unsigned int lapic;
 unsigned int reserved;
};
# 67 "/home/iago/torvalds/linux/arch/x86/include/asm/mpspec_def.h"
struct mpc_cpu {
 unsigned char type;
 unsigned char apicid;
 unsigned char apicver;
 unsigned char cpuflag;
 unsigned int cpufeature;
 unsigned int featureflag;
 unsigned int reserved[2];
};

struct mpc_bus {
 unsigned char type;
 unsigned char busid;
 unsigned char bustype[6];
};
# 105 "/home/iago/torvalds/linux/arch/x86/include/asm/mpspec_def.h"
struct mpc_ioapic {
 unsigned char type;
 unsigned char apicid;
 unsigned char apicver;
 unsigned char flags;
 unsigned int apicaddr;
};

struct mpc_intsrc {
 unsigned char type;
 unsigned char irqtype;
 unsigned short irqflag;
 unsigned char srcbus;
 unsigned char srcbusirq;
 unsigned char dstapic;
 unsigned char dstirq;
};

enum mp_irq_source_types {
 mp_INT = 0,
 mp_NMI = 1,
 mp_SMI = 2,
 mp_ExtINT = 3
};







struct mpc_lintsrc {
 unsigned char type;
 unsigned char irqtype;
 unsigned short irqflag;
 unsigned char srcbusid;
 unsigned char srcbusirq;
 unsigned char destapic;
 unsigned char destapiclint;
};



struct mpc_oemtable {
 char signature[4];
 unsigned short length;
 char rev;
 char checksum;
 char mpc[8];
};
# 168 "/home/iago/torvalds/linux/arch/x86/include/asm/mpspec_def.h"
enum mp_bustype {
 MP_BUS_ISA = 1,
 MP_BUS_EISA,
 MP_BUS_PCI,
 MP_BUS_MCA,
};
# 7 "/home/iago/torvalds/linux/arch/x86/include/asm/mpspec.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/x86_init.h" 1




# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/bootparam.h" 1




# 1 "include/linux/screen_info.h" 1
# 10 "include/linux/screen_info.h"
struct screen_info {
 __u8 orig_x;
 __u8 orig_y;
 __u16 ext_mem_k;
 __u16 orig_video_page;
 __u8 orig_video_mode;
 __u8 orig_video_cols;
 __u8 flags;
 __u8 unused2;
 __u16 orig_video_ega_bx;
 __u16 unused3;
 __u8 orig_video_lines;
 __u8 orig_video_isVGA;
 __u16 orig_video_points;


 __u16 lfb_width;
 __u16 lfb_height;
 __u16 lfb_depth;
 __u32 lfb_base;
 __u32 lfb_size;
 __u16 cl_magic, cl_offset;
 __u16 lfb_linelength;
 __u8 red_size;
 __u8 red_pos;
 __u8 green_size;
 __u8 green_pos;
 __u8 blue_size;
 __u8 blue_pos;
 __u8 rsvd_size;
 __u8 rsvd_pos;
 __u16 vesapm_seg;
 __u16 vesapm_off;
 __u16 pages;
 __u16 vesa_attributes;
 __u32 capabilities;
 __u8 _reserved[6];
} __attribute__((packed));
# 72 "include/linux/screen_info.h"
extern struct screen_info screen_info;
# 6 "/home/iago/torvalds/linux/arch/x86/include/asm/bootparam.h" 2
# 1 "include/linux/apm_bios.h" 1
# 21 "include/linux/apm_bios.h"
typedef unsigned short apm_event_t;
typedef unsigned short apm_eventinfo_t;

struct apm_bios_info {
 __u16 version;
 __u16 cseg;
 __u32 offset;
 __u16 cseg_16;
 __u16 dseg;
 __u16 flags;
 __u16 cseg_len;
 __u16 cseg_16_len;
 __u16 dseg_len;
};
# 52 "include/linux/apm_bios.h"
struct apm_info {
 struct apm_bios_info bios;
 unsigned short connection_version;
 int get_power_status_broken;
 int get_power_status_swabinminutes;
 int allow_ints;
 int forbid_idle;
 int realmode_power_off;
 int disabled;
};
# 111 "include/linux/apm_bios.h"
extern struct apm_info apm_info;
# 7 "/home/iago/torvalds/linux/arch/x86/include/asm/bootparam.h" 2
# 1 "include/linux/edd.h" 1
# 71 "include/linux/edd.h"
struct edd_device_params {
 __u16 length;
 __u16 info_flags;
 __u32 num_default_cylinders;
 __u32 num_default_heads;
 __u32 sectors_per_track;
 __u64 number_of_sectors;
 __u16 bytes_per_sector;
 __u32 dpte_ptr;
 __u16 key;
 __u8 device_path_info_length;
 __u8 reserved2;
 __u16 reserved3;
 __u8 host_bus_type[4];
 __u8 interface_type[8];
 union {
  struct {
   __u16 base_address;
   __u16 reserved1;
   __u32 reserved2;
  } __attribute__ ((packed)) isa;
  struct {
   __u8 bus;
   __u8 slot;
   __u8 function;
   __u8 channel;
   __u32 reserved;
  } __attribute__ ((packed)) pci;

  struct {
   __u64 reserved;
  } __attribute__ ((packed)) ibnd;
  struct {
   __u64 reserved;
  } __attribute__ ((packed)) xprs;
  struct {
   __u64 reserved;
  } __attribute__ ((packed)) htpt;
  struct {
   __u64 reserved;
  } __attribute__ ((packed)) unknown;
 } interface_path;
 union {
  struct {
   __u8 device;
   __u8 reserved1;
   __u16 reserved2;
   __u32 reserved3;
   __u64 reserved4;
  } __attribute__ ((packed)) ata;
  struct {
   __u8 device;
   __u8 lun;
   __u8 reserved1;
   __u8 reserved2;
   __u32 reserved3;
   __u64 reserved4;
  } __attribute__ ((packed)) atapi;
  struct {
   __u16 id;
   __u64 lun;
   __u16 reserved1;
   __u32 reserved2;
  } __attribute__ ((packed)) scsi;
  struct {
   __u64 serial_number;
   __u64 reserved;
  } __attribute__ ((packed)) usb;
  struct {
   __u64 eui;
   __u64 reserved;
  } __attribute__ ((packed)) i1394;
  struct {
   __u64 wwid;
   __u64 lun;
  } __attribute__ ((packed)) fibre;
  struct {
   __u64 identity_tag;
   __u64 reserved;
  } __attribute__ ((packed)) i2o;
  struct {
   __u32 array_number;
   __u32 reserved1;
   __u64 reserved2;
  } __attribute__ ((packed)) raid;
  struct {
   __u8 device;
   __u8 reserved1;
   __u16 reserved2;
   __u32 reserved3;
   __u64 reserved4;
  } __attribute__ ((packed)) sata;
  struct {
   __u64 reserved1;
   __u64 reserved2;
  } __attribute__ ((packed)) unknown;
 } device_path;
 __u8 reserved4;
 __u8 checksum;
} __attribute__ ((packed));

struct edd_info {
 __u8 device;
 __u8 version;
 __u16 interface_support;
 __u16 legacy_max_cylinder;
 __u8 legacy_max_head;
 __u8 legacy_sectors_per_track;
 struct edd_device_params params;
} __attribute__ ((packed));

struct edd {
 unsigned int mbr_signature[16];
 struct edd_info edd_info[6];
 unsigned char mbr_signature_nr;
 unsigned char edd_info_nr;
};


extern struct edd edd;
# 8 "/home/iago/torvalds/linux/arch/x86/include/asm/bootparam.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/e820.h" 1
# 58 "/home/iago/torvalds/linux/arch/x86/include/asm/e820.h"
struct e820entry {
 __u64 addr;
 __u64 size;
 __u32 type;
} __attribute__((packed));

struct e820map {
 __u32 nr_map;
 struct e820entry map[(128 + 3 * (1 << 10))];
};
# 80 "/home/iago/torvalds/linux/arch/x86/include/asm/e820.h"
extern struct e820map e820;
extern struct e820map e820_saved;

extern unsigned long pci_mem_start;
extern int e820_any_mapped(u64 start, u64 end, unsigned type);
extern int e820_all_mapped(u64 start, u64 end, unsigned type);
extern void e820_add_region(u64 start, u64 size, int type);
extern void e820_print_map(char *who);
extern int
sanitize_e820_map(struct e820entry *biosmap, int max_nr_map, u32 *pnr_map);
extern u64 e820_update_range(u64 start, u64 size, unsigned old_type,
          unsigned new_type);
extern u64 e820_remove_range(u64 start, u64 size, unsigned old_type,
        int checktype);
extern void update_e820(void);
extern void e820_setup_gap(void);
extern int e820_search_gap(unsigned long *gapstart, unsigned long *gapsize,
   unsigned long start_addr, unsigned long long end_addr);
struct setup_data;
extern void parse_e820_ext(struct setup_data *data);



extern void e820_mark_nosave_regions(unsigned long limit_pfn);







extern void early_memtest(unsigned long start, unsigned long end);






extern unsigned long e820_end_of_ram_pfn(void);
extern unsigned long e820_end_of_low_ram_pfn(void);
extern u64 early_reserve_e820(u64 startt, u64 sizet, u64 align);

void memblock_x86_fill(void);
void memblock_find_dma_reserve(void);

extern void finish_e820_parsing(void);
extern void e820_reserve_resources(void);
extern void e820_reserve_resources_late(void);
extern void setup_memory_map(void);
extern char *default_machine_specific_memory_setup(void);





static inline bool is_ISA_range(u64 s, u64 e)
{
 return s >= 0xa0000 && e <= 0x100000;
}





# 1 "include/linux/ioport.h" 1
# 18 "include/linux/ioport.h"
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
# 143 "include/linux/ioport.h"
extern struct resource ioport_resource;
extern struct resource iomem_resource;

extern struct resource *request_resource_conflict(struct resource *root, struct resource *new);
extern int request_resource(struct resource *root, struct resource *new);
extern int release_resource(struct resource *new);
void release_child_resources(struct resource *new);
extern void reserve_region_with_split(struct resource *root,
        resource_size_t start, resource_size_t end,
        const char *name);
extern struct resource *insert_resource_conflict(struct resource *parent, struct resource *new);
extern int insert_resource(struct resource *parent, struct resource *new);
extern void insert_resource_expand_to_fit(struct resource *root, struct resource *new);
extern void arch_remove_reservations(struct resource *avail);
extern int allocate_resource(struct resource *root, struct resource *new,
        resource_size_t size, resource_size_t min,
        resource_size_t max, resource_size_t align,
        resource_size_t (*alignf)(void *,
             const struct resource *,
             resource_size_t,
             resource_size_t),
        void *alignf_data);
struct resource *lookup_resource(struct resource *root, resource_size_t start);
int adjust_resource(struct resource *res, resource_size_t start,
      resource_size_t size);
resource_size_t resource_alignment(struct resource *res);
static inline resource_size_t resource_size(const struct resource *res)
{
 return res->end - res->start + 1;
}
static inline unsigned long resource_type(const struct resource *res)
{
 return res->flags & 0x00001f00;
}
# 187 "include/linux/ioport.h"
extern struct resource * __request_region(struct resource *,
     resource_size_t start,
     resource_size_t n,
     const char *name, int flags);






extern int __check_region(struct resource *, resource_size_t, resource_size_t);
extern void __release_region(struct resource *, resource_size_t,
    resource_size_t);

static inline int __attribute__((deprecated)) check_region(resource_size_t s,
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
extern int iomem_map_sanity_check(resource_size_t addr, unsigned long size);
extern int iomem_is_exclusive(u64 addr);

extern int
walk_system_ram_range(unsigned long start_pfn, unsigned long nr_pages,
  void *arg, int (*func)(unsigned long, unsigned long, void *));
# 145 "/home/iago/torvalds/linux/arch/x86/include/asm/e820.h" 2
# 9 "/home/iago/torvalds/linux/arch/x86/include/asm/bootparam.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/ist.h" 1
# 22 "/home/iago/torvalds/linux/arch/x86/include/asm/ist.h"
struct ist_info {
 __u32 signature;
 __u32 command;
 __u32 event;
 __u32 perf_level;
};



extern struct ist_info ist_info;
# 10 "/home/iago/torvalds/linux/arch/x86/include/asm/bootparam.h" 2
# 1 "include/video/edid.h" 1





struct edid_info {
 unsigned char dummy[128];
};


extern struct edid_info edid_info;
# 11 "/home/iago/torvalds/linux/arch/x86/include/asm/bootparam.h" 2







struct setup_data {
 __u64 next;
 __u32 type;
 __u32 len;
 __u8 data[0];
};

struct setup_header {
 __u8 setup_sects;
 __u16 root_flags;
 __u32 syssize;
 __u16 ram_size;



 __u16 vid_mode;
 __u16 root_dev;
 __u16 boot_flag;
 __u16 jump;
 __u32 header;
 __u16 version;
 __u32 realmode_swtch;
 __u16 start_sys;
 __u16 kernel_version;
 __u8 type_of_loader;
 __u8 loadflags;




 __u16 setup_move_size;
 __u32 code32_start;
 __u32 ramdisk_image;
 __u32 ramdisk_size;
 __u32 bootsect_kludge;
 __u16 heap_end_ptr;
 __u8 ext_loader_ver;
 __u8 ext_loader_type;
 __u32 cmd_line_ptr;
 __u32 initrd_addr_max;
 __u32 kernel_alignment;
 __u8 relocatable_kernel;
 __u8 _pad2[3];
 __u32 cmdline_size;
 __u32 hardware_subarch;
 __u64 hardware_subarch_data;
 __u32 payload_offset;
 __u32 payload_length;
 __u64 setup_data;
} __attribute__((packed));

struct sys_desc_table {
 __u16 length;
 __u8 table[14];
};


struct olpc_ofw_header {
 __u32 ofw_magic;
 __u32 ofw_version;
 __u32 cif_handler;
 __u32 irq_desc_table;
} __attribute__((packed));

struct efi_info {
 __u32 efi_loader_signature;
 __u32 efi_systab;
 __u32 efi_memdesc_size;
 __u32 efi_memdesc_version;
 __u32 efi_memmap;
 __u32 efi_memmap_size;
 __u32 efi_systab_hi;
 __u32 efi_memmap_hi;
};


struct boot_params {
 struct screen_info screen_info;
 struct apm_bios_info apm_bios_info;
 __u8 _pad2[4];
 __u64 tboot_addr;
 struct ist_info ist_info;
 __u8 _pad3[16];
 __u8 hd0_info[16];
 __u8 hd1_info[16];
 struct sys_desc_table sys_desc_table;
 struct olpc_ofw_header olpc_ofw_header;
 __u8 _pad4[128];
 struct edid_info edid_info;
 struct efi_info efi_info;
 __u32 alt_mem_k;
 __u32 scratch;
 __u8 e820_entries;
 __u8 eddbuf_entries;
 __u8 edd_mbr_sig_buf_entries;
 __u8 _pad6[6];
 struct setup_header hdr;
 __u8 _pad7[0x290-0x1f1-sizeof(struct setup_header)];
 __u32 edd_mbr_sig_buffer[16];
 struct e820entry e820_map[128];
 __u8 _pad8[48];
 struct edd_info eddbuf[6];
 __u8 _pad9[276];
} __attribute__((packed));

enum {
 X86_SUBARCH_PC = 0,
 X86_SUBARCH_LGUEST,
 X86_SUBARCH_XEN,
 X86_SUBARCH_MRST,
 X86_SUBARCH_CE4100,
 X86_NR_SUBARCHS,
};
# 6 "/home/iago/torvalds/linux/arch/x86/include/asm/x86_init.h" 2

struct mpc_bus;
struct mpc_cpu;
struct mpc_table;
# 22 "/home/iago/torvalds/linux/arch/x86/include/asm/x86_init.h"
struct x86_init_mpparse {
 void (*mpc_record)(unsigned int mode);
 void (*setup_ioapic_ids)(void);
 int (*mpc_apic_id)(struct mpc_cpu *m);
 void (*smp_read_mpc_oem)(struct mpc_table *mpc);
 void (*mpc_oem_pci_bus)(struct mpc_bus *m);
 void (*mpc_oem_bus_info)(struct mpc_bus *m, char *name);
 void (*find_smp_config)(void);
 void (*get_smp_config)(unsigned int early);
};
# 41 "/home/iago/torvalds/linux/arch/x86/include/asm/x86_init.h"
struct x86_init_resources {
 void (*probe_roms)(void);
 void (*reserve_resources)(void);
 char *(*memory_setup)(void);
};
# 54 "/home/iago/torvalds/linux/arch/x86/include/asm/x86_init.h"
struct x86_init_irqs {
 void (*pre_vector_init)(void);
 void (*intr_init)(void);
 void (*trap_init)(void);
};






struct x86_init_oem {
 void (*arch_setup)(void);
 void (*banner)(void);
};
# 77 "/home/iago/torvalds/linux/arch/x86/include/asm/x86_init.h"
struct x86_init_mapping {
 void (*pagetable_reserve)(u64 start, u64 end);
};






struct x86_init_paging {
 void (*pagetable_setup_start)(pgd_t *base);
 void (*pagetable_setup_done)(pgd_t *base);
};
# 99 "/home/iago/torvalds/linux/arch/x86/include/asm/x86_init.h"
struct x86_init_timers {
 void (*setup_percpu_clockev)(void);
 void (*tsc_pre_init)(void);
 void (*timer_init)(void);
 void (*wallclock_init)(void);
};





struct x86_init_iommu {
 int (*iommu_init)(void);
};
# 121 "/home/iago/torvalds/linux/arch/x86/include/asm/x86_init.h"
struct x86_init_pci {
 int (*arch_init)(void);
 int (*init)(void);
 void (*init_irq)(void);
 void (*fixup_irqs)(void);
};





struct x86_init_ops {
 struct x86_init_resources resources;
 struct x86_init_mpparse mpparse;
 struct x86_init_irqs irqs;
 struct x86_init_oem oem;
 struct x86_init_mapping mapping;
 struct x86_init_paging paging;
 struct x86_init_timers timers;
 struct x86_init_iommu iommu;
 struct x86_init_pci pci;
};





struct x86_cpuinit_ops {
 void (*setup_percpu_clockev)(void);
};
# 161 "/home/iago/torvalds/linux/arch/x86/include/asm/x86_init.h"
struct x86_platform_ops {
 unsigned long (*calibrate_tsc)(void);
 unsigned long (*get_wallclock)(void);
 int (*set_wallclock)(unsigned long nowtime);
 void (*iommu_shutdown)(void);
 bool (*is_untracked_pat_range)(u64 start, u64 end);
 void (*nmi_init)(void);
 int (*i8042_detect)(void);
};

struct pci_dev;

struct x86_msi_ops {
 int (*setup_msi_irqs)(struct pci_dev *dev, int nvec, int type);
 void (*teardown_msi_irq)(unsigned int irq);
 void (*teardown_msi_irqs)(struct pci_dev *dev);
};

extern struct x86_init_ops x86_init;
extern struct x86_cpuinit_ops x86_cpuinit;
extern struct x86_platform_ops x86_platform;
extern struct x86_msi_ops x86_msi;

extern void x86_init_noop(void);
extern void x86_init_uint_noop(unsigned int unused);
# 8 "/home/iago/torvalds/linux/arch/x86/include/asm/mpspec.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/apicdef.h" 1
# 175 "/home/iago/torvalds/linux/arch/x86/include/asm/apicdef.h"
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
# 431 "/home/iago/torvalds/linux/arch/x86/include/asm/apicdef.h"
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
# 9 "/home/iago/torvalds/linux/arch/x86/include/asm/mpspec.h" 2

extern int apic_version[];
extern int pic_mode;
# 47 "/home/iago/torvalds/linux/arch/x86/include/asm/mpspec.h"
extern unsigned long mp_bus_not_pci[(((256) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];

extern unsigned int boot_cpu_physical_apicid;
extern unsigned int max_physical_apicid;
extern int mpc_default_type;
extern unsigned long mp_lapic_addr;


extern int smp_found_config;




static inline void get_smp_config(void)
{
 x86_init.mpparse.get_smp_config(0);
}

static inline void early_get_smp_config(void)
{
 x86_init.mpparse.get_smp_config(1);
}

static inline void find_smp_config(void)
{
 x86_init.mpparse.find_smp_config();
}


extern void early_reserve_e820_mpc_new(void);
extern int enable_update_mptable;
extern int default_mpc_apic_id(struct mpc_cpu *m);
extern void default_smp_read_mpc_oem(struct mpc_table *mpc);

extern void default_mpc_oem_bus_info(struct mpc_bus *m, char *str);



extern void default_find_smp_config(void);
extern void default_get_smp_config(unsigned int early);
# 97 "/home/iago/torvalds/linux/arch/x86/include/asm/mpspec.h"
void __attribute__ ((__section__(".cpuinit.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) generic_processor_info(int apicid, int version);

extern void mp_register_ioapic(int id, u32 address, u32 gsi_base);
extern void mp_override_legacy_irq(u8 bus_irq, u8 polarity, u8 trigger,
       u32 gsi);
extern void mp_config_acpi_legacy_irqs(void);
struct device;
extern int mp_register_gsi(struct device *dev, u32 gsi, int edge_level,
     int active_high_low);




struct physid_mask {
 unsigned long mask[(((32768) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];
};

typedef struct physid_mask physid_mask_t;
# 149 "/home/iago/torvalds/linux/arch/x86/include/asm/mpspec.h"
static inline unsigned long physids_coerce(physid_mask_t *map)
{
 return map->mask[0];
}

static inline void physids_promote(unsigned long physids, physid_mask_t *map)
{
 bitmap_zero((*map).mask, 32768);
 map->mask[0] = physids;
}

static inline void physid_set_mask_of_physid(int physid, physid_mask_t *map)
{
 bitmap_zero((*map).mask, 32768);
 set_bit(physid, (*map).mask);
}




extern physid_mask_t phys_cpu_present_map;

extern int generic_mps_oem_check(struct mpc_table *, char *, char *);

extern int default_acpi_madt_oem_check(char *, char *);
# 13 "/home/iago/torvalds/linux/arch/x86/include/asm/smp.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/apic.h" 1




# 1 "include/linux/pm.h" 1
# 25 "include/linux/pm.h"
# 1 "include/linux/workqueue.h" 1







# 1 "include/linux/timer.h" 1




# 1 "include/linux/ktime.h" 1
# 24 "include/linux/ktime.h"
# 1 "include/linux/time.h" 1
# 14 "include/linux/time.h"
struct timespec {
 __kernel_time_t tv_sec;
 long tv_nsec;
};


struct timeval {
 __kernel_time_t tv_sec;
 __kernel_suseconds_t tv_usec;
};

struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};



extern struct timezone sys_tz;
# 45 "include/linux/time.h"
static inline int timespec_equal(const struct timespec *a,
                                 const struct timespec *b)
{
 return (a->tv_sec == b->tv_sec) && (a->tv_nsec == b->tv_nsec);
}






static inline int timespec_compare(const struct timespec *lhs, const struct timespec *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_nsec - rhs->tv_nsec;
}

static inline int timeval_compare(const struct timeval *lhs, const struct timeval *rhs)
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

extern void set_normalized_timespec(struct timespec *ts, time_t sec, s64 nsec);






extern struct timespec timespec_add_safe(const struct timespec lhs,
      const struct timespec rhs);


static inline struct timespec timespec_add(struct timespec lhs,
      struct timespec rhs)
{
 struct timespec ts_delta;
 set_normalized_timespec(&ts_delta, lhs.tv_sec + rhs.tv_sec,
    lhs.tv_nsec + rhs.tv_nsec);
 return ts_delta;
}




static inline struct timespec timespec_sub(struct timespec lhs,
      struct timespec rhs)
{
 struct timespec ts_delta;
 set_normalized_timespec(&ts_delta, lhs.tv_sec - rhs.tv_sec,
    lhs.tv_nsec - rhs.tv_nsec);
 return ts_delta;
}







extern void read_persistent_clock(struct timespec *ts);
extern void read_boot_clock(struct timespec *ts);
extern int update_persistent_clock(struct timespec now);
extern int no_sync_cmos_clock __attribute__((__section__(".data..read_mostly")));
void timekeeping_init(void);
extern int timekeeping_suspended;

unsigned long get_seconds(void);
struct timespec current_kernel_time(void);
struct timespec __current_kernel_time(void);
struct timespec get_monotonic_coarse(void);
void get_xtime_and_monotonic_and_sleep_offset(struct timespec *xtim,
    struct timespec *wtom, struct timespec *sleep);
void timekeeping_inject_sleeptime(struct timespec *delta);
# 146 "include/linux/time.h"
static inline u32 arch_gettimeoffset(void) { return 0; }


extern void do_gettimeofday(struct timeval *tv);
extern int do_settimeofday(const struct timespec *tv);
extern int do_sys_settimeofday(const struct timespec *tv,
          const struct timezone *tz);

extern long do_utimes(int dfd, const char *filename, struct timespec *times, int flags);
struct itimerval;
extern int do_setitimer(int which, struct itimerval *value,
   struct itimerval *ovalue);
extern unsigned int alarm_setitimer(unsigned int seconds);
extern int do_getitimer(int which, struct itimerval *value);
extern void getnstimeofday(struct timespec *tv);
extern void getrawmonotonic(struct timespec *ts);
extern void getnstime_raw_and_real(struct timespec *ts_raw,
  struct timespec *ts_real);
extern void getboottime(struct timespec *ts);
extern void monotonic_to_bootbased(struct timespec *ts);
extern void get_monotonic_boottime(struct timespec *ts);

extern struct timespec timespec_trunc(struct timespec t, unsigned gran);
extern int timekeeping_valid_for_hres(void);
extern u64 timekeeping_max_deferment(void);
extern void timekeeping_leap_insert(int leapsecond);
extern int timekeeping_inject_offset(struct timespec *ts);

struct tms;
extern void do_sys_times(struct tms *);





struct tm {




 int tm_sec;

 int tm_min;

 int tm_hour;

 int tm_mday;

 int tm_mon;

 long tm_year;

 int tm_wday;

 int tm_yday;
};

void time_to_tm(time_t totalsecs, int offset, struct tm *result);
# 212 "include/linux/time.h"
static inline s64 timespec_to_ns(const struct timespec *ts)
{
 return ((s64) ts->tv_sec * 1000000000L) + ts->tv_nsec;
}
# 224 "include/linux/time.h"
static inline s64 timeval_to_ns(const struct timeval *tv)
{
 return ((s64) tv->tv_sec * 1000000000L) +
  tv->tv_usec * 1000L;
}







extern struct timespec ns_to_timespec(const s64 nsec);







extern struct timeval ns_to_timeval(const s64 nsec);
# 254 "include/linux/time.h"
static inline __attribute__((always_inline)) void timespec_add_ns(struct timespec *a, u64 ns)
{
 a->tv_sec += __iter_div_u64_rem(a->tv_nsec + ns, 1000000000L, &ns);
 a->tv_nsec = ns;
}
# 277 "include/linux/time.h"
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};

struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 25 "include/linux/ktime.h" 2
# 1 "include/linux/jiffies.h" 1







# 1 "include/linux/timex.h" 1
# 64 "include/linux/timex.h"
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

 int tai;

 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32;
};
# 172 "include/linux/timex.h"
# 1 "include/linux/param.h" 1



# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/param.h" 1
# 1 "include/asm-generic/param.h" 1
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/param.h" 2
# 5 "include/linux/param.h" 2
# 173 "include/linux/timex.h" 2

# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/timex.h" 1




# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/tsc.h" 1
# 15 "/home/iago/torvalds/linux/arch/x86/include/asm/tsc.h"
typedef unsigned long long cycles_t;

extern unsigned int cpu_khz;
extern unsigned int tsc_khz;

extern void disable_TSC(void);

static inline cycles_t get_cycles(void)
{
 unsigned long long ret = 0;





 (ret = paravirt_read_tsc());

 return ret;
}

static inline __attribute__((always_inline)) cycles_t vget_cycles(void)
{
# 45 "/home/iago/torvalds/linux/arch/x86/include/asm/tsc.h"
 return (cycles_t)__native_read_tsc();
}

extern void tsc_init(void);
extern void mark_tsc_unstable(char *reason);
extern int unsynchronized_tsc(void);
extern int check_tsc_unstable(void);
extern unsigned long native_calibrate_tsc(void);





extern void check_tsc_sync_source(int cpu);
extern void check_tsc_sync_target(void);

extern int notsc_setup(char *);
extern void save_sched_clock_state(void);
extern void restore_sched_clock_state(void);
# 6 "/home/iago/torvalds/linux/arch/x86/include/asm/timex.h" 2
# 175 "include/linux/timex.h" 2
# 234 "include/linux/timex.h"
extern unsigned long tick_usec;
extern unsigned long tick_nsec;




extern int time_status;

extern void ntp_init(void);
extern void ntp_clear(void);





static inline int ntp_synced(void)
{
 return !(time_status & 0x0040);
}
# 267 "include/linux/timex.h"
extern u64 tick_length;

extern void second_overflow(void);
extern void update_ntp_one_tick(void);
extern int do_adjtimex(struct timex *);
extern void hardpps(const struct timespec *, const struct timespec *);

int read_current_timer(unsigned long *timer_val);
# 9 "include/linux/jiffies.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/param.h" 1
# 10 "include/linux/jiffies.h" 2
# 81 "include/linux/jiffies.h"
extern u64 __attribute__((section(".data"))) jiffies_64;
extern unsigned long volatile __attribute__((section(".data"))) jiffies;




static inline u64 get_jiffies_64(void)
{
 return (u64)jiffies;
}
# 183 "include/linux/jiffies.h"
extern unsigned long preset_lpj;
# 296 "include/linux/jiffies.h"
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
extern u64 nsecs_to_jiffies64(u64 n);
extern unsigned long nsecs_to_jiffies(u64 n);
# 26 "include/linux/ktime.h" 2
# 46 "include/linux/ktime.h"
union ktime {
 s64 tv64;
# 57 "include/linux/ktime.h"
};

typedef union ktime ktime_t;
# 81 "include/linux/ktime.h"
static inline ktime_t ktime_set(const long secs, const unsigned long nsecs)
{

 if (__builtin_expect(!!(secs >= (((s64)~((u64)1 << 63)) / 1000000000L)), 0))
  return (ktime_t){ .tv64 = ((s64)~((u64)1 << 63)) };

 return (ktime_t) { .tv64 = (s64)secs * 1000000000L + (s64)nsecs };
}
# 113 "include/linux/ktime.h"
static inline ktime_t timespec_to_ktime(struct timespec ts)
{
 return ktime_set(ts.tv_sec, ts.tv_nsec);
}


static inline ktime_t timeval_to_ktime(struct timeval tv)
{
 return ktime_set(tv.tv_sec, tv.tv_usec * 1000L);
}
# 287 "include/linux/ktime.h"
static inline int ktime_equal(const ktime_t cmp1, const ktime_t cmp2)
{
 return cmp1.tv64 == cmp2.tv64;
}

static inline s64 ktime_to_us(const ktime_t kt)
{
 struct timeval tv = ns_to_timeval((kt).tv64);
 return (s64) tv.tv_sec * 1000000L + tv.tv_usec;
}

static inline s64 ktime_to_ms(const ktime_t kt)
{
 struct timeval tv = ns_to_timeval((kt).tv64);
 return (s64) tv.tv_sec * 1000L + tv.tv_usec / 1000L;
}

static inline s64 ktime_us_delta(const ktime_t later, const ktime_t earlier)
{
       return ktime_to_us(({ (ktime_t){ .tv64 = (later).tv64 - (earlier).tv64 }; }));
}

static inline ktime_t ktime_add_us(const ktime_t kt, const u64 usec)
{
 return ({ (ktime_t){ .tv64 = (kt).tv64 + (usec * 1000) }; });
}

static inline ktime_t ktime_sub_us(const ktime_t kt, const u64 usec)
{
 return ({ (ktime_t){ .tv64 = (kt).tv64 - (usec * 1000) }; });
}

extern ktime_t ktime_add_safe(const ktime_t lhs, const ktime_t rhs);
# 331 "include/linux/ktime.h"
extern void ktime_get_ts(struct timespec *ts);




static inline ktime_t ns_to_ktime(u64 ns)
{
 static const ktime_t ktime_zero = { .tv64 = 0 };
 return ({ (ktime_t){ .tv64 = (ktime_zero).tv64 + (ns) }; });
}
# 6 "include/linux/timer.h" 2

# 1 "include/linux/debugobjects.h" 1






enum debug_obj_state {
 ODEBUG_STATE_NONE,
 ODEBUG_STATE_INIT,
 ODEBUG_STATE_INACTIVE,
 ODEBUG_STATE_ACTIVE,
 ODEBUG_STATE_DESTROYED,
 ODEBUG_STATE_NOTAVAILABLE,
 ODEBUG_STATE_MAX,
};

struct debug_obj_descr;
# 27 "include/linux/debugobjects.h"
struct debug_obj {
 struct hlist_node node;
 enum debug_obj_state state;
 unsigned int astate;
 void *object;
 struct debug_obj_descr *descr;
};
# 50 "include/linux/debugobjects.h"
struct debug_obj_descr {
 const char *name;
 void *(*debug_hint) (void *addr);
 int (*fixup_init) (void *addr, enum debug_obj_state state);
 int (*fixup_activate) (void *addr, enum debug_obj_state state);
 int (*fixup_destroy) (void *addr, enum debug_obj_state state);
 int (*fixup_free) (void *addr, enum debug_obj_state state);
};


extern void debug_object_init (void *addr, struct debug_obj_descr *descr);
extern void
debug_object_init_on_stack(void *addr, struct debug_obj_descr *descr);
extern void debug_object_activate (void *addr, struct debug_obj_descr *descr);
extern void debug_object_deactivate(void *addr, struct debug_obj_descr *descr);
extern void debug_object_destroy (void *addr, struct debug_obj_descr *descr);
extern void debug_object_free (void *addr, struct debug_obj_descr *descr);






extern void
debug_object_active_state(void *addr, struct debug_obj_descr *descr,
     unsigned int expect, unsigned int next);

extern void debug_objects_early_init(void);
extern void debug_objects_mem_init(void);
# 98 "include/linux/debugobjects.h"
extern void debug_check_no_obj_freed(const void *address, unsigned long size);
# 8 "include/linux/timer.h" 2


struct tvec_base;

struct timer_list {




 struct list_head entry;
 unsigned long expires;
 struct tvec_base *base;

 void (*function)(unsigned long);
 unsigned long data;

 int slack;


 int start_pid;
 void *start_site;
 char start_comm[16];


 struct lockdep_map lockdep_map;

};

extern struct tvec_base boot_tvec_bases;
# 91 "include/linux/timer.h"
void init_timer_key(struct timer_list *timer,
      const char *name,
      struct lock_class_key *key);
void init_timer_deferrable_key(struct timer_list *timer,
          const char *name,
          struct lock_class_key *key);
# 152 "include/linux/timer.h"
extern void init_timer_on_stack_key(struct timer_list *timer,
        const char *name,
        struct lock_class_key *key);
extern void destroy_timer_on_stack(struct timer_list *timer);
# 166 "include/linux/timer.h"
static inline void setup_timer_key(struct timer_list * timer,
    const char *name,
    struct lock_class_key *key,
    void (*function)(unsigned long),
    unsigned long data)
{
 timer->function = function;
 timer->data = data;
 init_timer_key(timer, name, key);
}

static inline void setup_timer_on_stack_key(struct timer_list *timer,
     const char *name,
     struct lock_class_key *key,
     void (*function)(unsigned long),
     unsigned long data)
{
 timer->function = function;
 timer->data = data;
 init_timer_on_stack_key(timer, name, key);
}

extern void setup_deferrable_timer_on_stack_key(struct timer_list *timer,
      const char *name,
      struct lock_class_key *key,
      void (*function)(unsigned long),
      unsigned long data);
# 204 "include/linux/timer.h"
static inline int timer_pending(const struct timer_list * timer)
{
 return timer->entry.next != ((void *)0);
}

extern void add_timer_on(struct timer_list *timer, int cpu);
extern int del_timer(struct timer_list * timer);
extern int mod_timer(struct timer_list *timer, unsigned long expires);
extern int mod_timer_pending(struct timer_list *timer, unsigned long expires);
extern int mod_timer_pinned(struct timer_list *timer, unsigned long expires);

extern void set_timer_slack(struct timer_list *time, int slack_hz);
# 230 "include/linux/timer.h"
extern unsigned long get_next_timer_interrupt(unsigned long now);






extern int timer_stats_active;



extern void init_timer_stats(void);

extern void timer_stats_update_stats(void *timer, pid_t pid, void *startf,
         void *timerf, char *comm,
         unsigned int timer_flag);

extern void __timer_stats_timer_set_start_info(struct timer_list *timer,
            void *addr);

static inline void timer_stats_timer_set_start_info(struct timer_list *timer)
{
 if (__builtin_expect(!!(!timer_stats_active), 1))
  return;
 __timer_stats_timer_set_start_info(timer, __builtin_return_address(0));
}

static inline void timer_stats_timer_clear_start_info(struct timer_list *timer)
{
 timer->start_site = ((void *)0);
}
# 275 "include/linux/timer.h"
extern void add_timer(struct timer_list *timer);

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

unsigned long __round_jiffies_up(unsigned long j, int cpu);
unsigned long __round_jiffies_up_relative(unsigned long j, int cpu);
unsigned long round_jiffies_up(unsigned long j);
unsigned long round_jiffies_up_relative(unsigned long j);
# 9 "include/linux/workqueue.h" 2






struct workqueue_struct;

struct work_struct;
typedef void (*work_func_t)(struct work_struct *work);







enum {
 WORK_STRUCT_PENDING_BIT = 0,
 WORK_STRUCT_DELAYED_BIT = 1,
 WORK_STRUCT_CWQ_BIT = 2,
 WORK_STRUCT_LINKED_BIT = 3,

 WORK_STRUCT_STATIC_BIT = 4,
 WORK_STRUCT_COLOR_SHIFT = 5,




 WORK_STRUCT_COLOR_BITS = 4,

 WORK_STRUCT_PENDING = 1 << WORK_STRUCT_PENDING_BIT,
 WORK_STRUCT_DELAYED = 1 << WORK_STRUCT_DELAYED_BIT,
 WORK_STRUCT_CWQ = 1 << WORK_STRUCT_CWQ_BIT,
 WORK_STRUCT_LINKED = 1 << WORK_STRUCT_LINKED_BIT,

 WORK_STRUCT_STATIC = 1 << WORK_STRUCT_STATIC_BIT,
# 54 "include/linux/workqueue.h"
 WORK_NR_COLORS = (1 << WORK_STRUCT_COLOR_BITS) - 1,
 WORK_NO_COLOR = WORK_NR_COLORS,


 WORK_CPU_UNBOUND = 4096,
 WORK_CPU_NONE = 4096 + 1,
 WORK_CPU_LAST = WORK_CPU_NONE,






 WORK_STRUCT_FLAG_BITS = WORK_STRUCT_COLOR_SHIFT +
      WORK_STRUCT_COLOR_BITS,

 WORK_STRUCT_FLAG_MASK = (1UL << WORK_STRUCT_FLAG_BITS) - 1,
 WORK_STRUCT_WQ_DATA_MASK = ~WORK_STRUCT_FLAG_MASK,
 WORK_STRUCT_NO_CPU = WORK_CPU_NONE << WORK_STRUCT_FLAG_BITS,


 WORK_BUSY_PENDING = 1 << 0,
 WORK_BUSY_RUNNING = 1 << 1,
};

struct work_struct {
 atomic_long_t data;
 struct list_head entry;
 work_func_t func;

 struct lockdep_map lockdep_map;

};





struct delayed_work {
 struct work_struct work;
 struct timer_list timer;
};

static inline struct delayed_work *to_delayed_work(struct work_struct *work)
{
 return ({ const typeof( ((struct delayed_work *)0)->work ) *__mptr = (work); (struct delayed_work *)( (char *)__mptr - __builtin_offsetof(struct delayed_work,work) );});
}

struct execute_work {
 struct work_struct work;
};
# 156 "include/linux/workqueue.h"
extern void __init_work(struct work_struct *work, int onstack);
extern void destroy_work_on_stack(struct work_struct *work);
static inline unsigned int work_static(struct work_struct *work)
{
 return *((unsigned long *)(&(work)->data)) & WORK_STRUCT_STATIC;
}
# 250 "include/linux/workqueue.h"
enum {
 WQ_NON_REENTRANT = 1 << 0,
 WQ_UNBOUND = 1 << 1,
 WQ_FREEZABLE = 1 << 2,
 WQ_MEM_RECLAIM = 1 << 3,
 WQ_HIGHPRI = 1 << 4,
 WQ_CPU_INTENSIVE = 1 << 5,

 WQ_DRAINING = 1 << 6,
 WQ_RESCUER = 1 << 7,

 WQ_MAX_ACTIVE = 512,
 WQ_MAX_UNBOUND_PER_CPU = 4,
 WQ_DFL_ACTIVE = WQ_MAX_ACTIVE / 2,
};
# 293 "include/linux/workqueue.h"
extern struct workqueue_struct *system_wq;
extern struct workqueue_struct *system_long_wq;
extern struct workqueue_struct *system_nrt_wq;
extern struct workqueue_struct *system_unbound_wq;
extern struct workqueue_struct *system_freezable_wq;

extern struct workqueue_struct *
__alloc_workqueue_key(const char *name, unsigned int flags, int max_active,
        struct lock_class_key *key, const char *lock_name);
# 334 "include/linux/workqueue.h"
static inline struct workqueue_struct *
alloc_ordered_workqueue(const char *name, unsigned int flags)
{
 return ({ static struct lock_class_key __key; const char *__lock_name; if (__builtin_constant_p(name)) __lock_name = (name); else __lock_name = "name"; __alloc_workqueue_key((name), (WQ_UNBOUND | flags), (1), &__key, __lock_name); });
}
# 347 "include/linux/workqueue.h"
extern void destroy_workqueue(struct workqueue_struct *wq);

extern int queue_work(struct workqueue_struct *wq, struct work_struct *work);
extern int queue_work_on(int cpu, struct workqueue_struct *wq,
   struct work_struct *work);
extern int queue_delayed_work(struct workqueue_struct *wq,
   struct delayed_work *work, unsigned long delay);
extern int queue_delayed_work_on(int cpu, struct workqueue_struct *wq,
   struct delayed_work *work, unsigned long delay);

extern void flush_workqueue(struct workqueue_struct *wq);
extern void drain_workqueue(struct workqueue_struct *wq);
extern void flush_scheduled_work(void);

extern int schedule_work(struct work_struct *work);
extern int schedule_work_on(int cpu, struct work_struct *work);
extern int schedule_delayed_work(struct delayed_work *work, unsigned long delay);
extern int schedule_delayed_work_on(int cpu, struct delayed_work *work,
     unsigned long delay);
extern int schedule_on_each_cpu(work_func_t func);
extern int keventd_up(void);

int execute_in_process_context(work_func_t fn, struct execute_work *);

extern bool flush_work(struct work_struct *work);
extern bool flush_work_sync(struct work_struct *work);
extern bool cancel_work_sync(struct work_struct *work);

extern bool flush_delayed_work(struct delayed_work *dwork);
extern bool flush_delayed_work_sync(struct delayed_work *work);
extern bool cancel_delayed_work_sync(struct delayed_work *dwork);

extern void workqueue_set_max_active(struct workqueue_struct *wq,
         int max_active);
extern bool workqueue_congested(unsigned int cpu, struct workqueue_struct *wq);
extern unsigned int work_cpu(struct work_struct *work);
extern unsigned int work_busy(struct work_struct *work);







static inline bool cancel_delayed_work(struct delayed_work *work)
{
 bool ret;

 ret = del_timer_sync(&work->timer);
 if (ret)
  clear_bit(WORK_STRUCT_PENDING_BIT, ((unsigned long *)(&(&work->work)->data)));
 return ret;
}






static inline bool __cancel_delayed_work(struct delayed_work *work)
{
 bool ret;

 ret = del_timer(&work->timer);
 if (ret)
  clear_bit(WORK_STRUCT_PENDING_BIT, ((unsigned long *)(&(&work->work)->data)));
 return ret;
}







long work_on_cpu(unsigned int cpu, long (*fn)(void *), void *arg);



extern void freeze_workqueues_begin(void);
extern bool freeze_workqueues_busy(void);
extern void thaw_workqueues(void);
# 26 "include/linux/pm.h" 2



# 1 "include/linux/completion.h" 1
# 25 "include/linux/completion.h"
struct completion {
 unsigned int done;
 wait_queue_head_t wait;
};
# 73 "include/linux/completion.h"
static inline void init_completion(struct completion *x)
{
 x->done = 0;
 do { static struct lock_class_key __key; __init_waitqueue_head((&x->wait), &__key); } while (0);
}

extern void wait_for_completion(struct completion *);
extern int wait_for_completion_interruptible(struct completion *x);
extern int wait_for_completion_killable(struct completion *x);
extern unsigned long wait_for_completion_timeout(struct completion *x,
         unsigned long timeout);
extern long wait_for_completion_interruptible_timeout(
 struct completion *x, unsigned long timeout);
extern long wait_for_completion_killable_timeout(
 struct completion *x, unsigned long timeout);
extern bool try_wait_for_completion(struct completion *x);
extern bool completion_done(struct completion *x);

extern void complete(struct completion *);
extern void complete_all(struct completion *);
# 30 "include/linux/pm.h" 2




extern void (*pm_idle)(void);
extern void (*pm_power_off)(void);
extern void (*pm_power_off_prepare)(void);





struct device;


extern const char power_group_name[];




typedef struct pm_message {
 int event;
} pm_message_t;
# 204 "include/linux/pm.h"
struct dev_pm_ops {
 int (*prepare)(struct device *dev);
 void (*complete)(struct device *dev);
 int (*suspend)(struct device *dev);
 int (*resume)(struct device *dev);
 int (*freeze)(struct device *dev);
 int (*thaw)(struct device *dev);
 int (*poweroff)(struct device *dev);
 int (*restore)(struct device *dev);
 int (*suspend_noirq)(struct device *dev);
 int (*resume_noirq)(struct device *dev);
 int (*freeze_noirq)(struct device *dev);
 int (*thaw_noirq)(struct device *dev);
 int (*poweroff_noirq)(struct device *dev);
 int (*restore_noirq)(struct device *dev);
 int (*runtime_suspend)(struct device *dev);
 int (*runtime_resume)(struct device *dev);
 int (*runtime_idle)(struct device *dev);
};
# 271 "include/linux/pm.h"
extern struct dev_pm_ops generic_subsys_pm_ops;
# 392 "include/linux/pm.h"
enum rpm_status {
 RPM_ACTIVE = 0,
 RPM_RESUMING,
 RPM_SUSPENDED,
 RPM_SUSPENDING,
};
# 414 "include/linux/pm.h"
enum rpm_request {
 RPM_REQ_NONE = 0,
 RPM_REQ_IDLE,
 RPM_REQ_SUSPEND,
 RPM_REQ_AUTOSUSPEND,
 RPM_REQ_RESUME,
};

struct wakeup_source;

struct dev_pm_info {
 pm_message_t power_state;
 unsigned int can_wakeup:1;
 unsigned int async_suspend:1;
 bool is_prepared:1;
 bool is_suspended:1;
 spinlock_t lock;

 struct list_head entry;
 struct completion completion;
 struct wakeup_source *wakeup;




 struct timer_list suspend_timer;
 unsigned long timer_expires;
 struct work_struct work;
 wait_queue_head_t wait_queue;
 atomic_t usage_count;
 atomic_t child_count;
 unsigned int disable_depth:3;
 unsigned int ignore_children:1;
 unsigned int idle_notification:1;
 unsigned int request_pending:1;
 unsigned int deferred_resume:1;
 unsigned int run_wake:1;
 unsigned int runtime_auto:1;
 unsigned int no_callbacks:1;
 unsigned int irq_safe:1;
 unsigned int use_autosuspend:1;
 unsigned int timer_autosuspends:1;
 enum rpm_request request;
 enum rpm_status runtime_status;
 int runtime_error;
 int autosuspend_delay;
 unsigned long last_busy;
 unsigned long active_jiffies;
 unsigned long suspended_jiffies;
 unsigned long accounting_timestamp;

 void *subsys_data;
};

extern void update_pm_runtime_accounting(struct device *dev);






struct dev_pm_domain {
 struct dev_pm_ops ops;
};
# 534 "include/linux/pm.h"
extern void device_pm_lock(void);
extern void dpm_resume_noirq(pm_message_t state);
extern void dpm_resume_end(pm_message_t state);
extern void dpm_resume(pm_message_t state);
extern void dpm_complete(pm_message_t state);

extern void device_pm_unlock(void);
extern int dpm_suspend_noirq(pm_message_t state);
extern int dpm_suspend_start(pm_message_t state);
extern int dpm_suspend(pm_message_t state);
extern int dpm_prepare(pm_message_t state);

extern void __suspend_report_result(const char *function, void *fn, int ret);






extern int device_pm_wait_for_dev(struct device *sub, struct device *dev);

extern int pm_generic_prepare(struct device *dev);
extern int pm_generic_suspend_noirq(struct device *dev);
extern int pm_generic_suspend(struct device *dev);
extern int pm_generic_resume_noirq(struct device *dev);
extern int pm_generic_resume(struct device *dev);
extern int pm_generic_freeze_noirq(struct device *dev);
extern int pm_generic_freeze(struct device *dev);
extern int pm_generic_thaw_noirq(struct device *dev);
extern int pm_generic_thaw(struct device *dev);
extern int pm_generic_restore_noirq(struct device *dev);
extern int pm_generic_restore(struct device *dev);
extern int pm_generic_poweroff_noirq(struct device *dev);
extern int pm_generic_poweroff(struct device *dev);
extern void pm_generic_complete(struct device *dev);
# 598 "include/linux/pm.h"
enum dpm_order {
 DPM_ORDER_NONE,
 DPM_ORDER_DEV_AFTER_PARENT,
 DPM_ORDER_PARENT_BEFORE_DEV,
 DPM_ORDER_DEV_LAST,
};
# 6 "/home/iago/torvalds/linux/arch/x86/include/asm/apic.h" 2






# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/fixmap.h" 1
# 19 "/home/iago/torvalds/linux/arch/x86/include/asm/fixmap.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/acpi.h" 1
# 26 "/home/iago/torvalds/linux/arch/x86/include/asm/acpi.h"
# 1 "include/acpi/pdc_intel.h" 1
# 27 "/home/iago/torvalds/linux/arch/x86/include/asm/acpi.h" 2

# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/numa.h" 1





# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/topology.h" 1
# 51 "/home/iago/torvalds/linux/arch/x86/include/asm/topology.h"
extern __attribute__((section(".discard"), unused)) char __pcpu_scope_x86_cpu_to_node_map; extern __attribute__((section(".data..percpu" ""))) __typeof__(int) x86_cpu_to_node_map; extern __typeof__(int) *x86_cpu_to_node_map_early_ptr; extern __typeof__(int) x86_cpu_to_node_map_early_map[];





extern int __cpu_to_node(int cpu);


extern int early_cpu_to_node(int cpu);
# 73 "/home/iago/torvalds/linux/arch/x86/include/asm/topology.h"
extern cpumask_var_t node_to_cpumask_map[(1 << 10)];


extern const struct cpumask *cpumask_of_node(int node);
# 85 "/home/iago/torvalds/linux/arch/x86/include/asm/topology.h"
extern void setup_node_to_cpumask_map(void);
# 134 "/home/iago/torvalds/linux/arch/x86/include/asm/topology.h"
extern int __node_distance(int, int);
# 158 "/home/iago/torvalds/linux/arch/x86/include/asm/topology.h"
# 1 "include/asm-generic/topology.h" 1
# 159 "/home/iago/torvalds/linux/arch/x86/include/asm/topology.h" 2

extern const struct cpumask *cpu_coregroup_mask(int cpu);
# 172 "/home/iago/torvalds/linux/arch/x86/include/asm/topology.h"
static inline void arch_fix_phys_package_id(int num, u32 slot)
{
}

struct pci_bus;
void x86_pci_root_bus_res_quirks(struct pci_bus *b);
# 186 "/home/iago/torvalds/linux/arch/x86/include/asm/topology.h"
extern int get_mp_bus_to_node(int busnum);
extern void set_mp_bus_to_node(int busnum, int node);
# 7 "/home/iago/torvalds/linux/arch/x86/include/asm/numa.h" 2
# 21 "/home/iago/torvalds/linux/arch/x86/include/asm/numa.h"
extern int numa_off;
# 31 "/home/iago/torvalds/linux/arch/x86/include/asm/numa.h"
extern s16 __apicid_to_node[32768];
extern nodemask_t numa_nodes_parsed __attribute__ ((__section__(".init.data")));

extern int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) numa_add_memblk(int nodeid, u64 start, u64 end);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) numa_set_distance(int from, int to, int distance);

static inline void set_apicid_to_node(int apicid, s16 node)
{
 __apicid_to_node[apicid] = node;
}

extern int __attribute__ ((__section__(".cpuinit.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) numa_cpu_node(int cpu);
# 58 "/home/iago/torvalds/linux/arch/x86/include/asm/numa.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/numa_64.h" 1



extern unsigned long numa_free_all_bootmem(void);
# 59 "/home/iago/torvalds/linux/arch/x86/include/asm/numa.h" 2



extern void __attribute__ ((__section__(".cpuinit.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) numa_set_node(int cpu, int node);
extern void __attribute__ ((__section__(".cpuinit.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) numa_clear_node(int cpu);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) init_cpu_to_node(void);
extern void __attribute__ ((__section__(".cpuinit.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) numa_add_cpu(int cpu);
extern void __attribute__ ((__section__(".cpuinit.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) numa_remove_cpu(int cpu);
# 76 "/home/iago/torvalds/linux/arch/x86/include/asm/numa.h"
void debug_cpumask_set_cpu(int cpu, int node, bool enable);





void numa_emu_cmdline(char *);
# 29 "/home/iago/torvalds/linux/arch/x86/include/asm/acpi.h" 2

# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/mmu.h" 1
# 11 "/home/iago/torvalds/linux/arch/x86/include/asm/mmu.h"
typedef struct {
 void *ldt;
 int size;



 unsigned short ia32_compat;


 struct mutex lock;
 void *vdso;
} mm_context_t;


void leave_mm(int cpu);
# 31 "/home/iago/torvalds/linux/arch/x86/include/asm/acpi.h" 2

# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/trampoline.h" 1






# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/io.h" 1
# 53 "/home/iago/torvalds/linux/arch/x86/include/asm/io.h"
static inline unsigned char readb(const volatile void *addr) { unsigned char ret; asm volatile("mov" "b" " %1,%0":"=q" (ret) :"m" (*(volatile unsigned char *)addr) :"memory"); return ret; }
static inline unsigned short readw(const volatile void *addr) { unsigned short ret; asm volatile("mov" "w" " %1,%0":"=r" (ret) :"m" (*(volatile unsigned short *)addr) :"memory"); return ret; }
static inline unsigned int readl(const volatile void *addr) { unsigned int ret; asm volatile("mov" "l" " %1,%0":"=r" (ret) :"m" (*(volatile unsigned int *)addr) :"memory"); return ret; }

static inline unsigned char __readb(const volatile void *addr) { unsigned char ret; asm volatile("mov" "b" " %1,%0":"=q" (ret) :"m" (*(volatile unsigned char *)addr) ); return ret; }
static inline unsigned short __readw(const volatile void *addr) { unsigned short ret; asm volatile("mov" "w" " %1,%0":"=r" (ret) :"m" (*(volatile unsigned short *)addr) ); return ret; }
static inline unsigned int __readl(const volatile void *addr) { unsigned int ret; asm volatile("mov" "l" " %1,%0":"=r" (ret) :"m" (*(volatile unsigned int *)addr) ); return ret; }

static inline void writeb(unsigned char val, volatile void *addr) { asm volatile("mov" "b" " %0,%1": :"q" (val), "m" (*(volatile unsigned char *)addr) :"memory"); }
static inline void writew(unsigned short val, volatile void *addr) { asm volatile("mov" "w" " %0,%1": :"r" (val), "m" (*(volatile unsigned short *)addr) :"memory"); }
static inline void writel(unsigned int val, volatile void *addr) { asm volatile("mov" "l" " %0,%1": :"r" (val), "m" (*(volatile unsigned int *)addr) :"memory"); }

static inline void __writeb(unsigned char val, volatile void *addr) { asm volatile("mov" "b" " %0,%1": :"q" (val), "m" (*(volatile unsigned char *)addr) ); }
static inline void __writew(unsigned short val, volatile void *addr) { asm volatile("mov" "w" " %0,%1": :"r" (val), "m" (*(volatile unsigned short *)addr) ); }
static inline void __writel(unsigned int val, volatile void *addr) { asm volatile("mov" "l" " %0,%1": :"r" (val), "m" (*(volatile unsigned int *)addr) ); }
# 84 "/home/iago/torvalds/linux/arch/x86/include/asm/io.h"
static inline unsigned long readq(const volatile void *addr) { unsigned long ret; asm volatile("mov" "q" " %1,%0":"=r" (ret) :"m" (*(volatile unsigned long *)addr) :"memory"); return ret; }
static inline void writeq(unsigned long val, volatile void *addr) { asm volatile("mov" "q" " %0,%1": :"r" (val), "m" (*(volatile unsigned long *)addr) :"memory"); }
# 111 "/home/iago/torvalds/linux/arch/x86/include/asm/io.h"
static inline phys_addr_t virt_to_phys(volatile void *address)
{
 return __phys_addr((unsigned long)(address));
}
# 129 "/home/iago/torvalds/linux/arch/x86/include/asm/io.h"
static inline void *phys_to_virt(phys_addr_t address)
{
 return ((void *)((unsigned long)(address)+((unsigned long)(0xffff880000000000UL))));
}
# 144 "/home/iago/torvalds/linux/arch/x86/include/asm/io.h"
static inline unsigned int isa_virt_to_bus(volatile void *address)
{
 return (unsigned int)virt_to_phys(address);
}
# 174 "/home/iago/torvalds/linux/arch/x86/include/asm/io.h"
extern void *ioremap_nocache(resource_size_t offset, unsigned long size);
extern void *ioremap_cache(resource_size_t offset, unsigned long size);
extern void *ioremap_prot(resource_size_t offset, unsigned long size,
    unsigned long prot_val);




static inline void *ioremap(resource_size_t offset, unsigned long size)
{
 return ioremap_nocache(offset, size);
}

extern void iounmap(volatile void *addr);

extern void set_iounmap_nonlazy(void);



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
# 71 "include/asm-generic/iomap.h"
struct pci_dev;
extern void *pci_iomap(struct pci_dev *dev, int bar, unsigned long max);
extern void pci_iounmap(struct pci_dev *dev, void *);
# 194 "/home/iago/torvalds/linux/arch/x86/include/asm/io.h" 2

# 1 "include/linux/vmalloc.h" 1







struct vm_area_struct;
# 26 "include/linux/vmalloc.h"
struct vm_struct {
 struct vm_struct *next;
 void *addr;
 unsigned long size;
 unsigned long flags;
 struct page **pages;
 unsigned int nr_pages;
 phys_addr_t phys_addr;
 void *caller;
};




extern void vm_unmap_ram(const void *mem, unsigned int count);
extern void *vm_map_ram(struct page **pages, unsigned int count,
    int node, pgprot_t prot);
extern void vm_unmap_aliases(void);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) vmalloc_init(void);






extern void *vmalloc(unsigned long size);
extern void *vzalloc(unsigned long size);
extern void *vmalloc_user(unsigned long size);
extern void *vmalloc_node(unsigned long size, int node);
extern void *vzalloc_node(unsigned long size, int node);
extern void *vmalloc_exec(unsigned long size);
extern void *vmalloc_32(unsigned long size);
extern void *vmalloc_32_user(unsigned long size);
extern void *__vmalloc(unsigned long size, gfp_t gfp_mask, pgprot_t prot);
extern void *__vmalloc_node_range(unsigned long size, unsigned long align,
   unsigned long start, unsigned long end, gfp_t gfp_mask,
   pgprot_t prot, int node, void *caller);
extern void vfree(const void *addr);

extern void *vmap(struct page **pages, unsigned int count,
   unsigned long flags, pgprot_t prot);
extern void vunmap(const void *addr);

extern int remap_vmalloc_range(struct vm_area_struct *vma, void *addr,
       unsigned long pgoff);
void vmalloc_sync_all(void);





static inline size_t get_vm_area_size(const struct vm_struct *area)
{

 return area->size - ((1UL) << 12);
}

extern struct vm_struct *get_vm_area(unsigned long size, unsigned long flags);
extern struct vm_struct *get_vm_area_caller(unsigned long size,
     unsigned long flags, void *caller);
extern struct vm_struct *__get_vm_area(unsigned long size, unsigned long flags,
     unsigned long start, unsigned long end);
extern struct vm_struct *__get_vm_area_caller(unsigned long size,
     unsigned long flags,
     unsigned long start, unsigned long end,
     void *caller);
extern struct vm_struct *remove_vm_area(const void *addr);

extern int map_vm_area(struct vm_struct *area, pgprot_t prot,
   struct page ***pages);

extern int map_kernel_range_noflush(unsigned long start, unsigned long size,
        pgprot_t prot, struct page **pages);
extern void unmap_kernel_range_noflush(unsigned long addr, unsigned long size);
extern void unmap_kernel_range(unsigned long addr, unsigned long size);
# 121 "include/linux/vmalloc.h"
extern struct vm_struct *alloc_vm_area(size_t size);
extern void free_vm_area(struct vm_struct *area);


extern long vread(char *buf, char *addr, unsigned long count);
extern long vwrite(char *buf, char *addr, unsigned long count);




extern rwlock_t vmlist_lock;
extern struct vm_struct *vmlist;
extern __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) void vm_area_register_early(struct vm_struct *vm, size_t align);



struct vm_struct **pcpu_get_vm_areas(const unsigned long *offsets,
         const size_t *sizes, int nr_vms,
         size_t align);

void pcpu_free_vm_areas(struct vm_struct **vms, int nr_vms);
# 196 "/home/iago/torvalds/linux/arch/x86/include/asm/io.h" 2






static inline void
memset_io(volatile void *addr, unsigned char val, size_t count)
{
 memset((void *)addr, val, count);
}

static inline void
memcpy_fromio(void *dst, const volatile void *src, size_t count)
{
 memcpy(dst, (const void *)src, count);
}

static inline void
memcpy_toio(volatile void *dst, const void *src, size_t count)
{
 memcpy((void *)dst, src, count);
}
# 238 "/home/iago/torvalds/linux/arch/x86/include/asm/io.h"
static inline void flush_write_buffers(void)
{



}



extern void native_io_delay(void);

extern int io_delay_type;
extern void io_delay_init(void);
# 308 "/home/iago/torvalds/linux/arch/x86/include/asm/io.h"
static inline void outb(unsigned char value, int port) { asm volatile("out" "b" " %" "b" "0, %w1" : : "a"(value), "Nd"(port)); } static inline unsigned char inb(int port) { unsigned char value; asm volatile("in" "b" " %w1, %" "b" "0" : "=a"(value) : "Nd"(port)); return value; } static inline void outb_p(unsigned char value, int port) { outb(value, port); slow_down_io(); } static inline unsigned char inb_p(int port) { unsigned char value = inb(port); slow_down_io(); return value; } static inline void outsb(int port, const void *addr, unsigned long count) { asm volatile("rep; outs" "b" : "+S"(addr), "+c"(count) : "d"(port)); } static inline void insb(int port, void *addr, unsigned long count) { asm volatile("rep; ins" "b" : "+D"(addr), "+c"(count) : "d"(port)); }
static inline void outw(unsigned short value, int port) { asm volatile("out" "w" " %" "w" "0, %w1" : : "a"(value), "Nd"(port)); } static inline unsigned short inw(int port) { unsigned short value; asm volatile("in" "w" " %w1, %" "w" "0" : "=a"(value) : "Nd"(port)); return value; } static inline void outw_p(unsigned short value, int port) { outw(value, port); slow_down_io(); } static inline unsigned short inw_p(int port) { unsigned short value = inw(port); slow_down_io(); return value; } static inline void outsw(int port, const void *addr, unsigned long count) { asm volatile("rep; outs" "w" : "+S"(addr), "+c"(count) : "d"(port)); } static inline void insw(int port, void *addr, unsigned long count) { asm volatile("rep; ins" "w" : "+D"(addr), "+c"(count) : "d"(port)); }
static inline void outl(unsigned int value, int port) { asm volatile("out" "l" " %" "" "0, %w1" : : "a"(value), "Nd"(port)); } static inline unsigned int inl(int port) { unsigned int value; asm volatile("in" "l" " %w1, %" "" "0" : "=a"(value) : "Nd"(port)); return value; } static inline void outl_p(unsigned int value, int port) { outl(value, port); slow_down_io(); } static inline unsigned int inl_p(int port) { unsigned int value = inl(port); slow_down_io(); return value; } static inline void outsl(int port, const void *addr, unsigned long count) { asm volatile("rep; outs" "l" : "+S"(addr), "+c"(count) : "d"(port)); } static inline void insl(int port, void *addr, unsigned long count) { asm volatile("rep; ins" "l" : "+D"(addr), "+c"(count) : "d"(port)); }

extern void *xlate_dev_mem_ptr(unsigned long phys);
extern void unxlate_dev_mem_ptr(unsigned long phys, void *addr);

extern int ioremap_change_attr(unsigned long vaddr, unsigned long size,
    unsigned long prot_val);
extern void *ioremap_wc(resource_size_t offset, unsigned long size);






extern void early_ioremap_init(void);
extern void early_ioremap_reset(void);
extern void *early_ioremap(resource_size_t phys_addr,
       unsigned long size);
extern void *early_memremap(resource_size_t phys_addr,
        unsigned long size);
extern void early_iounmap(void *addr, unsigned long size);
extern void fixup_early_ioremap(void);
extern bool is_early_ioremap_ptep(pte_t *ptep);


# 1 "include/xen/xen.h" 1



enum xen_domain_type {
 XEN_NATIVE,
 XEN_PV_DOMAIN,
 XEN_HVM_DOMAIN,
};


extern enum xen_domain_type xen_domain_type;
# 23 "include/xen/xen.h"
# 1 "include/xen/interface/xen.h" 1
# 12 "include/xen/interface/xen.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/xen/interface.h" 1
# 51 "/home/iago/torvalds/linux/arch/x86/include/asm/xen/interface.h"
typedef unsigned char * __guest_handle_uchar;
typedef unsigned int * __guest_handle_uint;
typedef unsigned long * __guest_handle_ulong;
typedef char * __guest_handle_char;
typedef int * __guest_handle_int;
typedef long * __guest_handle_long;
typedef void * __guest_handle_void;
# 100 "/home/iago/torvalds/linux/arch/x86/include/asm/xen/interface.h"
struct trap_info {
    uint8_t vector;
    uint8_t flags;
    uint16_t cs;
    unsigned long address;
};
typedef struct trap_info * __guest_handle_trap_info;

struct arch_shared_info {
    unsigned long max_pfn;

    unsigned long pfn_to_mfn_frame_list_list;
    unsigned long nmi_reason;
};





# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/xen/interface_64.h" 1
# 81 "/home/iago/torvalds/linux/arch/x86/include/asm/xen/interface_64.h"
struct iret_context {

    uint64_t rax, r11, rcx, flags, rip, cs, rflags, rsp, ss;

};
# 98 "/home/iago/torvalds/linux/arch/x86/include/asm/xen/interface_64.h"
struct cpu_user_regs {
    uint64_t r15;
    uint64_t r14;
    uint64_t r13;
    uint64_t r12;
    union { uint64_t rbp, ebp; uint32_t _ebp; };
    union { uint64_t rbx, ebx; uint32_t _ebx; };
    uint64_t r11;
    uint64_t r10;
    uint64_t r9;
    uint64_t r8;
    union { uint64_t rax, eax; uint32_t _eax; };
    union { uint64_t rcx, ecx; uint32_t _ecx; };
    union { uint64_t rdx, edx; uint32_t _edx; };
    union { uint64_t rsi, esi; uint32_t _esi; };
    union { uint64_t rdi, edi; uint32_t _edi; };
    uint32_t error_code;
    uint32_t entry_vector;
    union { uint64_t rip, eip; uint32_t _eip; };
    uint16_t cs, _pad0[1];
    uint8_t saved_upcall_mask;
    uint8_t _pad1[3];
    union { uint64_t rflags, eflags; uint32_t _eflags; };
    union { uint64_t rsp, esp; uint32_t _esp; };
    uint16_t ss, _pad2[3];
    uint16_t es, _pad3[3];
    uint16_t ds, _pad4[3];
    uint16_t fs, _pad5[3];
    uint16_t gs, _pad6[3];
};
typedef struct cpu_user_regs * __guest_handle_cpu_user_regs;






struct arch_vcpu_info {
    unsigned long cr2;
    unsigned long pad;
};

typedef unsigned long xen_callback_t;
# 120 "/home/iago/torvalds/linux/arch/x86/include/asm/xen/interface.h" 2







struct vcpu_guest_context {

    struct { char x[512]; } fpu_ctxt;



    unsigned long flags;
    struct cpu_user_regs user_regs;
    struct trap_info trap_ctxt[256];
    unsigned long ldt_base, ldt_ents;
    unsigned long gdt_frames[16], gdt_ents;
    unsigned long kernel_ss, kernel_sp;

    unsigned long ctrlreg[8];
    unsigned long debugreg[8];






    unsigned long event_callback_eip;
    unsigned long failsafe_callback_eip;
    unsigned long syscall_callback_eip;

    unsigned long vm_assist;


    uint64_t fs_base;
    uint64_t gs_base_kernel;
    uint64_t gs_base_user;

};
typedef struct vcpu_guest_context * __guest_handle_vcpu_guest_context;
# 13 "include/xen/interface/xen.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/pvclock-abi.h" 1
# 25 "/home/iago/torvalds/linux/arch/x86/include/asm/pvclock-abi.h"
struct pvclock_vcpu_time_info {
 u32 version;
 u32 pad0;
 u64 tsc_timestamp;
 u64 system_time;
 u32 tsc_to_system_mul;
 s8 tsc_shift;
 u8 flags;
 u8 pad[2];
} __attribute__((__packed__));

struct pvclock_wall_clock {
 u32 version;
 u32 sec;
 u32 nsec;
} __attribute__((__packed__));
# 14 "include/xen/interface/xen.h" 2
# 188 "include/xen/interface/xen.h"
struct mmuext_op {
 unsigned int cmd;
 union {

  unsigned long mfn;

  unsigned long linear_addr;
 } arg1;
 union {

  unsigned int nr_ents;

  void *vcpumask;
 } arg2;
};
typedef struct mmuext_op * __guest_handle_mmuext_op;
# 236 "include/xen/interface/xen.h"
typedef uint16_t domid_t;
# 267 "include/xen/interface/xen.h"
struct mmu_update {
    uint64_t ptr;
    uint64_t val;
};
typedef struct mmu_update * __guest_handle_mmu_update;





struct multicall_entry {
    unsigned long op;
    long result;
    unsigned long args[6];
};
typedef struct multicall_entry * __guest_handle_multicall_entry;







struct vcpu_time_info {
# 301 "include/xen/interface/xen.h"
 uint32_t version;
 uint32_t pad0;
 uint64_t tsc_timestamp;
 uint64_t system_time;






 uint32_t tsc_to_system_mul;
 int8_t tsc_shift;
 int8_t pad1[3];
};

struct vcpu_info {
# 342 "include/xen/interface/xen.h"
 uint8_t evtchn_upcall_pending;
 uint8_t evtchn_upcall_mask;
 unsigned long evtchn_pending_sel;
 struct arch_vcpu_info arch;
 struct pvclock_vcpu_time_info time;
};





struct shared_info {
 struct vcpu_info vcpu_info[32];
# 387 "include/xen/interface/xen.h"
 unsigned long evtchn_pending[sizeof(unsigned long) * 8];
 unsigned long evtchn_mask[sizeof(unsigned long) * 8];





 struct pvclock_wall_clock wc;

 struct arch_shared_info arch;

};
# 426 "include/xen/interface/xen.h"
struct start_info {

 char magic[32];
 unsigned long nr_pages;
 unsigned long shared_info;
 uint32_t flags;
 unsigned long store_mfn;
 uint32_t store_evtchn;
 union {
  struct {
   unsigned long mfn;
   uint32_t evtchn;
  } domU;
  struct {
   uint32_t info_off;
   uint32_t info_size;
  } dom0;
 } console;

 unsigned long pt_base;
 unsigned long nr_pt_frames;
 unsigned long mfn_list;
 unsigned long mod_start;
 unsigned long mod_len;
 int8_t cmd_line[1024];
};

struct dom0_vga_console_info {
 uint8_t video_type;



 union {
  struct {

   uint16_t font_height;

   uint16_t cursor_x, cursor_y;

   uint16_t rows, columns;
  } text_mode_3;

  struct {

   uint16_t width, height;

   uint16_t bytes_per_line;

   uint16_t bits_per_pixel;

   uint32_t lfb_base;
   uint32_t lfb_size;

   uint8_t red_pos, red_size;
   uint8_t green_pos, green_size;
   uint8_t blue_pos, blue_size;
   uint8_t rsvd_pos, rsvd_size;


   uint32_t gbl_caps;

   uint16_t mode_attrs;
  } vesa_lfb;
 } u;
};





typedef uint64_t cpumap_t;

typedef uint8_t xen_domain_handle_t[16];







struct tmem_op {
 uint32_t cmd;
 int32_t pool_id;
 union {
  struct {
   uint64_t uuid[2];
   uint32_t flags;
  } new;
  struct {
   uint64_t oid[3];
   uint32_t index;
   uint32_t tmem_offset;
   uint32_t pfn_offset;
   uint32_t len;
   __guest_handle_void gmfn;
  } gen;
 } u;
};
# 24 "include/xen/xen.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/xen/hypervisor.h" 1
# 37 "/home/iago/torvalds/linux/arch/x86/include/asm/xen/hypervisor.h"
extern struct shared_info *HYPERVISOR_shared_info;
extern struct start_info *xen_start_info;



static inline uint32_t xen_cpuid_base(void)
{
 uint32_t base, eax, ebx, ecx, edx;
 char signature[13];

 for (base = 0x40000000; base < 0x40010000; base += 0x100) {
  cpuid(base, &eax, &ebx, &ecx, &edx);
  *(uint32_t *)(signature + 0) = ebx;
  *(uint32_t *)(signature + 4) = ecx;
  *(uint32_t *)(signature + 8) = edx;
  signature[12] = 0;

  if (!strcmp("XenVMMXenVMM", signature) && ((eax - base) >= 2))
   return base;
 }

 return 0;
}


extern bool xen_hvm_need_lapic(void);

static inline bool xen_x2apic_para_available(void)
{
 return xen_hvm_need_lapic();
}
# 25 "include/xen/xen.h" 2
# 336 "/home/iago/torvalds/linux/arch/x86/include/asm/io.h" 2
struct bio_vec;

extern bool xen_biovec_phys_mergeable(const struct bio_vec *vec1,
          const struct bio_vec *vec2);
# 8 "/home/iago/torvalds/linux/arch/x86/include/asm/trampoline.h" 2






extern const unsigned char x86_trampoline_start [];
extern const unsigned char x86_trampoline_end [];
extern unsigned char *x86_trampoline_base;

extern unsigned long init_rsp;
extern unsigned long initial_code;
extern unsigned long initial_gs;

extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) setup_trampolines(void);

extern const unsigned char trampoline_data[];
extern const unsigned char trampoline_status[];






static inline unsigned long trampoline_address(void)
{
 return virt_to_phys(((void *)(x86_trampoline_base + ((const unsigned char *)(trampoline_data) - x86_trampoline_start))));
}
# 33 "/home/iago/torvalds/linux/arch/x86/include/asm/acpi.h" 2
# 58 "/home/iago/torvalds/linux/arch/x86/include/asm/acpi.h"
int __acpi_acquire_global_lock(unsigned int *lock);
int __acpi_release_global_lock(unsigned int *lock);
# 84 "/home/iago/torvalds/linux/arch/x86/include/asm/acpi.h"
extern int acpi_lapic;
extern int acpi_ioapic;
extern int acpi_noirq;
extern int acpi_strict;
extern int acpi_disabled;
extern int acpi_pci_disabled;
extern int acpi_skip_timer_override;
extern int acpi_use_timer_override;
extern int acpi_fix_pin2_polarity;

extern u8 acpi_sci_flags;
extern int acpi_sci_override_gsi;
void acpi_pic_sci_set_trigger(unsigned int, u16);

extern int (*__acpi_register_gsi)(struct device *dev, u32 gsi,
      int trigger, int polarity);

static inline void disable_acpi(void)
{
 acpi_disabled = 1;
 acpi_pci_disabled = 1;
 acpi_noirq = 1;
}

extern int acpi_gsi_to_irq(u32 gsi, unsigned int *irq);

static inline void acpi_noirq_set(void) { acpi_noirq = 1; }
static inline void acpi_disable_pci(void)
{
 acpi_pci_disabled = 1;
 acpi_noirq_set();
}


extern int acpi_suspend_lowlevel(void);

extern const unsigned char acpi_wakeup_code[];



extern void acpi_reserve_wakeup_memory(void);




static inline unsigned int acpi_processor_cstate_check(unsigned int max_cstate)
{






 if (boot_cpu_data.x86 == 0x0F &&
     boot_cpu_data.x86_vendor == 2 &&
     boot_cpu_data.x86_model <= 0x05 &&
     boot_cpu_data.x86_mask < 0x0A)
  return 1;
 else if (amd_e400_c1e_detected)
  return 1;
 else
  return max_cstate;
}

static inline bool arch_has_acpi_pdc(void)
{
 struct cpuinfo_x86 *c = &(*({ do { const void *__vpp_verify = (typeof((&(cpu_info))))((void *)0); (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(cpu_info))) *)(&(cpu_info)))); (typeof((typeof(*(&(cpu_info))) *)(&(cpu_info)))) (__ptr + (((__per_cpu_offset[0])))); }); }));
 return (c->x86_vendor == 0 ||
  c->x86_vendor == 5);
}

static inline void arch_acpi_set_pdc_bits(u32 *buf)
{
 struct cpuinfo_x86 *c = &(*({ do { const void *__vpp_verify = (typeof((&(cpu_info))))((void *)0); (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(cpu_info))) *)(&(cpu_info)))); (typeof((typeof(*(&(cpu_info))) *)(&(cpu_info)))) (__ptr + (((__per_cpu_offset[0])))); }); }));

 buf[2] |= ((0x0010) | (0x0008) | (0x0002) | (0x0100) | (0x0200));

 if ((__builtin_constant_p((4*32+ 7)) && ( ((((4*32+ 7))>>5)==0 && (1UL<<(((4*32+ 7))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((4*32+ 7))>>5)==1 && (1UL<<(((4*32+ 7))&31) & ((1<<((1*32+29) & 31))|0))) || ((((4*32+ 7))>>5)==2 && (1UL<<(((4*32+ 7))&31) & 0)) || ((((4*32+ 7))>>5)==3 && (1UL<<(((4*32+ 7))&31) & ((1<<((3*32+20) & 31))))) || ((((4*32+ 7))>>5)==4 && (1UL<<(((4*32+ 7))&31) & 0)) || ((((4*32+ 7))>>5)==5 && (1UL<<(((4*32+ 7))&31) & 0)) || ((((4*32+ 7))>>5)==6 && (1UL<<(((4*32+ 7))&31) & 0)) || ((((4*32+ 7))>>5)==7 && (1UL<<(((4*32+ 7))&31) & 0)) || ((((4*32+ 7))>>5)==8 && (1UL<<(((4*32+ 7))&31) & 0)) || ((((4*32+ 7))>>5)==9 && (1UL<<(((4*32+ 7))&31) & 0)) ) ? 1 : (__builtin_constant_p(((4*32+ 7))) ? constant_test_bit(((4*32+ 7)), ((unsigned long *)((c)->x86_capability))) : variable_test_bit(((4*32+ 7)), ((unsigned long *)((c)->x86_capability))))))
  buf[2] |= ((0x0008) | (0x0002) | (0x0020) | (0x0800) | (0x0001));

 if ((__builtin_constant_p((0*32+22)) && ( ((((0*32+22))>>5)==0 && (1UL<<(((0*32+22))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((0*32+22))>>5)==1 && (1UL<<(((0*32+22))&31) & ((1<<((1*32+29) & 31))|0))) || ((((0*32+22))>>5)==2 && (1UL<<(((0*32+22))&31) & 0)) || ((((0*32+22))>>5)==3 && (1UL<<(((0*32+22))&31) & ((1<<((3*32+20) & 31))))) || ((((0*32+22))>>5)==4 && (1UL<<(((0*32+22))&31) & 0)) || ((((0*32+22))>>5)==5 && (1UL<<(((0*32+22))&31) & 0)) || ((((0*32+22))>>5)==6 && (1UL<<(((0*32+22))&31) & 0)) || ((((0*32+22))>>5)==7 && (1UL<<(((0*32+22))&31) & 0)) || ((((0*32+22))>>5)==8 && (1UL<<(((0*32+22))&31) & 0)) || ((((0*32+22))>>5)==9 && (1UL<<(((0*32+22))&31) & 0)) ) ? 1 : (__builtin_constant_p(((0*32+22))) ? constant_test_bit(((0*32+22)), ((unsigned long *)((c)->x86_capability))) : variable_test_bit(((0*32+22)), ((unsigned long *)((c)->x86_capability))))))
  buf[2] |= (0x0004);




 if (!(__builtin_constant_p((4*32+ 3)) && ( ((((4*32+ 3))>>5)==0 && (1UL<<(((4*32+ 3))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((4*32+ 3))>>5)==1 && (1UL<<(((4*32+ 3))&31) & ((1<<((1*32+29) & 31))|0))) || ((((4*32+ 3))>>5)==2 && (1UL<<(((4*32+ 3))&31) & 0)) || ((((4*32+ 3))>>5)==3 && (1UL<<(((4*32+ 3))&31) & ((1<<((3*32+20) & 31))))) || ((((4*32+ 3))>>5)==4 && (1UL<<(((4*32+ 3))&31) & 0)) || ((((4*32+ 3))>>5)==5 && (1UL<<(((4*32+ 3))&31) & 0)) || ((((4*32+ 3))>>5)==6 && (1UL<<(((4*32+ 3))&31) & 0)) || ((((4*32+ 3))>>5)==7 && (1UL<<(((4*32+ 3))&31) & 0)) || ((((4*32+ 3))>>5)==8 && (1UL<<(((4*32+ 3))&31) & 0)) || ((((4*32+ 3))>>5)==9 && (1UL<<(((4*32+ 3))&31) & 0)) ) ? 1 : (__builtin_constant_p(((4*32+ 3))) ? constant_test_bit(((4*32+ 3)), ((unsigned long *)((c)->x86_capability))) : variable_test_bit(((4*32+ 3)), ((unsigned long *)((c)->x86_capability))))))
  buf[2] &= ~((0x0200));
}
# 187 "/home/iago/torvalds/linux/arch/x86/include/asm/acpi.h"
extern int acpi_numa;
extern int x86_acpi_numa_init(void);
# 20 "/home/iago/torvalds/linux/arch/x86/include/asm/fixmap.h" 2






# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/vsyscall.h" 1



enum vsyscall_num {
 __NR_vgettimeofday,
 __NR_vtime,
 __NR_vgetcpu,
};
# 23 "/home/iago/torvalds/linux/arch/x86/include/asm/vsyscall.h"
extern int vgetcpu_mode;
extern struct timezone sys_tz;

# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/vvar.h" 1
# 46 "/home/iago/torvalds/linux/arch/x86/include/asm/vvar.h"
static volatile unsigned long const * const vvaraddr_jiffies = (void *)((-10*1024*1024 - 4096) + (0));
static int const * const vvaraddr_vgetcpu_mode = (void *)((-10*1024*1024 - 4096) + (16));
static struct vsyscall_gtod_data const * const vvaraddr_vsyscall_gtod_data = (void *)((-10*1024*1024 - 4096) + (128));
# 27 "/home/iago/torvalds/linux/arch/x86/include/asm/vsyscall.h" 2

extern void map_vsyscall(void);





extern bool emulate_vsyscall(struct pt_regs *regs, unsigned long address);
# 27 "/home/iago/torvalds/linux/arch/x86/include/asm/fixmap.h" 2
# 73 "/home/iago/torvalds/linux/arch/x86/include/asm/fixmap.h"
enum fixed_addresses {




 VSYSCALL_LAST_PAGE,
 VSYSCALL_FIRST_PAGE = VSYSCALL_LAST_PAGE
       + (((-2UL << 20)-(-10UL << 20)) >> 12) - 1,
 VVAR_PAGE,
 VSYSCALL_HPET,

 FIX_DBGP_BASE,
 FIX_EARLYCON_MEM_BASE,

 FIX_OHCI1394_BASE,


 FIX_APIC_BASE,


 FIX_IO_APIC_BASE_0,
 FIX_IO_APIC_BASE_END = FIX_IO_APIC_BASE_0 + 128 - 1,
# 116 "/home/iago/torvalds/linux/arch/x86/include/asm/fixmap.h"
 FIX_PARAVIRT_BOOTMAP,

 FIX_TEXT_POKE1,
 FIX_TEXT_POKE0,



 __end_of_permanent_fixed_addresses,
# 135 "/home/iago/torvalds/linux/arch/x86/include/asm/fixmap.h"
 FIX_BTMAP_END =
  (__end_of_permanent_fixed_addresses ^
   (__end_of_permanent_fixed_addresses + (64 * 4) - 1)) &
  -512
  ? __end_of_permanent_fixed_addresses + (64 * 4) -
    (__end_of_permanent_fixed_addresses & ((64 * 4) - 1))
  : __end_of_permanent_fixed_addresses,
 FIX_BTMAP_BEGIN = FIX_BTMAP_END + (64 * 4) - 1,




 FIX_TBOOT_BASE,

 __end_of_fixed_addresses
};


extern void reserve_top_address(unsigned long reserve);






extern int fixmaps_set;

extern pte_t *kmap_pte;
extern pgprot_t kmap_prot;
extern pte_t *pkmap_page_table;

void __native_set_fixmap(enum fixed_addresses idx, pte_t pte);
void native_set_fixmap(enum fixed_addresses idx,
         phys_addr_t phys, pgprot_t flags);
# 193 "/home/iago/torvalds/linux/arch/x86/include/asm/fixmap.h"
extern void __this_fixmap_does_not_exist(void);






static inline __attribute__((always_inline)) unsigned long fix_to_virt(const unsigned int idx)
{
# 211 "/home/iago/torvalds/linux/arch/x86/include/asm/fixmap.h"
 if (idx >= __end_of_fixed_addresses)
  __this_fixmap_does_not_exist();

 return (((-2UL << 20)-((1UL) << 12)) - ((idx) << 12));
}

static inline unsigned long virt_to_fix(const unsigned long vaddr)
{
 do { if (__builtin_expect(!!(vaddr >= ((-2UL << 20)-((1UL) << 12)) || vaddr < (((-2UL << 20)-((1UL) << 12)) - (__end_of_permanent_fixed_addresses << 12))), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/home/iago/torvalds/linux/arch/x86/include/asm/fixmap.h"), "i" (219), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 return ((((-2UL << 20)-((1UL) << 12)) - ((vaddr)&(~(((1UL) << 12)-1)))) >> 12);
}


static inline __attribute__((always_inline)) unsigned long
__set_fixmap_offset(enum fixed_addresses idx, phys_addr_t phys, pgprot_t flags)
{
 __set_fixmap(idx, phys, flags);
 return fix_to_virt(idx) + (phys & (((1UL) << 12) - 1));
}
# 13 "/home/iago/torvalds/linux/arch/x86/include/asm/apic.h" 2
# 41 "/home/iago/torvalds/linux/arch/x86/include/asm/apic.h"
static inline void generic_apic_probe(void)
{
}




extern unsigned int apic_verbosity;
extern int local_apic_timer_c2_ok;

extern int disable_apic;


extern void __inquire_remote_apic(int apicid);






static inline void default_inquire_remote_apic(int apicid)
{
 if (apic_verbosity >= 2)
  __inquire_remote_apic(apicid);
}
# 75 "/home/iago/torvalds/linux/arch/x86/include/asm/apic.h"
static inline bool apic_from_smp_config(void)
{
 return smp_found_config && !disable_apic;
}
# 88 "/home/iago/torvalds/linux/arch/x86/include/asm/apic.h"
extern int is_vsmp_box(void);






extern void xapic_wait_icr_idle(void);
extern u32 safe_xapic_wait_icr_idle(void);
extern void xapic_icr_write(u32, u32);
extern int setup_profiling_timer(unsigned int);

static inline void native_apic_mem_write(u32 reg, u32 v)
{
 volatile u32 *addr = (volatile u32 *)((fix_to_virt(FIX_APIC_BASE)) + reg);

 asm volatile ("661:\n\t" "movl %0, %1" "\n662:\n" ".section .altinstructions,\"a\"\n" " " ".balign 8" " " "\n" "	 .long 661b - .\n" "	 .long 663f - .\n" "	 .word " "(3*32+19)" "\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .discard,\"aw\",@progbits\n" "	 .byte 0xff + (664f-663f) - (662b-661b)\n" ".previous\n" ".section .altinstr_replacement, \"ax\"\n" "663:\n\t" "xchgl %0, %1" "\n664:\n" ".previous" : "=r" (v), "=m" (*addr) : "i" (0), "0" (v), "m" (*addr))

                                           ;
}

static inline u32 native_apic_mem_read(u32 reg)
{
 return *((volatile u32 *)((fix_to_virt(FIX_APIC_BASE)) + reg));
}

extern void native_apic_wait_icr_idle(void);
extern u32 native_safe_apic_wait_icr_idle(void);
extern void native_apic_icr_write(u32 low, u32 id);
extern u64 native_apic_icr_read(void);

extern int x2apic_mode;







static inline void x2apic_wrmsr_fence(void)
{
 asm volatile("mfence" : : : "memory");
}

static inline void native_apic_msr_write(u32 reg, u32 v)
{
 if (reg == 0xE0 || reg == 0x20 || reg == 0xD0 ||
     reg == 0x30)
  return;

 do { paravirt_write_msr(0x800 + (reg >> 4), v, 0); } while (0);
}

static inline u32 native_apic_msr_read(u32 reg)
{
 u64 msr;

 if (reg == 0xE0)
  return -1;

 do { int _err; msr = paravirt_read_msr(0x800 + (reg >> 4), &_err); } while (0);
 return (u32)msr;
}

static inline void native_x2apic_wait_icr_idle(void)
{

 return;
}

static inline u32 native_safe_x2apic_wait_icr_idle(void)
{

 return 0;
}

static inline void native_x2apic_icr_write(u32 low, u32 id)
{
 do { paravirt_write_msr(0x800 + (0x300 >> 4), (u32)((u64)(((__u64) id) << 32 | low)), ((u64)(((__u64) id) << 32 | low))>>32); } while (0);
}

static inline u64 native_x2apic_icr_read(void)
{
 unsigned long val;

 do { int _err; val = paravirt_read_msr(0x800 + (0x300 >> 4), &_err); } while (0);
 return val;
}

extern int x2apic_phys;
extern void check_x2apic(void);
extern void enable_x2apic(void);
extern void x2apic_icr_write(u32 low, u32 id);
static inline int x2apic_enabled(void)
{
 u64 msr;

 if (!(__builtin_constant_p((4*32+21)) && ( ((((4*32+21))>>5)==0 && (1UL<<(((4*32+21))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((4*32+21))>>5)==1 && (1UL<<(((4*32+21))&31) & ((1<<((1*32+29) & 31))|0))) || ((((4*32+21))>>5)==2 && (1UL<<(((4*32+21))&31) & 0)) || ((((4*32+21))>>5)==3 && (1UL<<(((4*32+21))&31) & ((1<<((3*32+20) & 31))))) || ((((4*32+21))>>5)==4 && (1UL<<(((4*32+21))&31) & 0)) || ((((4*32+21))>>5)==5 && (1UL<<(((4*32+21))&31) & 0)) || ((((4*32+21))>>5)==6 && (1UL<<(((4*32+21))&31) & 0)) || ((((4*32+21))>>5)==7 && (1UL<<(((4*32+21))&31) & 0)) || ((((4*32+21))>>5)==8 && (1UL<<(((4*32+21))&31) & 0)) || ((((4*32+21))>>5)==9 && (1UL<<(((4*32+21))&31) & 0)) ) ? 1 : (__builtin_constant_p(((4*32+21))) ? constant_test_bit(((4*32+21)), ((unsigned long *)((&boot_cpu_data)->x86_capability))) : variable_test_bit(((4*32+21)), ((unsigned long *)((&boot_cpu_data)->x86_capability))))))
  return 0;

 do { int _err; msr = paravirt_read_msr(0x0000001b, &_err); } while (0);
 if (msr & (1UL << 10))
  return 1;
 return 0;
}


static inline void x2apic_force_phys(void)
{
 x2apic_phys = 1;
}
# 218 "/home/iago/torvalds/linux/arch/x86/include/asm/apic.h"
extern void enable_IR_x2apic(void);

extern int get_physical_broadcast(void);

extern int lapic_get_maxlvt(void);
extern void clear_local_APIC(void);
extern void connect_bsp_APIC(void);
extern void disconnect_bsp_APIC(int virt_wire_setup);
extern void disable_local_APIC(void);
extern void lapic_shutdown(void);
extern int verify_local_APIC(void);
extern void sync_Arb_IDs(void);
extern void init_bsp_APIC(void);
extern void setup_local_APIC(void);
extern void end_local_APIC_setup(void);
extern void bsp_end_local_APIC_setup(void);
extern void init_apic_mappings(void);
void register_lapic_address(unsigned long address);
extern void setup_boot_APIC_clock(void);
extern void setup_secondary_APIC_clock(void);
extern int APIC_init_uniprocessor(void);
extern int apic_force_enable(unsigned long addr);





extern int apic_is_clustered_box(void);







extern int setup_APIC_eilvt(u8 lvt_off, u8 vector, u8 msg_type, u8 mask);
# 280 "/home/iago/torvalds/linux/arch/x86/include/asm/apic.h"
struct apic {
 char *name;

 int (*probe)(void);
 int (*acpi_madt_oem_check)(char *oem_id, char *oem_table_id);
 int (*apic_id_registered)(void);

 u32 irq_delivery_mode;
 u32 irq_dest_mode;

 const struct cpumask *(*target_cpus)(void);

 int disable_esr;

 int dest_logical;
 unsigned long (*check_apicid_used)(physid_mask_t *map, int apicid);
 unsigned long (*check_apicid_present)(int apicid);

 void (*vector_allocation_domain)(int cpu, struct cpumask *retmask);
 void (*init_apic_ldr)(void);

 void (*ioapic_phys_id_map)(physid_mask_t *phys_map, physid_mask_t *retmap);

 void (*setup_apic_routing)(void);
 int (*multi_timer_check)(int apic, int irq);
 int (*cpu_present_to_apicid)(int mps_cpu);
 void (*apicid_to_cpu_present)(int phys_apicid, physid_mask_t *retmap);
 void (*setup_portio_remap)(void);
 int (*check_phys_apicid_present)(int phys_apicid);
 void (*enable_apic_mode)(void);
 int (*phys_pkg_id)(int cpuid_apic, int index_msb);






 int (*mps_oem_check)(struct mpc_table *mpc, char *oem, char *productid);

 unsigned int (*get_apic_id)(unsigned long x);
 unsigned long (*set_apic_id)(unsigned int id);
 unsigned long apic_id_mask;

 unsigned int (*cpu_mask_to_apicid)(const struct cpumask *cpumask);
 unsigned int (*cpu_mask_to_apicid_and)(const struct cpumask *cpumask,
            const struct cpumask *andmask);


 void (*send_IPI_mask)(const struct cpumask *mask, int vector);
 void (*send_IPI_mask_allbutself)(const struct cpumask *mask,
      int vector);
 void (*send_IPI_allbutself)(int vector);
 void (*send_IPI_all)(int vector);
 void (*send_IPI_self)(int vector);


 int (*wakeup_secondary_cpu)(int apicid, unsigned long start_eip);

 int trampoline_phys_low;
 int trampoline_phys_high;

 void (*wait_for_init_deassert)(atomic_t *deassert);
 void (*smp_callin_clear_local_apic)(void);
 void (*inquire_remote_apic)(int apicid);


 u32 (*read)(u32 reg);
 void (*write)(u32 reg, u32 v);
 u64 (*icr_read)(void);
 void (*icr_write)(u32 low, u32 high);
 void (*wait_icr_idle)(void);
 u32 (*safe_wait_icr_idle)(void);
# 374 "/home/iago/torvalds/linux/arch/x86/include/asm/apic.h"
};






extern struct apic *apic;
# 401 "/home/iago/torvalds/linux/arch/x86/include/asm/apic.h"
extern struct apic *__apicdrivers[], *__apicdrivers_end[];





extern atomic_t init_deasserted;
extern int wakeup_secondary_cpu_via_nmi(int apicid, unsigned long start_eip);



static inline u32 apic_read(u32 reg)
{
 return apic->read(reg);
}

static inline void apic_write(u32 reg, u32 val)
{
 apic->write(reg, val);
}

static inline u64 apic_icr_read(void)
{
 return apic->icr_read();
}

static inline void apic_icr_write(u32 low, u32 high)
{
 apic->icr_write(low, high);
}

static inline void apic_wait_icr_idle(void)
{
 apic->wait_icr_idle();
}

static inline u32 safe_apic_wait_icr_idle(void)
{
 return apic->safe_wait_icr_idle();
}
# 453 "/home/iago/torvalds/linux/arch/x86/include/asm/apic.h"
static inline void ack_APIC_irq(void)
{






 apic_write(0xB0, 0);
}

static inline unsigned default_get_apic_id(unsigned long x)
{
 unsigned int ver = ((apic_read(0x30)) & 0xFFu);

 if (((ver) >= 0x14) || (__builtin_constant_p((3*32+26)) && ( ((((3*32+26))>>5)==0 && (1UL<<(((3*32+26))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((3*32+26))>>5)==1 && (1UL<<(((3*32+26))&31) & ((1<<((1*32+29) & 31))|0))) || ((((3*32+26))>>5)==2 && (1UL<<(((3*32+26))&31) & 0)) || ((((3*32+26))>>5)==3 && (1UL<<(((3*32+26))&31) & ((1<<((3*32+20) & 31))))) || ((((3*32+26))>>5)==4 && (1UL<<(((3*32+26))&31) & 0)) || ((((3*32+26))>>5)==5 && (1UL<<(((3*32+26))&31) & 0)) || ((((3*32+26))>>5)==6 && (1UL<<(((3*32+26))&31) & 0)) || ((((3*32+26))>>5)==7 && (1UL<<(((3*32+26))&31) & 0)) || ((((3*32+26))>>5)==8 && (1UL<<(((3*32+26))&31) & 0)) || ((((3*32+26))>>5)==9 && (1UL<<(((3*32+26))&31) & 0)) ) ? 1 : (__builtin_constant_p(((3*32+26))) ? constant_test_bit(((3*32+26)), ((unsigned long *)((&boot_cpu_data)->x86_capability))) : variable_test_bit(((3*32+26)), ((unsigned long *)((&boot_cpu_data)->x86_capability))))))
  return (x >> 24) & 0xFF;
 else
  return (x >> 24) & 0x0F;
}
# 481 "/home/iago/torvalds/linux/arch/x86/include/asm/apic.h"
extern int default_acpi_madt_oem_check(char *, char *);

extern void apic_send_IPI_self(int vector);

extern __attribute__((section(".discard"), unused)) char __pcpu_scope_x2apic_extra_bits; extern __attribute__((section(".data..percpu" ""))) __typeof__(int) x2apic_extra_bits;

extern int default_cpu_present_to_apicid(int mps_cpu);
extern int default_check_phys_apicid_present(int phys_apicid);


static inline void default_wait_for_init_deassert(atomic_t *deassert)
{
 while (!atomic_read(deassert))
  cpu_relax();
 return;
}

extern struct apic *generic_bigsmp_probe(void);




# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/smp.h" 1
# 504 "/home/iago/torvalds/linux/arch/x86/include/asm/apic.h" 2



static inline const struct cpumask *default_target_cpus(void)
{

 return cpu_online_mask;



}

extern __attribute__((section(".discard"), unused)) char __pcpu_scope_x86_bios_cpu_apicid; extern __attribute__((section(".data..percpu" ""))) __typeof__(u16) x86_bios_cpu_apicid; extern __typeof__(u16) *x86_bios_cpu_apicid_early_ptr; extern __typeof__(u16) x86_bios_cpu_apicid_early_map[];


static inline unsigned int read_apic_id(void)
{
 unsigned int reg;

 reg = apic_read(0x20);

 return apic->get_apic_id(reg);
}

extern void default_setup_apic_routing(void);

extern struct apic apic_noop;
# 560 "/home/iago/torvalds/linux/arch/x86/include/asm/apic.h"
static inline unsigned int
default_cpu_mask_to_apicid(const struct cpumask *cpumask)
{
 return ((cpumask)->bits)[0] & 0xFFu;
}

static inline unsigned int
default_cpu_mask_to_apicid_and(const struct cpumask *cpumask,
          const struct cpumask *andmask)
{
 unsigned long mask1 = ((cpumask)->bits)[0];
 unsigned long mask2 = ((andmask)->bits)[0];
 unsigned long mask3 = ((cpu_online_mask)->bits)[0];

 return (unsigned int)(mask1 & mask2 & mask3);
}

static inline unsigned long default_check_apicid_used(physid_mask_t *map, int apicid)
{
 return (__builtin_constant_p((apicid)) ? constant_test_bit((apicid), ((*map).mask)) : variable_test_bit((apicid), ((*map).mask)));
}

static inline unsigned long default_check_apicid_present(int bit)
{
 return (__builtin_constant_p((bit)) ? constant_test_bit((bit), ((phys_cpu_present_map).mask)) : variable_test_bit((bit), ((phys_cpu_present_map).mask)));
}

static inline void default_ioapic_phys_id_map(physid_mask_t *phys_map, physid_mask_t *retmap)
{
 *retmap = *phys_map;
}

static inline int __default_cpu_present_to_apicid(int mps_cpu)
{
 if (mps_cpu < nr_cpu_ids && (__builtin_constant_p((cpumask_check((mps_cpu)))) ? constant_test_bit((cpumask_check((mps_cpu))), ((((cpu_present_mask))->bits))) : variable_test_bit((cpumask_check((mps_cpu))), ((((cpu_present_mask))->bits)))))
  return (int)(*({ do { const void *__vpp_verify = (typeof((&(x86_bios_cpu_apicid))))((void *)0); (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(x86_bios_cpu_apicid))) *)(&(x86_bios_cpu_apicid)))); (typeof((typeof(*(&(x86_bios_cpu_apicid))) *)(&(x86_bios_cpu_apicid)))) (__ptr + (((__per_cpu_offset[mps_cpu])))); }); }));
 else
  return 0xFFFFu;
}

static inline int
__default_check_phys_apicid_present(int phys_apicid)
{
 return (__builtin_constant_p((phys_apicid)) ? constant_test_bit((phys_apicid), ((phys_cpu_present_map).mask)) : variable_test_bit((phys_apicid), ((phys_cpu_present_map).mask)));
}
# 618 "/home/iago/torvalds/linux/arch/x86/include/asm/apic.h"
extern int default_cpu_present_to_apicid(int mps_cpu);
extern int default_check_phys_apicid_present(int phys_apicid);
# 14 "/home/iago/torvalds/linux/arch/x86/include/asm/smp.h" 2

# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/io_apic.h" 1






# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/irq_vectors.h" 1
# 141 "/home/iago/torvalds/linux/arch/x86/include/asm/irq_vectors.h"
static inline int invalid_vm86_irq(int irq)
{
 return irq < 3 || irq > 15;
}
# 8 "/home/iago/torvalds/linux/arch/x86/include/asm/io_apic.h" 2
# 27 "/home/iago/torvalds/linux/arch/x86/include/asm/io_apic.h"
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

struct IR_IO_APIC_route_entry {
 __u64 vector : 8,
  zero : 3,
  index2 : 1,
  delivery_status : 1,
  polarity : 1,
  irr : 1,
  trigger : 1,
  mask : 1,
  reserved : 31,
  format : 1,
  index : 15;
} __attribute__ ((packed));
# 107 "/home/iago/torvalds/linux/arch/x86/include/asm/io_apic.h"
extern int nr_ioapics;

extern int mpc_ioapic_id(int ioapic);
extern unsigned int mpc_ioapic_addr(int ioapic);
extern struct mp_ioapic_gsi *mp_ioapic_gsi_routing(int ioapic);




extern int mp_irq_entries;


extern struct mpc_intsrc mp_irqs[(256 * 4)];


extern int mpc_default_type;


extern int sis_apic_bug;


extern int skip_ioapic_setup;


extern int noioapicquirk;


extern int noioapicreroute;


extern int timer_through_8259;
# 146 "/home/iago/torvalds/linux/arch/x86/include/asm/io_apic.h"
struct io_apic_irq_attr;
extern int io_apic_set_pci_routing(struct device *dev, int irq,
   struct io_apic_irq_attr *irq_attr);
void setup_IO_APIC_irq_extra(u32 gsi);
extern void ioapic_and_gsi_init(void);
extern void ioapic_insert_resources(void);

int io_apic_setup_irq_pin_once(unsigned int irq, int node, struct io_apic_irq_attr *attr);

extern int save_ioapic_entries(void);
extern void mask_ioapic_entries(void);
extern int restore_ioapic_entries(void);

extern int get_nr_irqs_gsi(void);

extern void setup_ioapic_ids_from_mpc(void);
extern void setup_ioapic_ids_from_mpc_nocheck(void);

struct mp_ioapic_gsi{
 u32 gsi_base;
 u32 gsi_end;
};
extern struct mp_ioapic_gsi mp_gsi_routing[];
extern u32 gsi_top;
int mp_find_ioapic(u32 gsi);
int mp_find_ioapic_pin(int ioapic, u32 gsi);
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) mp_register_ioapic(int id, u32 address, u32 gsi_base);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pre_init_apic_IRQ0(void);

extern void mp_save_irq(struct mpc_intsrc *m);

extern void disable_ioapic_support(void);
# 16 "/home/iago/torvalds/linux/arch/x86/include/asm/smp.h" 2






extern int smp_num_siblings;
extern unsigned int num_processors;

static inline bool cpu_has_ht_siblings(void)
{
 bool has_siblings = false;

 has_siblings = (__builtin_constant_p((0*32+28)) && ( ((((0*32+28))>>5)==0 && (1UL<<(((0*32+28))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((0*32+28))>>5)==1 && (1UL<<(((0*32+28))&31) & ((1<<((1*32+29) & 31))|0))) || ((((0*32+28))>>5)==2 && (1UL<<(((0*32+28))&31) & 0)) || ((((0*32+28))>>5)==3 && (1UL<<(((0*32+28))&31) & ((1<<((3*32+20) & 31))))) || ((((0*32+28))>>5)==4 && (1UL<<(((0*32+28))&31) & 0)) || ((((0*32+28))>>5)==5 && (1UL<<(((0*32+28))&31) & 0)) || ((((0*32+28))>>5)==6 && (1UL<<(((0*32+28))&31) & 0)) || ((((0*32+28))>>5)==7 && (1UL<<(((0*32+28))&31) & 0)) || ((((0*32+28))>>5)==8 && (1UL<<(((0*32+28))&31) & 0)) || ((((0*32+28))>>5)==9 && (1UL<<(((0*32+28))&31) & 0)) ) ? 1 : (__builtin_constant_p(((0*32+28))) ? constant_test_bit(((0*32+28)), ((unsigned long *)((&boot_cpu_data)->x86_capability))) : variable_test_bit(((0*32+28)), ((unsigned long *)((&boot_cpu_data)->x86_capability))))) && smp_num_siblings > 1;

 return has_siblings;
}

extern __attribute__((section(".discard"), unused)) char __pcpu_scope_cpu_sibling_map; extern __attribute__((section(".data..percpu" ""))) __typeof__(cpumask_var_t) cpu_sibling_map;
extern __attribute__((section(".discard"), unused)) char __pcpu_scope_cpu_core_map; extern __attribute__((section(".data..percpu" ""))) __typeof__(cpumask_var_t) cpu_core_map;

extern __attribute__((section(".discard"), unused)) char __pcpu_scope_cpu_llc_shared_map; extern __attribute__((section(".data..percpu" ""))) __typeof__(cpumask_var_t) cpu_llc_shared_map;
extern __attribute__((section(".discard"), unused)) char __pcpu_scope_cpu_llc_id; extern __attribute__((section(".data..percpu" ""))) __typeof__(u16) cpu_llc_id;
extern __attribute__((section(".discard"), unused)) char __pcpu_scope_cpu_number; extern __attribute__((section(".data..percpu" ""))) __typeof__(int) cpu_number;

static inline struct cpumask *cpu_sibling_mask(int cpu)
{
 return (*({ do { const void *__vpp_verify = (typeof((&(cpu_sibling_map))))((void *)0); (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(cpu_sibling_map))) *)(&(cpu_sibling_map)))); (typeof((typeof(*(&(cpu_sibling_map))) *)(&(cpu_sibling_map)))) (__ptr + (((__per_cpu_offset[cpu])))); }); }));
}

static inline struct cpumask *cpu_core_mask(int cpu)
{
 return (*({ do { const void *__vpp_verify = (typeof((&(cpu_core_map))))((void *)0); (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(cpu_core_map))) *)(&(cpu_core_map)))); (typeof((typeof(*(&(cpu_core_map))) *)(&(cpu_core_map)))) (__ptr + (((__per_cpu_offset[cpu])))); }); }));
}

static inline struct cpumask *cpu_llc_shared_mask(int cpu)
{
 return (*({ do { const void *__vpp_verify = (typeof((&(cpu_llc_shared_map))))((void *)0); (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(cpu_llc_shared_map))) *)(&(cpu_llc_shared_map)))); (typeof((typeof(*(&(cpu_llc_shared_map))) *)(&(cpu_llc_shared_map)))) (__ptr + (((__per_cpu_offset[cpu])))); }); }));
}

extern __attribute__((section(".discard"), unused)) char __pcpu_scope_x86_cpu_to_apicid; extern __attribute__((section(".data..percpu" ""))) __typeof__(u16) x86_cpu_to_apicid; extern __typeof__(u16) *x86_cpu_to_apicid_early_ptr; extern __typeof__(u16) x86_cpu_to_apicid_early_map[];
extern __attribute__((section(".discard"), unused)) char __pcpu_scope_x86_bios_cpu_apicid; extern __attribute__((section(".data..percpu" ""))) __typeof__(u16) x86_bios_cpu_apicid; extern __typeof__(u16) *x86_bios_cpu_apicid_early_ptr; extern __typeof__(u16) x86_bios_cpu_apicid_early_map[];





extern unsigned long stack_start;

struct smp_ops {
 void (*smp_prepare_boot_cpu)(void);
 void (*smp_prepare_cpus)(unsigned max_cpus);
 void (*smp_cpus_done)(unsigned max_cpus);

 void (*stop_other_cpus)(int wait);
 void (*smp_send_reschedule)(int cpu);

 int (*cpu_up)(unsigned cpu);
 int (*cpu_disable)(void);
 void (*cpu_die)(unsigned int cpu);
 void (*play_dead)(void);

 void (*send_call_func_ipi)(const struct cpumask *mask);
 void (*send_call_func_single_ipi)(int cpu);
};


extern void set_cpu_sibling_map(int cpu);





extern struct smp_ops smp_ops;

static inline void smp_send_stop(void)
{
 smp_ops.stop_other_cpus(0);
}

static inline void stop_other_cpus(void)
{
 smp_ops.stop_other_cpus(1);
}

static inline void smp_prepare_boot_cpu(void)
{
 smp_ops.smp_prepare_boot_cpu();
}

static inline void smp_prepare_cpus(unsigned int max_cpus)
{
 smp_ops.smp_prepare_cpus(max_cpus);
}

static inline void smp_cpus_done(unsigned int max_cpus)
{
 smp_ops.smp_cpus_done(max_cpus);
}

static inline int __cpu_up(unsigned int cpu)
{
 return smp_ops.cpu_up(cpu);
}

static inline int __cpu_disable(void)
{
 return smp_ops.cpu_disable();
}

static inline void __cpu_die(unsigned int cpu)
{
 smp_ops.cpu_die(cpu);
}

static inline void play_dead(void)
{
 smp_ops.play_dead();
}

static inline void smp_send_reschedule(int cpu)
{
 smp_ops.smp_send_reschedule(cpu);
}

static inline void arch_send_call_function_single_ipi(int cpu)
{
 smp_ops.send_call_func_single_ipi(cpu);
}

static inline void arch_send_call_function_ipi_mask(const struct cpumask *mask)
{
 smp_ops.send_call_func_ipi(mask);
}

void cpu_disable_common(void);
void native_smp_prepare_boot_cpu(void);
void native_smp_prepare_cpus(unsigned int max_cpus);
void native_smp_cpus_done(unsigned int max_cpus);
int native_cpu_up(unsigned int cpunum);
int native_cpu_disable(void);
void native_cpu_die(unsigned int cpu);
void native_play_dead(void);
void play_dead_common(void);
void wbinvd_on_cpu(int cpu);
int wbinvd_on_all_cpus(void);

void native_send_call_func_ipi(const struct cpumask *mask);
void native_send_call_func_single_ipi(int cpu);

void smp_store_cpu_info(int id);



static inline int num_booting_cpus(void)
{
 return cpumask_weight(cpu_callout_mask);
}
# 183 "/home/iago/torvalds/linux/arch/x86/include/asm/smp.h"
extern unsigned disabled_cpus __attribute__ ((__section__(".cpuinit.data")));
# 218 "/home/iago/torvalds/linux/arch/x86/include/asm/smp.h"
extern int hard_smp_processor_id(void);
# 11 "/home/iago/torvalds/linux/arch/x86/include/asm/mmzone_64.h" 2

extern struct pglist_data *node_data[];
# 5 "/home/iago/torvalds/linux/arch/x86/include/asm/mmzone.h" 2
# 801 "include/linux/mmzone.h" 2



extern struct pglist_data *first_online_pgdat(void);
extern struct pglist_data *next_online_pgdat(struct pglist_data *pgdat);
extern struct zone *next_zone(struct zone *zone);
# 836 "include/linux/mmzone.h"
static inline struct zone *zonelist_zone(struct zoneref *zoneref)
{
 return zoneref->zone;
}

static inline int zonelist_zone_idx(struct zoneref *zoneref)
{
 return zoneref->zone_idx;
}

static inline int zonelist_node_idx(struct zoneref *zoneref)
{


 return zoneref->zone->node;



}
# 869 "include/linux/mmzone.h"
struct zoneref *next_zones_zonelist(struct zoneref *z,
     enum zone_type highest_zoneidx,
     nodemask_t *nodes,
     struct zone **zone);
# 886 "include/linux/mmzone.h"
static inline struct zoneref *first_zones_zonelist(struct zonelist *zonelist,
     enum zone_type highest_zoneidx,
     nodemask_t *nodes,
     struct zone **zone)
{
 return next_zones_zonelist(zonelist->_zonerefs, highest_zoneidx, nodes,
        zone);
}
# 924 "include/linux/mmzone.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/sparsemem.h" 1
# 925 "include/linux/mmzone.h" 2
# 970 "include/linux/mmzone.h"
struct page;
struct page_cgroup;
struct mem_section {
# 985 "include/linux/mmzone.h"
 unsigned long section_mem_map;


 unsigned long *pageblock_flags;





 struct page_cgroup *page_cgroup;
 unsigned long pad;

};
# 1010 "include/linux/mmzone.h"
extern struct mem_section *mem_section[((((1UL << (46 - 27))) + ((((1UL) << 12) / sizeof (struct mem_section))) - 1) / ((((1UL) << 12) / sizeof (struct mem_section))))];




static inline struct mem_section *__nr_to_section(unsigned long nr)
{
 if (!mem_section[((nr) / (((1UL) << 12) / sizeof (struct mem_section)))])
  return ((void *)0);
 return &mem_section[((nr) / (((1UL) << 12) / sizeof (struct mem_section)))][nr & ((((1UL) << 12) / sizeof (struct mem_section)) - 1)];
}
extern int __section_nr(struct mem_section* ms);
extern unsigned long usemap_size(void);
# 1035 "include/linux/mmzone.h"
static inline struct page *__section_mem_map_addr(struct mem_section *section)
{
 unsigned long map = section->section_mem_map;
 map &= (~((1UL<<2)-1));
 return (struct page *)map;
}

static inline int present_section(struct mem_section *section)
{
 return (section && (section->section_mem_map & (1UL<<0)));
}

static inline int present_section_nr(unsigned long nr)
{
 return present_section(__nr_to_section(nr));
}

static inline int valid_section(struct mem_section *section)
{
 return (section && (section->section_mem_map & (1UL<<1)));
}

static inline int valid_section_nr(unsigned long nr)
{
 return valid_section(__nr_to_section(nr));
}

static inline struct mem_section *__pfn_to_section(unsigned long pfn)
{
 return __nr_to_section(((pfn) >> (27 - 12)));
}


static inline int pfn_valid(unsigned long pfn)
{
 if (((pfn) >> (27 - 12)) >= (1UL << (46 - 27)))
  return 0;
 return valid_section(__nr_to_section(((pfn) >> (27 - 12))));
}


static inline int pfn_present(unsigned long pfn)
{
 if (((pfn) >> (27 - 12)) >= (1UL << (46 - 27)))
  return 0;
 return present_section(__nr_to_section(((pfn) >> (27 - 12))));
}
# 1099 "include/linux/mmzone.h"
void sparse_init(void);






bool early_pfn_in_nid(unsigned long pfn, int nid);
# 1115 "include/linux/mmzone.h"
void memory_present(int nid, unsigned long start, unsigned long end);
unsigned long __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) node_memmap_size_bytes(int, unsigned long, unsigned long);
# 1149 "include/linux/mmzone.h"
static inline int memmap_valid_within(unsigned long pfn,
     struct page *page, struct zone *zone)
{
 return 1;
}
# 5 "include/linux/gfp.h" 2


# 1 "include/linux/topology.h" 1
# 33 "include/linux/topology.h"
# 1 "include/linux/smp.h" 1
# 15 "include/linux/smp.h"
extern void cpu_idle(void);

typedef void (*smp_call_func_t)(void *info);
struct call_single_data {
 struct list_head list;
 smp_call_func_t func;
 void *info;
 u16 flags;
 u16 priv;
};


extern unsigned int total_cpus;

int smp_call_function_single(int cpuid, smp_call_func_t func, void *info,
        int wait);
# 48 "include/linux/smp.h"
extern void smp_send_stop(void);




extern void smp_send_reschedule(int cpu);





extern void smp_prepare_cpus(unsigned int max_cpus);




extern int __cpu_up(unsigned int cpunum);




extern void smp_cpus_done(unsigned int max_cpus);




int smp_call_function(smp_call_func_t func, void *info, int wait);
void smp_call_function_many(const struct cpumask *mask,
       smp_call_func_t func, void *info, bool wait);

void __smp_call_function_single(int cpuid, struct call_single_data *data,
    int wait);

int smp_call_function_any(const struct cpumask *mask,
     smp_call_func_t func, void *info, int wait);





void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) call_function_init(void);
void generic_smp_call_function_single_interrupt(void);
void generic_smp_call_function_interrupt(void);
void ipi_call_lock(void);
void ipi_call_unlock(void);
void ipi_call_lock_irq(void);
void ipi_call_unlock_irq(void);







int on_each_cpu(smp_call_func_t func, void *info, int wait);





void smp_prepare_boot_cpu(void);

extern unsigned int setup_max_cpus;
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) setup_nr_cpu_ids(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) smp_init(void);
# 180 "include/linux/smp.h"
extern void arch_disable_smp_support(void);

void smp_setup_processor_id(void);
# 34 "include/linux/topology.h" 2
# 1 "include/linux/percpu.h" 1






# 1 "include/linux/pfn.h" 1
# 8 "include/linux/percpu.h" 2
# 81 "include/linux/percpu.h"
extern void *pcpu_base_addr;
extern const unsigned long *pcpu_unit_offsets;

struct pcpu_group_info {
 int nr_units;
 unsigned long base_offset;
 unsigned int *cpu_map;

};

struct pcpu_alloc_info {
 size_t static_size;
 size_t reserved_size;
 size_t dyn_size;
 size_t unit_size;
 size_t atom_size;
 size_t alloc_size;
 size_t __ai_size;
 int nr_groups;
 struct pcpu_group_info groups[];
};

enum pcpu_fc {
 PCPU_FC_AUTO,
 PCPU_FC_EMBED,
 PCPU_FC_PAGE,

 PCPU_FC_NR,
};
extern const char *pcpu_fc_names[PCPU_FC_NR];

extern enum pcpu_fc pcpu_chosen_fc;

typedef void * (*pcpu_fc_alloc_fn_t)(unsigned int cpu, size_t size,
         size_t align);
typedef void (*pcpu_fc_free_fn_t)(void *ptr, size_t size);
typedef void (*pcpu_fc_populate_pte_fn_t)(unsigned long addr);
typedef int (pcpu_fc_cpu_distance_fn_t)(unsigned int from, unsigned int to);

extern struct pcpu_alloc_info * __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pcpu_alloc_alloc_info(int nr_groups,
            int nr_units);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pcpu_free_alloc_info(struct pcpu_alloc_info *ai);

extern int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pcpu_setup_first_chunk(const struct pcpu_alloc_info *ai,
      void *base_addr);


extern int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pcpu_embed_first_chunk(size_t reserved_size, size_t dyn_size,
    size_t atom_size,
    pcpu_fc_cpu_distance_fn_t cpu_distance_fn,
    pcpu_fc_alloc_fn_t alloc_fn,
    pcpu_fc_free_fn_t free_fn);



extern int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pcpu_page_first_chunk(size_t reserved_size,
    pcpu_fc_alloc_fn_t alloc_fn,
    pcpu_fc_free_fn_t free_fn,
    pcpu_fc_populate_pte_fn_t populate_pte_fn);
# 153 "include/linux/percpu.h"
extern void *__alloc_reserved_percpu(size_t size, size_t align);
extern bool is_kernel_percpu_address(unsigned long addr);




extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) percpu_init_late(void);

extern void *__alloc_percpu(size_t size, size_t align);
extern void free_percpu(void *__pdata);
extern phys_addr_t per_cpu_ptr_to_phys(void *addr);
# 227 "include/linux/percpu.h"
extern void __bad_size_call_parameter(void);
# 35 "include/linux/topology.h" 2
# 49 "include/linux/topology.h"
int arch_update_cpu_topology(void);
# 218 "include/linux/topology.h"
extern __attribute__((section(".discard"), unused)) char __pcpu_scope_numa_node; extern __attribute__((section(".data..percpu" ""))) __typeof__(int) numa_node;



static inline int numa_node_id(void)
{
 return ({ typeof((numa_node)) pscr_ret__; do { const void *__vpp_verify = (typeof(&((numa_node))))((void *)0); (void)__vpp_verify; } while (0); switch(sizeof((numa_node))) { case 1: pscr_ret__ = ({ typeof(((numa_node))) pfo_ret__; switch (sizeof(((numa_node)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((numa_node))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 2: pscr_ret__ = ({ typeof(((numa_node))) pfo_ret__; switch (sizeof(((numa_node)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((numa_node))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 4: pscr_ret__ = ({ typeof(((numa_node))) pfo_ret__; switch (sizeof(((numa_node)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((numa_node))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 8: pscr_ret__ = ({ typeof(((numa_node))) pfo_ret__; switch (sizeof(((numa_node)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((numa_node))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; default: __bad_percpu_size(); } pfo_ret__; });break; default: __bad_size_call_parameter();break; } pscr_ret__; });
}
# 236 "include/linux/topology.h"
static inline void set_numa_node(int node)
{
 do { typedef typeof(numa_node) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = (node); (void)pto_tmp__; } switch (sizeof(numa_node)) { case 1: asm("mov" "b %1,""%%""gs"":" "%P" "0" : "+m" (numa_node) : "qi" ((pto_T__)(node))); break; case 2: asm("mov" "w %1,""%%""gs"":" "%P" "0" : "+m" (numa_node) : "ri" ((pto_T__)(node))); break; case 4: asm("mov" "l %1,""%%""gs"":" "%P" "0" : "+m" (numa_node) : "ri" ((pto_T__)(node))); break; case 8: asm("mov" "q %1,""%%""gs"":" "%P" "0" : "+m" (numa_node) : "re" ((pto_T__)(node))); break; default: __bad_percpu_size(); } } while (0);
}



static inline void set_cpu_numa_node(int cpu, int node)
{
 (*({ do { const void *__vpp_verify = (typeof((&(numa_node))))((void *)0); (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(numa_node))) *)(&(numa_node)))); (typeof((typeof(*(&(numa_node))) *)(&(numa_node)))) (__ptr + (((__per_cpu_offset[cpu])))); }); })) = node;
}
# 303 "include/linux/topology.h"
static inline int numa_mem_id(void)
{
 return numa_node_id();
}



static inline int cpu_to_mem(int cpu)
{
 return __cpu_to_node(cpu);
}
# 8 "include/linux/gfp.h" 2


struct vm_area_struct;
# 150 "include/linux/gfp.h"
static inline int allocflags_to_migratetype(gfp_t gfp_flags)
{
 ({ int __ret_warn_on = !!((gfp_flags & ((( gfp_t)0x80000u)|(( gfp_t)0x08u))) == ((( gfp_t)0x80000u)|(( gfp_t)0x08u))); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath_null("include/linux/gfp.h", 152); __builtin_expect(!!(__ret_warn_on), 0); });

 if (__builtin_expect(!!(page_group_by_mobility_disabled), 0))
  return 0;


 return (((gfp_flags & (( gfp_t)0x08u)) != 0) << 1) |
  ((gfp_flags & (( gfp_t)0x80000u)) != 0);
}
# 245 "include/linux/gfp.h"
static inline enum zone_type gfp_zone(gfp_t flags)
{
 enum zone_type z;
 int bit = ( int) (flags & ((( gfp_t)0x01u)|(( gfp_t)0x02u)|(( gfp_t)0x04u)|(( gfp_t)0x08u)));

 z = (( (ZONE_NORMAL << 0 * 2) | (ZONE_DMA << 0x01u * 2) | (ZONE_NORMAL << 0x02u * 2) | (ZONE_DMA32 << 0x04u * 2) | (ZONE_NORMAL << 0x08u * 2) | (ZONE_DMA << (0x08u | 0x01u) * 2) | (ZONE_MOVABLE << (0x08u | 0x02u) * 2) | (ZONE_DMA32 << (0x08u | 0x04u) * 2) ) >> (bit * 2)) &
      ((1 << 2) - 1);
 do { if (__builtin_expect(!!((( 1 << (0x01u | 0x02u) | 1 << (0x01u | 0x04u) | 1 << (0x04u | 0x02u) | 1 << (0x01u | 0x04u | 0x02u) | 1 << (0x08u | 0x02u | 0x01u) | 1 << (0x08u | 0x04u | 0x01u) | 1 << (0x08u | 0x04u | 0x02u) | 1 << (0x08u | 0x04u | 0x01u | 0x02u) ) >> bit) & 1), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/gfp.h"), "i" (252), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 return z;
}
# 263 "include/linux/gfp.h"
static inline int gfp_zonelist(gfp_t flags)
{
 if (1 && __builtin_expect(!!(flags & (( gfp_t)0x40000u)), 0))
  return 1;

 return 0;
}
# 280 "include/linux/gfp.h"
static inline struct zonelist *node_zonelist(int nid, gfp_t flags)
{
 return (node_data[nid])->node_zonelists + gfp_zonelist(flags);
}


static inline void arch_free_page(struct page *page, int order) { }


static inline void arch_alloc_page(struct page *page, int order) { }


struct page *
__alloc_pages_nodemask(gfp_t gfp_mask, unsigned int order,
         struct zonelist *zonelist, nodemask_t *nodemask);

static inline struct page *
__alloc_pages(gfp_t gfp_mask, unsigned int order,
  struct zonelist *zonelist)
{
 return __alloc_pages_nodemask(gfp_mask, order, zonelist, ((void *)0));
}

static inline struct page *alloc_pages_node(int nid, gfp_t gfp_mask,
      unsigned int order)
{

 if (nid < 0)
  nid = numa_node_id();

 return __alloc_pages(gfp_mask, order, node_zonelist(nid, gfp_mask));
}

static inline struct page *alloc_pages_exact_node(int nid, gfp_t gfp_mask,
      unsigned int order)
{
 do { if (__builtin_expect(!!(nid < 0 || nid >= (1 << 10)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/gfp.h"), "i" (316), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);

 return __alloc_pages(gfp_mask, order, node_zonelist(nid, gfp_mask));
}


extern struct page *alloc_pages_current(gfp_t gfp_mask, unsigned order);

static inline struct page *
alloc_pages(gfp_t gfp_mask, unsigned int order)
{
 return alloc_pages_current(gfp_mask, order);
}
extern struct page *alloc_pages_vma(gfp_t gfp_mask, int order,
   struct vm_area_struct *vma, unsigned long addr,
   int node);
# 344 "include/linux/gfp.h"
extern unsigned long __get_free_pages(gfp_t gfp_mask, unsigned int order);
extern unsigned long get_zeroed_page(gfp_t gfp_mask);

void *alloc_pages_exact(size_t size, gfp_t gfp_mask);
void free_pages_exact(void *virt, size_t size);

void *alloc_pages_exact_nid(int nid, size_t size, gfp_t gfp_mask);







extern void __free_pages(struct page *page, unsigned int order);
extern void free_pages(unsigned long addr, unsigned int order);
extern void free_hot_cold_page(struct page *page, int cold);




void page_alloc_init(void);
void drain_zone_pages(struct zone *zone, struct per_cpu_pages *pcp);
void drain_all_pages(void);
void drain_local_pages(void *dummy);

extern gfp_t gfp_allowed_mask;

extern void pm_restrict_gfp_mask(void);
extern void pm_restore_gfp_mask(void);
# 13 "include/linux/slab.h" 2
# 98 "include/linux/slab.h"
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) kmem_cache_init(void);
int slab_is_available(void);

struct kmem_cache *kmem_cache_create(const char *, size_t, size_t,
   unsigned long,
   void (*)(void *));
void kmem_cache_destroy(struct kmem_cache *);
int kmem_cache_shrink(struct kmem_cache *);
void kmem_cache_free(struct kmem_cache *, void *);
unsigned int kmem_cache_size(struct kmem_cache *);
# 159 "include/linux/slab.h"
void * __attribute__((warn_unused_result)) __krealloc(const void *, size_t, gfp_t);
void * __attribute__((warn_unused_result)) krealloc(const void *, size_t, gfp_t);
void kfree(const void *);
void kzfree(const void *);
size_t ksize(const void *);
# 185 "include/linux/slab.h"
# 1 "include/linux/slub_def.h" 1
# 12 "include/linux/slub_def.h"
# 1 "include/linux/kobject.h" 1
# 21 "include/linux/kobject.h"
# 1 "include/linux/sysfs.h" 1
# 19 "include/linux/sysfs.h"
# 1 "include/linux/kobject_ns.h" 1
# 20 "include/linux/kobject_ns.h"
struct sock;
struct kobject;





enum kobj_ns_type {
 KOBJ_NS_TYPE_NONE = 0,
 KOBJ_NS_TYPE_NET,
 KOBJ_NS_TYPES
};
# 40 "include/linux/kobject_ns.h"
struct kobj_ns_type_operations {
 enum kobj_ns_type type;
 void *(*grab_current_ns)(void);
 const void *(*netlink_ns)(struct sock *sk);
 const void *(*initial_ns)(void);
 void (*drop_ns)(void *);
};

int kobj_ns_type_register(const struct kobj_ns_type_operations *ops);
int kobj_ns_type_registered(enum kobj_ns_type type);
const struct kobj_ns_type_operations *kobj_child_ns_ops(struct kobject *parent);
const struct kobj_ns_type_operations *kobj_ns_ops(struct kobject *kobj);

void *kobj_ns_grab_current(enum kobj_ns_type type);
const void *kobj_ns_netlink(enum kobj_ns_type type, struct sock *sk);
const void *kobj_ns_initial(enum kobj_ns_type type);
void kobj_ns_drop(enum kobj_ns_type type, void *ns);
# 20 "include/linux/sysfs.h" 2


struct kobject;
struct module;
enum kobj_ns_type;

struct attribute {
 const char *name;
 mode_t mode;

 struct lock_class_key *key;
 struct lock_class_key skey;

};
# 56 "include/linux/sysfs.h"
struct attribute_group {
 const char *name;
 mode_t (*is_visible)(struct kobject *,
           struct attribute *, int);
 struct attribute **attrs;
};
# 85 "include/linux/sysfs.h"
struct file;
struct vm_area_struct;

struct bin_attribute {
 struct attribute attr;
 size_t size;
 void *private;
 ssize_t (*read)(struct file *, struct kobject *, struct bin_attribute *,
   char *, loff_t, size_t);
 ssize_t (*write)(struct file *,struct kobject *, struct bin_attribute *,
    char *, loff_t, size_t);
 int (*mmap)(struct file *, struct kobject *, struct bin_attribute *attr,
      struct vm_area_struct *vma);
};
# 112 "include/linux/sysfs.h"
struct sysfs_ops {
 ssize_t (*show)(struct kobject *, struct attribute *,char *);
 ssize_t (*store)(struct kobject *,struct attribute *,const char *, size_t);
};

struct sysfs_dirent;



int sysfs_schedule_callback(struct kobject *kobj, void (*func)(void *),
       void *data, struct module *owner);

int __attribute__((warn_unused_result)) sysfs_create_dir(struct kobject *kobj);
void sysfs_remove_dir(struct kobject *kobj);
int __attribute__((warn_unused_result)) sysfs_rename_dir(struct kobject *kobj, const char *new_name);
int __attribute__((warn_unused_result)) sysfs_move_dir(struct kobject *kobj,
    struct kobject *new_parent_kobj);

int __attribute__((warn_unused_result)) sysfs_create_file(struct kobject *kobj,
       const struct attribute *attr);
int __attribute__((warn_unused_result)) sysfs_create_files(struct kobject *kobj,
       const struct attribute **attr);
int __attribute__((warn_unused_result)) sysfs_chmod_file(struct kobject *kobj,
      const struct attribute *attr, mode_t mode);
void sysfs_remove_file(struct kobject *kobj, const struct attribute *attr);
void sysfs_remove_files(struct kobject *kobj, const struct attribute **attr);

int __attribute__((warn_unused_result)) sysfs_create_bin_file(struct kobject *kobj,
           const struct bin_attribute *attr);
void sysfs_remove_bin_file(struct kobject *kobj,
      const struct bin_attribute *attr);

int __attribute__((warn_unused_result)) sysfs_create_link(struct kobject *kobj, struct kobject *target,
       const char *name);
int __attribute__((warn_unused_result)) sysfs_create_link_nowarn(struct kobject *kobj,
       struct kobject *target,
       const char *name);
void sysfs_remove_link(struct kobject *kobj, const char *name);

int sysfs_rename_link(struct kobject *kobj, struct kobject *target,
   const char *old_name, const char *new_name);

void sysfs_delete_link(struct kobject *dir, struct kobject *targ,
   const char *name);

int __attribute__((warn_unused_result)) sysfs_create_group(struct kobject *kobj,
        const struct attribute_group *grp);
int sysfs_update_group(struct kobject *kobj,
         const struct attribute_group *grp);
void sysfs_remove_group(struct kobject *kobj,
   const struct attribute_group *grp);
int sysfs_add_file_to_group(struct kobject *kobj,
   const struct attribute *attr, const char *group);
void sysfs_remove_file_from_group(struct kobject *kobj,
   const struct attribute *attr, const char *group);
int sysfs_merge_group(struct kobject *kobj,
         const struct attribute_group *grp);
void sysfs_unmerge_group(struct kobject *kobj,
         const struct attribute_group *grp);

void sysfs_notify(struct kobject *kobj, const char *dir, const char *attr);
void sysfs_notify_dirent(struct sysfs_dirent *sd);
struct sysfs_dirent *sysfs_get_dirent(struct sysfs_dirent *parent_sd,
          const void *ns,
          const unsigned char *name);
struct sysfs_dirent *sysfs_get(struct sysfs_dirent *sd);
void sysfs_put(struct sysfs_dirent *sd);

int __attribute__((warn_unused_result)) sysfs_init(void);
# 22 "include/linux/kobject.h" 2


# 1 "include/linux/kref.h" 1
# 20 "include/linux/kref.h"
struct kref {
 atomic_t refcount;
};

void kref_init(struct kref *kref);
void kref_get(struct kref *kref);
int kref_put(struct kref *kref, void (*release) (struct kref *kref));
int kref_sub(struct kref *kref, unsigned int count,
      void (*release) (struct kref *kref));
# 25 "include/linux/kobject.h" 2
# 35 "include/linux/kobject.h"
extern char uevent_helper[];


extern u64 uevent_seqnum;
# 50 "include/linux/kobject.h"
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
 struct list_head entry;
 struct kobject *parent;
 struct kset *kset;
 struct kobj_type *ktype;
 struct sysfs_dirent *sd;
 struct kref kref;
 unsigned int state_initialized:1;
 unsigned int state_in_sysfs:1;
 unsigned int state_add_uevent_sent:1;
 unsigned int state_remove_uevent_sent:1;
 unsigned int uevent_suppress:1;
};

extern int kobject_set_name(struct kobject *kobj, const char *name, ...)
       __attribute__((format(printf, 2, 3)));
extern int kobject_set_name_vargs(struct kobject *kobj, const char *fmt,
      va_list vargs);

static inline const char *kobject_name(const struct kobject *kobj)
{
 return kobj->name;
}

extern void kobject_init(struct kobject *kobj, struct kobj_type *ktype);
extern int __attribute__((warn_unused_result)) kobject_add(struct kobject *kobj,
        struct kobject *parent,
        const char *fmt, ...)
 __attribute__((format(printf, 3, 4)));
extern int __attribute__((warn_unused_result)) kobject_init_and_add(struct kobject *kobj,
          struct kobj_type *ktype,
          struct kobject *parent,
          const char *fmt, ...)
 __attribute__((format(printf, 4, 5)));

extern void kobject_del(struct kobject *kobj);

extern struct kobject * __attribute__((warn_unused_result)) kobject_create(void);
extern struct kobject * __attribute__((warn_unused_result)) kobject_create_and_add(const char *name,
      struct kobject *parent);

extern int __attribute__((warn_unused_result)) kobject_rename(struct kobject *, const char *new_name);
extern int __attribute__((warn_unused_result)) kobject_move(struct kobject *, struct kobject *);

extern struct kobject *kobject_get(struct kobject *kobj);
extern void kobject_put(struct kobject *kobj);

extern char *kobject_get_path(struct kobject *kobj, gfp_t flag);

struct kobj_type {
 void (*release)(struct kobject *kobj);
 const struct sysfs_ops *sysfs_ops;
 struct attribute **default_attrs;
 const struct kobj_ns_type_operations *(*child_ns_type)(struct kobject *kobj);
 const void *(*namespace)(struct kobject *kobj);
};

struct kobj_uevent_env {
 char *envp[32];
 int envp_idx;
 char buf[2048];
 int buflen;
};

struct kset_uevent_ops {
 int (* const filter)(struct kset *kset, struct kobject *kobj);
 const char *(* const name)(struct kset *kset, struct kobject *kobj);
 int (* const uevent)(struct kset *kset, struct kobject *kobj,
        struct kobj_uevent_env *env);
};

struct kobj_attribute {
 struct attribute attr;
 ssize_t (*show)(struct kobject *kobj, struct kobj_attribute *attr,
   char *buf);
 ssize_t (*store)(struct kobject *kobj, struct kobj_attribute *attr,
    const char *buf, size_t count);
};

extern const struct sysfs_ops kobj_sysfs_ops;

struct sock;
# 161 "include/linux/kobject.h"
struct kset {
 struct list_head list;
 spinlock_t list_lock;
 struct kobject kobj;
 const struct kset_uevent_ops *uevent_ops;
};

extern void kset_init(struct kset *kset);
extern int __attribute__((warn_unused_result)) kset_register(struct kset *kset);
extern void kset_unregister(struct kset *kset);
extern struct kset * __attribute__((warn_unused_result)) kset_create_and_add(const char *name,
      const struct kset_uevent_ops *u,
      struct kobject *parent_kobj);

static inline struct kset *to_kset(struct kobject *kobj)
{
 return kobj ? ({ const typeof( ((struct kset *)0)->kobj ) *__mptr = (kobj); (struct kset *)( (char *)__mptr - __builtin_offsetof(struct kset,kobj) );}) : ((void *)0);
}

static inline struct kset *kset_get(struct kset *k)
{
 return k ? to_kset(kobject_get(&k->kobj)) : ((void *)0);
}

static inline void kset_put(struct kset *k)
{
 kobject_put(&k->kobj);
}

static inline struct kobj_type *get_ktype(struct kobject *kobj)
{
 return kobj->ktype;
}

extern struct kobject *kset_find_obj(struct kset *, const char *);
extern struct kobject *kset_find_obj_hinted(struct kset *, const char *,
      struct kobject *);


extern struct kobject *kernel_kobj;

extern struct kobject *mm_kobj;

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
# 13 "include/linux/slub_def.h" 2

# 1 "include/linux/kmemleak.h" 1
# 59 "include/linux/kmemleak.h"
static inline void kmemleak_init(void)
{
}
static inline void kmemleak_alloc(const void *ptr, size_t size, int min_count,
      gfp_t gfp)
{
}
static inline void kmemleak_alloc_recursive(const void *ptr, size_t size,
         int min_count, unsigned long flags,
         gfp_t gfp)
{
}
static inline void kmemleak_free(const void *ptr)
{
}
static inline void kmemleak_free_part(const void *ptr, size_t size)
{
}
static inline void kmemleak_free_recursive(const void *ptr, unsigned long flags)
{
}
static inline void kmemleak_not_leak(const void *ptr)
{
}
static inline void kmemleak_ignore(const void *ptr)
{
}
static inline void kmemleak_scan_area(const void *ptr, size_t size, gfp_t gfp)
{
}
static inline void kmemleak_erase(void **ptr)
{
}
static inline void kmemleak_no_scan(const void *ptr)
{
}
# 15 "include/linux/slub_def.h" 2

enum stat_item {
 ALLOC_FASTPATH,
 ALLOC_SLOWPATH,
 FREE_FASTPATH,
 FREE_SLOWPATH,
 FREE_FROZEN,
 FREE_ADD_PARTIAL,
 FREE_REMOVE_PARTIAL,
 ALLOC_FROM_PARTIAL,
 ALLOC_SLAB,
 ALLOC_REFILL,
 ALLOC_NODE_MISMATCH,
 FREE_SLAB,
 CPUSLAB_FLUSH,
 DEACTIVATE_FULL,
 DEACTIVATE_EMPTY,
 DEACTIVATE_TO_HEAD,
 DEACTIVATE_TO_TAIL,
 DEACTIVATE_REMOTE_FREES,
 DEACTIVATE_BYPASS,
 ORDER_FALLBACK,
 CMPXCHG_DOUBLE_CPU_FAIL,
 CMPXCHG_DOUBLE_FAIL,
 NR_SLUB_STAT_ITEMS };

struct kmem_cache_cpu {
 void **freelist;
 unsigned long tid;
 struct page *page;
 int node;

 unsigned stat[NR_SLUB_STAT_ITEMS];

};

struct kmem_cache_node {
 spinlock_t list_lock;
 unsigned long nr_partial;
 struct list_head partial;

 atomic_long_t nr_slabs;
 atomic_long_t total_objects;
 struct list_head full;

};






struct kmem_cache_order_objects {
 unsigned long x;
};




struct kmem_cache {
 struct kmem_cache_cpu *cpu_slab;

 unsigned long flags;
 unsigned long min_partial;
 int size;
 int objsize;
 int offset;
 struct kmem_cache_order_objects oo;


 struct kmem_cache_order_objects max;
 struct kmem_cache_order_objects min;
 gfp_t allocflags;
 int refcount;
 void (*ctor)(void *);
 int inuse;
 int align;
 int reserved;
 const char *name;
 struct list_head list;

 struct kobject kobj;






 int remote_node_defrag_ratio;

 struct kmem_cache_node *node[(1 << 10)];
};
# 143 "include/linux/slub_def.h"
extern struct kmem_cache *kmalloc_caches[(12 + 2)];





static inline __attribute__((always_inline)) int kmalloc_index(size_t size)
{
 if (!size)
  return 0;

 if (size <= 8)
  return ( __builtin_constant_p(8) ? ( (8) < 1 ? ____ilog2_NaN() : (8) & (1ULL << 63) ? 63 : (8) & (1ULL << 62) ? 62 : (8) & (1ULL << 61) ? 61 : (8) & (1ULL << 60) ? 60 : (8) & (1ULL << 59) ? 59 : (8) & (1ULL << 58) ? 58 : (8) & (1ULL << 57) ? 57 : (8) & (1ULL << 56) ? 56 : (8) & (1ULL << 55) ? 55 : (8) & (1ULL << 54) ? 54 : (8) & (1ULL << 53) ? 53 : (8) & (1ULL << 52) ? 52 : (8) & (1ULL << 51) ? 51 : (8) & (1ULL << 50) ? 50 : (8) & (1ULL << 49) ? 49 : (8) & (1ULL << 48) ? 48 : (8) & (1ULL << 47) ? 47 : (8) & (1ULL << 46) ? 46 : (8) & (1ULL << 45) ? 45 : (8) & (1ULL << 44) ? 44 : (8) & (1ULL << 43) ? 43 : (8) & (1ULL << 42) ? 42 : (8) & (1ULL << 41) ? 41 : (8) & (1ULL << 40) ? 40 : (8) & (1ULL << 39) ? 39 : (8) & (1ULL << 38) ? 38 : (8) & (1ULL << 37) ? 37 : (8) & (1ULL << 36) ? 36 : (8) & (1ULL << 35) ? 35 : (8) & (1ULL << 34) ? 34 : (8) & (1ULL << 33) ? 33 : (8) & (1ULL << 32) ? 32 : (8) & (1ULL << 31) ? 31 : (8) & (1ULL << 30) ? 30 : (8) & (1ULL << 29) ? 29 : (8) & (1ULL << 28) ? 28 : (8) & (1ULL << 27) ? 27 : (8) & (1ULL << 26) ? 26 : (8) & (1ULL << 25) ? 25 : (8) & (1ULL << 24) ? 24 : (8) & (1ULL << 23) ? 23 : (8) & (1ULL << 22) ? 22 : (8) & (1ULL << 21) ? 21 : (8) & (1ULL << 20) ? 20 : (8) & (1ULL << 19) ? 19 : (8) & (1ULL << 18) ? 18 : (8) & (1ULL << 17) ? 17 : (8) & (1ULL << 16) ? 16 : (8) & (1ULL << 15) ? 15 : (8) & (1ULL << 14) ? 14 : (8) & (1ULL << 13) ? 13 : (8) & (1ULL << 12) ? 12 : (8) & (1ULL << 11) ? 11 : (8) & (1ULL << 10) ? 10 : (8) & (1ULL << 9) ? 9 : (8) & (1ULL << 8) ? 8 : (8) & (1ULL << 7) ? 7 : (8) & (1ULL << 6) ? 6 : (8) & (1ULL << 5) ? 5 : (8) & (1ULL << 4) ? 4 : (8) & (1ULL << 3) ? 3 : (8) & (1ULL << 2) ? 2 : (8) & (1ULL << 1) ? 1 : (8) & (1ULL << 0) ? 0 : ____ilog2_NaN() ) : (sizeof(8) <= 4) ? __ilog2_u32(8) : __ilog2_u64(8) );

 if (8 <= 32 && size > 64 && size <= 96)
  return 1;
 if (8 <= 64 && size > 128 && size <= 192)
  return 2;
 if (size <= 8) return 3;
 if (size <= 16) return 4;
 if (size <= 32) return 5;
 if (size <= 64) return 6;
 if (size <= 128) return 7;
 if (size <= 256) return 8;
 if (size <= 512) return 9;
 if (size <= 1024) return 10;
 if (size <= 2 * 1024) return 11;
 if (size <= 4 * 1024) return 12;





 if (size <= 8 * 1024) return 13;
 if (size <= 16 * 1024) return 14;
 if (size <= 32 * 1024) return 15;
 if (size <= 64 * 1024) return 16;
 if (size <= 128 * 1024) return 17;
 if (size <= 256 * 1024) return 18;
 if (size <= 512 * 1024) return 19;
 if (size <= 1024 * 1024) return 20;
 if (size <= 2 * 1024 * 1024) return 21;
 do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/slub_def.h"), "i" (185), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0);
 return -1;
# 195 "include/linux/slub_def.h"
}







static inline __attribute__((always_inline)) struct kmem_cache *kmalloc_slab(size_t size)
{
 int index = kmalloc_index(size);

 if (index == 0)
  return ((void *)0);

 return kmalloc_caches[index];
}

void *kmem_cache_alloc(struct kmem_cache *, gfp_t);
void *__kmalloc(size_t size, gfp_t flags);

static inline __attribute__((always_inline)) void *
kmalloc_order(size_t size, gfp_t flags, unsigned int order)
{
 void *ret = (void *) __get_free_pages(flags | (( gfp_t)0x4000u), order);
 kmemleak_alloc(ret, size, 1, flags);
 return ret;
}






extern bool verify_mem_not_deleted(const void *x);
# 238 "include/linux/slub_def.h"
extern void *
kmem_cache_alloc_trace(struct kmem_cache *s, gfp_t gfpflags, size_t size);
extern void *kmalloc_order_trace(size_t size, gfp_t flags, unsigned int order);
# 255 "include/linux/slub_def.h"
static inline __attribute__((always_inline)) void *kmalloc_large(size_t size, gfp_t flags)
{
 unsigned int order = get_order(size);
 return kmalloc_order_trace(size, flags, order);
}

static inline __attribute__((always_inline)) void *kmalloc(size_t size, gfp_t flags)
{
 if (__builtin_constant_p(size)) {
  if (size > (2 * ((1UL) << 12)))
   return kmalloc_large(size, flags);

  if (!(flags & (( gfp_t)0x01u))) {
   struct kmem_cache *s = kmalloc_slab(size);

   if (!s)
    return ((void *)16);

   return kmem_cache_alloc_trace(s, flags, size);
  }
 }
 return __kmalloc(size, flags);
}


void *__kmalloc_node(size_t size, gfp_t flags, int node);
void *kmem_cache_alloc_node(struct kmem_cache *, gfp_t flags, int node);


extern void *kmem_cache_alloc_node_trace(struct kmem_cache *s,
        gfp_t gfpflags,
        int node, size_t size);
# 297 "include/linux/slub_def.h"
static inline __attribute__((always_inline)) void *kmalloc_node(size_t size, gfp_t flags, int node)
{
 if (__builtin_constant_p(size) &&
  size <= (2 * ((1UL) << 12)) && !(flags & (( gfp_t)0x01u))) {
   struct kmem_cache *s = kmalloc_slab(size);

  if (!s)
   return ((void *)16);

  return kmem_cache_alloc_node_trace(s, flags, node, size);
 }
 return __kmalloc_node(size, flags, node);
}
# 186 "include/linux/slab.h" 2
# 243 "include/linux/slab.h"
static inline void *kcalloc(size_t n, size_t size, gfp_t flags)
{
 if (size != 0 && n > (~0UL) / size)
  return ((void *)0);
 return __kmalloc(n * size, flags | (( gfp_t)0x8000u));
}
# 290 "include/linux/slab.h"
extern void *__kmalloc_track_caller(size_t, gfp_t, unsigned long);
# 309 "include/linux/slab.h"
extern void *__kmalloc_node_track_caller(size_t, gfp_t, int, unsigned long);
# 328 "include/linux/slab.h"
static inline void *kmem_cache_zalloc(struct kmem_cache *k, gfp_t flags)
{
 return kmem_cache_alloc(k, flags | (( gfp_t)0x8000u));
}






static inline void *kzalloc(size_t size, gfp_t flags)
{
 return kmalloc(size, flags | (( gfp_t)0x8000u));
}







static inline void *kzalloc_node(size_t size, gfp_t flags, int node)
{
 return kmalloc_node(size, flags | (( gfp_t)0x8000u), node);
}

void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) kmem_cache_init_late(void);
# 10 "drivers/xen/xen-pciback/vpci.c" 2
# 1 "include/linux/pci.h" 1
# 20 "include/linux/pci.h"
# 1 "include/linux/pci_regs.h" 1
# 21 "include/linux/pci.h" 2
# 43 "include/linux/pci.h"
# 1 "include/linux/mod_devicetable.h" 1
# 12 "include/linux/mod_devicetable.h"
typedef unsigned long kernel_ulong_t;




struct pci_device_id {
 __u32 vendor, device;
 __u32 subvendor, subdevice;
 __u32 class, class_mask;
 kernel_ulong_t driver_data;
};







struct ieee1394_device_id {
 __u32 match_flags;
 __u32 vendor_id;
 __u32 model_id;
 __u32 specifier_id;
 __u32 version;
 kernel_ulong_t driver_data
  __attribute__((aligned(sizeof(kernel_ulong_t))));
};
# 98 "include/linux/mod_devicetable.h"
struct usb_device_id {

 __u16 match_flags;


 __u16 idVendor;
 __u16 idProduct;
 __u16 bcdDevice_lo;
 __u16 bcdDevice_hi;


 __u8 bDeviceClass;
 __u8 bDeviceSubClass;
 __u8 bDeviceProtocol;


 __u8 bInterfaceClass;
 __u8 bInterfaceSubClass;
 __u8 bInterfaceProtocol;


 kernel_ulong_t driver_info;
};
# 136 "include/linux/mod_devicetable.h"
struct hid_device_id {
 __u16 bus;
 __u16 pad1;
 __u32 vendor;
 __u32 product;
 kernel_ulong_t driver_data
  __attribute__((aligned(sizeof(kernel_ulong_t))));
};


struct ccw_device_id {
 __u16 match_flags;

 __u16 cu_type;
 __u16 dev_type;
 __u8 cu_model;
 __u8 dev_model;

 kernel_ulong_t driver_info;
};







struct ap_device_id {
 __u16 match_flags;
 __u8 dev_type;
 __u8 pad1;
 __u32 pad2;
 kernel_ulong_t driver_info;
};




struct css_device_id {
 __u8 match_flags;
 __u8 type;
 __u16 pad2;
 __u32 pad3;
 kernel_ulong_t driver_data;
};




struct acpi_device_id {
 __u8 id[16];
 kernel_ulong_t driver_data;
};




struct pnp_device_id {
 __u8 id[8];
 kernel_ulong_t driver_data;
};

struct pnp_card_device_id {
 __u8 id[8];
 kernel_ulong_t driver_data;
 struct {
  __u8 id[8];
 } devs[8];
};




struct serio_device_id {
 __u8 type;
 __u8 extra;
 __u8 id;
 __u8 proto;
};




struct of_device_id
{
 char name[32];
 char type[32];
 char compatible[128];

 void *data;



};


struct vio_device_id {
 char type[32];
 char compat[32];
};



struct pcmcia_device_id {
 __u16 match_flags;

 __u16 manf_id;
 __u16 card_id;

 __u8 func_id;


 __u8 function;


 __u8 device_no;

 __u32 prod_id_hash[4]
  __attribute__((aligned(sizeof(__u32))));



 const char * prod_id[4];






 kernel_ulong_t driver_info;

 char * cisfile;



};
# 312 "include/linux/mod_devicetable.h"
struct input_device_id {

 kernel_ulong_t flags;

 __u16 bustype;
 __u16 vendor;
 __u16 product;
 __u16 version;

 kernel_ulong_t evbit[0x1f / 64 + 1];
 kernel_ulong_t keybit[0x2ff / 64 + 1];
 kernel_ulong_t relbit[0x0f / 64 + 1];
 kernel_ulong_t absbit[0x3f / 64 + 1];
 kernel_ulong_t mscbit[0x07 / 64 + 1];
 kernel_ulong_t ledbit[0x0f / 64 + 1];
 kernel_ulong_t sndbit[0x07 / 64 + 1];
 kernel_ulong_t ffbit[0x7f / 64 + 1];
 kernel_ulong_t swbit[0x0f / 64 + 1];

 kernel_ulong_t driver_info;
};






struct eisa_device_id {
 char sig[8];
 kernel_ulong_t driver_data;
};



struct parisc_device_id {
 __u8 hw_type;
 __u8 hversion_rev;
 __u16 hversion;
 __u32 sversion;
};
# 362 "include/linux/mod_devicetable.h"
struct sdio_device_id {
 __u8 class;
 __u16 vendor;
 __u16 device;
 kernel_ulong_t driver_data
  __attribute__((aligned(sizeof(kernel_ulong_t))));
};


struct ssb_device_id {
 __u16 vendor;
 __u16 coreid;
 __u8 revision;
};
# 386 "include/linux/mod_devicetable.h"
struct bcma_device_id {
 __u16 manuf;
 __u16 id;
 __u8 rev;
 __u8 class;
};
# 402 "include/linux/mod_devicetable.h"
struct virtio_device_id {
 __u32 device;
 __u32 vendor;
};







struct i2c_device_id {
 char name[20];
 kernel_ulong_t driver_data
   __attribute__((aligned(sizeof(kernel_ulong_t))));
};






struct spi_device_id {
 char name[32];
 kernel_ulong_t driver_data
   __attribute__((aligned(sizeof(kernel_ulong_t))));
};


enum dmi_field {
 DMI_NONE,
 DMI_BIOS_VENDOR,
 DMI_BIOS_VERSION,
 DMI_BIOS_DATE,
 DMI_SYS_VENDOR,
 DMI_PRODUCT_NAME,
 DMI_PRODUCT_VERSION,
 DMI_PRODUCT_SERIAL,
 DMI_PRODUCT_UUID,
 DMI_BOARD_VENDOR,
 DMI_BOARD_NAME,
 DMI_BOARD_VERSION,
 DMI_BOARD_SERIAL,
 DMI_BOARD_ASSET_TAG,
 DMI_CHASSIS_VENDOR,
 DMI_CHASSIS_TYPE,
 DMI_CHASSIS_VERSION,
 DMI_CHASSIS_SERIAL,
 DMI_CHASSIS_ASSET_TAG,
 DMI_STRING_MAX,
};

struct dmi_strmatch {
 unsigned char slot;
 char substr[79];
};
# 468 "include/linux/mod_devicetable.h"
struct dmi_system_id {
 int (*callback)(const struct dmi_system_id *);
 const char *ident;
 struct dmi_strmatch matches[4];
 void *driver_data;
};
# 488 "include/linux/mod_devicetable.h"
struct platform_device_id {
 char name[20];
 kernel_ulong_t driver_data
   __attribute__((aligned(sizeof(kernel_ulong_t))));
};
# 515 "include/linux/mod_devicetable.h"
struct mdio_device_id {
 __u32 phy_id;
 __u32 phy_id_mask;
};

struct zorro_device_id {
 __u32 id;
 kernel_ulong_t driver_data;
};






struct isapnp_device_id {
 unsigned short card_vendor, card_device;
 unsigned short vendor, function;
 kernel_ulong_t driver_data;
};
# 44 "include/linux/pci.h" 2
# 53 "include/linux/pci.h"
# 1 "include/linux/device.h" 1
# 18 "include/linux/device.h"
# 1 "include/linux/klist.h" 1
# 19 "include/linux/klist.h"
struct klist_node;
struct klist {
 spinlock_t k_lock;
 struct list_head k_list;
 void (*get)(struct klist_node *);
 void (*put)(struct klist_node *);
} __attribute__ ((aligned (sizeof(void *))));
# 36 "include/linux/klist.h"
extern void klist_init(struct klist *k, void (*get)(struct klist_node *),
         void (*put)(struct klist_node *));

struct klist_node {
 void *n_klist;
 struct list_head n_node;
 struct kref n_ref;
};

extern void klist_add_tail(struct klist_node *n, struct klist *k);
extern void klist_add_head(struct klist_node *n, struct klist *k);
extern void klist_add_after(struct klist_node *n, struct klist_node *pos);
extern void klist_add_before(struct klist_node *n, struct klist_node *pos);

extern void klist_del(struct klist_node *n);
extern void klist_remove(struct klist_node *n);

extern int klist_node_attached(struct klist_node *n);


struct klist_iter {
 struct klist *i_klist;
 struct klist_node *i_cur;
};


extern void klist_iter_init(struct klist *k, struct klist_iter *i);
extern void klist_iter_init_node(struct klist *k, struct klist_iter *i,
     struct klist_node *n);
extern void klist_iter_exit(struct klist_iter *i);
extern struct klist_node *klist_next(struct klist_iter *i);
# 19 "include/linux/device.h" 2




# 1 "include/linux/module.h" 1
# 10 "include/linux/module.h"
# 1 "include/linux/stat.h" 1





# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/stat.h" 1
# 68 "/home/iago/torvalds/linux/arch/x86/include/asm/stat.h"
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
# 62 "include/linux/stat.h"
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
# 11 "include/linux/module.h" 2


# 1 "include/linux/kmod.h" 1
# 27 "include/linux/kmod.h"
# 1 "include/linux/sysctl.h" 1
# 29 "include/linux/sysctl.h"
struct completion;






struct __sysctl_args {
 int *name;
 int nlen;
 void *oldval;
 size_t *oldlenp;
 void *newval;
 size_t newlen;
 unsigned long __unused[4];
};





enum
{
 CTL_KERN=1,
 CTL_VM=2,
 CTL_NET=3,
 CTL_PROC=4,
 CTL_FS=5,
 CTL_DEBUG=6,
 CTL_DEV=7,
 CTL_BUS=8,
 CTL_ABI=9,
 CTL_CPU=10,
 CTL_ARLAN=254,
 CTL_S390DBF=5677,
 CTL_SUNRPC=7249,
 CTL_PM=9899,
 CTL_FRV=9898,
};


enum
{
 CTL_BUS_ISA=1
};


enum
{
 INOTIFY_MAX_USER_INSTANCES=1,
 INOTIFY_MAX_USER_WATCHES=2,
 INOTIFY_MAX_QUEUED_EVENTS=3
};


enum
{
 KERN_OSTYPE=1,
 KERN_OSRELEASE=2,
 KERN_OSREV=3,
 KERN_VERSION=4,
 KERN_SECUREMASK=5,
 KERN_PROF=6,
 KERN_NODENAME=7,
 KERN_DOMAINNAME=8,

 KERN_PANIC=15,
 KERN_REALROOTDEV=16,

 KERN_SPARC_REBOOT=21,
 KERN_CTLALTDEL=22,
 KERN_PRINTK=23,
 KERN_NAMETRANS=24,
 KERN_PPC_HTABRECLAIM=25,
 KERN_PPC_ZEROPAGED=26,
 KERN_PPC_POWERSAVE_NAP=27,
 KERN_MODPROBE=28,
 KERN_SG_BIG_BUFF=29,
 KERN_ACCT=30,
 KERN_PPC_L2CR=31,

 KERN_RTSIGNR=32,
 KERN_RTSIGMAX=33,

 KERN_SHMMAX=34,
 KERN_MSGMAX=35,
 KERN_MSGMNB=36,
 KERN_MSGPOOL=37,
 KERN_SYSRQ=38,
 KERN_MAX_THREADS=39,
  KERN_RANDOM=40,
  KERN_SHMALL=41,
  KERN_MSGMNI=42,
  KERN_SEM=43,
  KERN_SPARC_STOP_A=44,
  KERN_SHMMNI=45,
 KERN_OVERFLOWUID=46,
 KERN_OVERFLOWGID=47,
 KERN_SHMPATH=48,
 KERN_HOTPLUG=49,
 KERN_IEEE_EMULATION_WARNINGS=50,
 KERN_S390_USER_DEBUG_LOGGING=51,
 KERN_CORE_USES_PID=52,
 KERN_TAINTED=53,
 KERN_CADPID=54,
 KERN_PIDMAX=55,
   KERN_CORE_PATTERN=56,
 KERN_PANIC_ON_OOPS=57,
 KERN_HPPA_PWRSW=58,
 KERN_HPPA_UNALIGNED=59,
 KERN_PRINTK_RATELIMIT=60,
 KERN_PRINTK_RATELIMIT_BURST=61,
 KERN_PTY=62,
 KERN_NGROUPS_MAX=63,
 KERN_SPARC_SCONS_PWROFF=64,
 KERN_HZ_TIMER=65,
 KERN_UNKNOWN_NMI_PANIC=66,
 KERN_BOOTLOADER_TYPE=67,
 KERN_RANDOMIZE=68,
 KERN_SETUID_DUMPABLE=69,
 KERN_SPIN_RETRY=70,
 KERN_ACPI_VIDEO_FLAGS=71,
 KERN_IA64_UNALIGNED=72,
 KERN_COMPAT_LOG=73,
 KERN_MAX_LOCK_DEPTH=74,
 KERN_NMI_WATCHDOG=75,
 KERN_PANIC_ON_NMI=76,
};




enum
{
 VM_UNUSED1=1,
 VM_UNUSED2=2,
 VM_UNUSED3=3,
 VM_UNUSED4=4,
 VM_OVERCOMMIT_MEMORY=5,
 VM_UNUSED5=6,
 VM_UNUSED7=7,
 VM_UNUSED8=8,
 VM_UNUSED9=9,
 VM_PAGE_CLUSTER=10,
 VM_DIRTY_BACKGROUND=11,
 VM_DIRTY_RATIO=12,
 VM_DIRTY_WB_CS=13,
 VM_DIRTY_EXPIRE_CS=14,
 VM_NR_PDFLUSH_THREADS=15,
 VM_OVERCOMMIT_RATIO=16,
 VM_PAGEBUF=17,
 VM_HUGETLB_PAGES=18,
 VM_SWAPPINESS=19,
 VM_LOWMEM_RESERVE_RATIO=20,
 VM_MIN_FREE_KBYTES=21,
 VM_MAX_MAP_COUNT=22,
 VM_LAPTOP_MODE=23,
 VM_BLOCK_DUMP=24,
 VM_HUGETLB_GROUP=25,
 VM_VFS_CACHE_PRESSURE=26,
 VM_LEGACY_VA_LAYOUT=27,
 VM_SWAP_TOKEN_TIMEOUT=28,
 VM_DROP_PAGECACHE=29,
 VM_PERCPU_PAGELIST_FRACTION=30,
 VM_ZONE_RECLAIM_MODE=31,
 VM_MIN_UNMAPPED=32,
 VM_PANIC_ON_OOM=33,
 VM_VDSO_ENABLED=34,
 VM_MIN_SLAB=35,
};



enum
{
 NET_CORE=1,
 NET_ETHER=2,
 NET_802=3,
 NET_UNIX=4,
 NET_IPV4=5,
 NET_IPX=6,
 NET_ATALK=7,
 NET_NETROM=8,
 NET_AX25=9,
 NET_BRIDGE=10,
 NET_ROSE=11,
 NET_IPV6=12,
 NET_X25=13,
 NET_TR=14,
 NET_DECNET=15,
 NET_ECONET=16,
 NET_SCTP=17,
 NET_LLC=18,
 NET_NETFILTER=19,
 NET_DCCP=20,
 NET_IRDA=412,
};


enum
{
 RANDOM_POOLSIZE=1,
 RANDOM_ENTROPY_COUNT=2,
 RANDOM_READ_THRESH=3,
 RANDOM_WRITE_THRESH=4,
 RANDOM_BOOT_ID=5,
 RANDOM_UUID=6
};


enum
{
 PTY_MAX=1,
 PTY_NR=2
};


enum
{
 BUS_ISA_MEM_BASE=1,
 BUS_ISA_PORT_BASE=2,
 BUS_ISA_PORT_SHIFT=3
};


enum
{
 NET_CORE_WMEM_MAX=1,
 NET_CORE_RMEM_MAX=2,
 NET_CORE_WMEM_DEFAULT=3,
 NET_CORE_RMEM_DEFAULT=4,

 NET_CORE_MAX_BACKLOG=6,
 NET_CORE_FASTROUTE=7,
 NET_CORE_MSG_COST=8,
 NET_CORE_MSG_BURST=9,
 NET_CORE_OPTMEM_MAX=10,
 NET_CORE_HOT_LIST_LENGTH=11,
 NET_CORE_DIVERT_VERSION=12,
 NET_CORE_NO_CONG_THRESH=13,
 NET_CORE_NO_CONG=14,
 NET_CORE_LO_CONG=15,
 NET_CORE_MOD_CONG=16,
 NET_CORE_DEV_WEIGHT=17,
 NET_CORE_SOMAXCONN=18,
 NET_CORE_BUDGET=19,
 NET_CORE_AEVENT_ETIME=20,
 NET_CORE_AEVENT_RSEQTH=21,
 NET_CORE_WARNINGS=22,
};







enum
{
 NET_UNIX_DESTROY_DELAY=1,
 NET_UNIX_DELETE_DELAY=2,
 NET_UNIX_MAX_DGRAM_QLEN=3,
};


enum
{
 NET_NF_CONNTRACK_MAX=1,
 NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT=2,
 NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV=3,
 NET_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED=4,
 NET_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT=5,
 NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT=6,
 NET_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK=7,
 NET_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT=8,
 NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE=9,
 NET_NF_CONNTRACK_UDP_TIMEOUT=10,
 NET_NF_CONNTRACK_UDP_TIMEOUT_STREAM=11,
 NET_NF_CONNTRACK_ICMP_TIMEOUT=12,
 NET_NF_CONNTRACK_GENERIC_TIMEOUT=13,
 NET_NF_CONNTRACK_BUCKETS=14,
 NET_NF_CONNTRACK_LOG_INVALID=15,
 NET_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS=16,
 NET_NF_CONNTRACK_TCP_LOOSE=17,
 NET_NF_CONNTRACK_TCP_BE_LIBERAL=18,
 NET_NF_CONNTRACK_TCP_MAX_RETRANS=19,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED=20,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT=21,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED=22,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED=23,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT=24,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD=25,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT=26,
 NET_NF_CONNTRACK_COUNT=27,
 NET_NF_CONNTRACK_ICMPV6_TIMEOUT=28,
 NET_NF_CONNTRACK_FRAG6_TIMEOUT=29,
 NET_NF_CONNTRACK_FRAG6_LOW_THRESH=30,
 NET_NF_CONNTRACK_FRAG6_HIGH_THRESH=31,
 NET_NF_CONNTRACK_CHECKSUM=32,
};


enum
{

 NET_IPV4_FORWARD=8,
 NET_IPV4_DYNADDR=9,

 NET_IPV4_CONF=16,
 NET_IPV4_NEIGH=17,
 NET_IPV4_ROUTE=18,
 NET_IPV4_FIB_HASH=19,
 NET_IPV4_NETFILTER=20,

 NET_IPV4_TCP_TIMESTAMPS=33,
 NET_IPV4_TCP_WINDOW_SCALING=34,
 NET_IPV4_TCP_SACK=35,
 NET_IPV4_TCP_RETRANS_COLLAPSE=36,
 NET_IPV4_DEFAULT_TTL=37,
 NET_IPV4_AUTOCONFIG=38,
 NET_IPV4_NO_PMTU_DISC=39,
 NET_IPV4_TCP_SYN_RETRIES=40,
 NET_IPV4_IPFRAG_HIGH_THRESH=41,
 NET_IPV4_IPFRAG_LOW_THRESH=42,
 NET_IPV4_IPFRAG_TIME=43,
 NET_IPV4_TCP_MAX_KA_PROBES=44,
 NET_IPV4_TCP_KEEPALIVE_TIME=45,
 NET_IPV4_TCP_KEEPALIVE_PROBES=46,
 NET_IPV4_TCP_RETRIES1=47,
 NET_IPV4_TCP_RETRIES2=48,
 NET_IPV4_TCP_FIN_TIMEOUT=49,
 NET_IPV4_IP_MASQ_DEBUG=50,
 NET_TCP_SYNCOOKIES=51,
 NET_TCP_STDURG=52,
 NET_TCP_RFC1337=53,
 NET_TCP_SYN_TAILDROP=54,
 NET_TCP_MAX_SYN_BACKLOG=55,
 NET_IPV4_LOCAL_PORT_RANGE=56,
 NET_IPV4_ICMP_ECHO_IGNORE_ALL=57,
 NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS=58,
 NET_IPV4_ICMP_SOURCEQUENCH_RATE=59,
 NET_IPV4_ICMP_DESTUNREACH_RATE=60,
 NET_IPV4_ICMP_TIMEEXCEED_RATE=61,
 NET_IPV4_ICMP_PARAMPROB_RATE=62,
 NET_IPV4_ICMP_ECHOREPLY_RATE=63,
 NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES=64,
 NET_IPV4_IGMP_MAX_MEMBERSHIPS=65,
 NET_TCP_TW_RECYCLE=66,
 NET_IPV4_ALWAYS_DEFRAG=67,
 NET_IPV4_TCP_KEEPALIVE_INTVL=68,
 NET_IPV4_INET_PEER_THRESHOLD=69,
 NET_IPV4_INET_PEER_MINTTL=70,
 NET_IPV4_INET_PEER_MAXTTL=71,
 NET_IPV4_INET_PEER_GC_MINTIME=72,
 NET_IPV4_INET_PEER_GC_MAXTIME=73,
 NET_TCP_ORPHAN_RETRIES=74,
 NET_TCP_ABORT_ON_OVERFLOW=75,
 NET_TCP_SYNACK_RETRIES=76,
 NET_TCP_MAX_ORPHANS=77,
 NET_TCP_MAX_TW_BUCKETS=78,
 NET_TCP_FACK=79,
 NET_TCP_REORDERING=80,
 NET_TCP_ECN=81,
 NET_TCP_DSACK=82,
 NET_TCP_MEM=83,
 NET_TCP_WMEM=84,
 NET_TCP_RMEM=85,
 NET_TCP_APP_WIN=86,
 NET_TCP_ADV_WIN_SCALE=87,
 NET_IPV4_NONLOCAL_BIND=88,
 NET_IPV4_ICMP_RATELIMIT=89,
 NET_IPV4_ICMP_RATEMASK=90,
 NET_TCP_TW_REUSE=91,
 NET_TCP_FRTO=92,
 NET_TCP_LOW_LATENCY=93,
 NET_IPV4_IPFRAG_SECRET_INTERVAL=94,
 NET_IPV4_IGMP_MAX_MSF=96,
 NET_TCP_NO_METRICS_SAVE=97,
 NET_TCP_DEFAULT_WIN_SCALE=105,
 NET_TCP_MODERATE_RCVBUF=106,
 NET_TCP_TSO_WIN_DIVISOR=107,
 NET_TCP_BIC_BETA=108,
 NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR=109,
 NET_TCP_CONG_CONTROL=110,
 NET_TCP_ABC=111,
 NET_IPV4_IPFRAG_MAX_DIST=112,
  NET_TCP_MTU_PROBING=113,
 NET_TCP_BASE_MSS=114,
 NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS=115,
 NET_TCP_DMA_COPYBREAK=116,
 NET_TCP_SLOW_START_AFTER_IDLE=117,
 NET_CIPSOV4_CACHE_ENABLE=118,
 NET_CIPSOV4_CACHE_BUCKET_SIZE=119,
 NET_CIPSOV4_RBM_OPTFMT=120,
 NET_CIPSOV4_RBM_STRICTVALID=121,
 NET_TCP_AVAIL_CONG_CONTROL=122,
 NET_TCP_ALLOWED_CONG_CONTROL=123,
 NET_TCP_MAX_SSTHRESH=124,
 NET_TCP_FRTO_RESPONSE=125,
};

enum {
 NET_IPV4_ROUTE_FLUSH=1,
 NET_IPV4_ROUTE_MIN_DELAY=2,
 NET_IPV4_ROUTE_MAX_DELAY=3,
 NET_IPV4_ROUTE_GC_THRESH=4,
 NET_IPV4_ROUTE_MAX_SIZE=5,
 NET_IPV4_ROUTE_GC_MIN_INTERVAL=6,
 NET_IPV4_ROUTE_GC_TIMEOUT=7,
 NET_IPV4_ROUTE_GC_INTERVAL=8,
 NET_IPV4_ROUTE_REDIRECT_LOAD=9,
 NET_IPV4_ROUTE_REDIRECT_NUMBER=10,
 NET_IPV4_ROUTE_REDIRECT_SILENCE=11,
 NET_IPV4_ROUTE_ERROR_COST=12,
 NET_IPV4_ROUTE_ERROR_BURST=13,
 NET_IPV4_ROUTE_GC_ELASTICITY=14,
 NET_IPV4_ROUTE_MTU_EXPIRES=15,
 NET_IPV4_ROUTE_MIN_PMTU=16,
 NET_IPV4_ROUTE_MIN_ADVMSS=17,
 NET_IPV4_ROUTE_SECRET_INTERVAL=18,
 NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS=19,
};

enum
{
 NET_PROTO_CONF_ALL=-2,
 NET_PROTO_CONF_DEFAULT=-3


};

enum
{
 NET_IPV4_CONF_FORWARDING=1,
 NET_IPV4_CONF_MC_FORWARDING=2,
 NET_IPV4_CONF_PROXY_ARP=3,
 NET_IPV4_CONF_ACCEPT_REDIRECTS=4,
 NET_IPV4_CONF_SECURE_REDIRECTS=5,
 NET_IPV4_CONF_SEND_REDIRECTS=6,
 NET_IPV4_CONF_SHARED_MEDIA=7,
 NET_IPV4_CONF_RP_FILTER=8,
 NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE=9,
 NET_IPV4_CONF_BOOTP_RELAY=10,
 NET_IPV4_CONF_LOG_MARTIANS=11,
 NET_IPV4_CONF_TAG=12,
 NET_IPV4_CONF_ARPFILTER=13,
 NET_IPV4_CONF_MEDIUM_ID=14,
 NET_IPV4_CONF_NOXFRM=15,
 NET_IPV4_CONF_NOPOLICY=16,
 NET_IPV4_CONF_FORCE_IGMP_VERSION=17,
 NET_IPV4_CONF_ARP_ANNOUNCE=18,
 NET_IPV4_CONF_ARP_IGNORE=19,
 NET_IPV4_CONF_PROMOTE_SECONDARIES=20,
 NET_IPV4_CONF_ARP_ACCEPT=21,
 NET_IPV4_CONF_ARP_NOTIFY=22,
};


enum
{
 NET_IPV4_NF_CONNTRACK_MAX=1,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT=2,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV=3,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED=4,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT=5,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT=6,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK=7,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT=8,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE=9,
 NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT=10,
 NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT_STREAM=11,
 NET_IPV4_NF_CONNTRACK_ICMP_TIMEOUT=12,
 NET_IPV4_NF_CONNTRACK_GENERIC_TIMEOUT=13,
 NET_IPV4_NF_CONNTRACK_BUCKETS=14,
 NET_IPV4_NF_CONNTRACK_LOG_INVALID=15,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS=16,
 NET_IPV4_NF_CONNTRACK_TCP_LOOSE=17,
 NET_IPV4_NF_CONNTRACK_TCP_BE_LIBERAL=18,
 NET_IPV4_NF_CONNTRACK_TCP_MAX_RETRANS=19,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED=20,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT=21,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED=22,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED=23,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT=24,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD=25,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT=26,
 NET_IPV4_NF_CONNTRACK_COUNT=27,
 NET_IPV4_NF_CONNTRACK_CHECKSUM=28,
};


enum {
 NET_IPV6_CONF=16,
 NET_IPV6_NEIGH=17,
 NET_IPV6_ROUTE=18,
 NET_IPV6_ICMP=19,
 NET_IPV6_BINDV6ONLY=20,
 NET_IPV6_IP6FRAG_HIGH_THRESH=21,
 NET_IPV6_IP6FRAG_LOW_THRESH=22,
 NET_IPV6_IP6FRAG_TIME=23,
 NET_IPV6_IP6FRAG_SECRET_INTERVAL=24,
 NET_IPV6_MLD_MAX_MSF=25,
};

enum {
 NET_IPV6_ROUTE_FLUSH=1,
 NET_IPV6_ROUTE_GC_THRESH=2,
 NET_IPV6_ROUTE_MAX_SIZE=3,
 NET_IPV6_ROUTE_GC_MIN_INTERVAL=4,
 NET_IPV6_ROUTE_GC_TIMEOUT=5,
 NET_IPV6_ROUTE_GC_INTERVAL=6,
 NET_IPV6_ROUTE_GC_ELASTICITY=7,
 NET_IPV6_ROUTE_MTU_EXPIRES=8,
 NET_IPV6_ROUTE_MIN_ADVMSS=9,
 NET_IPV6_ROUTE_GC_MIN_INTERVAL_MS=10
};

enum {
 NET_IPV6_FORWARDING=1,
 NET_IPV6_HOP_LIMIT=2,
 NET_IPV6_MTU=3,
 NET_IPV6_ACCEPT_RA=4,
 NET_IPV6_ACCEPT_REDIRECTS=5,
 NET_IPV6_AUTOCONF=6,
 NET_IPV6_DAD_TRANSMITS=7,
 NET_IPV6_RTR_SOLICITS=8,
 NET_IPV6_RTR_SOLICIT_INTERVAL=9,
 NET_IPV6_RTR_SOLICIT_DELAY=10,
 NET_IPV6_USE_TEMPADDR=11,
 NET_IPV6_TEMP_VALID_LFT=12,
 NET_IPV6_TEMP_PREFERED_LFT=13,
 NET_IPV6_REGEN_MAX_RETRY=14,
 NET_IPV6_MAX_DESYNC_FACTOR=15,
 NET_IPV6_MAX_ADDRESSES=16,
 NET_IPV6_FORCE_MLD_VERSION=17,
 NET_IPV6_ACCEPT_RA_DEFRTR=18,
 NET_IPV6_ACCEPT_RA_PINFO=19,
 NET_IPV6_ACCEPT_RA_RTR_PREF=20,
 NET_IPV6_RTR_PROBE_INTERVAL=21,
 NET_IPV6_ACCEPT_RA_RT_INFO_MAX_PLEN=22,
 NET_IPV6_PROXY_NDP=23,
 NET_IPV6_ACCEPT_SOURCE_ROUTE=25,
 __NET_IPV6_MAX
};


enum {
 NET_IPV6_ICMP_RATELIMIT=1
};


enum {
 NET_NEIGH_MCAST_SOLICIT=1,
 NET_NEIGH_UCAST_SOLICIT=2,
 NET_NEIGH_APP_SOLICIT=3,
 NET_NEIGH_RETRANS_TIME=4,
 NET_NEIGH_REACHABLE_TIME=5,
 NET_NEIGH_DELAY_PROBE_TIME=6,
 NET_NEIGH_GC_STALE_TIME=7,
 NET_NEIGH_UNRES_QLEN=8,
 NET_NEIGH_PROXY_QLEN=9,
 NET_NEIGH_ANYCAST_DELAY=10,
 NET_NEIGH_PROXY_DELAY=11,
 NET_NEIGH_LOCKTIME=12,
 NET_NEIGH_GC_INTERVAL=13,
 NET_NEIGH_GC_THRESH1=14,
 NET_NEIGH_GC_THRESH2=15,
 NET_NEIGH_GC_THRESH3=16,
 NET_NEIGH_RETRANS_TIME_MS=17,
 NET_NEIGH_REACHABLE_TIME_MS=18,
};


enum {
 NET_DCCP_DEFAULT=1,
};


enum {
 NET_IPX_PPROP_BROADCASTING=1,
 NET_IPX_FORWARDING=2
};


enum {
 NET_LLC2=1,
 NET_LLC_STATION=2,
};


enum {
 NET_LLC2_TIMEOUT=1,
};


enum {
 NET_LLC_STATION_ACK_TIMEOUT=1,
};


enum {
 NET_LLC2_ACK_TIMEOUT=1,
 NET_LLC2_P_TIMEOUT=2,
 NET_LLC2_REJ_TIMEOUT=3,
 NET_LLC2_BUSY_TIMEOUT=4,
};


enum {
 NET_ATALK_AARP_EXPIRY_TIME=1,
 NET_ATALK_AARP_TICK_TIME=2,
 NET_ATALK_AARP_RETRANSMIT_LIMIT=3,
 NET_ATALK_AARP_RESOLVE_TIME=4
};



enum {
 NET_NETROM_DEFAULT_PATH_QUALITY=1,
 NET_NETROM_OBSOLESCENCE_COUNT_INITIALISER=2,
 NET_NETROM_NETWORK_TTL_INITIALISER=3,
 NET_NETROM_TRANSPORT_TIMEOUT=4,
 NET_NETROM_TRANSPORT_MAXIMUM_TRIES=5,
 NET_NETROM_TRANSPORT_ACKNOWLEDGE_DELAY=6,
 NET_NETROM_TRANSPORT_BUSY_DELAY=7,
 NET_NETROM_TRANSPORT_REQUESTED_WINDOW_SIZE=8,
 NET_NETROM_TRANSPORT_NO_ACTIVITY_TIMEOUT=9,
 NET_NETROM_ROUTING_CONTROL=10,
 NET_NETROM_LINK_FAILS_COUNT=11,
 NET_NETROM_RESET=12
};


enum {
 NET_AX25_IP_DEFAULT_MODE=1,
 NET_AX25_DEFAULT_MODE=2,
 NET_AX25_BACKOFF_TYPE=3,
 NET_AX25_CONNECT_MODE=4,
 NET_AX25_STANDARD_WINDOW=5,
 NET_AX25_EXTENDED_WINDOW=6,
 NET_AX25_T1_TIMEOUT=7,
 NET_AX25_T2_TIMEOUT=8,
 NET_AX25_T3_TIMEOUT=9,
 NET_AX25_IDLE_TIMEOUT=10,
 NET_AX25_N2=11,
 NET_AX25_PACLEN=12,
 NET_AX25_PROTOCOL=13,
 NET_AX25_DAMA_SLAVE_TIMEOUT=14
};


enum {
 NET_ROSE_RESTART_REQUEST_TIMEOUT=1,
 NET_ROSE_CALL_REQUEST_TIMEOUT=2,
 NET_ROSE_RESET_REQUEST_TIMEOUT=3,
 NET_ROSE_CLEAR_REQUEST_TIMEOUT=4,
 NET_ROSE_ACK_HOLD_BACK_TIMEOUT=5,
 NET_ROSE_ROUTING_CONTROL=6,
 NET_ROSE_LINK_FAIL_TIMEOUT=7,
 NET_ROSE_MAX_VCS=8,
 NET_ROSE_WINDOW_SIZE=9,
 NET_ROSE_NO_ACTIVITY_TIMEOUT=10
};


enum {
 NET_X25_RESTART_REQUEST_TIMEOUT=1,
 NET_X25_CALL_REQUEST_TIMEOUT=2,
 NET_X25_RESET_REQUEST_TIMEOUT=3,
 NET_X25_CLEAR_REQUEST_TIMEOUT=4,
 NET_X25_ACK_HOLD_BACK_TIMEOUT=5,
 NET_X25_FORWARD=6
};


enum
{
 NET_TR_RIF_TIMEOUT=1
};


enum {
 NET_DECNET_NODE_TYPE = 1,
 NET_DECNET_NODE_ADDRESS = 2,
 NET_DECNET_NODE_NAME = 3,
 NET_DECNET_DEFAULT_DEVICE = 4,
 NET_DECNET_TIME_WAIT = 5,
 NET_DECNET_DN_COUNT = 6,
 NET_DECNET_DI_COUNT = 7,
 NET_DECNET_DR_COUNT = 8,
 NET_DECNET_DST_GC_INTERVAL = 9,
 NET_DECNET_CONF = 10,
 NET_DECNET_NO_FC_MAX_CWND = 11,
 NET_DECNET_MEM = 12,
 NET_DECNET_RMEM = 13,
 NET_DECNET_WMEM = 14,
 NET_DECNET_DEBUG_LEVEL = 255
};


enum {
 NET_DECNET_CONF_LOOPBACK = -2,
 NET_DECNET_CONF_DDCMP = -3,
 NET_DECNET_CONF_PPP = -4,
 NET_DECNET_CONF_X25 = -5,
 NET_DECNET_CONF_GRE = -6,
 NET_DECNET_CONF_ETHER = -7


};


enum {
 NET_DECNET_CONF_DEV_PRIORITY = 1,
 NET_DECNET_CONF_DEV_T1 = 2,
 NET_DECNET_CONF_DEV_T2 = 3,
 NET_DECNET_CONF_DEV_T3 = 4,
 NET_DECNET_CONF_DEV_FORWARDING = 5,
 NET_DECNET_CONF_DEV_BLKSIZE = 6,
 NET_DECNET_CONF_DEV_STATE = 7
};


enum {
 NET_SCTP_RTO_INITIAL = 1,
 NET_SCTP_RTO_MIN = 2,
 NET_SCTP_RTO_MAX = 3,
 NET_SCTP_RTO_ALPHA = 4,
 NET_SCTP_RTO_BETA = 5,
 NET_SCTP_VALID_COOKIE_LIFE = 6,
 NET_SCTP_ASSOCIATION_MAX_RETRANS = 7,
 NET_SCTP_PATH_MAX_RETRANS = 8,
 NET_SCTP_MAX_INIT_RETRANSMITS = 9,
 NET_SCTP_HB_INTERVAL = 10,
 NET_SCTP_PRESERVE_ENABLE = 11,
 NET_SCTP_MAX_BURST = 12,
 NET_SCTP_ADDIP_ENABLE = 13,
 NET_SCTP_PRSCTP_ENABLE = 14,
 NET_SCTP_SNDBUF_POLICY = 15,
 NET_SCTP_SACK_TIMEOUT = 16,
 NET_SCTP_RCVBUF_POLICY = 17,
};


enum {
 NET_BRIDGE_NF_CALL_ARPTABLES = 1,
 NET_BRIDGE_NF_CALL_IPTABLES = 2,
 NET_BRIDGE_NF_CALL_IP6TABLES = 3,
 NET_BRIDGE_NF_FILTER_VLAN_TAGGED = 4,
 NET_BRIDGE_NF_FILTER_PPPOE_TAGGED = 5,
};


enum {
 NET_IRDA_DISCOVERY=1,
 NET_IRDA_DEVNAME=2,
 NET_IRDA_DEBUG=3,
 NET_IRDA_FAST_POLL=4,
 NET_IRDA_DISCOVERY_SLOTS=5,
 NET_IRDA_DISCOVERY_TIMEOUT=6,
 NET_IRDA_SLOT_TIMEOUT=7,
 NET_IRDA_MAX_BAUD_RATE=8,
 NET_IRDA_MIN_TX_TURN_TIME=9,
 NET_IRDA_MAX_TX_DATA_SIZE=10,
 NET_IRDA_MAX_TX_WINDOW=11,
 NET_IRDA_MAX_NOREPLY_TIME=12,
 NET_IRDA_WARN_NOREPLY_TIME=13,
 NET_IRDA_LAP_KEEPALIVE_TIME=14,
};



enum
{
 FS_NRINODE=1,
 FS_STATINODE=2,
 FS_MAXINODE=3,
 FS_NRDQUOT=4,
 FS_MAXDQUOT=5,
 FS_NRFILE=6,
 FS_MAXFILE=7,
 FS_DENTRY=8,
 FS_NRSUPER=9,
 FS_MAXSUPER=10,
 FS_OVERFLOWUID=11,
 FS_OVERFLOWGID=12,
 FS_LEASES=13,
 FS_DIR_NOTIFY=14,
 FS_LEASE_TIME=15,
 FS_DQSTATS=16,
 FS_XFS=17,
 FS_AIO_NR=18,
 FS_AIO_MAX_NR=19,
 FS_INOTIFY=20,
 FS_OCFS2=988,
};


enum {
 FS_DQ_LOOKUPS = 1,
 FS_DQ_DROPS = 2,
 FS_DQ_READS = 3,
 FS_DQ_WRITES = 4,
 FS_DQ_CACHE_HITS = 5,
 FS_DQ_ALLOCATED = 6,
 FS_DQ_FREE = 7,
 FS_DQ_SYNCS = 8,
 FS_DQ_WARNINGS = 9,
};




enum {
 DEV_CDROM=1,
 DEV_HWMON=2,
 DEV_PARPORT=3,
 DEV_RAID=4,
 DEV_MAC_HID=5,
 DEV_SCSI=6,
 DEV_IPMI=7,
};


enum {
 DEV_CDROM_INFO=1,
 DEV_CDROM_AUTOCLOSE=2,
 DEV_CDROM_AUTOEJECT=3,
 DEV_CDROM_DEBUG=4,
 DEV_CDROM_LOCK=5,
 DEV_CDROM_CHECK_MEDIA=6
};


enum {
 DEV_PARPORT_DEFAULT=-3
};


enum {
 DEV_RAID_SPEED_LIMIT_MIN=1,
 DEV_RAID_SPEED_LIMIT_MAX=2
};


enum {
 DEV_PARPORT_DEFAULT_TIMESLICE=1,
 DEV_PARPORT_DEFAULT_SPINTIME=2
};


enum {
 DEV_PARPORT_SPINTIME=1,
 DEV_PARPORT_BASE_ADDR=2,
 DEV_PARPORT_IRQ=3,
 DEV_PARPORT_DMA=4,
 DEV_PARPORT_MODES=5,
 DEV_PARPORT_DEVICES=6,
 DEV_PARPORT_AUTOPROBE=16
};


enum {
 DEV_PARPORT_DEVICES_ACTIVE=-3,
};


enum {
 DEV_PARPORT_DEVICE_TIMESLICE=1,
};


enum {
 DEV_MAC_HID_KEYBOARD_SENDS_LINUX_KEYCODES=1,
 DEV_MAC_HID_KEYBOARD_LOCK_KEYCODES=2,
 DEV_MAC_HID_MOUSE_BUTTON_EMULATION=3,
 DEV_MAC_HID_MOUSE_BUTTON2_KEYCODE=4,
 DEV_MAC_HID_MOUSE_BUTTON3_KEYCODE=5,
 DEV_MAC_HID_ADB_MOUSE_SENDS_KEYCODES=6
};


enum {
 DEV_SCSI_LOGGING_LEVEL=1,
};


enum {
 DEV_IPMI_POWEROFF_POWERCYCLE=1,
};


enum
{
 ABI_DEFHANDLER_COFF=1,
 ABI_DEFHANDLER_ELF=2,
 ABI_DEFHANDLER_LCALL7=3,
 ABI_DEFHANDLER_LIBCSO=4,
 ABI_TRACE=5,
 ABI_FAKE_UTSNAME=6,
};



# 1 "include/linux/rcupdate.h" 1
# 47 "include/linux/rcupdate.h"
extern int rcutorture_runnable;



extern void rcutorture_record_test_transition(void);
extern void rcutorture_record_progress(unsigned long vernum);
# 72 "include/linux/rcupdate.h"
struct rcu_head {
 struct rcu_head *next;
 void (*func)(struct rcu_head *head);
};


extern void call_rcu_sched(struct rcu_head *head,
      void (*func)(struct rcu_head *rcu));
extern void synchronize_sched(void);
extern void rcu_barrier_bh(void);
extern void rcu_barrier_sched(void);

static inline void __rcu_read_lock_bh(void)
{
 local_bh_disable();
}

static inline void __rcu_read_unlock_bh(void)
{
 local_bh_enable();
}
# 110 "include/linux/rcupdate.h"
static inline void __rcu_read_lock(void)
{
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
}

static inline void __rcu_read_unlock(void)
{
 do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
}

static inline void synchronize_rcu(void)
{
 synchronize_sched();
}

static inline int rcu_preempt_depth(void)
{
 return 0;
}




extern void rcu_sched_qs(int cpu);
extern void rcu_bh_qs(int cpu);
extern void rcu_check_callbacks(int cpu, int user);
struct notifier_block;



extern void rcu_enter_nohz(void);
extern void rcu_exit_nohz(void);
# 156 "include/linux/rcupdate.h"
# 1 "include/linux/rcutree.h" 1
# 33 "include/linux/rcutree.h"
extern void rcu_init(void);
extern void rcu_note_context_switch(int cpu);
extern int rcu_needs_cpu(int cpu);
extern void rcu_cpu_stall_reset(void);






static inline void rcu_virt_note_context_switch(int cpu)
{
 rcu_note_context_switch(cpu);
}







static inline void exit_rcu(void)
{
}



extern void synchronize_rcu_bh(void);
extern void synchronize_sched_expedited(void);
extern void synchronize_rcu_expedited(void);

static inline void synchronize_rcu_bh_expedited(void)
{
 synchronize_sched_expedited();
}

extern void rcu_barrier(void);

extern unsigned long rcutorture_testseq;
extern unsigned long rcutorture_vernum;
extern long rcu_batches_completed(void);
extern long rcu_batches_completed_bh(void);
extern long rcu_batches_completed_sched(void);

extern void rcu_force_quiescent_state(void);
extern void rcu_bh_force_quiescent_state(void);
extern void rcu_sched_force_quiescent_state(void);


static inline int rcu_blocking_is_gp(void)
{
 return cpumask_weight(cpu_online_mask) == 1;
}

extern void rcu_scheduler_starting(void);
extern int rcu_scheduler_active __attribute__((__section__(".data..read_mostly")));
# 157 "include/linux/rcupdate.h" 2
# 170 "include/linux/rcupdate.h"
extern void init_rcu_head_on_stack(struct rcu_head *head);
extern void destroy_rcu_head_on_stack(struct rcu_head *head);
# 184 "include/linux/rcupdate.h"
extern struct lockdep_map rcu_lock_map;




extern struct lockdep_map rcu_bh_lock_map;




extern struct lockdep_map rcu_sched_lock_map;





extern int debug_lockdep_rcu_enabled(void);
# 214 "include/linux/rcupdate.h"
static inline int rcu_read_lock_held(void)
{
 if (!debug_lockdep_rcu_enabled())
  return 1;
 return lock_is_held(&rcu_lock_map);
}





extern int rcu_read_lock_bh_held(void);
# 243 "include/linux/rcupdate.h"
static inline int rcu_read_lock_sched_held(void)
{
 int lockdep_opinion = 0;

 if (!debug_lockdep_rcu_enabled())
  return 1;
 if (debug_locks)
  lockdep_opinion = lock_is_held(&rcu_sched_lock_map);
 return lockdep_opinion || (current_thread_info()->preempt_count) != 0 || ({ unsigned long _flags; do { ({ unsigned long __dummy; typeof(_flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); _flags = arch_local_save_flags(); } while (0); ({ ({ unsigned long __dummy; typeof(_flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_irqs_disabled_flags(_flags); }); });
}
# 295 "include/linux/rcupdate.h"
extern int rcu_my_thread_group_empty(void);
# 590 "include/linux/rcupdate.h"
static inline void rcu_read_lock(void)
{
 __rcu_read_lock();
 (void)0;
 lock_acquire(&rcu_lock_map, 0, 0, 2, 1, ((void *)0), ({ __label__ __here; __here: (unsigned long)&&__here; }));
}
# 612 "include/linux/rcupdate.h"
static inline void rcu_read_unlock(void)
{
 lock_release(&rcu_lock_map, 1, ({ __label__ __here; __here: (unsigned long)&&__here; }));
 (void)0;
 __rcu_read_unlock();
}
# 631 "include/linux/rcupdate.h"
static inline void rcu_read_lock_bh(void)
{
 __rcu_read_lock_bh();
 (void)0;
 lock_acquire(&rcu_bh_lock_map, 0, 0, 2, 1, ((void *)0), ({ __label__ __here; __here: (unsigned long)&&__here; }));
}






static inline void rcu_read_unlock_bh(void)
{
 lock_release(&rcu_bh_lock_map, 1, ({ __label__ __here; __here: (unsigned long)&&__here; }));
 (void)0;
 __rcu_read_unlock_bh();
}
# 658 "include/linux/rcupdate.h"
static inline void rcu_read_lock_sched(void)
{
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 (void)0;
 lock_acquire(&rcu_sched_lock_map, 0, 0, 2, 1, ((void *)0), ({ __label__ __here; __here: (unsigned long)&&__here; }));
}


static inline __attribute__((no_instrument_function)) void rcu_read_lock_sched_notrace(void)
{
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 (void)0;
}






static inline void rcu_read_unlock_sched(void)
{
 lock_release(&rcu_sched_lock_map, 1, ({ __label__ __here; __here: (unsigned long)&&__here; }));
 (void)0;
 do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
}


static inline __attribute__((no_instrument_function)) void rcu_read_unlock_sched_notrace(void)
{
 (void)0;
 do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
}
# 721 "include/linux/rcupdate.h"
struct rcu_synchronize {
 struct rcu_head head;
 struct completion completion;
};

extern void wakeme_after_rcu(struct rcu_head *head);
# 771 "include/linux/rcupdate.h"
extern void call_rcu_bh(struct rcu_head *head,
   void (*func)(struct rcu_head *head));
# 784 "include/linux/rcupdate.h"
extern struct debug_obj_descr rcuhead_debug_descr;

static inline void debug_rcu_head_queue(struct rcu_head *head)
{
 ({ static bool __warned; int __ret_warn_once = !!((unsigned long)head & 0x3); if (__builtin_expect(!!(__ret_warn_once), 0)) if (({ int __ret_warn_on = !!(!__warned); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath_null("include/linux/rcupdate.h", 788); __builtin_expect(!!(__ret_warn_on), 0); })) __warned = true; __builtin_expect(!!(__ret_warn_once), 0); });
 debug_object_activate(head, &rcuhead_debug_descr);
 debug_object_active_state(head, &rcuhead_debug_descr,
      0,
      1);
}

static inline void debug_rcu_head_unqueue(struct rcu_head *head)
{
 debug_object_active_state(head, &rcuhead_debug_descr,
      1,
      0);
 debug_object_deactivate(head, &rcuhead_debug_descr);
}
# 812 "include/linux/rcupdate.h"
static inline __attribute__((always_inline)) bool __is_kfree_rcu_offset(unsigned long offset)
{
 return offset < 4096;
}

static inline __attribute__((always_inline))
void __kfree_rcu(struct rcu_head *head, unsigned long offset)
{
 typedef void (*rcu_callback)(struct rcu_head *);

 do { ((void)sizeof(char[1 - 2*!!(!__builtin_constant_p(offset))])); if (!__builtin_constant_p(offset)) __build_bug_on_failed = 1; } while(0);


 do { ((void)sizeof(char[1 - 2*!!(!__is_kfree_rcu_offset(offset))])); if (!__is_kfree_rcu_offset(offset)) __build_bug_on_failed = 1; } while(0);

 call_rcu_sched(head, (rcu_callback)offset);
}

extern void kfree(const void *);

static inline void __rcu_reclaim(struct rcu_head *head)
{
 unsigned long offset = (unsigned long)head->func;

 if (__is_kfree_rcu_offset(offset))
  kfree((void *)head - offset);
 else
  head->func(head);
}
# 934 "include/linux/sysctl.h" 2


struct ctl_table;
struct nsproxy;
struct ctl_table_root;

struct ctl_table_set {
 struct list_head list;
 struct ctl_table_set *parent;
 int (*is_seen)(struct ctl_table_set *);
};

extern void setup_sysctl_set(struct ctl_table_set *p,
 struct ctl_table_set *parent,
 int (*is_seen)(struct ctl_table_set *));

struct ctl_table_header;

extern void sysctl_head_get(struct ctl_table_header *);
extern void sysctl_head_put(struct ctl_table_header *);
extern int sysctl_is_seen(struct ctl_table_header *);
extern struct ctl_table_header *sysctl_head_grab(struct ctl_table_header *);
extern struct ctl_table_header *sysctl_head_next(struct ctl_table_header *prev);
extern struct ctl_table_header *__sysctl_head_next(struct nsproxy *namespaces,
      struct ctl_table_header *prev);
extern void sysctl_head_finish(struct ctl_table_header *prev);
extern int sysctl_perm(struct ctl_table_root *root,
  struct ctl_table *table, int op);

typedef struct ctl_table ctl_table;

typedef int proc_handler (struct ctl_table *ctl, int write,
     void *buffer, size_t *lenp, loff_t *ppos);

extern int proc_dostring(struct ctl_table *, int,
    void *, size_t *, loff_t *);
extern int proc_dointvec(struct ctl_table *, int,
    void *, size_t *, loff_t *);
extern int proc_dointvec_minmax(struct ctl_table *, int,
    void *, size_t *, loff_t *);
extern int proc_dointvec_jiffies(struct ctl_table *, int,
     void *, size_t *, loff_t *);
extern int proc_dointvec_userhz_jiffies(struct ctl_table *, int,
     void *, size_t *, loff_t *);
extern int proc_dointvec_ms_jiffies(struct ctl_table *, int,
        void *, size_t *, loff_t *);
extern int proc_doulongvec_minmax(struct ctl_table *, int,
      void *, size_t *, loff_t *);
extern int proc_doulongvec_ms_jiffies_minmax(struct ctl_table *table, int,
          void *, size_t *, loff_t *);
extern int proc_do_large_bitmap(struct ctl_table *, int,
    void *, size_t *, loff_t *);
# 1015 "include/linux/sysctl.h"
struct ctl_table
{
 const char *procname;
 void *data;
 int maxlen;
 mode_t mode;
 struct ctl_table *child;
 struct ctl_table *parent;
 proc_handler *proc_handler;
 void *extra1;
 void *extra2;
};

struct ctl_table_root {
 struct list_head root_list;
 struct ctl_table_set default_set;
 struct ctl_table_set *(*lookup)(struct ctl_table_root *root,
        struct nsproxy *namespaces);
 int (*permissions)(struct ctl_table_root *root,
   struct nsproxy *namespaces, struct ctl_table *table);
};



struct ctl_table_header
{
 union {
  struct {
   struct ctl_table *ctl_table;
   struct list_head ctl_entry;
   int used;
   int count;
  };
  struct rcu_head rcu;
 };
 struct completion *unregistering;
 struct ctl_table *ctl_table_arg;
 struct ctl_table_root *root;
 struct ctl_table_set *set;
 struct ctl_table *attached_by;
 struct ctl_table *attached_to;
 struct ctl_table_header *parent;
};


struct ctl_path {
 const char *procname;
};

void register_sysctl_root(struct ctl_table_root *root);
struct ctl_table_header *__register_sysctl_paths(
 struct ctl_table_root *root, struct nsproxy *namespaces,
 const struct ctl_path *path, struct ctl_table *table);
struct ctl_table_header *register_sysctl_table(struct ctl_table * table);
struct ctl_table_header *register_sysctl_paths(const struct ctl_path *path,
      struct ctl_table *table);

void unregister_sysctl_table(struct ctl_table_header * table);
int sysctl_check_table(struct nsproxy *namespaces, struct ctl_table *table);
# 28 "include/linux/kmod.h" 2




extern char modprobe_path[];


extern int __request_module(bool wait, const char *name, ...)
 __attribute__((format(printf, 2, 3)));
# 48 "include/linux/kmod.h"
struct cred;
struct file;

enum umh_wait {
 UMH_NO_WAIT = -1,
 UMH_WAIT_EXEC = 0,
 UMH_WAIT_PROC = 1,
};

struct subprocess_info {
 struct work_struct work;
 struct completion *complete;
 char *path;
 char **argv;
 char **envp;
 enum umh_wait wait;
 int retval;
 int (*init)(struct subprocess_info *info, struct cred *new);
 void (*cleanup)(struct subprocess_info *info);
 void *data;
};


struct subprocess_info *call_usermodehelper_setup(char *path, char **argv,
        char **envp, gfp_t gfp_mask);


void call_usermodehelper_setfns(struct subprocess_info *info,
      int (*init)(struct subprocess_info *info, struct cred *new),
      void (*cleanup)(struct subprocess_info *info),
      void *data);


int call_usermodehelper_exec(struct subprocess_info *info, enum umh_wait wait);



void call_usermodehelper_freeinfo(struct subprocess_info *info);

static inline int
call_usermodehelper_fns(char *path, char **argv, char **envp,
   enum umh_wait wait,
   int (*init)(struct subprocess_info *info, struct cred *new),
   void (*cleanup)(struct subprocess_info *), void *data)
{
 struct subprocess_info *info;
 gfp_t gfp_mask = (wait == UMH_NO_WAIT) ? ((( gfp_t)0x20u)) : ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u));

 info = call_usermodehelper_setup(path, argv, envp, gfp_mask);

 if (info == ((void *)0))
  return -12;

 call_usermodehelper_setfns(info, init, cleanup, data);

 return call_usermodehelper_exec(info, wait);
}

static inline int
call_usermodehelper(char *path, char **argv, char **envp, enum umh_wait wait)
{
 return call_usermodehelper_fns(path, argv, envp, wait,
           ((void *)0), ((void *)0), ((void *)0));
}

extern struct ctl_table usermodehelper_table[];

extern void usermodehelper_init(void);

extern int usermodehelper_disable(void);
extern void usermodehelper_enable(void);
extern bool usermodehelper_is_disabled(void);
# 14 "include/linux/module.h" 2
# 1 "include/linux/elf.h" 1




# 1 "include/linux/elf-em.h" 1
# 6 "include/linux/elf.h" 2

# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/elf.h" 1
# 9 "/home/iago/torvalds/linux/arch/x86/include/asm/elf.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/user.h" 1






# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/user_64.h" 1
# 50 "/home/iago/torvalds/linux/arch/x86/include/asm/user_64.h"
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
 unsigned long r15;
 unsigned long r14;
 unsigned long r13;
 unsigned long r12;
 unsigned long bp;
 unsigned long bx;
 unsigned long r11;
 unsigned long r10;
 unsigned long r9;
 unsigned long r8;
 unsigned long ax;
 unsigned long cx;
 unsigned long dx;
 unsigned long si;
 unsigned long di;
 unsigned long orig_ax;
 unsigned long ip;
 unsigned long cs;
 unsigned long flags;
 unsigned long sp;
 unsigned long ss;
 unsigned long fs_base;
 unsigned long gs_base;
 unsigned long ds;
 unsigned long es;
 unsigned long fs;
 unsigned long gs;
};





struct user {


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
  unsigned long u_ar0;

  struct user_i387_struct *u_fpstate;
  unsigned long magic;
  char u_comm[32];
  unsigned long u_debugreg[8];
  unsigned long error_code;
  unsigned long fault_address;
};
# 8 "/home/iago/torvalds/linux/arch/x86/include/asm/user.h" 2




struct user_ymmh_regs {

 __u32 ymmh_space[64];
};

struct user_xsave_hdr {
 __u64 xstate_bv;
 __u64 reserved1[2];
 __u64 reserved2[5];
};
# 53 "/home/iago/torvalds/linux/arch/x86/include/asm/user.h"
struct user_xstateregs {
 struct {
  __u64 fpx_space[58];
  __u64 xstate_fx_sw[6];
 } i387;
 struct user_xsave_hdr xsave_hdr;
 struct user_ymmh_regs ymmh;

};
# 10 "/home/iago/torvalds/linux/arch/x86/include/asm/elf.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/auxvec.h" 1
# 11 "/home/iago/torvalds/linux/arch/x86/include/asm/elf.h" 2

typedef unsigned long elf_greg_t;


typedef elf_greg_t elf_gregset_t[(sizeof(struct user_regs_struct) / sizeof(elf_greg_t))];

typedef struct user_i387_struct elf_fpregset_t;
# 75 "/home/iago/torvalds/linux/arch/x86/include/asm/elf.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/vdso.h" 1




extern const char VDSO32_PRELINK[];
# 22 "/home/iago/torvalds/linux/arch/x86/include/asm/vdso.h"
extern void __kernel_sigreturn;
extern void __kernel_rt_sigreturn;





extern const char vdso32_int80_start, vdso32_int80_end;
extern const char vdso32_syscall_start, vdso32_syscall_end;
extern const char vdso32_sysenter_start, vdso32_sysenter_end;
# 76 "/home/iago/torvalds/linux/arch/x86/include/asm/elf.h" 2

extern unsigned int vdso_enabled;
# 160 "/home/iago/torvalds/linux/arch/x86/include/asm/elf.h"
static inline void elf_common_init(struct thread_struct *t,
       struct pt_regs *regs, const u16 ds)
{
 regs->ax = regs->bx = regs->cx = regs->dx = 0;
 regs->si = regs->di = regs->bp = 0;
 regs->r8 = regs->r9 = regs->r10 = regs->r11 = 0;
 regs->r12 = regs->r13 = regs->r14 = regs->r15 = 0;
 t->fs = t->gs = 0;
 t->fsindex = t->gsindex = 0;
 t->ds = t->es = ds;
}







void start_thread_ia32(struct pt_regs *regs, u32 new_ip, u32 new_sp);


void set_personality_ia32(void);
# 226 "/home/iago/torvalds/linux/arch/x86/include/asm/elf.h"
extern void set_personality_64bit(void);
extern unsigned int sysctl_vsyscall32;
extern int force_personality32;
# 264 "/home/iago/torvalds/linux/arch/x86/include/asm/elf.h"
struct task_struct;
# 311 "/home/iago/torvalds/linux/arch/x86/include/asm/elf.h"
struct linux_binprm;


extern int arch_setup_additional_pages(struct linux_binprm *bprm,
           int uses_interp);

extern int syscall32_setup_pages(struct linux_binprm *, int exstack);


extern unsigned long arch_randomize_brk(struct mm_struct *mm);
# 8 "include/linux/elf.h" 2


struct file;
# 20 "include/linux/elf.h"
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
# 149 "include/linux/elf.h"
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
# 172 "include/linux/elf.h"
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
# 311 "include/linux/elf.h"
typedef struct elf32_shdr {
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
# 402 "include/linux/elf.h"
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
# 428 "include/linux/elf.h"
extern Elf64_Dyn _DYNAMIC [];
# 440 "include/linux/elf.h"
static inline int elf_coredump_extra_notes_size(void) { return 0; }
static inline int elf_coredump_extra_notes_write(struct file *file,
   loff_t *foffset) { return 0; }
# 15 "include/linux/module.h" 2


# 1 "include/linux/moduleparam.h" 1
# 34 "include/linux/moduleparam.h"
struct kernel_param;

struct kernel_param_ops {

 int (*set)(const char *val, const struct kernel_param *kp);

 int (*get)(char *buffer, const struct kernel_param *kp);

 void (*free)(void *arg);
};




struct kernel_param {
 const char *name;
 const struct kernel_param_ops *ops;
 u16 perm;
 u16 flags;
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
 unsigned int elemsize;
 unsigned int *num;
 const struct kernel_param_ops *ops;
 void *elem;
};
# 166 "include/linux/moduleparam.h"
static inline int
__check_old_set_param(int (*oldset)(const char *, struct kernel_param *))
{
 return 0;
}
# 217 "include/linux/moduleparam.h"
extern void __kernel_param_lock(void);
extern void __kernel_param_unlock(void);
# 266 "include/linux/moduleparam.h"
extern int parse_args(const char *name,
        char *args,
        const struct kernel_param *params,
        unsigned num,
        int (*unknown)(char *param, char *val));



extern void destroy_params(const struct kernel_param *params, unsigned num);
# 288 "include/linux/moduleparam.h"
extern struct kernel_param_ops param_ops_byte;
extern int param_set_byte(const char *val, const struct kernel_param *kp);
extern int param_get_byte(char *buffer, const struct kernel_param *kp);


extern struct kernel_param_ops param_ops_short;
extern int param_set_short(const char *val, const struct kernel_param *kp);
extern int param_get_short(char *buffer, const struct kernel_param *kp);


extern struct kernel_param_ops param_ops_ushort;
extern int param_set_ushort(const char *val, const struct kernel_param *kp);
extern int param_get_ushort(char *buffer, const struct kernel_param *kp);


extern struct kernel_param_ops param_ops_int;
extern int param_set_int(const char *val, const struct kernel_param *kp);
extern int param_get_int(char *buffer, const struct kernel_param *kp);


extern struct kernel_param_ops param_ops_uint;
extern int param_set_uint(const char *val, const struct kernel_param *kp);
extern int param_get_uint(char *buffer, const struct kernel_param *kp);


extern struct kernel_param_ops param_ops_long;
extern int param_set_long(const char *val, const struct kernel_param *kp);
extern int param_get_long(char *buffer, const struct kernel_param *kp);


extern struct kernel_param_ops param_ops_ulong;
extern int param_set_ulong(const char *val, const struct kernel_param *kp);
extern int param_get_ulong(char *buffer, const struct kernel_param *kp);


extern struct kernel_param_ops param_ops_charp;
extern int param_set_charp(const char *val, const struct kernel_param *kp);
extern int param_get_charp(char *buffer, const struct kernel_param *kp);



extern struct kernel_param_ops param_ops_bool;
extern int param_set_bool(const char *val, const struct kernel_param *kp);
extern int param_get_bool(char *buffer, const struct kernel_param *kp);
# 340 "include/linux/moduleparam.h"
extern struct kernel_param_ops param_ops_invbool;
extern int param_set_invbool(const char *val, const struct kernel_param *kp);
extern int param_get_invbool(char *buffer, const struct kernel_param *kp);
# 383 "include/linux/moduleparam.h"
extern struct kernel_param_ops param_array_ops;

extern struct kernel_param_ops param_ops_string;
extern int param_set_copystring(const char *val, const struct kernel_param *);
extern int param_get_string(char *buffer, const struct kernel_param *kp);



struct module;


extern int module_param_sysfs_setup(struct module *mod,
        const struct kernel_param *kparam,
        unsigned int num_params);

extern void module_param_sysfs_remove(struct module *mod);
# 18 "include/linux/module.h" 2
# 1 "include/linux/tracepoint.h" 1
# 20 "include/linux/tracepoint.h"
# 1 "include/linux/jump_label.h" 1
# 9 "include/linux/jump_label.h"
struct jump_label_key {
 atomic_t enabled;
 struct jump_entry *entries;

 struct jump_label_mod *next;

};

# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/jump_label.h" 1
# 14 "/home/iago/torvalds/linux/arch/x86/include/asm/jump_label.h"
static inline __attribute__((always_inline)) bool arch_static_branch(struct jump_label_key *key)
{







 return false;
l_yes:
 return true;
}




typedef u64 jump_label_t;




struct jump_entry {
 jump_label_t code;
 jump_label_t target;
 jump_label_t key;
};
# 18 "include/linux/jump_label.h" 2



enum jump_label_type {
 JUMP_LABEL_DISABLE = 0,
 JUMP_LABEL_ENABLE,
};

struct module;
# 36 "include/linux/jump_label.h"
static inline __attribute__((always_inline)) bool static_branch(struct jump_label_key *key)
{
 return arch_static_branch(key);
}

extern struct jump_entry __start___jump_table[];
extern struct jump_entry __stop___jump_table[];

extern void jump_label_lock(void);
extern void jump_label_unlock(void);
extern void arch_jump_label_transform(struct jump_entry *entry,
     enum jump_label_type type);
extern void arch_jump_label_text_poke_early(jump_label_t addr);
extern int jump_label_text_reserved(void *start, void *end);
extern void jump_label_inc(struct jump_label_key *key);
extern void jump_label_dec(struct jump_label_key *key);
extern bool jump_label_enabled(struct jump_label_key *key);
extern void jump_label_apply_nops(struct module *mod);
# 21 "include/linux/tracepoint.h" 2

struct module;
struct tracepoint;

struct tracepoint_func {
 void *func;
 void *data;
};

struct tracepoint {
 const char *name;
 struct jump_label_key key;
 void (*regfunc)(void);
 void (*unregfunc)(void);
 struct tracepoint_func *funcs;
};





extern int tracepoint_probe_register(const char *name, void *probe, void *data);





extern int
tracepoint_probe_unregister(const char *name, void *probe, void *data);

extern int tracepoint_probe_register_noupdate(const char *name, void *probe,
           void *data);
extern int tracepoint_probe_unregister_noupdate(const char *name, void *probe,
      void *data);
extern void tracepoint_probe_update_all(void);

struct tracepoint_iter {
 struct module *module;
 struct tracepoint * const *tracepoint;
};

extern void tracepoint_iter_start(struct tracepoint_iter *iter);
extern void tracepoint_iter_next(struct tracepoint_iter *iter);
extern void tracepoint_iter_stop(struct tracepoint_iter *iter);
extern void tracepoint_iter_reset(struct tracepoint_iter *iter);
extern int tracepoint_get_iter_range(struct tracepoint * const **tracepoint,
 struct tracepoint * const *begin, struct tracepoint * const *end);






static inline void tracepoint_synchronize_unregister(void)
{
 synchronize_sched();
}




extern
void tracepoint_update_probe_range(struct tracepoint * const *begin,
 struct tracepoint * const *end);
# 19 "include/linux/module.h" 2


# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/module.h" 1



# 1 "include/asm-generic/module.h" 1







struct mod_arch_specific
{
};
# 5 "/home/iago/torvalds/linux/arch/x86/include/asm/module.h" 2
# 22 "include/linux/module.h" 2

# 1 "include/trace/events/module.h" 1
# 17 "include/trace/events/module.h"
# 1 "include/linux/tracepoint.h" 1
# 18 "include/trace/events/module.h" 2



struct module;






extern struct tracepoint
# 45 "include/trace/events/module.h"
 __tracepoint_module_load
# 28 "include/trace/events/module.h"
 ; static inline void
# 45 "include/trace/events/module.h"
 trace_module_load
# 28 "include/trace/events/module.h"
 (struct module *mod) { if (static_branch(&
# 45 "include/trace/events/module.h"
 __tracepoint_module_load
# 28 "include/trace/events/module.h"
 .key)) do { struct tracepoint_func *it_func_ptr; void *it_func; void *__data; if (!(1)) return; rcu_read_lock_sched_notrace(); it_func_ptr = ({ typeof(*((&__tracepoint_module_load)->funcs)) *_________p1 = (typeof(*((&__tracepoint_module_load)->funcs))* )(*(volatile typeof(((&__tracepoint_module_load)->funcs)) *)&(((&__tracepoint_module_load)->funcs))); do { static bool __warned; if (debug_lockdep_rcu_enabled() && !__warned && !(rcu_read_lock_sched_held() || (0))) { __warned = true; lockdep_rcu_dereference(
# 45 "include/trace/events/module.h"
 "include/trace/events/module.h"
# 28 "include/trace/events/module.h"
 ,
# 45 "include/trace/events/module.h"
 45
# 28 "include/trace/events/module.h"
 ); } } while (0); ; do { } while (0); ((typeof(*((&__tracepoint_module_load)->funcs)) *)(_________p1)); }); if (it_func_ptr) { do { it_func = (it_func_ptr)->func; __data = (it_func_ptr)->data; ((void(*)(void *__data, struct module *mod))(it_func))(__data, mod); } while ((++it_func_ptr)->func); } rcu_read_unlock_sched_notrace(); } while (0); } static inline int
# 45 "include/trace/events/module.h"
 register_trace_module_load
# 28 "include/trace/events/module.h"
 (void (*probe)(void *__data, struct module *mod), void *data) { return tracepoint_probe_register("module_load", (void *)probe, data); } static inline int
# 45 "include/trace/events/module.h"
 unregister_trace_module_load
# 28 "include/trace/events/module.h"
 (void (*probe)(void *__data, struct module *mod), void *data) { return tracepoint_probe_unregister("module_load", (void *)probe, data); } static inline void
# 45 "include/trace/events/module.h"
 check_trace_callback_type_module_load
# 28 "include/trace/events/module.h"
 (void (*cb)(void *__data, struct module *mod)) { }
# 45 "include/trace/events/module.h"
 ;

extern struct tracepoint
# 62 "include/trace/events/module.h"
 __tracepoint_module_free
# 47 "include/trace/events/module.h"
 ; static inline void
# 62 "include/trace/events/module.h"
 trace_module_free
# 47 "include/trace/events/module.h"
 (struct module *mod) { if (static_branch(&
# 62 "include/trace/events/module.h"
 __tracepoint_module_free
# 47 "include/trace/events/module.h"
 .key)) do { struct tracepoint_func *it_func_ptr; void *it_func; void *__data; if (!(1)) return; rcu_read_lock_sched_notrace(); it_func_ptr = ({ typeof(*((&__tracepoint_module_free)->funcs)) *_________p1 = (typeof(*((&__tracepoint_module_free)->funcs))* )(*(volatile typeof(((&__tracepoint_module_free)->funcs)) *)&(((&__tracepoint_module_free)->funcs))); do { static bool __warned; if (debug_lockdep_rcu_enabled() && !__warned && !(rcu_read_lock_sched_held() || (0))) { __warned = true; lockdep_rcu_dereference(
# 62 "include/trace/events/module.h"
 "include/trace/events/module.h"
# 47 "include/trace/events/module.h"
 ,
# 62 "include/trace/events/module.h"
 62
# 47 "include/trace/events/module.h"
 ); } } while (0); ; do { } while (0); ((typeof(*((&__tracepoint_module_free)->funcs)) *)(_________p1)); }); if (it_func_ptr) { do { it_func = (it_func_ptr)->func; __data = (it_func_ptr)->data; ((void(*)(void *__data, struct module *mod))(it_func))(__data, mod); } while ((++it_func_ptr)->func); } rcu_read_unlock_sched_notrace(); } while (0); } static inline int
# 62 "include/trace/events/module.h"
 register_trace_module_free
# 47 "include/trace/events/module.h"
 (void (*probe)(void *__data, struct module *mod), void *data) { return tracepoint_probe_register("module_free", (void *)probe, data); } static inline int
# 62 "include/trace/events/module.h"
 unregister_trace_module_free
# 47 "include/trace/events/module.h"
 (void (*probe)(void *__data, struct module *mod), void *data) { return tracepoint_probe_unregister("module_free", (void *)probe, data); } static inline void
# 62 "include/trace/events/module.h"
 check_trace_callback_type_module_free
# 47 "include/trace/events/module.h"
 (void (*cb)(void *__data, struct module *mod)) { }
# 62 "include/trace/events/module.h"
 ;





# 87 "include/trace/events/module.h"
 ;

extern struct tracepoint




 __tracepoint_module_get
# 89 "include/trace/events/module.h"
 ; static inline void




 trace_module_get
# 89 "include/trace/events/module.h"
 (struct module *mod, unsigned long ip) { if (static_branch(&




 __tracepoint_module_get
# 89 "include/trace/events/module.h"
 .key)) do { struct tracepoint_func *it_func_ptr; void *it_func; void *__data; if (!(1)) return; rcu_read_lock_sched_notrace(); it_func_ptr = ({ typeof(*((&__tracepoint_module_get)->funcs)) *_________p1 = (typeof(*((&__tracepoint_module_get)->funcs))* )(*(volatile typeof(((&__tracepoint_module_get)->funcs)) *)&(((&__tracepoint_module_get)->funcs))); do { static bool __warned; if (debug_lockdep_rcu_enabled() && !__warned && !(rcu_read_lock_sched_held() || (0))) { __warned = true; lockdep_rcu_dereference(




 "include/trace/events/module.h"
# 89 "include/trace/events/module.h"
 ,




 94
# 89 "include/trace/events/module.h"
 ); } } while (0); ; do { } while (0); ((typeof(*((&__tracepoint_module_get)->funcs)) *)(_________p1)); }); if (it_func_ptr) { do { it_func = (it_func_ptr)->func; __data = (it_func_ptr)->data; ((void(*)(void *__data, struct module *mod, unsigned long ip))(it_func))(__data, mod, ip); } while ((++it_func_ptr)->func); } rcu_read_unlock_sched_notrace(); } while (0); } static inline int




 register_trace_module_get
# 89 "include/trace/events/module.h"
 (void (*probe)(void *__data, struct module *mod, unsigned long ip), void *data) { return tracepoint_probe_register("module_get", (void *)probe, data); } static inline int




 unregister_trace_module_get
# 89 "include/trace/events/module.h"
 (void (*probe)(void *__data, struct module *mod, unsigned long ip), void *data) { return tracepoint_probe_unregister("module_get", (void *)probe, data); } static inline void




 check_trace_callback_type_module_get
# 89 "include/trace/events/module.h"
 (void (*cb)(void *__data, struct module *mod, unsigned long ip)) { }




 ;

extern struct tracepoint




 __tracepoint_module_put
# 96 "include/trace/events/module.h"
 ; static inline void




 trace_module_put
# 96 "include/trace/events/module.h"
 (struct module *mod, unsigned long ip) { if (static_branch(&




 __tracepoint_module_put
# 96 "include/trace/events/module.h"
 .key)) do { struct tracepoint_func *it_func_ptr; void *it_func; void *__data; if (!(1)) return; rcu_read_lock_sched_notrace(); it_func_ptr = ({ typeof(*((&__tracepoint_module_put)->funcs)) *_________p1 = (typeof(*((&__tracepoint_module_put)->funcs))* )(*(volatile typeof(((&__tracepoint_module_put)->funcs)) *)&(((&__tracepoint_module_put)->funcs))); do { static bool __warned; if (debug_lockdep_rcu_enabled() && !__warned && !(rcu_read_lock_sched_held() || (0))) { __warned = true; lockdep_rcu_dereference(




 "include/trace/events/module.h"
# 96 "include/trace/events/module.h"
 ,




 101
# 96 "include/trace/events/module.h"
 ); } } while (0); ; do { } while (0); ((typeof(*((&__tracepoint_module_put)->funcs)) *)(_________p1)); }); if (it_func_ptr) { do { it_func = (it_func_ptr)->func; __data = (it_func_ptr)->data; ((void(*)(void *__data, struct module *mod, unsigned long ip))(it_func))(__data, mod, ip); } while ((++it_func_ptr)->func); } rcu_read_unlock_sched_notrace(); } while (0); } static inline int




 register_trace_module_put
# 96 "include/trace/events/module.h"
 (void (*probe)(void *__data, struct module *mod, unsigned long ip), void *data) { return tracepoint_probe_register("module_put", (void *)probe, data); } static inline int




 unregister_trace_module_put
# 96 "include/trace/events/module.h"
 (void (*probe)(void *__data, struct module *mod, unsigned long ip), void *data) { return tracepoint_probe_unregister("module_put", (void *)probe, data); } static inline void




 check_trace_callback_type_module_put
# 96 "include/trace/events/module.h"
 (void (*cb)(void *__data, struct module *mod, unsigned long ip)) { }




 ;


extern struct tracepoint
# 124 "include/trace/events/module.h"
 __tracepoint_module_request
# 104 "include/trace/events/module.h"
 ; static inline void
# 124 "include/trace/events/module.h"
 trace_module_request
# 104 "include/trace/events/module.h"
 (char *name, bool wait, unsigned long ip) { if (static_branch(&
# 124 "include/trace/events/module.h"
 __tracepoint_module_request
# 104 "include/trace/events/module.h"
 .key)) do { struct tracepoint_func *it_func_ptr; void *it_func; void *__data; if (!(1)) return; rcu_read_lock_sched_notrace(); it_func_ptr = ({ typeof(*((&__tracepoint_module_request)->funcs)) *_________p1 = (typeof(*((&__tracepoint_module_request)->funcs))* )(*(volatile typeof(((&__tracepoint_module_request)->funcs)) *)&(((&__tracepoint_module_request)->funcs))); do { static bool __warned; if (debug_lockdep_rcu_enabled() && !__warned && !(rcu_read_lock_sched_held() || (0))) { __warned = true; lockdep_rcu_dereference(
# 124 "include/trace/events/module.h"
 "include/trace/events/module.h"
# 104 "include/trace/events/module.h"
 ,
# 124 "include/trace/events/module.h"
 124
# 104 "include/trace/events/module.h"
 ); } } while (0); ; do { } while (0); ((typeof(*((&__tracepoint_module_request)->funcs)) *)(_________p1)); }); if (it_func_ptr) { do { it_func = (it_func_ptr)->func; __data = (it_func_ptr)->data; ((void(*)(void *__data, char *name, bool wait, unsigned long ip))(it_func))(__data, name, wait, ip); } while ((++it_func_ptr)->func); } rcu_read_unlock_sched_notrace(); } while (0); } static inline int
# 124 "include/trace/events/module.h"
 register_trace_module_request
# 104 "include/trace/events/module.h"
 (void (*probe)(void *__data, char *name, bool wait, unsigned long ip), void *data) { return tracepoint_probe_register("module_request", (void *)probe, data); } static inline int
# 124 "include/trace/events/module.h"
 unregister_trace_module_request
# 104 "include/trace/events/module.h"
 (void (*probe)(void *__data, char *name, bool wait, unsigned long ip), void *data) { return tracepoint_probe_unregister("module_request", (void *)probe, data); } static inline void
# 124 "include/trace/events/module.h"
 check_trace_callback_type_module_request
# 104 "include/trace/events/module.h"
 (void (*cb)(void *__data, char *name, bool wait, unsigned long ip)) { }
# 124 "include/trace/events/module.h"
 ;






# 1 "include/trace/define_trace.h" 1
# 131 "include/trace/events/module.h" 2
# 24 "include/linux/module.h" 2
# 37 "include/linux/module.h"
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

struct module_kobject {
 struct kobject kobj;
 struct module *mod;
 struct kobject *drivers_dir;
 struct module_param_attrs *mp;
};

struct module_attribute {
 struct attribute attr;
 ssize_t (*show)(struct module_attribute *, struct module_kobject *,
   char *);
 ssize_t (*store)(struct module_attribute *, struct module_kobject *,
    const char *, size_t count);
 void (*setup)(struct module *, const char *);
 int (*test)(struct module *);
 void (*free)(struct module *);
};

struct module_version_attribute {
 struct module_attribute mattr;
 const char *module_name;
 const char *version;
} __attribute__ ((__aligned__(sizeof(void *))));

extern ssize_t __modver_version_show(struct module_attribute *,
         struct module_kobject *, char *);

extern struct module_attribute module_uevent;


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
void trim_init_extable(struct module *m);
# 202 "include/linux/module.h"
const struct exception_table_entry *search_exception_tables(unsigned long add);

struct notifier_block;



extern int modules_disabled;

void *__symbol_get(const char *symbol);
void *__symbol_get_gpl(const char *symbol);



struct module_use {
 struct list_head source_list;
 struct list_head target_list;
 struct module *source, *target;
};
# 267 "include/linux/module.h"
enum module_state
{
 MODULE_STATE_LIVE,
 MODULE_STATE_COMING,
 MODULE_STATE_GOING,
};

struct module
{
 enum module_state state;


 struct list_head list;


 char name[(64 - sizeof(unsigned long))];


 struct module_kobject mkobj;
 struct module_attribute *modinfo_attrs;
 const char *version;
 const char *srcversion;
 struct kobject *holders_dir;


 const struct kernel_symbol *syms;
 const unsigned long *crcs;
 unsigned int num_syms;


 struct kernel_param *kp;
 unsigned int num_kp;


 unsigned int num_gpl_syms;
 const struct kernel_symbol *gpl_syms;
 const unsigned long *gpl_crcs;



 const struct kernel_symbol *unused_syms;
 const unsigned long *unused_crcs;
 unsigned int num_unused_syms;


 unsigned int num_unused_gpl_syms;
 const struct kernel_symbol *unused_gpl_syms;
 const unsigned long *unused_gpl_crcs;



 const struct kernel_symbol *gpl_future_syms;
 const unsigned long *gpl_future_crcs;
 unsigned int num_gpl_future_syms;


 unsigned int num_exentries;
 struct exception_table_entry *extable;


 int (*init)(void);


 void *module_init;


 void *module_core;


 unsigned int init_size, core_size;


 unsigned int init_text_size, core_text_size;


 unsigned int init_ro_size, core_ro_size;


 struct mod_arch_specific arch;

 unsigned int taints;



 unsigned num_bugs;
 struct list_head bug_list;
 struct bug_entry *bug_table;
# 362 "include/linux/module.h"
 Elf64_Sym *symtab, *core_symtab;
 unsigned int num_symtab, core_num_syms;
 char *strtab, *core_strtab;


 struct module_sect_attrs *sect_attrs;


 struct module_notes_attrs *notes_attrs;




 char *args;



 void *percpu;
 unsigned int percpu_size;



 unsigned int num_tracepoints;
 struct tracepoint * const *tracepoints_ptrs;


 struct jump_entry *jump_entries;
 unsigned int num_jump_entries;


 unsigned int num_trace_bprintk_fmt;
 const char **trace_bprintk_fmt_start;


 struct ftrace_event_call **trace_events;
 unsigned int num_trace_events;


 unsigned int num_ftrace_callsites;
 unsigned long *ftrace_callsites;




 struct list_head source_list;

 struct list_head target_list;


 struct task_struct *waiter;


 void (*exit)(void);

 struct module_ref {
  unsigned int incs;
  unsigned int decs;
 } *refptr;




 ctor_fn_t *ctors;
 unsigned int num_ctors;

};




extern struct mutex module_mutex;




static inline int module_is_live(struct module *mod)
{
 return mod->state != MODULE_STATE_GOING;
}

struct module *__module_text_address(unsigned long addr);
struct module *__module_address(unsigned long addr);
bool is_module_address(unsigned long addr);
bool is_module_percpu_address(unsigned long addr);
bool is_module_text_address(unsigned long addr);

static inline int within_module_core(unsigned long addr, struct module *mod)
{
 return (unsigned long)mod->module_core <= addr &&
        addr < (unsigned long)mod->module_core + mod->core_size;
}

static inline int within_module_init(unsigned long addr, struct module *mod)
{
 return (unsigned long)mod->module_init <= addr &&
        addr < (unsigned long)mod->module_init + mod->init_size;
}


struct module *find_module(const char *name);

struct symsearch {
 const struct kernel_symbol *start, *stop;
 const unsigned long *crcs;
 enum {
  NOT_GPL_ONLY,
  GPL_ONLY,
  WILL_BE_GPL_ONLY,
 } licence;
 bool unused;
};


const struct kernel_symbol *find_symbol(const char *name,
     struct module **owner,
     const unsigned long **crc,
     bool gplok,
     bool warn);


bool each_symbol_section(bool (*fn)(const struct symsearch *arr,
        struct module *owner,
        void *data), void *data);



int module_get_kallsym(unsigned int symnum, unsigned long *value, char *type,
   char *name, char *module_name, int *exported);


unsigned long module_kallsyms_lookup_name(const char *name);

int module_kallsyms_on_each_symbol(int (*fn)(void *, const char *,
          struct module *, unsigned long),
       void *data);

extern void __module_put_and_exit(struct module *mod, long code)
 __attribute__((noreturn));



unsigned int module_refcount(struct module *mod);
void __symbol_put(const char *symbol);

void symbol_put_addr(void *addr);



static inline void __module_get(struct module *module)
{
 if (module) {
  do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
  do { do { const void *__vpp_verify = (typeof(&(((module->refptr->incs)))))((void *)0); (void)__vpp_verify; } while (0); switch(sizeof(((module->refptr->incs)))) { case 1: do { typedef typeof((((module->refptr->incs)))) pao_T__; const int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? ((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((module->refptr->incs))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 2: do { typedef typeof((((module->refptr->incs)))) pao_T__; const int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? ((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((module->refptr->incs))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 4: do { typedef typeof((((module->refptr->incs)))) pao_T__; const int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? ((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((module->refptr->incs))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 8: do { typedef typeof((((module->refptr->incs)))) pao_T__; const int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? ((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((module->refptr->incs))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; default: __bad_size_call_parameter();break; } } while (0);
  trace_module_get(module, ({ __label__ __here; __here: (unsigned long)&&__here; }));
  do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
 }
}

static inline int try_module_get(struct module *module)
{
 int ret = 1;

 if (module) {
  do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);

  if (__builtin_expect(!!(module_is_live(module)), 1)) {
   do { do { const void *__vpp_verify = (typeof(&(((module->refptr->incs)))))((void *)0); (void)__vpp_verify; } while (0); switch(sizeof(((module->refptr->incs)))) { case 1: do { typedef typeof((((module->refptr->incs)))) pao_T__; const int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? ((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((module->refptr->incs))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 2: do { typedef typeof((((module->refptr->incs)))) pao_T__; const int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? ((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((module->refptr->incs))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 4: do { typedef typeof((((module->refptr->incs)))) pao_T__; const int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? ((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((module->refptr->incs))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 8: do { typedef typeof((((module->refptr->incs)))) pao_T__; const int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? ((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((module->refptr->incs))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((module->refptr->incs)))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; default: __bad_size_call_parameter();break; } } while (0);
   trace_module_get(module, ({ __label__ __here; __here: (unsigned long)&&__here; }));
  } else
   ret = 0;

  do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
 }
 return ret;
}

extern void module_put(struct module *module);
# 555 "include/linux/module.h"
int ref_module(struct module *a, struct module *b);
# 567 "include/linux/module.h"
const char *module_address_lookup(unsigned long addr,
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

extern void module_update_tracepoints(void);
extern int module_get_iter_tracepoints(struct tracepoint_iter *iter);
# 713 "include/linux/module.h"
extern struct kset *module_kset;
extern struct kobj_type module_ktype;
extern int module_sysfs_initialized;
# 725 "include/linux/module.h"
extern void set_all_modules_text_rw(void);
extern void set_all_modules_text_ro(void);






void module_bug_finalize(const Elf64_Ehdr *, const Elf64_Shdr *,
    struct module *);
void module_bug_cleanup(struct module *);
# 24 "include/linux/device.h" 2


# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/device.h" 1



struct dev_archdata {

 void *acpi_handle;


struct dma_map_ops *dma_ops;


 void *iommu;

};

struct pdev_archdata {
};
# 27 "include/linux/device.h" 2

struct device;
struct device_private;
struct device_driver;
struct driver_private;
struct class;
struct subsys_private;
struct bus_type;
struct device_node;

struct bus_attribute {
 struct attribute attr;
 ssize_t (*show)(struct bus_type *bus, char *buf);
 ssize_t (*store)(struct bus_type *bus, const char *buf, size_t count);
};




extern int __attribute__((warn_unused_result)) bus_create_file(struct bus_type *,
     struct bus_attribute *);
extern void bus_remove_file(struct bus_type *, struct bus_attribute *);
# 82 "include/linux/device.h"
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
 int (*resume)(struct device *dev);

 const struct dev_pm_ops *pm;

 struct subsys_private *p;
};

extern int __attribute__((warn_unused_result)) bus_register(struct bus_type *bus);
extern void bus_unregister(struct bus_type *bus);

extern int __attribute__((warn_unused_result)) bus_rescan_devices(struct bus_type *bus);



int bus_for_each_dev(struct bus_type *bus, struct device *start, void *data,
       int (*fn)(struct device *dev, void *data));
struct device *bus_find_device(struct bus_type *bus, struct device *start,
          void *data,
          int (*match)(struct device *dev, void *data));
struct device *bus_find_device_by_name(struct bus_type *bus,
           struct device *start,
           const char *name);

int bus_for_each_drv(struct bus_type *bus, struct device_driver *start,
       void *data, int (*fn)(struct device_driver *, void *));

void bus_sort_breadthfirst(struct bus_type *bus,
      int (*compare)(const struct device *a,
       const struct device *b));






struct notifier_block;

extern int bus_register_notifier(struct bus_type *bus,
     struct notifier_block *nb);
extern int bus_unregister_notifier(struct bus_type *bus,
       struct notifier_block *nb);
# 151 "include/linux/device.h"
extern struct kset *bus_get_kset(struct bus_type *bus);
extern struct klist *bus_get_device_klist(struct bus_type *bus);
# 185 "include/linux/device.h"
struct device_driver {
 const char *name;
 struct bus_type *bus;

 struct module *owner;
 const char *mod_name;

 bool suppress_bind_attrs;

 const struct of_device_id *of_match_table;

 int (*probe) (struct device *dev);
 int (*remove) (struct device *dev);
 void (*shutdown) (struct device *dev);
 int (*suspend) (struct device *dev, pm_message_t state);
 int (*resume) (struct device *dev);
 const struct attribute_group **groups;

 const struct dev_pm_ops *pm;

 struct driver_private *p;
};


extern int __attribute__((warn_unused_result)) driver_register(struct device_driver *drv);
extern void driver_unregister(struct device_driver *drv);

extern struct device_driver *get_driver(struct device_driver *drv);
extern void put_driver(struct device_driver *drv);
extern struct device_driver *driver_find(const char *name,
      struct bus_type *bus);
extern int driver_probe_done(void);
extern void wait_for_device_probe(void);




struct driver_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device_driver *driver, char *buf);
 ssize_t (*store)(struct device_driver *driver, const char *buf,
    size_t count);
};





extern int __attribute__((warn_unused_result)) driver_create_file(struct device_driver *driver,
     const struct driver_attribute *attr);
extern void driver_remove_file(struct device_driver *driver,
          const struct driver_attribute *attr);

extern int __attribute__((warn_unused_result)) driver_add_kobj(struct device_driver *drv,
     struct kobject *kobj,
     const char *fmt, ...);

extern int __attribute__((warn_unused_result)) driver_for_each_device(struct device_driver *drv,
            struct device *start,
            void *data,
            int (*fn)(struct device *dev,
        void *));
struct device *driver_find_device(struct device_driver *drv,
      struct device *start, void *data,
      int (*match)(struct device *dev, void *data));
# 280 "include/linux/device.h"
struct class {
 const char *name;
 struct module *owner;

 struct class_attribute *class_attrs;
 struct device_attribute *dev_attrs;
 struct bin_attribute *dev_bin_attrs;
 struct kobject *dev_kobj;

 int (*dev_uevent)(struct device *dev, struct kobj_uevent_env *env);
 char *(*devnode)(struct device *dev, mode_t *mode);

 void (*class_release)(struct class *class);
 void (*dev_release)(struct device *dev);

 int (*suspend)(struct device *dev, pm_message_t state);
 int (*resume)(struct device *dev);

 const struct kobj_ns_type_operations *ns_type;
 const void *(*namespace)(struct device *dev);

 const struct dev_pm_ops *pm;

 struct subsys_private *p;
};

struct class_dev_iter {
 struct klist_iter ki;
 const struct device_type *type;
};

extern struct kobject *sysfs_dev_block_kobj;
extern struct kobject *sysfs_dev_char_kobj;
extern int __attribute__((warn_unused_result)) __class_register(struct class *class,
      struct lock_class_key *key);
extern void class_unregister(struct class *class);
# 325 "include/linux/device.h"
struct class_compat;
struct class_compat *class_compat_register(const char *name);
void class_compat_unregister(struct class_compat *cls);
int class_compat_create_link(struct class_compat *cls, struct device *dev,
        struct device *device_link);
void class_compat_remove_link(struct class_compat *cls, struct device *dev,
         struct device *device_link);

extern void class_dev_iter_init(struct class_dev_iter *iter,
    struct class *class,
    struct device *start,
    const struct device_type *type);
extern struct device *class_dev_iter_next(struct class_dev_iter *iter);
extern void class_dev_iter_exit(struct class_dev_iter *iter);

extern int class_for_each_device(struct class *class, struct device *start,
     void *data,
     int (*fn)(struct device *dev, void *data));
extern struct device *class_find_device(struct class *class,
     struct device *start, void *data,
     int (*match)(struct device *, void *));

struct class_attribute {
 struct attribute attr;
 ssize_t (*show)(struct class *class, struct class_attribute *attr,
   char *buf);
 ssize_t (*store)(struct class *class, struct class_attribute *attr,
   const char *buf, size_t count);
};




extern int __attribute__((warn_unused_result)) class_create_file(struct class *class,
       const struct class_attribute *attr);
extern void class_remove_file(struct class *class,
         const struct class_attribute *attr);



struct class_attribute_string {
 struct class_attribute attr;
 char *str;
};
# 377 "include/linux/device.h"
extern ssize_t show_class_attr_string(struct class *class, struct class_attribute *attr,
                        char *buf);

struct class_interface {
 struct list_head node;
 struct class *class;

 int (*add_dev) (struct device *, struct class_interface *);
 void (*remove_dev) (struct device *, struct class_interface *);
};

extern int __attribute__((warn_unused_result)) class_interface_register(struct class_interface *);
extern void class_interface_unregister(struct class_interface *);

extern struct class * __attribute__((warn_unused_result)) __class_create(struct module *owner,
        const char *name,
        struct lock_class_key *key);
extern void class_destroy(struct class *cls);
# 413 "include/linux/device.h"
struct device_type {
 const char *name;
 const struct attribute_group **groups;
 int (*uevent)(struct device *dev, struct kobj_uevent_env *env);
 char *(*devnode)(struct device *dev, mode_t *mode);
 void (*release)(struct device *dev);

 const struct dev_pm_ops *pm;
};


struct device_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device *dev, struct device_attribute *attr,
   char *buf);
 ssize_t (*store)(struct device *dev, struct device_attribute *attr,
    const char *buf, size_t count);
};




extern int __attribute__((warn_unused_result)) device_create_file(struct device *device,
     const struct device_attribute *entry);
extern void device_remove_file(struct device *dev,
          const struct device_attribute *attr);
extern int __attribute__((warn_unused_result)) device_create_bin_file(struct device *dev,
     const struct bin_attribute *attr);
extern void device_remove_bin_file(struct device *dev,
       const struct bin_attribute *attr);
extern int device_schedule_callback_owner(struct device *dev,
  void (*func)(struct device *dev), struct module *owner);






typedef void (*dr_release_t)(struct device *dev, void *res);
typedef int (*dr_match_t)(struct device *dev, void *res, void *match_data);


extern void *__devres_alloc(dr_release_t release, size_t size, gfp_t gfp,
        const char *name);





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


extern void * __attribute__((warn_unused_result)) devres_open_group(struct device *dev, void *id,
          gfp_t gfp);
extern void devres_close_group(struct device *dev, void *id);
extern void devres_remove_group(struct device *dev, void *id);
extern int devres_release_group(struct device *dev, void *id);


extern void *devm_kzalloc(struct device *dev, size_t size, gfp_t gfp);
extern void devm_kfree(struct device *dev, void *p);

struct device_dma_parameters {




 unsigned int max_segment_size;
 unsigned long segment_boundary_mask;
};
# 551 "include/linux/device.h"
struct device {
 struct device *parent;

 struct device_private *p;

 struct kobject kobj;
 const char *init_name;
 const struct device_type *type;

 struct mutex mutex;



 struct bus_type *bus;
 struct device_driver *driver;

 void *platform_data;

 struct dev_pm_info power;
 struct dev_pm_domain *pm_domain;


 int numa_node;

 u64 *dma_mask;
 u64 coherent_dma_mask;





 struct device_dma_parameters *dma_parms;

 struct list_head dma_pools;

 struct dma_coherent_mem *dma_mem;


 struct dev_archdata archdata;

 struct device_node *of_node;

 dev_t devt;

 spinlock_t devres_lock;
 struct list_head devres_head;

 struct klist_node knode_class;
 struct class *class;
 const struct attribute_group **groups;

 void (*release)(struct device *dev);
};


# 1 "include/linux/pm_wakeup.h" 1
# 43 "include/linux/pm_wakeup.h"
struct wakeup_source {
 char *name;
 struct list_head entry;
 spinlock_t lock;
 struct timer_list timer;
 unsigned long timer_expires;
 ktime_t total_time;
 ktime_t max_time;
 ktime_t last_time;
 unsigned long event_count;
 unsigned long active_count;
 unsigned long relax_count;
 unsigned long hit_count;
 unsigned int active:1;
};







static inline bool device_can_wakeup(struct device *dev)
{
 return dev->power.can_wakeup;
}

static inline bool device_may_wakeup(struct device *dev)
{
 return dev->power.can_wakeup && !!dev->power.wakeup;
}


extern struct wakeup_source *wakeup_source_create(const char *name);
extern void wakeup_source_destroy(struct wakeup_source *ws);
extern void wakeup_source_add(struct wakeup_source *ws);
extern void wakeup_source_remove(struct wakeup_source *ws);
extern struct wakeup_source *wakeup_source_register(const char *name);
extern void wakeup_source_unregister(struct wakeup_source *ws);
extern int device_wakeup_enable(struct device *dev);
extern int device_wakeup_disable(struct device *dev);
extern void device_set_wakeup_capable(struct device *dev, bool capable);
extern int device_init_wakeup(struct device *dev, bool val);
extern int device_set_wakeup_enable(struct device *dev, bool enable);
extern void __pm_stay_awake(struct wakeup_source *ws);
extern void pm_stay_awake(struct device *dev);
extern void __pm_relax(struct wakeup_source *ws);
extern void pm_relax(struct device *dev);
extern void __pm_wakeup_event(struct wakeup_source *ws, unsigned int msec);
extern void pm_wakeup_event(struct device *dev, unsigned int msec);
# 607 "include/linux/device.h" 2

static inline const char *dev_name(const struct device *dev)
{

 if (dev->init_name)
  return dev->init_name;

 return kobject_name(&dev->kobj);
}

extern int dev_set_name(struct device *dev, const char *name, ...)
   __attribute__((format(printf, 2, 3)));


static inline int dev_to_node(struct device *dev)
{
 return dev->numa_node;
}
static inline void set_dev_node(struct device *dev, int node)
{
 dev->numa_node = node;
}
# 639 "include/linux/device.h"
static inline unsigned int dev_get_uevent_suppress(const struct device *dev)
{
 return dev->kobj.uevent_suppress;
}

static inline void dev_set_uevent_suppress(struct device *dev, int val)
{
 dev->kobj.uevent_suppress = val;
}

static inline int device_is_registered(struct device *dev)
{
 return dev->kobj.state_in_sysfs;
}

static inline void device_enable_async_suspend(struct device *dev)
{
 if (!dev->power.is_prepared)
  dev->power.async_suspend = true;
}

static inline void device_disable_async_suspend(struct device *dev)
{
 if (!dev->power.is_prepared)
  dev->power.async_suspend = false;
}

static inline bool device_async_suspend_enabled(struct device *dev)
{
 return !!dev->power.async_suspend;
}

static inline void device_lock(struct device *dev)
{
 mutex_lock_nested(&dev->mutex, 0);
}

static inline int device_trylock(struct device *dev)
{
 return mutex_trylock(&dev->mutex);
}

static inline void device_unlock(struct device *dev)
{
 mutex_unlock(&dev->mutex);
}

void driver_init(void);




extern int __attribute__((warn_unused_result)) device_register(struct device *dev);
extern void device_unregister(struct device *dev);
extern void device_initialize(struct device *dev);
extern int __attribute__((warn_unused_result)) device_add(struct device *dev);
extern void device_del(struct device *dev);
extern int device_for_each_child(struct device *dev, void *data,
       int (*fn)(struct device *dev, void *data));
extern struct device *device_find_child(struct device *dev, void *data,
    int (*match)(struct device *dev, void *data));
extern int device_rename(struct device *dev, const char *new_name);
extern int device_move(struct device *dev, struct device *new_parent,
         enum dpm_order dpm_order);
extern const char *device_get_devnode(struct device *dev,
          mode_t *mode, const char **tmp);
extern void *dev_get_drvdata(const struct device *dev);
extern int dev_set_drvdata(struct device *dev, void *data);




extern struct device *__root_device_register(const char *name,
          struct module *owner);
static inline struct device *root_device_register(const char *name)
{
 return __root_device_register(name, ((struct module *)0));
}
extern void root_device_unregister(struct device *root);

static inline void *dev_get_platdata(const struct device *dev)
{
 return dev->platform_data;
}





extern int __attribute__((warn_unused_result)) device_bind_driver(struct device *dev);
extern void device_release_driver(struct device *dev);
extern int __attribute__((warn_unused_result)) device_attach(struct device *dev);
extern int __attribute__((warn_unused_result)) driver_attach(struct device_driver *drv);
extern int __attribute__((warn_unused_result)) device_reprobe(struct device *dev);




extern struct device *device_create_vargs(struct class *cls,
       struct device *parent,
       dev_t devt,
       void *drvdata,
       const char *fmt,
       va_list vargs);
extern struct device *device_create(struct class *cls, struct device *parent,
        dev_t devt, void *drvdata,
        const char *fmt, ...)
        __attribute__((format(printf, 5, 6)));
extern void device_destroy(struct class *cls, dev_t devt);







extern int (*platform_notify)(struct device *dev);

extern int (*platform_notify_remove)(struct device *dev);






extern struct device *get_device(struct device *dev);
extern void put_device(struct device *dev);

extern void wait_for_device_probe(void);


extern int devtmpfs_create_node(struct device *dev);
extern int devtmpfs_delete_node(struct device *dev);
extern int devtmpfs_mount(const char *mntdir);







extern void device_shutdown(void);


extern const char *dev_driver_string(const struct device *dev);




extern int dev_printk(const char *level, const struct device *dev,
        const char *fmt, ...)
 __attribute__ ((format (printf, 3, 4)));
extern int dev_emerg(const struct device *dev, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3)));
extern int dev_alert(const struct device *dev, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3)));
extern int dev_crit(const struct device *dev, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3)));
extern int dev_err(const struct device *dev, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3)));
extern int dev_warn(const struct device *dev, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3)));
extern int dev_notice(const struct device *dev, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3)));
extern int _dev_info(const struct device *dev, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3)));
# 902 "include/linux/device.h"
extern long sysfs_deprecated;
# 54 "include/linux/pci.h" 2
# 1 "include/linux/io.h" 1
# 25 "include/linux/io.h"
struct device;

void __iowrite32_copy(void *to, const void *from, size_t count);
void __iowrite64_copy(void *to, const void *from, size_t count);


int ioremap_page_range(unsigned long addr, unsigned long end,
         phys_addr_t phys_addr, pgprot_t prot);
# 45 "include/linux/io.h"
void * devm_ioport_map(struct device *dev, unsigned long port,
          unsigned int nr);
void devm_ioport_unmap(struct device *dev, void *addr);
# 61 "include/linux/io.h"
void *devm_ioremap(struct device *dev, resource_size_t offset,
       unsigned long size);
void *devm_ioremap_nocache(struct device *dev, resource_size_t offset,
        unsigned long size);
void devm_iounmap(struct device *dev, void *addr);
int check_signature(const volatile void *io_addr,
   const unsigned char *signature, int length);
void devm_ioremap_release(struct device *dev, void *res);
# 55 "include/linux/pci.h" 2
# 1 "include/linux/irqreturn.h" 1
# 10 "include/linux/irqreturn.h"
enum irqreturn {
 IRQ_NONE = (0 << 0),
 IRQ_HANDLED = (1 << 0),
 IRQ_WAKE_THREAD = (1 << 1),
};

typedef enum irqreturn irqreturn_t;
# 56 "include/linux/pci.h" 2


# 1 "include/linux/pci_ids.h" 1
# 59 "include/linux/pci.h" 2


struct pci_slot {
 struct pci_bus *bus;
 struct list_head list;
 struct hotplug_slot *hotplug;
 unsigned char number;
 struct kobject kobj;
};

static inline const char *pci_slot_name(const struct pci_slot *slot)
{
 return kobject_name(&slot->kobj);
}


enum pci_mmap_state {
 pci_mmap_io,
 pci_mmap_mem
};
# 89 "include/linux/pci.h"
enum {

 PCI_STD_RESOURCES,
 PCI_STD_RESOURCE_END = 5,


 PCI_ROM_RESOURCE,



 PCI_IOV_RESOURCES,
 PCI_IOV_RESOURCE_END = PCI_IOV_RESOURCES + 6 - 1,





 PCI_BRIDGE_RESOURCES,
 PCI_BRIDGE_RESOURCE_END = PCI_BRIDGE_RESOURCES +
      4 - 1,


 PCI_NUM_RESOURCES,


 DEVICE_COUNT_RESOURCE
};

typedef int pci_power_t;
# 128 "include/linux/pci.h"
extern const char *pci_power_names[];

static inline const char *pci_power_name(pci_power_t state)
{
 return pci_power_names[1 + (int) state];
}
# 143 "include/linux/pci.h"
typedef unsigned int pci_channel_state_t;

enum pci_channel_state {

 pci_channel_io_normal = ( pci_channel_state_t) 1,


 pci_channel_io_frozen = ( pci_channel_state_t) 2,


 pci_channel_io_perm_failure = ( pci_channel_state_t) 3,
};

typedef unsigned int pcie_reset_state_t;

enum pcie_reset_state {

 pcie_deassert_reset = ( pcie_reset_state_t) 1,


 pcie_warm_reset = ( pcie_reset_state_t) 2,


 pcie_hot_reset = ( pcie_reset_state_t) 3
};

typedef unsigned short pci_dev_flags_t;
enum pci_dev_flags {



 PCI_DEV_FLAGS_MSI_INTX_DISABLE_BUG = ( pci_dev_flags_t) 1,

 PCI_DEV_FLAGS_NO_D3 = ( pci_dev_flags_t) 2,
};

enum pci_irq_reroute_variant {
 INTEL_IRQ_REROUTE_VARIANT = 1,
 MAX_IRQ_REROUTE_VARIANTS = 3
};

typedef unsigned short pci_bus_flags_t;
enum pci_bus_flags {
 PCI_BUS_FLAGS_NO_MSI = ( pci_bus_flags_t) 1,
 PCI_BUS_FLAGS_NO_MMRBC = ( pci_bus_flags_t) 2,
};


enum pci_bus_speed {
 PCI_SPEED_33MHz = 0x00,
 PCI_SPEED_66MHz = 0x01,
 PCI_SPEED_66MHz_PCIX = 0x02,
 PCI_SPEED_100MHz_PCIX = 0x03,
 PCI_SPEED_133MHz_PCIX = 0x04,
 PCI_SPEED_66MHz_PCIX_ECC = 0x05,
 PCI_SPEED_100MHz_PCIX_ECC = 0x06,
 PCI_SPEED_133MHz_PCIX_ECC = 0x07,
 PCI_SPEED_66MHz_PCIX_266 = 0x09,
 PCI_SPEED_100MHz_PCIX_266 = 0x0a,
 PCI_SPEED_133MHz_PCIX_266 = 0x0b,
 AGP_UNKNOWN = 0x0c,
 AGP_1X = 0x0d,
 AGP_2X = 0x0e,
 AGP_4X = 0x0f,
 AGP_8X = 0x10,
 PCI_SPEED_66MHz_PCIX_533 = 0x11,
 PCI_SPEED_100MHz_PCIX_533 = 0x12,
 PCI_SPEED_133MHz_PCIX_533 = 0x13,
 PCIE_SPEED_2_5GT = 0x14,
 PCIE_SPEED_5_0GT = 0x15,
 PCIE_SPEED_8_0GT = 0x16,
 PCI_SPEED_UNKNOWN = 0xff,
};

struct pci_cap_saved_data {
 char cap_nr;
 unsigned int size;
 u32 data[0];
};

struct pci_cap_saved_state {
 struct hlist_node next;
 struct pci_cap_saved_data cap;
};

struct pcie_link_state;
struct pci_vpd;
struct pci_sriov;
struct pci_ats;




struct pci_dev {
 struct list_head bus_list;
 struct pci_bus *bus;
 struct pci_bus *subordinate;

 void *sysdata;
 struct proc_dir_entry *procent;
 struct pci_slot *slot;

 unsigned int devfn;
 unsigned short vendor;
 unsigned short device;
 unsigned short subsystem_vendor;
 unsigned short subsystem_device;
 unsigned int class;
 u8 revision;
 u8 hdr_type;
 u8 pcie_cap;
 u8 pcie_type:4;
 u8 pcie_mpss:3;
 u8 rom_base_reg;
 u8 pin;

 struct pci_driver *driver;
 u64 dma_mask;





 struct device_dma_parameters dma_parms;

 pci_power_t current_state;


 int pm_cap;

 unsigned int pme_support:5;

 unsigned int pme_interrupt:1;
 unsigned int d1_support:1;
 unsigned int d2_support:1;
 unsigned int no_d1d2:1;
 unsigned int mmio_always_on:1;

 unsigned int wakeup_prepared:1;
 unsigned int d3_delay;


 struct pcie_link_state *link_state;


 pci_channel_state_t error_state;
 struct device dev;

 int cfg_size;





 unsigned int irq;
 struct resource resource[DEVICE_COUNT_RESOURCE];
 resource_size_t fw_addr[DEVICE_COUNT_RESOURCE];


 unsigned int transparent:1;
 unsigned int multifunction:1;

 unsigned int is_added:1;
 unsigned int is_busmaster:1;
 unsigned int no_msi:1;
 unsigned int block_ucfg_access:1;
 unsigned int broken_parity_status:1;
 unsigned int irq_reroute_variant:2;
 unsigned int msi_enabled:1;
 unsigned int msix_enabled:1;
 unsigned int ari_enabled:1;
 unsigned int is_managed:1;
 unsigned int is_pcie:1;

 unsigned int needs_freset:1;
 unsigned int state_saved:1;
 unsigned int is_physfn:1;
 unsigned int is_virtfn:1;
 unsigned int reset_fn:1;
 unsigned int is_hotplug_bridge:1;
 unsigned int __aer_firmware_first_valid:1;
 unsigned int __aer_firmware_first:1;
 pci_dev_flags_t dev_flags;
 atomic_t enable_cnt;

 u32 saved_config_space[16];
 struct hlist_head saved_cap_space;
 struct bin_attribute *rom_attr;
 int rom_attr_enabled;
 struct bin_attribute *res_attr[DEVICE_COUNT_RESOURCE];
 struct bin_attribute *res_attr_wc[DEVICE_COUNT_RESOURCE];

 struct list_head msi_list;

 struct pci_vpd *vpd;

 union {
  struct pci_sriov *sriov;
  struct pci_dev *physfn;
 };
 struct pci_ats *ats;

};

static inline struct pci_dev *pci_physfn(struct pci_dev *dev)
{

 if (dev->is_virtfn)
  dev = dev->physfn;


 return dev;
}

extern struct pci_dev *alloc_pci_dev(void);





static inline int pci_channel_offline(struct pci_dev *pdev)
{
 return (pdev->error_state != pci_channel_io_normal);
}

static inline struct pci_cap_saved_state *pci_find_saved_cap(
 struct pci_dev *pci_dev, char cap)
{
 struct pci_cap_saved_state *tmp;
 struct hlist_node *pos;

 for (pos = (&pci_dev->saved_cap_space)->first; pos && ({ tmp = ({ const typeof( ((typeof(*tmp) *)0)->next ) *__mptr = (pos); (typeof(*tmp) *)( (char *)__mptr - __builtin_offsetof(typeof(*tmp),next) );}); 1;}); pos = pos->next) {
  if (tmp->cap.cap_nr == cap)
   return tmp;
 }
 return ((void *)0);
}

static inline void pci_add_saved_cap(struct pci_dev *pci_dev,
 struct pci_cap_saved_state *new_cap)
{
 hlist_add_head(&new_cap->next, &pci_dev->saved_cap_space);
}
# 402 "include/linux/pci.h"
struct pci_bus_resource {
 struct list_head list;
 struct resource *res;
 unsigned int flags;
};



struct pci_bus {
 struct list_head node;
 struct pci_bus *parent;
 struct list_head children;
 struct list_head devices;
 struct pci_dev *self;
 struct list_head slots;
 struct resource *resource[4];
 struct list_head resources;

 struct pci_ops *ops;
 void *sysdata;
 struct proc_dir_entry *procdir;

 unsigned char number;
 unsigned char primary;
 unsigned char secondary;
 unsigned char subordinate;
 unsigned char max_bus_speed;
 unsigned char cur_bus_speed;

 char name[48];

 unsigned short bridge_ctl;
 pci_bus_flags_t bus_flags;
 struct device *bridge;
 struct device dev;
 struct bin_attribute *legacy_io;
 struct bin_attribute *legacy_mem;
 unsigned int is_added:1;
};
# 449 "include/linux/pci.h"
static inline bool pci_is_root_bus(struct pci_bus *pbus)
{
 return !(pbus->parent);
}


static inline bool pci_dev_msi_enabled(struct pci_dev *pci_dev)
{
 return pci_dev->msi_enabled || pci_dev->msix_enabled;
}
# 476 "include/linux/pci.h"
struct pci_ops {
 int (*read)(struct pci_bus *bus, unsigned int devfn, int where, int size, u32 *val);
 int (*write)(struct pci_bus *bus, unsigned int devfn, int where, int size, u32 val);
};





extern int raw_pci_read(unsigned int domain, unsigned int bus,
   unsigned int devfn, int reg, int len, u32 *val);
extern int raw_pci_write(unsigned int domain, unsigned int bus,
   unsigned int devfn, int reg, int len, u32 val);

struct pci_bus_region {
 resource_size_t start;
 resource_size_t end;
};

struct pci_dynids {
 spinlock_t lock;
 struct list_head list;
};
# 507 "include/linux/pci.h"
typedef unsigned int pci_ers_result_t;

enum pci_ers_result {

 PCI_ERS_RESULT_NONE = ( pci_ers_result_t) 1,


 PCI_ERS_RESULT_CAN_RECOVER = ( pci_ers_result_t) 2,


 PCI_ERS_RESULT_NEED_RESET = ( pci_ers_result_t) 3,


 PCI_ERS_RESULT_DISCONNECT = ( pci_ers_result_t) 4,


 PCI_ERS_RESULT_RECOVERED = ( pci_ers_result_t) 5,
};


struct pci_error_handlers {

 pci_ers_result_t (*error_detected)(struct pci_dev *dev,
        enum pci_channel_state error);


 pci_ers_result_t (*mmio_enabled)(struct pci_dev *dev);


 pci_ers_result_t (*link_reset)(struct pci_dev *dev);


 pci_ers_result_t (*slot_reset)(struct pci_dev *dev);


 void (*resume)(struct pci_dev *dev);
};



struct module;
struct pci_driver {
 struct list_head node;
 const char *name;
 const struct pci_device_id *id_table;
 int (*probe) (struct pci_dev *dev, const struct pci_device_id *id);
 void (*remove) (struct pci_dev *dev);
 int (*suspend) (struct pci_dev *dev, pm_message_t state);
 int (*suspend_late) (struct pci_dev *dev, pm_message_t state);
 int (*resume_early) (struct pci_dev *dev);
 int (*resume) (struct pci_dev *dev);
 void (*shutdown) (struct pci_dev *dev);
 struct pci_error_handlers *err_handler;
 struct device_driver driver;
 struct pci_dynids dynids;
};
# 621 "include/linux/pci.h"
extern void pcie_bus_configure_settings(struct pci_bus *bus, u8 smpss);

enum pcie_bus_config_types {
 PCIE_BUS_PERFORMANCE,
 PCIE_BUS_SAFE,
 PCIE_BUS_PEER2PEER,
};

extern enum pcie_bus_config_types pcie_bus_config;

extern struct bus_type pci_bus_type;



extern struct list_head pci_root_buses;

extern int no_pci_devices(void);

void pcibios_fixup_bus(struct pci_bus *);
int __attribute__((warn_unused_result)) pcibios_enable_device(struct pci_dev *, int mask);
char *pcibios_setup(char *str);


resource_size_t pcibios_align_resource(void *, const struct resource *,
    resource_size_t,
    resource_size_t);
void pcibios_update_irq(struct pci_dev *, int irq);


void pci_fixup_cardbus(struct pci_bus *);



void pcibios_scan_specific_bus(int busn);
extern struct pci_bus *pci_find_bus(int domain, int busnr);
void pci_bus_add_devices(const struct pci_bus *bus);
struct pci_bus *pci_scan_bus_parented(struct device *parent, int bus,
          struct pci_ops *ops, void *sysdata);
static inline struct pci_bus * __attribute__ ((__section__(".devinit.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pci_scan_bus(int bus, struct pci_ops *ops,
        void *sysdata)
{
 struct pci_bus *root_bus;
 root_bus = pci_scan_bus_parented(((void *)0), bus, ops, sysdata);
 if (root_bus)
  pci_bus_add_devices(root_bus);
 return root_bus;
}
struct pci_bus *pci_create_bus(struct device *parent, int bus,
          struct pci_ops *ops, void *sysdata);
struct pci_bus *pci_add_new_bus(struct pci_bus *parent, struct pci_dev *dev,
    int busnr);
void pcie_update_link_speed(struct pci_bus *bus, u16 link_status);
struct pci_slot *pci_create_slot(struct pci_bus *parent, int slot_nr,
     const char *name,
     struct hotplug_slot *hotplug);
void pci_destroy_slot(struct pci_slot *slot);
void pci_renumber_slot(struct pci_slot *slot, int slot_nr);
int pci_scan_slot(struct pci_bus *bus, int devfn);
struct pci_dev *pci_scan_single_device(struct pci_bus *bus, int devfn);
void pci_device_add(struct pci_dev *dev, struct pci_bus *bus);
unsigned int pci_scan_child_bus(struct pci_bus *bus);
int __attribute__((warn_unused_result)) pci_bus_add_device(struct pci_dev *dev);
void pci_read_bridge_bases(struct pci_bus *child);
struct resource *pci_find_parent_resource(const struct pci_dev *dev,
       struct resource *res);
u8 pci_swizzle_interrupt_pin(struct pci_dev *dev, u8 pin);
int pci_get_interrupt_pin(struct pci_dev *dev, struct pci_dev **bridge);
u8 pci_common_swizzle(struct pci_dev *dev, u8 *pinp);
extern struct pci_dev *pci_dev_get(struct pci_dev *dev);
extern void pci_dev_put(struct pci_dev *dev);
extern void pci_remove_bus(struct pci_bus *b);
extern void pci_remove_bus_device(struct pci_dev *dev);
extern void pci_stop_bus_device(struct pci_dev *dev);
void pci_setup_cardbus(struct pci_bus *bus);
extern void pci_sort_breadthfirst(void);






enum pci_lost_interrupt_reason {
 PCI_LOST_IRQ_NO_INFORMATION = 0,
 PCI_LOST_IRQ_DISABLE_MSI,
 PCI_LOST_IRQ_DISABLE_MSIX,
 PCI_LOST_IRQ_DISABLE_ACPI,
};
enum pci_lost_interrupt_reason pci_lost_interrupt(struct pci_dev *dev);
int pci_find_capability(struct pci_dev *dev, int cap);
int pci_find_next_capability(struct pci_dev *dev, u8 pos, int cap);
int pci_find_ext_capability(struct pci_dev *dev, int cap);
int pci_bus_find_ext_capability(struct pci_bus *bus, unsigned int devfn,
    int cap);
int pci_find_ht_capability(struct pci_dev *dev, int ht_cap);
int pci_find_next_ht_capability(struct pci_dev *dev, int pos, int ht_cap);
struct pci_bus *pci_find_next_bus(const struct pci_bus *from);

struct pci_dev *pci_get_device(unsigned int vendor, unsigned int device,
    struct pci_dev *from);
struct pci_dev *pci_get_subsys(unsigned int vendor, unsigned int device,
    unsigned int ss_vendor, unsigned int ss_device,
    struct pci_dev *from);
struct pci_dev *pci_get_slot(struct pci_bus *bus, unsigned int devfn);
struct pci_dev *pci_get_domain_bus_and_slot(int domain, unsigned int bus,
         unsigned int devfn);
static inline struct pci_dev *pci_get_bus_and_slot(unsigned int bus,
         unsigned int devfn)
{
 return pci_get_domain_bus_and_slot(0, bus, devfn);
}
struct pci_dev *pci_get_class(unsigned int class, struct pci_dev *from);
int pci_dev_present(const struct pci_device_id *ids);

int pci_bus_read_config_byte(struct pci_bus *bus, unsigned int devfn,
        int where, u8 *val);
int pci_bus_read_config_word(struct pci_bus *bus, unsigned int devfn,
        int where, u16 *val);
int pci_bus_read_config_dword(struct pci_bus *bus, unsigned int devfn,
         int where, u32 *val);
int pci_bus_write_config_byte(struct pci_bus *bus, unsigned int devfn,
         int where, u8 val);
int pci_bus_write_config_word(struct pci_bus *bus, unsigned int devfn,
         int where, u16 val);
int pci_bus_write_config_dword(struct pci_bus *bus, unsigned int devfn,
          int where, u32 val);
struct pci_ops *pci_bus_set_ops(struct pci_bus *bus, struct pci_ops *ops);

static inline int pci_read_config_byte(struct pci_dev *dev, int where, u8 *val)
{
 return pci_bus_read_config_byte(dev->bus, dev->devfn, where, val);
}
static inline int pci_read_config_word(struct pci_dev *dev, int where, u16 *val)
{
 return pci_bus_read_config_word(dev->bus, dev->devfn, where, val);
}
static inline int pci_read_config_dword(struct pci_dev *dev, int where,
     u32 *val)
{
 return pci_bus_read_config_dword(dev->bus, dev->devfn, where, val);
}
static inline int pci_write_config_byte(struct pci_dev *dev, int where, u8 val)
{
 return pci_bus_write_config_byte(dev->bus, dev->devfn, where, val);
}
static inline int pci_write_config_word(struct pci_dev *dev, int where, u16 val)
{
 return pci_bus_write_config_word(dev->bus, dev->devfn, where, val);
}
static inline int pci_write_config_dword(struct pci_dev *dev, int where,
      u32 val)
{
 return pci_bus_write_config_dword(dev->bus, dev->devfn, where, val);
}

int __attribute__((warn_unused_result)) pci_enable_device(struct pci_dev *dev);
int __attribute__((warn_unused_result)) pci_enable_device_io(struct pci_dev *dev);
int __attribute__((warn_unused_result)) pci_enable_device_mem(struct pci_dev *dev);
int __attribute__((warn_unused_result)) pci_reenable_device(struct pci_dev *);
int __attribute__((warn_unused_result)) pcim_enable_device(struct pci_dev *pdev);
void pcim_pin_device(struct pci_dev *pdev);

static inline int pci_is_enabled(struct pci_dev *pdev)
{
 return (atomic_read(&pdev->enable_cnt) > 0);
}

static inline int pci_is_managed(struct pci_dev *pdev)
{
 return pdev->is_managed;
}

void pci_disable_device(struct pci_dev *dev);
void pci_set_master(struct pci_dev *dev);
void pci_clear_master(struct pci_dev *dev);
int pci_set_pcie_reset_state(struct pci_dev *dev, enum pcie_reset_state state);
int pci_set_cacheline_size(struct pci_dev *dev);

int __attribute__((warn_unused_result)) pci_set_mwi(struct pci_dev *dev);
int pci_try_set_mwi(struct pci_dev *dev);
void pci_clear_mwi(struct pci_dev *dev);
void pci_intx(struct pci_dev *dev, int enable);
void pci_msi_off(struct pci_dev *dev);
int pci_set_dma_max_seg_size(struct pci_dev *dev, unsigned int size);
int pci_set_dma_seg_boundary(struct pci_dev *dev, unsigned long mask);
int pcix_get_max_mmrbc(struct pci_dev *dev);
int pcix_get_mmrbc(struct pci_dev *dev);
int pcix_set_mmrbc(struct pci_dev *dev, int mmrbc);
int pcie_get_readrq(struct pci_dev *dev);
int pcie_set_readrq(struct pci_dev *dev, int rq);
int pcie_get_mps(struct pci_dev *dev);
int pcie_set_mps(struct pci_dev *dev, int mps);
int __pci_reset_function(struct pci_dev *dev);
int pci_reset_function(struct pci_dev *dev);
void pci_update_resource(struct pci_dev *dev, int resno);
int __attribute__((warn_unused_result)) pci_assign_resource(struct pci_dev *dev, int i);
int __attribute__((warn_unused_result)) pci_reassign_resource(struct pci_dev *dev, int i, resource_size_t add_size, resource_size_t align);
int pci_select_bars(struct pci_dev *dev, unsigned long flags);


int pci_enable_rom(struct pci_dev *pdev);
void pci_disable_rom(struct pci_dev *pdev);
void __attribute__((warn_unused_result)) *pci_map_rom(struct pci_dev *pdev, size_t *size);
void pci_unmap_rom(struct pci_dev *pdev, void *rom);
size_t pci_get_rom_size(struct pci_dev *pdev, void *rom, size_t size);


int pci_save_state(struct pci_dev *dev);
void pci_restore_state(struct pci_dev *dev);
struct pci_saved_state *pci_store_saved_state(struct pci_dev *dev);
int pci_load_saved_state(struct pci_dev *dev, struct pci_saved_state *state);
int pci_load_and_free_saved_state(struct pci_dev *dev,
      struct pci_saved_state **state);
int __pci_complete_power_transition(struct pci_dev *dev, pci_power_t state);
int pci_set_power_state(struct pci_dev *dev, pci_power_t state);
pci_power_t pci_choose_state(struct pci_dev *dev, pm_message_t state);
bool pci_pme_capable(struct pci_dev *dev, pci_power_t state);
void pci_pme_active(struct pci_dev *dev, bool enable);
int __pci_enable_wake(struct pci_dev *dev, pci_power_t state,
        bool runtime, bool enable);
int pci_wake_from_d3(struct pci_dev *dev, bool enable);
pci_power_t pci_target_state(struct pci_dev *dev);
int pci_prepare_to_sleep(struct pci_dev *dev);
int pci_back_from_sleep(struct pci_dev *dev);
bool pci_dev_run_wake(struct pci_dev *dev);
bool pci_check_pme_status(struct pci_dev *dev);
void pci_pme_wakeup_bus(struct pci_bus *bus);

static inline int pci_enable_wake(struct pci_dev *dev, pci_power_t state,
      bool enable)
{
 return __pci_enable_wake(dev, state, false, enable);
}



void pci_enable_ido(struct pci_dev *dev, unsigned long type);
void pci_disable_ido(struct pci_dev *dev, unsigned long type);

enum pci_obff_signal_type {
 PCI_EXP_OBFF_SIGNAL_L0 = 0,
 PCI_EXP_OBFF_SIGNAL_ALWAYS = 1,
};
int pci_enable_obff(struct pci_dev *dev, enum pci_obff_signal_type);
void pci_disable_obff(struct pci_dev *dev);

bool pci_ltr_supported(struct pci_dev *dev);
int pci_enable_ltr(struct pci_dev *dev);
void pci_disable_ltr(struct pci_dev *dev);
int pci_set_ltr(struct pci_dev *dev, int snoop_lat_ns, int nosnoop_lat_ns);


void set_pcie_port_type(struct pci_dev *pdev);
void set_pcie_hotplug_bridge(struct pci_dev *pdev);


int pci_bus_find_capability(struct pci_bus *bus, unsigned int devfn, int cap);

unsigned int pci_rescan_bus(struct pci_bus *bus);



ssize_t pci_read_vpd(struct pci_dev *dev, loff_t pos, size_t count, void *buf);
ssize_t pci_write_vpd(struct pci_dev *dev, loff_t pos, size_t count, const void *buf);
int pci_vpd_truncate(struct pci_dev *dev, size_t size);


void pci_bus_assign_resources(const struct pci_bus *bus);
void pci_bus_size_bridges(struct pci_bus *bus);
int pci_claim_resource(struct pci_dev *, int);
void pci_assign_unassigned_resources(void);
void pci_assign_unassigned_bridge_resources(struct pci_dev *bridge);
void pdev_enable_device(struct pci_dev *);
void pdev_sort_resources(struct pci_dev *, struct resource_list *);
int pci_enable_resources(struct pci_dev *, int mask);
void pci_fixup_irqs(u8 (*)(struct pci_dev *, u8 *),
      int (*)(const struct pci_dev *, u8, u8));

int __attribute__((warn_unused_result)) pci_request_regions(struct pci_dev *, const char *);
int __attribute__((warn_unused_result)) pci_request_regions_exclusive(struct pci_dev *, const char *);
void pci_release_regions(struct pci_dev *);
int __attribute__((warn_unused_result)) pci_request_region(struct pci_dev *, int, const char *);
int __attribute__((warn_unused_result)) pci_request_region_exclusive(struct pci_dev *, int, const char *);
void pci_release_region(struct pci_dev *, int);
int pci_request_selected_regions(struct pci_dev *, int, const char *);
int pci_request_selected_regions_exclusive(struct pci_dev *, int, const char *);
void pci_release_selected_regions(struct pci_dev *, int);


void pci_bus_add_resource(struct pci_bus *bus, struct resource *res, unsigned int flags);
struct resource *pci_bus_resource_n(const struct pci_bus *bus, int n);
void pci_bus_remove_resources(struct pci_bus *bus);






int __attribute__((warn_unused_result)) pci_bus_alloc_resource(struct pci_bus *bus,
   struct resource *res, resource_size_t size,
   resource_size_t align, resource_size_t min,
   unsigned int type_mask,
   resource_size_t (*alignf)(void *,
        const struct resource *,
        resource_size_t,
        resource_size_t),
   void *alignf_data);
void pci_enable_bridges(struct pci_bus *bus);


int __attribute__((warn_unused_result)) __pci_register_driver(struct pci_driver *, struct module *,
           const char *mod_name);







void pci_unregister_driver(struct pci_driver *dev);
void pci_remove_behind_bridge(struct pci_dev *dev);
struct pci_driver *pci_dev_driver(const struct pci_dev *dev);
int pci_add_dynid(struct pci_driver *drv,
    unsigned int vendor, unsigned int device,
    unsigned int subvendor, unsigned int subdevice,
    unsigned int class, unsigned int class_mask,
    unsigned long driver_data);
const struct pci_device_id *pci_match_id(const struct pci_device_id *ids,
      struct pci_dev *dev);
int pci_scan_bridge(struct pci_bus *bus, struct pci_dev *dev, int max,
      int pass);

void pci_walk_bus(struct pci_bus *top, int (*cb)(struct pci_dev *, void *),
    void *userdata);
int pci_cfg_space_size_ext(struct pci_dev *dev);
int pci_cfg_space_size(struct pci_dev *dev);
unsigned char pci_bus_max_busnr(struct pci_bus *bus);




int pci_set_vga_state(struct pci_dev *pdev, bool decode,
        unsigned int command_bits, u32 flags);


# 1 "include/linux/pci-dma.h" 1
# 966 "include/linux/pci.h" 2
# 1 "include/linux/dmapool.h" 1
# 15 "include/linux/dmapool.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/scatterlist.h" 1



# 1 "include/asm-generic/scatterlist.h" 1





struct scatterlist {

 unsigned long sg_magic;

 unsigned long page_link;
 unsigned int offset;
 unsigned int length;
 dma_addr_t dma_address;

 unsigned int dma_length;

};
# 5 "/home/iago/torvalds/linux/arch/x86/include/asm/scatterlist.h" 2
# 16 "include/linux/dmapool.h" 2

struct dma_pool *dma_pool_create(const char *name, struct device *dev,
   size_t size, size_t align, size_t allocation);

void dma_pool_destroy(struct dma_pool *pool);

void *dma_pool_alloc(struct dma_pool *pool, gfp_t mem_flags,
       dma_addr_t *handle);

void dma_pool_free(struct dma_pool *pool, void *vaddr, dma_addr_t addr);




struct dma_pool *dmam_pool_create(const char *name, struct device *dev,
      size_t size, size_t align, size_t allocation);
void dmam_pool_destroy(struct dma_pool *pool);
# 967 "include/linux/pci.h" 2
# 975 "include/linux/pci.h"
enum pci_dma_burst_strategy {
 PCI_DMA_BURST_INFINITY,

 PCI_DMA_BURST_BOUNDARY,

 PCI_DMA_BURST_MULTIPLE,

};

struct msix_entry {
 u32 vector;
 u16 entry;
};
# 1026 "include/linux/pci.h"
extern int pci_enable_msi_block(struct pci_dev *dev, unsigned int nvec);
extern void pci_msi_shutdown(struct pci_dev *dev);
extern void pci_disable_msi(struct pci_dev *dev);
extern int pci_msix_table_size(struct pci_dev *dev);
extern int pci_enable_msix(struct pci_dev *dev,
 struct msix_entry *entries, int nvec);
extern void pci_msix_shutdown(struct pci_dev *dev);
extern void pci_disable_msix(struct pci_dev *dev);
extern void msi_remove_pci_irq_vectors(struct pci_dev *dev);
extern void pci_restore_msi_state(struct pci_dev *dev);
extern int pci_msi_enabled(void);



extern bool pcie_ports_disabled;
extern bool pcie_ports_auto;
# 1051 "include/linux/pci.h"
extern int pcie_aspm_enabled(void);
extern bool pcie_aspm_support_enabled(void);



void pci_no_aer(void);
bool pci_aer_available(void);
# 1070 "include/linux/pci.h"
extern void pcie_set_ecrc_checking(struct pci_dev *dev);
extern void pcie_ecrc_get_policy(char *str);






int ht_create_irq(struct pci_dev *dev, int idx);
void ht_destroy_irq(unsigned int irq);


extern void pci_block_user_cfg_access(struct pci_dev *dev);
extern void pci_unblock_user_cfg_access(struct pci_dev *dev);







extern int pci_domains_supported;
# 1106 "include/linux/pci.h"
typedef int (*arch_set_vga_state_t)(struct pci_dev *pdev, bool decode,
        unsigned int command_bits, u32 flags);
extern void pci_register_set_vga_state(arch_set_vga_state_t func);
# 1307 "include/linux/pci.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/pci.h" 1



# 1 "include/linux/mm.h" 1
# 11 "include/linux/mm.h"
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
static inline void rb_set_parent(struct rb_node *rb, struct rb_node *p)
{
 rb->rb_parent_color = (rb->rb_parent_color & 3) | (unsigned long)p;
}
static inline void rb_set_color(struct rb_node *rb, int color)
{
 rb->rb_parent_color = (rb->rb_parent_color & ~1) | color;
}
# 139 "include/linux/rbtree.h"
static inline void rb_init_node(struct rb_node *rb)
{
 rb->rb_parent_color = 0;
 rb->rb_right = ((void *)0);
 rb->rb_left = ((void *)0);
 (rb_set_parent(rb, rb));
}

extern void rb_insert_color(struct rb_node *, struct rb_root *);
extern void rb_erase(struct rb_node *, struct rb_root *);

typedef void (*rb_augment_f)(struct rb_node *node, void *data);

extern void rb_augment_insert(struct rb_node *node,
         rb_augment_f func, void *data);
extern struct rb_node *rb_augment_erase_begin(struct rb_node *node);
extern void rb_augment_erase_end(struct rb_node *node,
     rb_augment_f func, void *data);


extern struct rb_node *rb_next(const struct rb_node *);
extern struct rb_node *rb_prev(const struct rb_node *);
extern struct rb_node *rb_first(const struct rb_root *);
extern struct rb_node *rb_last(const struct rb_root *);


extern void rb_replace_node(struct rb_node *victim, struct rb_node *new,
       struct rb_root *root);

static inline void rb_link_node(struct rb_node * node, struct rb_node * parent,
    struct rb_node ** rb_link)
{
 node->rb_parent_color = (unsigned long )parent;
 node->rb_left = node->rb_right = ((void *)0);

 *rb_link = node;
}
# 12 "include/linux/mm.h" 2
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

static inline void prio_tree_iter_init(struct prio_tree_iter *iter,
  struct prio_tree_root *root, unsigned long r_index, unsigned long h_index)
{
 iter->root = root;
 iter->r_index = r_index;
 iter->h_index = h_index;
 iter->cur = ((void *)0);
}
# 84 "include/linux/prio_tree.h"
static inline int prio_tree_empty(const struct prio_tree_root *root)
{
 return root->prio_tree_node == ((void *)0);
}

static inline int prio_tree_root(const struct prio_tree_node *node)
{
 return node->parent == node;
}

static inline int prio_tree_left_empty(const struct prio_tree_node *node)
{
 return node->left == node;
}

static inline int prio_tree_right_empty(const struct prio_tree_node *node)
{
 return node->right == node;
}


struct prio_tree_node *prio_tree_replace(struct prio_tree_root *root,
                struct prio_tree_node *old, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_insert(struct prio_tree_root *root,
                struct prio_tree_node *node);
void prio_tree_remove(struct prio_tree_root *root, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_next(struct prio_tree_iter *iter);
# 13 "include/linux/mm.h" 2

# 1 "include/linux/mm_types.h" 1



# 1 "include/linux/auxvec.h" 1
# 5 "include/linux/mm_types.h" 2
# 14 "include/linux/mm_types.h"
# 1 "include/linux/page-debug-flags.h" 1
# 14 "include/linux/page-debug-flags.h"
enum page_debug_flags {
 PAGE_DEBUG_FLAG_POISON,
};
# 15 "include/linux/mm_types.h" 2
# 23 "include/linux/mm_types.h"
struct address_space;
# 40 "include/linux/mm_types.h"
struct page {

 unsigned long flags;

 struct address_space *mapping;







 struct {
  union {
   unsigned long index;
   void *freelist;
  };

  union {

   unsigned long counters;

   struct {

    union {
     atomic_t _mapcount;




     struct {
      unsigned inuse:16;
      unsigned objects:15;
      unsigned frozen:1;
     };
    };
    atomic_t _count;
   };
  };
 };


 struct list_head lru;




 union {
  unsigned long private;
# 98 "include/linux/mm_types.h"
  struct kmem_cache *slab;
  struct page *first_page;
 };
# 127 "include/linux/mm_types.h"
}






 __attribute__((__aligned__(2*sizeof(unsigned long))))

;

typedef unsigned long vm_flags_t;






struct vm_region {
 struct rb_node vm_rb;
 vm_flags_t vm_flags;
 unsigned long vm_start;
 unsigned long vm_end;
 unsigned long vm_top;
 unsigned long vm_pgoff;
 struct file *vm_file;

 int vm_usage;
 bool vm_icache_flushed : 1;

};







struct vm_area_struct {
 struct mm_struct * vm_mm;
 unsigned long vm_start;
 unsigned long vm_end;



 struct vm_area_struct *vm_next, *vm_prev;

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







 struct list_head anon_vma_chain;

 struct anon_vma *anon_vma;


 const struct vm_operations_struct *vm_ops;


 unsigned long vm_pgoff;

 struct file * vm_file;
 void * vm_private_data;





 struct mempolicy *vm_policy;

};

struct core_thread {
 struct task_struct *task;
 struct core_thread *next;
};

struct core_state {
 atomic_t nr_threads;
 struct core_thread dumper;
 struct completion startup;
};

enum {
 MM_FILEPAGES,
 MM_ANONPAGES,
 MM_SWAPENTS,
 NR_MM_COUNTERS
};
# 249 "include/linux/mm_types.h"
struct mm_rss_stat {
 atomic_long_t count[NR_MM_COUNTERS];
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

 spinlock_t page_table_lock;
 struct rw_semaphore mmap_sem;

 struct list_head mmlist;





 unsigned long hiwater_rss;
 unsigned long hiwater_vm;

 unsigned long total_vm, locked_vm, shared_vm, exec_vm;
 unsigned long stack_vm, reserved_vm, def_flags, nr_ptes;
 unsigned long start_code, end_code, start_data, end_data;
 unsigned long start_brk, brk, start_stack;
 unsigned long arg_start, arg_end, env_start, env_end;

 unsigned long saved_auxv[(2*(2 + 19 + 1))];





 struct mm_rss_stat rss_stat;

 struct linux_binfmt *binfmt;

 cpumask_var_t cpu_vm_mask_var;


 mm_context_t context;
# 312 "include/linux/mm_types.h"
 unsigned int faultstamp;
 unsigned int token_priority;
 unsigned int last_interval;


 atomic_t oom_disable_count;

 unsigned long flags;

 struct core_state *core_state;

 spinlock_t ioctx_lock;
 struct hlist_head ioctx_list;
# 337 "include/linux/mm_types.h"
 struct task_struct *owner;



 struct file *exe_file;
 unsigned long num_exe_file_vmas;

 struct mmu_notifier_mm *mmu_notifier_mm;


 pgtable_t pmd_huge_pte;


 struct cpumask cpumask_allocation;

};

static inline void mm_init_cpumask(struct mm_struct *mm)
{

 mm->cpu_vm_mask_var = &mm->cpumask_allocation;

}


static inline cpumask_t *mm_cpumask(struct mm_struct *mm)
{
 return mm->cpu_vm_mask_var;
}
# 15 "include/linux/mm.h" 2
# 1 "include/linux/range.h" 1



struct range {
 u64 start;
 u64 end;
};

int add_range(struct range *range, int az, int nr_range,
  u64 start, u64 end);


int add_range_with_merge(struct range *range, int az, int nr_range,
    u64 start, u64 end);

void subtract_range(struct range *range, int az, u64 start, u64 end);

int clean_sort_range(struct range *range, int az);

void sort_range(struct range *range, int nr_range);


static inline resource_size_t cap_resource(u64 val)
{
 if (val > ((resource_size_t)~0))
  return ((resource_size_t)~0);

 return val;
}
# 16 "include/linux/mm.h" 2

# 1 "include/linux/bit_spinlock.h" 1
# 14 "include/linux/bit_spinlock.h"
static inline void bit_spin_lock(int bitnum, unsigned long *addr)
{







 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);

 while (__builtin_expect(!!(test_and_set_bit_lock(bitnum, addr)), 0)) {
  do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
  do {
   cpu_relax();
  } while ((__builtin_constant_p((bitnum)) ? constant_test_bit((bitnum), (addr)) : variable_test_bit((bitnum), (addr))));
  do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 }

 (void)0;
}




static inline int bit_spin_trylock(int bitnum, unsigned long *addr)
{
 do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);

 if (__builtin_expect(!!(test_and_set_bit_lock(bitnum, addr)), 0)) {
  do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
  return 0;
 }

 (void)0;
 return 1;
}




static inline void bit_spin_unlock(int bitnum, unsigned long *addr)
{

 do { if (__builtin_expect(!!(!(__builtin_constant_p((bitnum)) ? constant_test_bit((bitnum), (addr)) : variable_test_bit((bitnum), (addr)))), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/bit_spinlock.h"), "i" (58), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);


 clear_bit_unlock(bitnum, addr);

 do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
 (void)0;
}






static inline void __bit_spin_unlock(int bitnum, unsigned long *addr)
{

 do { if (__builtin_expect(!!(!(__builtin_constant_p((bitnum)) ? constant_test_bit((bitnum), (addr)) : variable_test_bit((bitnum), (addr)))), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/bit_spinlock.h"), "i" (75), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);


 __clear_bit_unlock(bitnum, addr);

 do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { } while (0); } while (0);
 (void)0;
}




static inline int bit_spin_is_locked(int bitnum, unsigned long *addr)
{

 return (__builtin_constant_p((bitnum)) ? constant_test_bit((bitnum), (addr)) : variable_test_bit((bitnum), (addr)));





}
# 18 "include/linux/mm.h" 2
# 1 "include/linux/shrinker.h" 1







struct shrink_control {
 gfp_t gfp_mask;


 unsigned long nr_to_scan;
};
# 30 "include/linux/shrinker.h"
struct shrinker {
 int (*shrink)(struct shrinker *, struct shrink_control *sc);
 int seeks;
 long batch;


 struct list_head list;
 long nr;
};

extern void register_shrinker(struct shrinker *);
extern void unregister_shrinker(struct shrinker *);
# 19 "include/linux/mm.h" 2

struct mempolicy;
struct anon_vma;
struct file_ra_state;
struct user_struct;
struct writeback_control;


extern unsigned long max_mapnr;


extern unsigned long num_physpages;
extern unsigned long totalram_pages;
extern void * high_memory;
extern int page_cluster;


extern int sysctl_legacy_va_layout;





# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable.h" 1
# 25 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable.h"
extern unsigned long empty_zero_page[((1UL) << 12) / sizeof(unsigned long)];


extern spinlock_t pgd_lock;
extern struct list_head pgd_list;

extern struct mm_struct *pgd_page_get_mm(struct page *page);
# 90 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable.h"
static inline int pte_dirty(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(1)) << 6);
}

static inline int pte_young(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(1)) << 5);
}

static inline int pmd_young(pmd_t pmd)
{
 return pmd_flags(pmd) & (((pteval_t)(1)) << 5);
}

static inline int pte_write(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(1)) << 1);
}

static inline int pte_file(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(1)) << 6);
}

static inline int pte_huge(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(1)) << 7);
}

static inline int pte_global(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(1)) << 8);
}

static inline int pte_exec(pte_t pte)
{
 return !(pte_flags(pte) & (((pteval_t)(1)) << 63));
}

static inline int pte_special(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(1)) << 9);
}

static inline unsigned long pte_pfn(pte_t pte)
{
 return (pte_val(pte) & ((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1))))) >> 12;
}

static inline unsigned long pmd_pfn(pmd_t pmd)
{
 return (pmd_val(pmd) & ((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1))))) >> 12;
}



static inline int pmd_large(pmd_t pte)
{
 return (pmd_flags(pte) & ((((pteval_t)(1)) << 7) | (((pteval_t)(1)) << 0))) ==
  ((((pteval_t)(1)) << 7) | (((pteval_t)(1)) << 0));
}


static inline int pmd_trans_splitting(pmd_t pmd)
{
 return pmd_val(pmd) & (((pteval_t)(1)) << 9);
}

static inline int pmd_trans_huge(pmd_t pmd)
{
 return pmd_val(pmd) & (((pteval_t)(1)) << 7);
}

static inline int has_transparent_hugepage(void)
{
 return (__builtin_constant_p((0*32+ 3)) && ( ((((0*32+ 3))>>5)==0 && (1UL<<(((0*32+ 3))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((0*32+ 3))>>5)==1 && (1UL<<(((0*32+ 3))&31) & ((1<<((1*32+29) & 31))|0))) || ((((0*32+ 3))>>5)==2 && (1UL<<(((0*32+ 3))&31) & 0)) || ((((0*32+ 3))>>5)==3 && (1UL<<(((0*32+ 3))&31) & ((1<<((3*32+20) & 31))))) || ((((0*32+ 3))>>5)==4 && (1UL<<(((0*32+ 3))&31) & 0)) || ((((0*32+ 3))>>5)==5 && (1UL<<(((0*32+ 3))&31) & 0)) || ((((0*32+ 3))>>5)==6 && (1UL<<(((0*32+ 3))&31) & 0)) || ((((0*32+ 3))>>5)==7 && (1UL<<(((0*32+ 3))&31) & 0)) || ((((0*32+ 3))>>5)==8 && (1UL<<(((0*32+ 3))&31) & 0)) || ((((0*32+ 3))>>5)==9 && (1UL<<(((0*32+ 3))&31) & 0)) ) ? 1 : (__builtin_constant_p(((0*32+ 3))) ? constant_test_bit(((0*32+ 3)), ((unsigned long *)((&boot_cpu_data)->x86_capability))) : variable_test_bit(((0*32+ 3)), ((unsigned long *)((&boot_cpu_data)->x86_capability)))));
}


static inline pte_t pte_set_flags(pte_t pte, pteval_t set)
{
 pteval_t v = native_pte_val(pte);

 return native_make_pte(v | set);
}

static inline pte_t pte_clear_flags(pte_t pte, pteval_t clear)
{
 pteval_t v = native_pte_val(pte);

 return native_make_pte(v & ~clear);
}

static inline pte_t pte_mkclean(pte_t pte)
{
 return pte_clear_flags(pte, (((pteval_t)(1)) << 6));
}

static inline pte_t pte_mkold(pte_t pte)
{
 return pte_clear_flags(pte, (((pteval_t)(1)) << 5));
}

static inline pte_t pte_wrprotect(pte_t pte)
{
 return pte_clear_flags(pte, (((pteval_t)(1)) << 1));
}

static inline pte_t pte_mkexec(pte_t pte)
{
 return pte_clear_flags(pte, (((pteval_t)(1)) << 63));
}

static inline pte_t pte_mkdirty(pte_t pte)
{
 return pte_set_flags(pte, (((pteval_t)(1)) << 6));
}

static inline pte_t pte_mkyoung(pte_t pte)
{
 return pte_set_flags(pte, (((pteval_t)(1)) << 5));
}

static inline pte_t pte_mkwrite(pte_t pte)
{
 return pte_set_flags(pte, (((pteval_t)(1)) << 1));
}

static inline pte_t pte_mkhuge(pte_t pte)
{
 return pte_set_flags(pte, (((pteval_t)(1)) << 7));
}

static inline pte_t pte_clrhuge(pte_t pte)
{
 return pte_clear_flags(pte, (((pteval_t)(1)) << 7));
}

static inline pte_t pte_mkglobal(pte_t pte)
{
 return pte_set_flags(pte, (((pteval_t)(1)) << 8));
}

static inline pte_t pte_clrglobal(pte_t pte)
{
 return pte_clear_flags(pte, (((pteval_t)(1)) << 8));
}

static inline pte_t pte_mkspecial(pte_t pte)
{
 return pte_set_flags(pte, (((pteval_t)(1)) << 9));
}

static inline pmd_t pmd_set_flags(pmd_t pmd, pmdval_t set)
{
 pmdval_t v = native_pmd_val(pmd);

 return __pmd(v | set);
}

static inline pmd_t pmd_clear_flags(pmd_t pmd, pmdval_t clear)
{
 pmdval_t v = native_pmd_val(pmd);

 return __pmd(v & ~clear);
}

static inline pmd_t pmd_mkold(pmd_t pmd)
{
 return pmd_clear_flags(pmd, (((pteval_t)(1)) << 5));
}

static inline pmd_t pmd_wrprotect(pmd_t pmd)
{
 return pmd_clear_flags(pmd, (((pteval_t)(1)) << 1));
}

static inline pmd_t pmd_mkdirty(pmd_t pmd)
{
 return pmd_set_flags(pmd, (((pteval_t)(1)) << 6));
}

static inline pmd_t pmd_mkhuge(pmd_t pmd)
{
 return pmd_set_flags(pmd, (((pteval_t)(1)) << 7));
}

static inline pmd_t pmd_mkyoung(pmd_t pmd)
{
 return pmd_set_flags(pmd, (((pteval_t)(1)) << 5));
}

static inline pmd_t pmd_mkwrite(pmd_t pmd)
{
 return pmd_set_flags(pmd, (((pteval_t)(1)) << 1));
}

static inline pmd_t pmd_mknotpresent(pmd_t pmd)
{
 return pmd_clear_flags(pmd, (((pteval_t)(1)) << 0));
}





static inline pgprotval_t massage_pgprot(pgprot_t pgprot)
{
 pgprotval_t protval = ((pgprot).pgprot);

 if (protval & (((pteval_t)(1)) << 0))
  protval &= __supported_pte_mask;

 return protval;
}

static inline pte_t pfn_pte(unsigned long page_nr, pgprot_t pgprot)
{
 return __pte(((phys_addr_t)page_nr << 12) |
       massage_pgprot(pgprot));
}

static inline pmd_t pfn_pmd(unsigned long page_nr, pgprot_t pgprot)
{
 return __pmd(((phys_addr_t)page_nr << 12) |
       massage_pgprot(pgprot));
}

static inline pte_t pte_modify(pte_t pte, pgprot_t newprot)
{
 pteval_t val = pte_val(pte);





 val &= (((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))) | (((pteval_t)(1)) << 4) | (((pteval_t)(1)) << 3) | (((pteval_t)(1)) << 9) | (((pteval_t)(1)) << 5) | (((pteval_t)(1)) << 6));
 val |= massage_pgprot(newprot) & ~(((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))) | (((pteval_t)(1)) << 4) | (((pteval_t)(1)) << 3) | (((pteval_t)(1)) << 9) | (((pteval_t)(1)) << 5) | (((pteval_t)(1)) << 6));

 return __pte(val);
}

static inline pmd_t pmd_modify(pmd_t pmd, pgprot_t newprot)
{
 pmdval_t val = pmd_val(pmd);

 val &= ((((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))) | (((pteval_t)(1)) << 4) | (((pteval_t)(1)) << 3) | (((pteval_t)(1)) << 9) | (((pteval_t)(1)) << 5) | (((pteval_t)(1)) << 6)) | (((pteval_t)(1)) << 7));
 val |= massage_pgprot(newprot) & ~((((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))) | (((pteval_t)(1)) << 4) | (((pteval_t)(1)) << 3) | (((pteval_t)(1)) << 9) | (((pteval_t)(1)) << 5) | (((pteval_t)(1)) << 6)) | (((pteval_t)(1)) << 7));

 return __pmd(val);
}



static inline pgprot_t pgprot_modify(pgprot_t oldprot, pgprot_t newprot)
{
 pgprotval_t preservebits = ((oldprot).pgprot) & (((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))) | (((pteval_t)(1)) << 4) | (((pteval_t)(1)) << 3) | (((pteval_t)(1)) << 9) | (((pteval_t)(1)) << 5) | (((pteval_t)(1)) << 6));
 pgprotval_t addbits = ((newprot).pgprot);
 return ((pgprot_t) { (preservebits | addbits) } );
}





static inline int is_new_memtype_allowed(u64 paddr, unsigned long size,
      unsigned long flags,
      unsigned long new_flags)
{



 if (x86_platform.is_untracked_pat_range(paddr, paddr + size))
  return 1;







 if ((flags == ((((pteval_t)(1)) << 4)) &&
      new_flags == (0)) ||
     (flags == ((((pteval_t)(1)) << 3)) &&
      new_flags == (0))) {
  return 0;
 }

 return 1;
}

pmd_t *populate_extra_pmd(unsigned long vaddr);
pte_t *populate_extra_pte(unsigned long vaddr);





# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable_64.h" 1




# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable_64_types.h" 1
# 6 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable_64.h" 2
# 17 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable_64.h"
extern pud_t level3_kernel_pgt[512];
extern pud_t level3_ident_pgt[512];
extern pmd_t level2_kernel_pgt[512];
extern pmd_t level2_fixmap_pgt[512];
extern pmd_t level2_ident_pgt[512];
extern pgd_t init_level4_pgt[];



extern void paging_init(void);
# 41 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable_64.h"
struct mm_struct;

void set_pte_vaddr_pud(pud_t *pud_page, unsigned long vaddr, pte_t new_pte);


static inline void native_pte_clear(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep)
{
 *ptep = native_make_pte(0);
}

static inline void native_set_pte(pte_t *ptep, pte_t pte)
{
 *ptep = pte;
}

static inline void native_set_pte_atomic(pte_t *ptep, pte_t pte)
{
 native_set_pte(ptep, pte);
}

static inline void native_set_pmd(pmd_t *pmdp, pmd_t pmd)
{
 *pmdp = pmd;
}

static inline void native_pmd_clear(pmd_t *pmd)
{
 native_set_pmd(pmd, native_make_pmd(0));
}

static inline pte_t native_ptep_get_and_clear(pte_t *xp)
{

 return native_make_pte(({ __typeof(*((&xp->pte))) __x = ((0)); switch (sizeof(*&xp->pte)) { case 1: { volatile u8 *__ptr = (volatile u8 *)((&xp->pte)); asm volatile("xchgb %0,%1" : "=q" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } case 2: { volatile u16 *__ptr = (volatile u16 *)((&xp->pte)); asm volatile("xchgw %0,%1" : "=r" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } case 4: { volatile u32 *__ptr = (volatile u32 *)((&xp->pte)); asm volatile("xchgl %0,%1" : "=r" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } case 8: { volatile u64 *__ptr = (volatile u64 *)((&xp->pte)); asm volatile("xchgq %0,%1" : "=r" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } default: __xchg_wrong_size(); } __x; }));







}

static inline pmd_t native_pmdp_get_and_clear(pmd_t *xp)
{

 return native_make_pmd(({ __typeof(*((&xp->pmd))) __x = ((0)); switch (sizeof(*&xp->pmd)) { case 1: { volatile u8 *__ptr = (volatile u8 *)((&xp->pmd)); asm volatile("xchgb %0,%1" : "=q" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } case 2: { volatile u16 *__ptr = (volatile u16 *)((&xp->pmd)); asm volatile("xchgw %0,%1" : "=r" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } case 4: { volatile u32 *__ptr = (volatile u32 *)((&xp->pmd)); asm volatile("xchgl %0,%1" : "=r" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } case 8: { volatile u64 *__ptr = (volatile u64 *)((&xp->pmd)); asm volatile("xchgq %0,%1" : "=r" (__x), "+m" (*__ptr) : "0" (__x) : "memory"); break; } default: __xchg_wrong_size(); } __x; }));







}

static inline void native_set_pud(pud_t *pudp, pud_t pud)
{
 *pudp = pud;
}

static inline void native_pud_clear(pud_t *pud)
{
 native_set_pud(pud, native_make_pud(0));
}

static inline void native_set_pgd(pgd_t *pgdp, pgd_t pgd)
{
 *pgdp = pgd;
}

static inline void native_pgd_clear(pgd_t *pgd)
{
 native_set_pgd(pgd, native_make_pgd(0));
}

extern void sync_global_pgds(unsigned long start, unsigned long end);
# 128 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable_64.h"
static inline int pgd_large(pgd_t pgd) { return 0; }
# 167 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable_64.h"
extern int kern_addr_valid(unsigned long addr);
extern void cleanup_highmap(void);
# 390 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable.h" 2





static inline int pte_none(pte_t pte)
{
 return !pte.pte;
}


static inline int pte_same(pte_t a, pte_t b)
{
 return a.pte == b.pte;
}

static inline int pte_present(pte_t a)
{
 return pte_flags(a) & ((((pteval_t)(1)) << 0) | (((pteval_t)(1)) << 8));
}

static inline int pte_hidden(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(0)));
}

static inline int pmd_present(pmd_t pmd)
{
 return pmd_flags(pmd) & (((pteval_t)(1)) << 0);
}

static inline int pmd_none(pmd_t pmd)
{


 return (unsigned long)native_pmd_val(pmd) == 0;
}

static inline unsigned long pmd_page_vaddr(pmd_t pmd)
{
 return (unsigned long)((void *)((unsigned long)(pmd_val(pmd) & ((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))))+((unsigned long)(0xffff880000000000UL))));
}
# 445 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable.h"
static inline unsigned long pmd_index(unsigned long address)
{
 return (address >> 21) & (512 - 1);
}
# 465 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable.h"
static inline unsigned long pte_index(unsigned long address)
{
 return (address >> 12) & (512 - 1);
}

static inline pte_t *pte_offset_kernel(pmd_t *pmd, unsigned long address)
{
 return (pte_t *)pmd_page_vaddr(*pmd) + pte_index(address);
}

static inline int pmd_bad(pmd_t pmd)
{
 return (pmd_flags(pmd) & ~(((pteval_t)(1)) << 2)) != ((((pteval_t)(1)) << 0) | (((pteval_t)(1)) << 1) | (((pteval_t)(1)) << 5) | (((pteval_t)(1)) << 6));
}

static inline unsigned long pages_to_mb(unsigned long npg)
{
 return npg >> (20 - 12);
}





static inline int pud_none(pud_t pud)
{
 return native_pud_val(pud) == 0;
}

static inline int pud_present(pud_t pud)
{
 return pud_flags(pud) & (((pteval_t)(1)) << 0);
}

static inline unsigned long pud_page_vaddr(pud_t pud)
{
 return (unsigned long)((void *)((unsigned long)((unsigned long)pud_val(pud) & ((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))))+((unsigned long)(0xffff880000000000UL))));
}
# 511 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable.h"
static inline pmd_t *pmd_offset(pud_t *pud, unsigned long address)
{
 return (pmd_t *)pud_page_vaddr(*pud) + pmd_index(address);
}

static inline int pud_large(pud_t pud)
{
 return (pud_val(pud) & ((((pteval_t)(1)) << 7) | (((pteval_t)(1)) << 0))) ==
  ((((pteval_t)(1)) << 7) | (((pteval_t)(1)) << 0));
}

static inline int pud_bad(pud_t pud)
{
 return (pud_flags(pud) & ~(((((pteval_t)(1)) << 0) | (((pteval_t)(1)) << 1) | (((pteval_t)(1)) << 5) | (((pteval_t)(1)) << 6)) | (((pteval_t)(1)) << 2))) != 0;
}
# 534 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable.h"
static inline int pgd_present(pgd_t pgd)
{
 return pgd_flags(pgd) & (((pteval_t)(1)) << 0);
}

static inline unsigned long pgd_page_vaddr(pgd_t pgd)
{
 return (unsigned long)((void *)((unsigned long)((unsigned long)pgd_val(pgd) & ((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))))+((unsigned long)(0xffff880000000000UL))));
}
# 551 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable.h"
static inline unsigned long pud_index(unsigned long address)
{
 return (address >> 30) & (512 - 1);
}

static inline pud_t *pud_offset(pgd_t *pgd, unsigned long address)
{
 return (pud_t *)pgd_page_vaddr(*pgd) + pud_index(address);
}

static inline int pgd_bad(pgd_t pgd)
{
 return (pgd_flags(pgd) & ~(((pteval_t)(1)) << 2)) != ((((pteval_t)(1)) << 0) | (((pteval_t)(1)) << 1) | (((pteval_t)(1)) << 5) | (((pteval_t)(1)) << 6));
}

static inline int pgd_none(pgd_t pgd)
{
 return !native_pgd_val(pgd);
}
# 599 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable.h"
extern int direct_gbpages;


static inline pte_t native_local_ptep_get_and_clear(pte_t *ptep)
{
 pte_t res = *ptep;


 native_pte_clear(((void *)0), 0, ptep);
 return res;
}

static inline pmd_t native_local_pmdp_get_and_clear(pmd_t *pmdp)
{
 pmd_t res = *pmdp;

 native_pmd_clear(pmdp);
 return res;
}

static inline void native_set_pte_at(struct mm_struct *mm, unsigned long addr,
         pte_t *ptep , pte_t pte)
{
 native_set_pte(ptep, pte);
}

static inline void native_set_pmd_at(struct mm_struct *mm, unsigned long addr,
         pmd_t *pmdp , pmd_t pmd)
{
 native_set_pmd(pmdp, pmd);
}
# 656 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable.h"
struct vm_area_struct;


extern int ptep_set_access_flags(struct vm_area_struct *vma,
     unsigned long address, pte_t *ptep,
     pte_t entry, int dirty);


extern int ptep_test_and_clear_young(struct vm_area_struct *vma,
         unsigned long addr, pte_t *ptep);


extern int ptep_clear_flush_young(struct vm_area_struct *vma,
      unsigned long address, pte_t *ptep);


static inline pte_t ptep_get_and_clear(struct mm_struct *mm, unsigned long addr,
           pte_t *ptep)
{
 pte_t pte = native_ptep_get_and_clear(ptep);
 pte_update(mm, addr, ptep);
 return pte;
}


static inline pte_t ptep_get_and_clear_full(struct mm_struct *mm,
         unsigned long addr, pte_t *ptep,
         int full)
{
 pte_t pte;
 if (full) {




  pte = native_local_ptep_get_and_clear(ptep);
 } else {
  pte = ptep_get_and_clear(mm, addr, ptep);
 }
 return pte;
}


static inline void ptep_set_wrprotect(struct mm_struct *mm,
          unsigned long addr, pte_t *ptep)
{
 clear_bit(1, (unsigned long *)&ptep->pte);
 pte_update(mm, addr, ptep);
}






extern int pmdp_set_access_flags(struct vm_area_struct *vma,
     unsigned long address, pmd_t *pmdp,
     pmd_t entry, int dirty);


extern int pmdp_test_and_clear_young(struct vm_area_struct *vma,
         unsigned long addr, pmd_t *pmdp);


extern int pmdp_clear_flush_young(struct vm_area_struct *vma,
      unsigned long address, pmd_t *pmdp);



extern void pmdp_splitting_flush(struct vm_area_struct *vma,
     unsigned long addr, pmd_t *pmdp);


static inline int pmd_write(pmd_t pmd)
{
 return pmd_flags(pmd) & (((pteval_t)(1)) << 1);
}


static inline pmd_t pmdp_get_and_clear(struct mm_struct *mm, unsigned long addr,
           pmd_t *pmdp)
{
 pmd_t pmd = native_pmdp_get_and_clear(pmdp);
 pmd_update(mm, addr, pmdp);
 return pmd;
}


static inline void pmdp_set_wrprotect(struct mm_struct *mm,
          unsigned long addr, pmd_t *pmdp)
{
 clear_bit(1, (unsigned long *)pmdp);
 pmd_update(mm, addr, pmdp);
}
# 761 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable.h"
static inline void clone_pgd_range(pgd_t *dst, pgd_t *src, int count)
{
       memcpy(dst, src, count * sizeof(pgd_t));
}


# 1 "include/asm-generic/pgtable.h" 1
# 112 "include/asm-generic/pgtable.h"
static inline void pte_clear_not_present_full(struct mm_struct *mm,
           unsigned long address,
           pte_t *ptep,
           int full)
{
 pte_clear(mm, address, ptep);
}



extern pte_t ptep_clear_flush(struct vm_area_struct *vma,
         unsigned long address,
         pte_t *ptep);



extern pmd_t pmdp_clear_flush(struct vm_area_struct *vma,
         unsigned long address,
         pmd_t *pmdp);
# 174 "include/asm-generic/pgtable.h"
static inline int pmd_same(pmd_t pmd_a, pmd_t pmd_b)
{
 return pmd_val(pmd_a) == pmd_val(pmd_b);
}
# 251 "include/asm-generic/pgtable.h"
void pgd_clear_bad(pgd_t *);
void pud_clear_bad(pud_t *);
void pmd_clear_bad(pmd_t *);

static inline int pgd_none_or_clear_bad(pgd_t *pgd)
{
 if (pgd_none(*pgd))
  return 1;
 if (__builtin_expect(!!(pgd_bad(*pgd)), 0)) {
  pgd_clear_bad(pgd);
  return 1;
 }
 return 0;
}

static inline int pud_none_or_clear_bad(pud_t *pud)
{
 if (pud_none(*pud))
  return 1;
 if (__builtin_expect(!!(pud_bad(*pud)), 0)) {
  pud_clear_bad(pud);
  return 1;
 }
 return 0;
}

static inline int pmd_none_or_clear_bad(pmd_t *pmd)
{
 if (pmd_none(*pmd))
  return 1;
 if (__builtin_expect(!!(pmd_bad(*pmd)), 0)) {
  pmd_clear_bad(pmd);
  return 1;
 }
 return 0;
}

static inline pte_t __ptep_modify_prot_start(struct mm_struct *mm,
          unsigned long addr,
          pte_t *ptep)
{





 return ptep_get_and_clear(mm, addr, ptep);
}

static inline void __ptep_modify_prot_commit(struct mm_struct *mm,
          unsigned long addr,
          pte_t *ptep, pte_t pte)
{




 set_pte_at(mm, addr, ptep, pte);
}
# 421 "include/asm-generic/pgtable.h"
extern int track_pfn_vma_new(struct vm_area_struct *vma, pgprot_t *prot,
    unsigned long pfn, unsigned long size);
extern int track_pfn_vma_copy(struct vm_area_struct *vma);
extern void untrack_pfn_vma(struct vm_area_struct *vma, unsigned long pfn,
    unsigned long size);
# 768 "/home/iago/torvalds/linux/arch/x86/include/asm/pgtable.h" 2
# 43 "include/linux/mm.h" 2
# 59 "include/linux/mm.h"
extern struct kmem_cache *vm_area_cachep;
# 150 "include/linux/mm.h"
extern pgprot_t protection_map[16];
# 167 "include/linux/mm.h"
static inline int is_linear_pfn_mapping(struct vm_area_struct *vma)
{
 return !!(vma->vm_flags & 0x40000000);
}

static inline int is_pfn_mapping(struct vm_area_struct *vma)
{
 return !!(vma->vm_flags & 0x00000400);
}
# 186 "include/linux/mm.h"
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



 int (*page_mkwrite)(struct vm_area_struct *vma, struct vm_fault *vmf);




 int (*access)(struct vm_area_struct *vma, unsigned long addr,
        void *buf, int len, int write);
# 225 "include/linux/mm.h"
 int (*set_policy)(struct vm_area_struct *vma, struct mempolicy *new);
# 237 "include/linux/mm.h"
 struct mempolicy *(*get_policy)(struct vm_area_struct *vma,
     unsigned long addr);
 int (*migrate)(struct vm_area_struct *vma, const nodemask_t *from,
  const nodemask_t *to, unsigned long flags);

};

struct mmu_gather;
struct inode;
# 254 "include/linux/mm.h"
# 1 "include/linux/page-flags.h" 1
# 72 "include/linux/page-flags.h"
enum pageflags {
 PG_locked,
 PG_error,
 PG_referenced,
 PG_uptodate,
 PG_dirty,
 PG_lru,
 PG_active,
 PG_slab,
 PG_owner_priv_1,
 PG_arch_1,
 PG_reserved,
 PG_private,
 PG_private_2,
 PG_writeback,

 PG_head,
 PG_tail,



 PG_swapcache,
 PG_mappedtodisk,
 PG_reclaim,
 PG_swapbacked,
 PG_unevictable,

 PG_mlocked,


 PG_uncached,


 PG_hwpoison,


 PG_compound_lock,

 __NR_PAGEFLAGS,


 PG_checked = PG_owner_priv_1,





 PG_fscache = PG_private_2,


 PG_pinned = PG_owner_priv_1,
 PG_savepinned = PG_dirty,


 PG_slob_free = PG_private,
};
# 194 "include/linux/page-flags.h"
struct page;

static inline int PageLocked(const struct page *page) { return (__builtin_constant_p((PG_locked)) ? constant_test_bit((PG_locked), (&page->flags)) : variable_test_bit((PG_locked), (&page->flags))); }
static inline int PageError(const struct page *page) { return (__builtin_constant_p((PG_error)) ? constant_test_bit((PG_error), (&page->flags)) : variable_test_bit((PG_error), (&page->flags))); } static inline void SetPageError(struct page *page) { set_bit(PG_error, &page->flags); } static inline void ClearPageError(struct page *page) { clear_bit(PG_error, &page->flags); } static inline int TestClearPageError(struct page *page) { return test_and_clear_bit(PG_error, &page->flags); }
static inline int PageReferenced(const struct page *page) { return (__builtin_constant_p((PG_referenced)) ? constant_test_bit((PG_referenced), (&page->flags)) : variable_test_bit((PG_referenced), (&page->flags))); } static inline void SetPageReferenced(struct page *page) { set_bit(PG_referenced, &page->flags); } static inline void ClearPageReferenced(struct page *page) { clear_bit(PG_referenced, &page->flags); } static inline int TestClearPageReferenced(struct page *page) { return test_and_clear_bit(PG_referenced, &page->flags); }
static inline int PageDirty(const struct page *page) { return (__builtin_constant_p((PG_dirty)) ? constant_test_bit((PG_dirty), (&page->flags)) : variable_test_bit((PG_dirty), (&page->flags))); } static inline void SetPageDirty(struct page *page) { set_bit(PG_dirty, &page->flags); } static inline void ClearPageDirty(struct page *page) { clear_bit(PG_dirty, &page->flags); } static inline int TestSetPageDirty(struct page *page) { return test_and_set_bit(PG_dirty, &page->flags); } static inline int TestClearPageDirty(struct page *page) { return test_and_clear_bit(PG_dirty, &page->flags); } static inline void __ClearPageDirty(struct page *page) { __clear_bit(PG_dirty, &page->flags); }
static inline int PageLRU(const struct page *page) { return (__builtin_constant_p((PG_lru)) ? constant_test_bit((PG_lru), (&page->flags)) : variable_test_bit((PG_lru), (&page->flags))); } static inline void SetPageLRU(struct page *page) { set_bit(PG_lru, &page->flags); } static inline void ClearPageLRU(struct page *page) { clear_bit(PG_lru, &page->flags); } static inline void __ClearPageLRU(struct page *page) { __clear_bit(PG_lru, &page->flags); }
static inline int PageActive(const struct page *page) { return (__builtin_constant_p((PG_active)) ? constant_test_bit((PG_active), (&page->flags)) : variable_test_bit((PG_active), (&page->flags))); } static inline void SetPageActive(struct page *page) { set_bit(PG_active, &page->flags); } static inline void ClearPageActive(struct page *page) { clear_bit(PG_active, &page->flags); } static inline void __ClearPageActive(struct page *page) { __clear_bit(PG_active, &page->flags); }
 static inline int TestClearPageActive(struct page *page) { return test_and_clear_bit(PG_active, &page->flags); }
static inline int PageSlab(const struct page *page) { return (__builtin_constant_p((PG_slab)) ? constant_test_bit((PG_slab), (&page->flags)) : variable_test_bit((PG_slab), (&page->flags))); } static inline void __SetPageSlab(struct page *page) { __set_bit(PG_slab, &page->flags); } static inline void __ClearPageSlab(struct page *page) { __clear_bit(PG_slab, &page->flags); }
static inline int PageChecked(const struct page *page) { return (__builtin_constant_p((PG_checked)) ? constant_test_bit((PG_checked), (&page->flags)) : variable_test_bit((PG_checked), (&page->flags))); } static inline void SetPageChecked(struct page *page) { set_bit(PG_checked, &page->flags); } static inline void ClearPageChecked(struct page *page) { clear_bit(PG_checked, &page->flags); }
static inline int PagePinned(const struct page *page) { return (__builtin_constant_p((PG_pinned)) ? constant_test_bit((PG_pinned), (&page->flags)) : variable_test_bit((PG_pinned), (&page->flags))); } static inline void SetPagePinned(struct page *page) { set_bit(PG_pinned, &page->flags); } static inline void ClearPagePinned(struct page *page) { clear_bit(PG_pinned, &page->flags); } static inline int TestSetPagePinned(struct page *page) { return test_and_set_bit(PG_pinned, &page->flags); } static inline int TestClearPagePinned(struct page *page) { return test_and_clear_bit(PG_pinned, &page->flags); }
static inline int PageSavePinned(const struct page *page) { return (__builtin_constant_p((PG_savepinned)) ? constant_test_bit((PG_savepinned), (&page->flags)) : variable_test_bit((PG_savepinned), (&page->flags))); } static inline void SetPageSavePinned(struct page *page) { set_bit(PG_savepinned, &page->flags); } static inline void ClearPageSavePinned(struct page *page) { clear_bit(PG_savepinned, &page->flags); };
static inline int PageReserved(const struct page *page) { return (__builtin_constant_p((PG_reserved)) ? constant_test_bit((PG_reserved), (&page->flags)) : variable_test_bit((PG_reserved), (&page->flags))); } static inline void SetPageReserved(struct page *page) { set_bit(PG_reserved, &page->flags); } static inline void ClearPageReserved(struct page *page) { clear_bit(PG_reserved, &page->flags); } static inline void __ClearPageReserved(struct page *page) { __clear_bit(PG_reserved, &page->flags); }
static inline int PageSwapBacked(const struct page *page) { return (__builtin_constant_p((PG_swapbacked)) ? constant_test_bit((PG_swapbacked), (&page->flags)) : variable_test_bit((PG_swapbacked), (&page->flags))); } static inline void SetPageSwapBacked(struct page *page) { set_bit(PG_swapbacked, &page->flags); } static inline void ClearPageSwapBacked(struct page *page) { clear_bit(PG_swapbacked, &page->flags); } static inline void __ClearPageSwapBacked(struct page *page) { __clear_bit(PG_swapbacked, &page->flags); }

static inline int PageSlobFree(const struct page *page) { return (__builtin_constant_p((PG_slob_free)) ? constant_test_bit((PG_slob_free), (&page->flags)) : variable_test_bit((PG_slob_free), (&page->flags))); } static inline void __SetPageSlobFree(struct page *page) { __set_bit(PG_slob_free, &page->flags); } static inline void __ClearPageSlobFree(struct page *page) { __clear_bit(PG_slob_free, &page->flags); }






static inline int PagePrivate(const struct page *page) { return (__builtin_constant_p((PG_private)) ? constant_test_bit((PG_private), (&page->flags)) : variable_test_bit((PG_private), (&page->flags))); } static inline void SetPagePrivate(struct page *page) { set_bit(PG_private, &page->flags); } static inline void ClearPagePrivate(struct page *page) { clear_bit(PG_private, &page->flags); } static inline void __SetPagePrivate(struct page *page) { __set_bit(PG_private, &page->flags); }
 static inline void __ClearPagePrivate(struct page *page) { __clear_bit(PG_private, &page->flags); }
static inline int PagePrivate2(const struct page *page) { return (__builtin_constant_p((PG_private_2)) ? constant_test_bit((PG_private_2), (&page->flags)) : variable_test_bit((PG_private_2), (&page->flags))); } static inline void SetPagePrivate2(struct page *page) { set_bit(PG_private_2, &page->flags); } static inline void ClearPagePrivate2(struct page *page) { clear_bit(PG_private_2, &page->flags); } static inline int TestSetPagePrivate2(struct page *page) { return test_and_set_bit(PG_private_2, &page->flags); } static inline int TestClearPagePrivate2(struct page *page) { return test_and_clear_bit(PG_private_2, &page->flags); }
static inline int PageOwnerPriv1(const struct page *page) { return (__builtin_constant_p((PG_owner_priv_1)) ? constant_test_bit((PG_owner_priv_1), (&page->flags)) : variable_test_bit((PG_owner_priv_1), (&page->flags))); } static inline void SetPageOwnerPriv1(struct page *page) { set_bit(PG_owner_priv_1, &page->flags); } static inline void ClearPageOwnerPriv1(struct page *page) { clear_bit(PG_owner_priv_1, &page->flags); } static inline int TestClearPageOwnerPriv1(struct page *page) { return test_and_clear_bit(PG_owner_priv_1, &page->flags); }





static inline int PageWriteback(const struct page *page) { return (__builtin_constant_p((PG_writeback)) ? constant_test_bit((PG_writeback), (&page->flags)) : variable_test_bit((PG_writeback), (&page->flags))); } static inline int TestSetPageWriteback(struct page *page) { return test_and_set_bit(PG_writeback, &page->flags); } static inline int TestClearPageWriteback(struct page *page) { return test_and_clear_bit(PG_writeback, &page->flags); }
static inline int PageMappedToDisk(const struct page *page) { return (__builtin_constant_p((PG_mappedtodisk)) ? constant_test_bit((PG_mappedtodisk), (&page->flags)) : variable_test_bit((PG_mappedtodisk), (&page->flags))); } static inline void SetPageMappedToDisk(struct page *page) { set_bit(PG_mappedtodisk, &page->flags); } static inline void ClearPageMappedToDisk(struct page *page) { clear_bit(PG_mappedtodisk, &page->flags); }


static inline int PageReclaim(const struct page *page) { return (__builtin_constant_p((PG_reclaim)) ? constant_test_bit((PG_reclaim), (&page->flags)) : variable_test_bit((PG_reclaim), (&page->flags))); } static inline void SetPageReclaim(struct page *page) { set_bit(PG_reclaim, &page->flags); } static inline void ClearPageReclaim(struct page *page) { clear_bit(PG_reclaim, &page->flags); } static inline int TestClearPageReclaim(struct page *page) { return test_and_clear_bit(PG_reclaim, &page->flags); }
static inline int PageReadahead(const struct page *page) { return (__builtin_constant_p((PG_reclaim)) ? constant_test_bit((PG_reclaim), (&page->flags)) : variable_test_bit((PG_reclaim), (&page->flags))); } static inline void SetPageReadahead(struct page *page) { set_bit(PG_reclaim, &page->flags); } static inline void ClearPageReadahead(struct page *page) { clear_bit(PG_reclaim, &page->flags); }
# 240 "include/linux/page-flags.h"
static inline int PageHighMem(const struct page *page) { return 0; }



static inline int PageSwapCache(const struct page *page) { return (__builtin_constant_p((PG_swapcache)) ? constant_test_bit((PG_swapcache), (&page->flags)) : variable_test_bit((PG_swapcache), (&page->flags))); } static inline void SetPageSwapCache(struct page *page) { set_bit(PG_swapcache, &page->flags); } static inline void ClearPageSwapCache(struct page *page) { clear_bit(PG_swapcache, &page->flags); }





static inline int PageUnevictable(const struct page *page) { return (__builtin_constant_p((PG_unevictable)) ? constant_test_bit((PG_unevictable), (&page->flags)) : variable_test_bit((PG_unevictable), (&page->flags))); } static inline void SetPageUnevictable(struct page *page) { set_bit(PG_unevictable, &page->flags); } static inline void ClearPageUnevictable(struct page *page) { clear_bit(PG_unevictable, &page->flags); } static inline void __ClearPageUnevictable(struct page *page) { __clear_bit(PG_unevictable, &page->flags); }
 static inline int TestClearPageUnevictable(struct page *page) { return test_and_clear_bit(PG_unevictable, &page->flags); }


static inline int PageMlocked(const struct page *page) { return (__builtin_constant_p((PG_mlocked)) ? constant_test_bit((PG_mlocked), (&page->flags)) : variable_test_bit((PG_mlocked), (&page->flags))); } static inline void SetPageMlocked(struct page *page) { set_bit(PG_mlocked, &page->flags); } static inline void ClearPageMlocked(struct page *page) { clear_bit(PG_mlocked, &page->flags); } static inline void __ClearPageMlocked(struct page *page) { __clear_bit(PG_mlocked, &page->flags); }
 static inline int TestSetPageMlocked(struct page *page) { return test_and_set_bit(PG_mlocked, &page->flags); } static inline int TestClearPageMlocked(struct page *page) { return test_and_clear_bit(PG_mlocked, &page->flags); } static inline int __TestClearPageMlocked(struct page *page) { return __test_and_clear_bit(PG_mlocked, &page->flags); }






static inline int PageUncached(const struct page *page) { return (__builtin_constant_p((PG_uncached)) ? constant_test_bit((PG_uncached), (&page->flags)) : variable_test_bit((PG_uncached), (&page->flags))); } static inline void SetPageUncached(struct page *page) { set_bit(PG_uncached, &page->flags); } static inline void ClearPageUncached(struct page *page) { clear_bit(PG_uncached, &page->flags); }





static inline int PageHWPoison(const struct page *page) { return (__builtin_constant_p((PG_hwpoison)) ? constant_test_bit((PG_hwpoison), (&page->flags)) : variable_test_bit((PG_hwpoison), (&page->flags))); } static inline void SetPageHWPoison(struct page *page) { set_bit(PG_hwpoison, &page->flags); } static inline void ClearPageHWPoison(struct page *page) { clear_bit(PG_hwpoison, &page->flags); }
static inline int TestSetPageHWPoison(struct page *page) { return test_and_set_bit(PG_hwpoison, &page->flags); } static inline int TestClearPageHWPoison(struct page *page) { return test_and_clear_bit(PG_hwpoison, &page->flags); }






u64 stable_page_flags(struct page *page);

static inline int PageUptodate(struct page *page)
{
 int ret = (__builtin_constant_p((PG_uptodate)) ? constant_test_bit((PG_uptodate), (&(page)->flags)) : variable_test_bit((PG_uptodate), (&(page)->flags)));
# 290 "include/linux/page-flags.h"
 if (ret)
  __asm__ __volatile__("": : :"memory");

 return ret;
}

static inline void __SetPageUptodate(struct page *page)
{
 __asm__ __volatile__("": : :"memory");
 __set_bit(PG_uptodate, &(page)->flags);
}

static inline void SetPageUptodate(struct page *page)
{
# 316 "include/linux/page-flags.h"
 __asm__ __volatile__("": : :"memory");
 set_bit(PG_uptodate, &(page)->flags);

}

static inline void ClearPageUptodate(struct page *page) { clear_bit(PG_uptodate, &page->flags); }

extern void cancel_dirty_page(struct page *page, unsigned int account_size);

int test_clear_page_writeback(struct page *page);
int test_set_page_writeback(struct page *page);

static inline void set_page_writeback(struct page *page)
{
 test_set_page_writeback(page);
}
# 340 "include/linux/page-flags.h"
static inline int PageHead(const struct page *page) { return (__builtin_constant_p((PG_head)) ? constant_test_bit((PG_head), (&page->flags)) : variable_test_bit((PG_head), (&page->flags))); } static inline void __SetPageHead(struct page *page) { __set_bit(PG_head, &page->flags); } static inline void __ClearPageHead(struct page *page) { __clear_bit(PG_head, &page->flags); } static inline void ClearPageHead(struct page *page) { clear_bit(PG_head, &page->flags); }
static inline int PageTail(const struct page *page) { return (__builtin_constant_p((PG_tail)) ? constant_test_bit((PG_tail), (&page->flags)) : variable_test_bit((PG_tail), (&page->flags))); } static inline void __SetPageTail(struct page *page) { __set_bit(PG_tail, &page->flags); } static inline void __ClearPageTail(struct page *page) { __clear_bit(PG_tail, &page->flags); }

static inline int PageCompound(struct page *page)
{
 return page->flags & ((1L << PG_head) | (1L << PG_tail));

}

static inline void ClearPageCompound(struct page *page)
{
 do { if (__builtin_expect(!!(!PageHead(page)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/page-flags.h"), "i" (351), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 ClearPageHead(page);
}
# 411 "include/linux/page-flags.h"
static inline int PageTransHuge(struct page *page)
{
 do { if (__builtin_expect(!!(PageTail(page)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/page-flags.h"), "i" (413), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 return PageHead(page);
}

static inline int PageTransCompound(struct page *page)
{
 return PageCompound(page);
}
# 475 "include/linux/page-flags.h"
static inline int page_has_private(struct page *page)
{
 return !!(page->flags & (1 << PG_private | 1 << PG_private_2));
}
# 255 "include/linux/mm.h" 2
# 1 "include/linux/huge_mm.h" 1



extern int do_huge_pmd_anonymous_page(struct mm_struct *mm,
          struct vm_area_struct *vma,
          unsigned long address, pmd_t *pmd,
          unsigned int flags);
extern int copy_huge_pmd(struct mm_struct *dst_mm, struct mm_struct *src_mm,
    pmd_t *dst_pmd, pmd_t *src_pmd, unsigned long addr,
    struct vm_area_struct *vma);
extern int do_huge_pmd_wp_page(struct mm_struct *mm, struct vm_area_struct *vma,
          unsigned long address, pmd_t *pmd,
          pmd_t orig_pmd);
extern pgtable_t get_pmd_huge_pte(struct mm_struct *mm);
extern struct page *follow_trans_huge_pmd(struct mm_struct *mm,
       unsigned long addr,
       pmd_t *pmd,
       unsigned int flags);
extern int zap_huge_pmd(struct mmu_gather *tlb,
   struct vm_area_struct *vma,
   pmd_t *pmd);
extern int mincore_huge_pmd(struct vm_area_struct *vma, pmd_t *pmd,
   unsigned long addr, unsigned long end,
   unsigned char *vec);
extern int change_huge_pmd(struct vm_area_struct *vma, pmd_t *pmd,
   unsigned long addr, pgprot_t newprot);

enum transparent_hugepage_flag {
 TRANSPARENT_HUGEPAGE_FLAG,
 TRANSPARENT_HUGEPAGE_REQ_MADV_FLAG,
 TRANSPARENT_HUGEPAGE_DEFRAG_FLAG,
 TRANSPARENT_HUGEPAGE_DEFRAG_REQ_MADV_FLAG,
 TRANSPARENT_HUGEPAGE_DEFRAG_KHUGEPAGED_FLAG,

 TRANSPARENT_HUGEPAGE_DEBUG_COW_FLAG,

};

enum page_check_address_pmd_flag {
 PAGE_CHECK_ADDRESS_PMD_FLAG,
 PAGE_CHECK_ADDRESS_PMD_NOTSPLITTING_FLAG,
 PAGE_CHECK_ADDRESS_PMD_SPLITTING_FLAG,
};
extern pmd_t *page_check_address_pmd(struct page *page,
         struct mm_struct *mm,
         unsigned long address,
         enum page_check_address_pmd_flag flag);
# 76 "include/linux/huge_mm.h"
extern unsigned long transparent_hugepage_flags;
extern int copy_pte_range(struct mm_struct *dst_mm, struct mm_struct *src_mm,
     pmd_t *dst_pmd, pmd_t *src_pmd,
     struct vm_area_struct *vma,
     unsigned long addr, unsigned long end);
extern int handle_pte_fault(struct mm_struct *mm,
       struct vm_area_struct *vma, unsigned long address,
       pte_t *pte, pmd_t *pmd, unsigned int flags);
extern int split_huge_page(struct page *page);
extern void __split_huge_page_pmd(struct mm_struct *mm, pmd_t *pmd);
# 105 "include/linux/huge_mm.h"
extern int hugepage_madvise(struct vm_area_struct *vma,
       unsigned long *vm_flags, int advice);
extern void __vma_adjust_trans_huge(struct vm_area_struct *vma,
        unsigned long start,
        unsigned long end,
        long adjust_next);
static inline void vma_adjust_trans_huge(struct vm_area_struct *vma,
      unsigned long start,
      unsigned long end,
      long adjust_next)
{
 if (!vma->anon_vma || vma->vm_ops)
  return;
 __vma_adjust_trans_huge(vma, start, end, adjust_next);
}
static inline int hpage_nr_pages(struct page *page)
{
 if (__builtin_expect(!!(PageTransHuge(page)), 0))
  return (1<<(21 -12));
 return 1;
}
static inline struct page *compound_trans_head(struct page *page)
{
 if (PageTail(page)) {
  struct page *head;
  head = page->first_page;
  __asm__ __volatile__("": : :"memory");






  if (PageTail(page))
   return head;
 }
 return page;
}
# 256 "include/linux/mm.h" 2
# 273 "include/linux/mm.h"
static inline int put_page_testzero(struct page *page)
{
 do { if (__builtin_expect(!!(atomic_read(&page->_count) == 0), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/mm.h"), "i" (275), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 return atomic_dec_and_test(&page->_count);
}





static inline int get_page_unless_zero(struct page *page)
{
 return atomic_add_unless((&page->_count), 1, 0);
}

extern int page_is_ram(unsigned long pfn);


struct page *vmalloc_to_page(const void *addr);
unsigned long vmalloc_to_pfn(const void *addr);







static inline int is_vmalloc_addr(const void *x)
{

 unsigned long addr = (unsigned long)x;

 return addr >= (0xffffc90000000000UL) && addr < (0xffffe8ffffffffffUL);



}

extern int is_vmalloc_or_module_addr(const void *x);







static inline void compound_lock(struct page *page)
{

 bit_spin_lock(PG_compound_lock, &page->flags);

}

static inline void compound_unlock(struct page *page)
{

 bit_spin_unlock(PG_compound_lock, &page->flags);

}

static inline unsigned long compound_lock_irqsave(struct page *page)
{
 unsigned long flags = flags;

 do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); flags = arch_local_irq_save(); } while (0); trace_hardirqs_off(); } while (0);
 compound_lock(page);

 return flags;
}

static inline void compound_unlock_irqrestore(struct page *page,
           unsigned long flags)
{

 compound_unlock(page);
 do { if (({ ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_irqs_disabled_flags(flags); })) { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); trace_hardirqs_off(); } else { trace_hardirqs_on(); do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); } } while (0);

}

static inline struct page *compound_head(struct page *page)
{
 if (__builtin_expect(!!(PageTail(page)), 0))
  return page->first_page;
 return page;
}

static inline int page_count(struct page *page)
{
 return atomic_read(&compound_head(page)->_count);
}

static inline void get_page(struct page *page)
{
# 374 "include/linux/mm.h"
 do { if (__builtin_expect(!!(atomic_read(&page->_count) < !PageTail(page)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/mm.h"), "i" (374), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 atomic_inc(&page->_count);




 if (__builtin_expect(!!(PageTail(page)), 0)) {





  do { if (__builtin_expect(!!(atomic_read(&page->first_page->_count) <= 0), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/mm.h"), "i" (386), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
  atomic_inc(&page->first_page->_count);
 }
}

static inline struct page *virt_to_head_page(const void *x)
{
 struct page *page = (((struct page *)(0xffffea0000000000UL)) + (__phys_addr((unsigned long)(x)) >> 12));
 return compound_head(page);
}





static inline void init_page_count(struct page *page)
{
 atomic_set(&page->_count, 1);
}
# 417 "include/linux/mm.h"
static inline int PageBuddy(struct page *page)
{
 return atomic_read(&page->_mapcount) == (-128);
}

static inline void __SetPageBuddy(struct page *page)
{
 do { if (__builtin_expect(!!(atomic_read(&page->_mapcount) != -1), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/mm.h"), "i" (424), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 atomic_set(&page->_mapcount, (-128));
}

static inline void __ClearPageBuddy(struct page *page)
{
 do { if (__builtin_expect(!!(!PageBuddy(page)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/mm.h"), "i" (430), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 atomic_set(&page->_mapcount, -1);
}

void put_page(struct page *page);
void put_pages_list(struct list_head *pages);

void split_page(struct page *page, unsigned int order);
int split_free_page(struct page *page);






typedef void compound_page_dtor(struct page *);

static inline void set_compound_page_dtor(struct page *page,
      compound_page_dtor *dtor)
{
 page[1].lru.next = (void *)dtor;
}

static inline compound_page_dtor *get_compound_page_dtor(struct page *page)
{
 return (compound_page_dtor *)page[1].lru.next;
}

static inline int compound_order(struct page *page)
{
 if (!PageHead(page))
  return 0;
 return (unsigned long)page[1].lru.prev;
}

static inline int compound_trans_order(struct page *page)
{
 int order;
 unsigned long flags;

 if (!PageHead(page))
  return 0;

 flags = compound_lock_irqsave(page);
 order = compound_order(page);
 compound_unlock_irqrestore(page, flags);
 return order;
}

static inline void set_compound_order(struct page *page, unsigned long order)
{
 page[1].lru.prev = (void *)order;
}
# 491 "include/linux/mm.h"
static inline pte_t maybe_mkwrite(pte_t pte, struct vm_area_struct *vma)
{
 if (__builtin_expect(!!(vma->vm_flags & 0x00000002), 1))
  pte = pte_mkwrite(pte);
 return pte;
}
# 640 "include/linux/mm.h"
static inline enum zone_type page_zonenum(const struct page *page)
{
 return (page->flags >> (((((sizeof(unsigned long)*8) - 0) - 10) - 2) * (2 != 0))) & ((1UL << 2) - 1);
}
# 653 "include/linux/mm.h"
static inline int page_zone_id(struct page *page)
{
 return (page->flags >> ((((((sizeof(unsigned long)*8) - 0) - 10) < ((((sizeof(unsigned long)*8) - 0) - 10) - 2))? (((sizeof(unsigned long)*8) - 0) - 10) : ((((sizeof(unsigned long)*8) - 0) - 10) - 2)) * ((10 + 2) != 0))) & ((1UL << (10 + 2)) - 1);
}

static inline int zone_to_nid(struct zone *zone)
{

 return zone->node;



}




static inline int page_to_nid(const struct page *page)
{
 return (page->flags >> ((((sizeof(unsigned long)*8) - 0) - 10) * (10 != 0))) & ((1UL << 10) - 1);
}


static inline struct zone *page_zone(const struct page *page)
{
 return &(node_data[page_to_nid(page)])->node_zones[page_zonenum(page)];
}
# 694 "include/linux/mm.h"
static inline void set_page_zone(struct page *page, enum zone_type zone)
{
 page->flags &= ~(((1UL << 2) - 1) << (((((sizeof(unsigned long)*8) - 0) - 10) - 2) * (2 != 0)));
 page->flags |= (zone & ((1UL << 2) - 1)) << (((((sizeof(unsigned long)*8) - 0) - 10) - 2) * (2 != 0));
}

static inline void set_page_node(struct page *page, unsigned long node)
{
 page->flags &= ~(((1UL << 10) - 1) << ((((sizeof(unsigned long)*8) - 0) - 10) * (10 != 0)));
 page->flags |= (node & ((1UL << 10) - 1)) << ((((sizeof(unsigned long)*8) - 0) - 10) * (10 != 0));
}

static inline void set_page_links(struct page *page, enum zone_type zone,
 unsigned long node, unsigned long pfn)
{
 set_page_zone(page, zone);
 set_page_node(page, node);



}




# 1 "include/linux/vmstat.h" 1





# 1 "include/linux/mm.h" 1
# 7 "include/linux/vmstat.h" 2

# 1 "include/linux/vm_event_item.h" 1
# 24 "include/linux/vm_event_item.h"
enum vm_event_item { PGPGIN, PGPGOUT, PSWPIN, PSWPOUT,
  PGALLOC_DMA, PGALLOC_DMA32, PGALLOC_NORMAL , PGALLOC_MOVABLE,
  PGFREE, PGACTIVATE, PGDEACTIVATE,
  PGFAULT, PGMAJFAULT,
  PGREFILL_DMA, PGREFILL_DMA32, PGREFILL_NORMAL , PGREFILL_MOVABLE,
  PGSTEAL_DMA, PGSTEAL_DMA32, PGSTEAL_NORMAL , PGSTEAL_MOVABLE,
  PGSCAN_KSWAPD_DMA, PGSCAN_KSWAPD_DMA32, PGSCAN_KSWAPD_NORMAL , PGSCAN_KSWAPD_MOVABLE,
  PGSCAN_DIRECT_DMA, PGSCAN_DIRECT_DMA32, PGSCAN_DIRECT_NORMAL , PGSCAN_DIRECT_MOVABLE,

  PGSCAN_ZONE_RECLAIM_FAILED,

  PGINODESTEAL, SLABS_SCANNED, KSWAPD_STEAL, KSWAPD_INODESTEAL,
  KSWAPD_LOW_WMARK_HIT_QUICKLY, KSWAPD_HIGH_WMARK_HIT_QUICKLY,
  KSWAPD_SKIP_CONGESTION_WAIT,
  PAGEOUTRUN, ALLOCSTALL, PGROTATED,

  COMPACTBLOCKS, COMPACTPAGES, COMPACTPAGEFAILED,
  COMPACTSTALL, COMPACTFAIL, COMPACTSUCCESS,


  HTLB_BUDDY_PGALLOC, HTLB_BUDDY_PGALLOC_FAIL,

  UNEVICTABLE_PGCULLED,
  UNEVICTABLE_PGSCANNED,
  UNEVICTABLE_PGRESCUED,
  UNEVICTABLE_PGMLOCKED,
  UNEVICTABLE_PGMUNLOCKED,
  UNEVICTABLE_PGCLEARED,
  UNEVICTABLE_PGSTRANDED,
  UNEVICTABLE_MLOCKFREED,

  THP_FAULT_ALLOC,
  THP_FAULT_FALLBACK,
  THP_COLLAPSE_ALLOC,
  THP_COLLAPSE_ALLOC_FAILED,
  THP_SPLIT,

  NR_VM_EVENT_ITEMS
};
# 9 "include/linux/vmstat.h" 2


extern int sysctl_stat_interval;
# 24 "include/linux/vmstat.h"
struct vm_event_state {
 unsigned long event[NR_VM_EVENT_ITEMS];
};

extern __attribute__((section(".discard"), unused)) char __pcpu_scope_vm_event_states; extern __attribute__((section(".data..percpu" ""))) __typeof__(struct vm_event_state) vm_event_states;

static inline void __count_vm_event(enum vm_event_item item)
{
 do { do { const void *__vpp_verify = (typeof(&(((vm_event_states.event[item])))))((void *)0); (void)__vpp_verify; } while (0); switch(sizeof(((vm_event_states.event[item])))) { case 1: do { typedef typeof((((vm_event_states.event[item])))) pao_T__; const int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? ((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((vm_event_states.event[item]))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 2: do { typedef typeof((((vm_event_states.event[item])))) pao_T__; const int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? ((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((vm_event_states.event[item]))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 4: do { typedef typeof((((vm_event_states.event[item])))) pao_T__; const int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? ((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((vm_event_states.event[item]))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 8: do { typedef typeof((((vm_event_states.event[item])))) pao_T__; const int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? ((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((vm_event_states.event[item]))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; default: __bad_size_call_parameter();break; } } while (0);
}

static inline void count_vm_event(enum vm_event_item item)
{
 do { do { const void *__vpp_verify = (typeof(&(((vm_event_states.event[item])))))((void *)0); (void)__vpp_verify; } while (0); switch(sizeof(((vm_event_states.event[item])))) { case 1: do { typedef typeof((((vm_event_states.event[item])))) pao_T__; const int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? ((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((vm_event_states.event[item]))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 2: do { typedef typeof((((vm_event_states.event[item])))) pao_T__; const int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? ((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((vm_event_states.event[item]))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 4: do { typedef typeof((((vm_event_states.event[item])))) pao_T__; const int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? ((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((vm_event_states.event[item]))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 8: do { typedef typeof((((vm_event_states.event[item])))) pao_T__; const int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? ((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((vm_event_states.event[item]))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; default: __bad_size_call_parameter();break; } } while (0);
}

static inline void __count_vm_events(enum vm_event_item item, long delta)
{
 do { do { const void *__vpp_verify = (typeof(&((vm_event_states.event[item]))))((void *)0); (void)__vpp_verify; } while (0); switch(sizeof((vm_event_states.event[item]))) { case 1: do { typedef typeof(((vm_event_states.event[item]))) pao_T__; const int pao_ID__ = (__builtin_constant_p((delta)) && (((delta)) == 1 || ((delta)) == -1)) ? ((delta)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((delta)); (void)pao_tmp__; } switch (sizeof(((vm_event_states.event[item])))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "qi" ((pao_T__)((delta)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "re" ((pao_T__)((delta)))); break; default: __bad_percpu_size(); } } while (0);break; case 2: do { typedef typeof(((vm_event_states.event[item]))) pao_T__; const int pao_ID__ = (__builtin_constant_p((delta)) && (((delta)) == 1 || ((delta)) == -1)) ? ((delta)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((delta)); (void)pao_tmp__; } switch (sizeof(((vm_event_states.event[item])))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "qi" ((pao_T__)((delta)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "re" ((pao_T__)((delta)))); break; default: __bad_percpu_size(); } } while (0);break; case 4: do { typedef typeof(((vm_event_states.event[item]))) pao_T__; const int pao_ID__ = (__builtin_constant_p((delta)) && (((delta)) == 1 || ((delta)) == -1)) ? ((delta)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((delta)); (void)pao_tmp__; } switch (sizeof(((vm_event_states.event[item])))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "qi" ((pao_T__)((delta)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "re" ((pao_T__)((delta)))); break; default: __bad_percpu_size(); } } while (0);break; case 8: do { typedef typeof(((vm_event_states.event[item]))) pao_T__; const int pao_ID__ = (__builtin_constant_p((delta)) && (((delta)) == 1 || ((delta)) == -1)) ? ((delta)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((delta)); (void)pao_tmp__; } switch (sizeof(((vm_event_states.event[item])))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "qi" ((pao_T__)((delta)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "re" ((pao_T__)((delta)))); break; default: __bad_percpu_size(); } } while (0);break; default: __bad_size_call_parameter();break; } } while (0);
}

static inline void count_vm_events(enum vm_event_item item, long delta)
{
 do { do { const void *__vpp_verify = (typeof(&((vm_event_states.event[item]))))((void *)0); (void)__vpp_verify; } while (0); switch(sizeof((vm_event_states.event[item]))) { case 1: do { typedef typeof(((vm_event_states.event[item]))) pao_T__; const int pao_ID__ = (__builtin_constant_p((delta)) && (((delta)) == 1 || ((delta)) == -1)) ? ((delta)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((delta)); (void)pao_tmp__; } switch (sizeof(((vm_event_states.event[item])))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "qi" ((pao_T__)((delta)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "re" ((pao_T__)((delta)))); break; default: __bad_percpu_size(); } } while (0);break; case 2: do { typedef typeof(((vm_event_states.event[item]))) pao_T__; const int pao_ID__ = (__builtin_constant_p((delta)) && (((delta)) == 1 || ((delta)) == -1)) ? ((delta)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((delta)); (void)pao_tmp__; } switch (sizeof(((vm_event_states.event[item])))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "qi" ((pao_T__)((delta)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "re" ((pao_T__)((delta)))); break; default: __bad_percpu_size(); } } while (0);break; case 4: do { typedef typeof(((vm_event_states.event[item]))) pao_T__; const int pao_ID__ = (__builtin_constant_p((delta)) && (((delta)) == 1 || ((delta)) == -1)) ? ((delta)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((delta)); (void)pao_tmp__; } switch (sizeof(((vm_event_states.event[item])))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "qi" ((pao_T__)((delta)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "re" ((pao_T__)((delta)))); break; default: __bad_percpu_size(); } } while (0);break; case 8: do { typedef typeof(((vm_event_states.event[item]))) pao_T__; const int pao_ID__ = (__builtin_constant_p((delta)) && (((delta)) == 1 || ((delta)) == -1)) ? ((delta)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((delta)); (void)pao_tmp__; } switch (sizeof(((vm_event_states.event[item])))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "qi" ((pao_T__)((delta)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "re" ((pao_T__)((delta)))); break; default: __bad_percpu_size(); } } while (0);break; default: __bad_size_call_parameter();break; } } while (0);
}

extern void all_vm_events(unsigned long *);

extern void vm_events_fold_cpu(int cpu);
# 90 "include/linux/vmstat.h"
extern atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];

static inline void zone_page_state_add(long x, struct zone *zone,
     enum zone_stat_item item)
{
 atomic_long_add(x, &zone->vm_stat[item]);
 atomic_long_add(x, &vm_stat[item]);
}

static inline unsigned long global_page_state(enum zone_stat_item item)
{
 long x = atomic_long_read(&vm_stat[item]);

 if (x < 0)
  x = 0;

 return x;
}

static inline unsigned long zone_page_state(struct zone *zone,
     enum zone_stat_item item)
{
 long x = atomic_long_read(&zone->vm_stat[item]);

 if (x < 0)
  x = 0;

 return x;
}







static inline unsigned long zone_page_state_snapshot(struct zone *zone,
     enum zone_stat_item item)
{
 long x = atomic_long_read(&zone->vm_stat[item]);


 int cpu;
 for (((cpu)) = -1; ((cpu)) = cpumask_next(((cpu)), (cpu_online_mask)), ((cpu)) < nr_cpu_ids;)
  x += ({ do { const void *__vpp_verify = (typeof(((zone->pageset))))((void *)0); (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*((zone->pageset))) *)((zone->pageset)))); (typeof((typeof(*((zone->pageset))) *)((zone->pageset)))) (__ptr + (((__per_cpu_offset[(cpu)])))); }); })->vm_stat_diff[item];

 if (x < 0)
  x = 0;

 return x;
}

extern unsigned long global_reclaimable_pages(void);
extern unsigned long zone_reclaimable_pages(struct zone *zone);







static inline unsigned long node_page_state(int node,
     enum zone_stat_item item)
{
 struct zone *zones = (node_data[node])->node_zones;

 return

  zone_page_state(&zones[ZONE_DMA], item) +


  zone_page_state(&zones[ZONE_DMA32], item) +




  zone_page_state(&zones[ZONE_NORMAL], item) +
  zone_page_state(&zones[ZONE_MOVABLE], item);
}

extern void zone_statistics(struct zone *, struct zone *, gfp_t gfp);
# 182 "include/linux/vmstat.h"
static inline void zap_zone_vm_stats(struct zone *zone)
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
void refresh_zone_stat_thresholds(void);

int calculate_pressure_threshold(struct zone *zone);
int calculate_normal_threshold(struct zone *zone);
void set_pgdat_percpu_threshold(pg_data_t *pgdat,
    int (*calculate_pressure)(struct zone *));
# 261 "include/linux/vmstat.h"
extern const char * const vmstat_text[];
# 720 "include/linux/mm.h" 2

static inline __attribute__((always_inline)) void *lowmem_page_address(const struct page *page)
{
 return ((void *)((unsigned long)(((phys_addr_t)((unsigned long)((page) - ((struct page *)(0xffffea0000000000UL)))) << 12))+((unsigned long)(0xffff880000000000UL))));
}
# 771 "include/linux/mm.h"
extern struct address_space swapper_space;
static inline struct address_space *page_mapping(struct page *page)
{
 struct address_space *mapping = page->mapping;

 do { if (__builtin_expect(!!(PageSlab(page)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/mm.h"), "i" (776), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 if (__builtin_expect(!!(PageSwapCache(page)), 0))
  mapping = &swapper_space;
 else if ((unsigned long)mapping & 1)
  mapping = ((void *)0);
 return mapping;
}


static inline void *page_rmapping(struct page *page)
{
 return (void *)((unsigned long)page->mapping & ~(1 | 2));
}

static inline int PageAnon(struct page *page)
{
 return ((unsigned long)page->mapping & 1) != 0;
}





static inline unsigned long page_index(struct page *page)
{
 if (__builtin_expect(!!(PageSwapCache(page)), 0))
  return ((page)->private);
 return page->index;
}






static inline void reset_page_mapcount(struct page *page)
{
 atomic_set(&(page)->_mapcount, -1);
}

static inline int page_mapcount(struct page *page)
{
 return atomic_read(&(page)->_mapcount) + 1;
}




static inline int page_mapped(struct page *page)
{
 return atomic_read(&(page)->_mapcount) >= 0;
}
# 860 "include/linux/mm.h"
extern void pagefault_out_of_memory(void);
# 870 "include/linux/mm.h"
extern void show_free_areas(unsigned int flags);
extern bool skip_free_areas_node(unsigned int flags, int nid);

int shmem_lock(struct file *file, int lock, struct user_struct *user);
struct file *shmem_file_setup(const char *name, loff_t size, unsigned long flags);
int shmem_zero_setup(struct vm_area_struct *);

extern int can_do_mlock(void);
extern int user_shm_lock(size_t, struct user_struct *);
extern void user_shm_unlock(size_t, struct user_struct *);




struct zap_details {
 struct vm_area_struct *nonlinear_vma;
 struct address_space *check_mapping;
 unsigned long first_index;
 unsigned long last_index;
};

struct page *vm_normal_page(struct vm_area_struct *vma, unsigned long addr,
  pte_t pte);

int zap_vma_ptes(struct vm_area_struct *vma, unsigned long address,
  unsigned long size);
unsigned long zap_page_range(struct vm_area_struct *vma, unsigned long address,
  unsigned long size, struct zap_details *);
unsigned long unmap_vmas(struct mmu_gather *tlb,
  struct vm_area_struct *start_vma, unsigned long start_addr,
  unsigned long end_addr, unsigned long *nr_accounted,
  struct zap_details *);
# 919 "include/linux/mm.h"
struct mm_walk {
 int (*pgd_entry)(pgd_t *, unsigned long, unsigned long, struct mm_walk *);
 int (*pud_entry)(pud_t *, unsigned long, unsigned long, struct mm_walk *);
 int (*pmd_entry)(pmd_t *, unsigned long, unsigned long, struct mm_walk *);
 int (*pte_entry)(pte_t *, unsigned long, unsigned long, struct mm_walk *);
 int (*pte_hole)(unsigned long, unsigned long, struct mm_walk *);
 int (*hugetlb_entry)(pte_t *, unsigned long,
        unsigned long, unsigned long, struct mm_walk *);
 struct mm_struct *mm;
 void *private;
};

int walk_page_range(unsigned long addr, unsigned long end,
  struct mm_walk *walk);
void free_pgd_range(struct mmu_gather *tlb, unsigned long addr,
  unsigned long end, unsigned long floor, unsigned long ceiling);
int copy_page_range(struct mm_struct *dst, struct mm_struct *src,
   struct vm_area_struct *vma);
void unmap_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen, int even_cows);
int follow_pfn(struct vm_area_struct *vma, unsigned long address,
 unsigned long *pfn);
int follow_phys(struct vm_area_struct *vma, unsigned long address,
  unsigned int flags, unsigned long *prot, resource_size_t *phys);
int generic_access_phys(struct vm_area_struct *vma, unsigned long addr,
   void *buf, int len, int write);

static inline void unmap_shared_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen)
{
 unmap_mapping_range(mapping, holebegin, holelen, 0);
}

extern void truncate_pagecache(struct inode *inode, loff_t old, loff_t new);
extern void truncate_setsize(struct inode *inode, loff_t newsize);
extern int vmtruncate(struct inode *inode, loff_t offset);
extern int vmtruncate_range(struct inode *inode, loff_t offset, loff_t end);

int truncate_inode_page(struct address_space *mapping, struct page *page);
int generic_error_remove_page(struct address_space *mapping, struct page *page);

int invalidate_inode_page(struct page *page);


extern int handle_mm_fault(struct mm_struct *mm, struct vm_area_struct *vma,
   unsigned long address, unsigned int flags);
extern int fixup_user_fault(struct task_struct *tsk, struct mm_struct *mm,
       unsigned long address, unsigned int fault_flags);
# 986 "include/linux/mm.h"
extern int make_pages_present(unsigned long addr, unsigned long end);
extern int access_process_vm(struct task_struct *tsk, unsigned long addr, void *buf, int len, int write);
extern int access_remote_vm(struct mm_struct *mm, unsigned long addr,
  void *buf, int len, int write);

int __get_user_pages(struct task_struct *tsk, struct mm_struct *mm,
       unsigned long start, int len, unsigned int foll_flags,
       struct page **pages, struct vm_area_struct **vmas,
       int *nonblocking);
int get_user_pages(struct task_struct *tsk, struct mm_struct *mm,
   unsigned long start, int nr_pages, int write, int force,
   struct page **pages, struct vm_area_struct **vmas);
int get_user_pages_fast(unsigned long start, int nr_pages, int write,
   struct page **pages);
struct page *get_dump_page(unsigned long addr);

extern int try_to_release_page(struct page * page, gfp_t gfp_mask);
extern void do_invalidatepage(struct page *page, unsigned long offset);

int __set_page_dirty_nobuffers(struct page *page);
int __set_page_dirty_no_writeback(struct page *page);
int redirty_page_for_writepage(struct writeback_control *wbc,
    struct page *page);
void account_page_dirtied(struct page *page, struct address_space *mapping);
void account_page_writeback(struct page *page);
int set_page_dirty(struct page *page);
int set_page_dirty_lock(struct page *page);
int clear_page_dirty_for_io(struct page *page);


static inline int vma_growsdown(struct vm_area_struct *vma, unsigned long addr)
{
 return vma && (vma->vm_end == addr) && (vma->vm_flags & 0x00000100);
}

static inline int stack_guard_page_start(struct vm_area_struct *vma,
          unsigned long addr)
{
 return (vma->vm_flags & 0x00000100) &&
  (vma->vm_start == addr) &&
  !vma_growsdown(vma->vm_prev, addr);
}


static inline int vma_growsup(struct vm_area_struct *vma, unsigned long addr)
{
 return vma && (vma->vm_start == addr) && (vma->vm_flags & 0x00000000);
}

static inline int stack_guard_page_end(struct vm_area_struct *vma,
        unsigned long addr)
{
 return (vma->vm_flags & 0x00000000) &&
  (vma->vm_end == addr) &&
  !vma_growsup(vma->vm_next, addr);
}

extern unsigned long move_page_tables(struct vm_area_struct *vma,
  unsigned long old_addr, struct vm_area_struct *new_vma,
  unsigned long new_addr, unsigned long len);
extern unsigned long do_mremap(unsigned long addr,
          unsigned long old_len, unsigned long new_len,
          unsigned long flags, unsigned long new_addr);
extern int mprotect_fixup(struct vm_area_struct *vma,
     struct vm_area_struct **pprev, unsigned long start,
     unsigned long end, unsigned long newflags);




int __get_user_pages_fast(unsigned long start, int nr_pages, int write,
     struct page **pages);



static inline void set_mm_counter(struct mm_struct *mm, int member, long value)
{
 atomic_long_set(&mm->rss_stat.count[member], value);
}




static inline unsigned long get_mm_counter(struct mm_struct *mm, int member)
{
 return atomic_long_read(&mm->rss_stat.count[member]);
}


static inline void add_mm_counter(struct mm_struct *mm, int member, long value)
{
 atomic_long_add(value, &mm->rss_stat.count[member]);
}

static inline void inc_mm_counter(struct mm_struct *mm, int member)
{
 atomic_long_inc(&mm->rss_stat.count[member]);
}

static inline void dec_mm_counter(struct mm_struct *mm, int member)
{
 atomic_long_dec(&mm->rss_stat.count[member]);
}

static inline unsigned long get_mm_rss(struct mm_struct *mm)
{
 return get_mm_counter(mm, MM_FILEPAGES) +
  get_mm_counter(mm, MM_ANONPAGES);
}

static inline unsigned long get_mm_hiwater_rss(struct mm_struct *mm)
{
 return ({ typeof(mm->hiwater_rss) _max1 = (mm->hiwater_rss); typeof(get_mm_rss(mm)) _max2 = (get_mm_rss(mm)); (void) (&_max1 == &_max2); _max1 > _max2 ? _max1 : _max2; });
}

static inline unsigned long get_mm_hiwater_vm(struct mm_struct *mm)
{
 return ({ typeof(mm->hiwater_vm) _max1 = (mm->hiwater_vm); typeof(mm->total_vm) _max2 = (mm->total_vm); (void) (&_max1 == &_max2); _max1 > _max2 ? _max1 : _max2; });
}

static inline void update_hiwater_rss(struct mm_struct *mm)
{
 unsigned long _rss = get_mm_rss(mm);

 if ((mm)->hiwater_rss < _rss)
  (mm)->hiwater_rss = _rss;
}

static inline void update_hiwater_vm(struct mm_struct *mm)
{
 if (mm->hiwater_vm < mm->total_vm)
  mm->hiwater_vm = mm->total_vm;
}

static inline void setmax_mm_hiwater_rss(unsigned long *maxrss,
      struct mm_struct *mm)
{
 unsigned long hiwater_rss = get_mm_hiwater_rss(mm);

 if (*maxrss < hiwater_rss)
  *maxrss = hiwater_rss;
}




static inline void sync_mm_rss(struct task_struct *task, struct mm_struct *mm)
{
}


int vma_wants_writenotify(struct vm_area_struct *vma);

extern pte_t *__get_locked_pte(struct mm_struct *mm, unsigned long addr,
          spinlock_t **ptl);
static inline pte_t *get_locked_pte(struct mm_struct *mm, unsigned long addr,
        spinlock_t **ptl)
{
 pte_t *ptep;
 (ptep = __get_locked_pte(mm, addr, ptl));
 return ptep;
}
# 1156 "include/linux/mm.h"
int __pud_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address);
# 1166 "include/linux/mm.h"
int __pmd_alloc(struct mm_struct *mm, pud_t *pud, unsigned long address);


int __pte_alloc(struct mm_struct *mm, struct vm_area_struct *vma,
  pmd_t *pmd, unsigned long address);
int __pte_alloc_kernel(pmd_t *pmd, unsigned long address);






static inline pud_t *pud_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address)
{
 return (__builtin_expect(!!(pgd_none(*pgd)), 0) && __pud_alloc(mm, pgd, address))?
  ((void *)0): pud_offset(pgd, address);
}

static inline pmd_t *pmd_alloc(struct mm_struct *mm, pud_t *pud, unsigned long address)
{
 return (__builtin_expect(!!(pud_none(*pud)), 0) && __pmd_alloc(mm, pud, address))?
  ((void *)0): pmd_offset(pud, address);
}
# 1213 "include/linux/mm.h"
static inline void pgtable_page_ctor(struct page *page)
{
 do {} while (0);
 inc_zone_page_state(page, NR_PAGETABLE);
}

static inline void pgtable_page_dtor(struct page *page)
{
 do {} while (0);
 dec_zone_page_state(page, NR_PAGETABLE);
}
# 1253 "include/linux/mm.h"
extern void free_area_init(unsigned long * zones_size);
extern void free_area_init_node(int nid, unsigned long * zones_size,
  unsigned long zone_start_pfn, unsigned long *zholes_size);
# 1284 "include/linux/mm.h"
extern void free_area_init_nodes(unsigned long *max_zone_pfn);
extern void add_active_range(unsigned int nid, unsigned long start_pfn,
     unsigned long end_pfn);
extern void remove_active_range(unsigned int nid, unsigned long start_pfn,
     unsigned long end_pfn);
extern void remove_all_active_ranges(void);
void sort_node_map(void);
unsigned long node_map_pfn_alignment(void);
unsigned long __absent_pages_in_range(int nid, unsigned long start_pfn,
      unsigned long end_pfn);
extern unsigned long absent_pages_in_range(unsigned long start_pfn,
      unsigned long end_pfn);
extern void get_pfn_range_for_nid(unsigned int nid,
   unsigned long *start_pfn, unsigned long *end_pfn);
extern unsigned long find_min_pfn_with_active_regions(void);
extern void free_bootmem_with_active_regions(int nid,
      unsigned long max_low_pfn);
int add_from_early_node_map(struct range *range, int az,
       int nr_range, int nid);
u64 __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) find_memory_core_early(int nid, u64 size, u64 align,
     u64 goal, u64 limit);
typedef int (*work_fn_t)(unsigned long, unsigned long, void *);
extern void work_with_active_regions(int nid, work_fn_t work_fn, void *data);
extern void sparse_memory_present_with_active_regions(int nid);
# 1318 "include/linux/mm.h"
extern int __attribute__ ((__section__(".meminit.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) early_pfn_to_nid(unsigned long pfn);






extern void set_dma_reserve(unsigned long new_dma_reserve);
extern void memmap_init_zone(unsigned long, int, unsigned long,
    unsigned long, enum memmap_context);
extern void setup_per_zone_wmarks(void);
extern int __attribute__ ((__section__(".meminit.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) init_per_zone_wmark_min(void);
extern void mem_init(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) mmap_init(void);
extern void show_mem(unsigned int flags);
extern void si_meminfo(struct sysinfo * val);
extern void si_meminfo_node(struct sysinfo *val, int nid);
extern int after_bootmem;

extern void warn_alloc_failed(gfp_t gfp_mask, int order, const char *fmt, ...);

extern void setup_per_cpu_pageset(void);

extern void zone_pcp_update(struct zone *zone);


extern atomic_long_t mmap_pages_allocated;
extern int nommu_shrink_inode_mappings(struct inode *, size_t, size_t);


void vma_prio_tree_add(struct vm_area_struct *, struct vm_area_struct *old);
void vma_prio_tree_insert(struct vm_area_struct *, struct prio_tree_root *);
void vma_prio_tree_remove(struct vm_area_struct *, struct prio_tree_root *);
struct vm_area_struct *vma_prio_tree_next(struct vm_area_struct *vma,
 struct prio_tree_iter *iter);





static inline void vma_nonlinear_insert(struct vm_area_struct *vma,
     struct list_head *list)
{
 vma->shared.vm_set.parent = ((void *)0);
 list_add_tail(&vma->shared.vm_set.list, list);
}


extern int __vm_enough_memory(struct mm_struct *mm, long pages, int cap_sys_admin);
extern int vma_adjust(struct vm_area_struct *vma, unsigned long start,
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

extern int mm_take_all_locks(struct mm_struct *mm);
extern void mm_drop_all_locks(struct mm_struct *mm);


extern void added_exe_file_vma(struct mm_struct *mm);
extern void removed_exe_file_vma(struct mm_struct *mm);
extern void set_mm_exe_file(struct mm_struct *mm, struct file *new_exe_file);
extern struct file *get_mm_exe_file(struct mm_struct *mm);

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
 vm_flags_t vm_flags, unsigned long pgoff);

static inline unsigned long do_mmap(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long offset)
{
 unsigned long ret = -22;
 if ((offset + ((((len)) + ((typeof((len)))((((1UL) << 12))) - 1)) & ~((typeof((len)))((((1UL) << 12))) - 1))) < offset)
  goto out;
 if (!(offset & ~(~(((1UL) << 12)-1))))
  ret = do_mmap_pgoff(file, addr, len, prot, flag, offset >> 12);
out:
 return ret;
}

extern int do_munmap(struct mm_struct *, unsigned long, size_t);

extern unsigned long do_brk(unsigned long, unsigned long);


extern void truncate_inode_pages(struct address_space *, loff_t);
extern void truncate_inode_pages_range(struct address_space *,
           loff_t lstart, loff_t lend);


extern int filemap_fault(struct vm_area_struct *, struct vm_fault *);


int write_one_page(struct page *page, int wait);
void task_dirty_inc(struct task_struct *tsk);





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
unsigned long ra_submit(struct file_ra_state *ra,
   struct address_space *mapping,
   struct file *filp);


extern int expand_stack(struct vm_area_struct *vma, unsigned long address);


extern int expand_downwards(struct vm_area_struct *vma,
  unsigned long address);







extern struct vm_area_struct * find_vma(struct mm_struct * mm, unsigned long addr);
extern struct vm_area_struct * find_vma_prev(struct mm_struct * mm, unsigned long addr,
          struct vm_area_struct **pprev);



static inline struct vm_area_struct * find_vma_intersection(struct mm_struct * mm, unsigned long start_addr, unsigned long end_addr)
{
 struct vm_area_struct * vma = find_vma(mm,start_addr);

 if (vma && end_addr <= vma->vm_start)
  vma = ((void *)0);
 return vma;
}

static inline unsigned long vma_pages(struct vm_area_struct *vma)
{
 return (vma->vm_end - vma->vm_start) >> 12;
}


pgprot_t vm_get_page_prot(unsigned long vm_flags);







struct vm_area_struct *find_extend_vma(struct mm_struct *, unsigned long addr);
int remap_pfn_range(struct vm_area_struct *, unsigned long addr,
   unsigned long pfn, unsigned long size, pgprot_t);
int vm_insert_page(struct vm_area_struct *, unsigned long addr, struct page *);
int vm_insert_pfn(struct vm_area_struct *vma, unsigned long addr,
   unsigned long pfn);
int vm_insert_mixed(struct vm_area_struct *vma, unsigned long addr,
   unsigned long pfn);

struct page *follow_page(struct vm_area_struct *, unsigned long address,
   unsigned int foll_flags);
# 1525 "include/linux/mm.h"
typedef int (*pte_fn_t)(pte_t *pte, pgtable_t token, unsigned long addr,
   void *data);
extern int apply_to_page_range(struct mm_struct *mm, unsigned long address,
          unsigned long size, pte_fn_t fn, void *data);


void vm_stat_account(struct mm_struct *, unsigned long, struct file *, long);
# 1540 "include/linux/mm.h"
extern int debug_pagealloc_enabled;

extern void kernel_map_pages(struct page *page, int numpages, int enable);

static inline void enable_debug_pagealloc(void)
{
 debug_pagealloc_enabled = 1;
}

extern bool kernel_page_present(struct page *page);
# 1562 "include/linux/mm.h"
extern struct vm_area_struct *get_gate_vma(struct mm_struct *mm);

int in_gate_area_no_mm(unsigned long addr);
int in_gate_area(struct mm_struct *mm, unsigned long addr);





int drop_caches_sysctl_handler(struct ctl_table *, int,
     void *, size_t *, loff_t *);
unsigned long shrink_slab(struct shrink_control *shrink,
     unsigned long nr_pages_scanned,
     unsigned long lru_pages);




extern int randomize_va_space;


const char * arch_vma_name(struct vm_area_struct *vma);
void print_vma_addr(char *prefix, unsigned long rip);

void sparse_mem_maps_populate_node(struct page **map_map,
       unsigned long pnum_begin,
       unsigned long pnum_end,
       unsigned long map_count,
       int nodeid);

struct page *sparse_mem_map_populate(unsigned long pnum, int nid);
pgd_t *vmemmap_pgd_populate(unsigned long addr, int node);
pud_t *vmemmap_pud_populate(pgd_t *pgd, unsigned long addr, int node);
pmd_t *vmemmap_pmd_populate(pud_t *pud, unsigned long addr, int node);
pte_t *vmemmap_pte_populate(pmd_t *pmd, unsigned long addr, int node);
void *vmemmap_alloc_block(unsigned long size, int node);
void *vmemmap_alloc_block_buf(unsigned long size, int node);
void vmemmap_verify(pte_t *, int, unsigned long, unsigned long);
int vmemmap_populate_basepages(struct page *start_page,
      unsigned long pages, int node);
int vmemmap_populate(struct page *start_page, unsigned long pages, int node);
void vmemmap_populate_print_last(void);


enum mf_flags {
 MF_COUNT_INCREASED = 1 << 0,
};
extern void memory_failure(unsigned long pfn, int trapno);
extern int __memory_failure(unsigned long pfn, int trapno, int flags);
extern void memory_failure_queue(unsigned long pfn, int trapno, int flags);
extern int unpoison_memory(unsigned long pfn);
extern int sysctl_memory_failure_early_kill;
extern int sysctl_memory_failure_recovery;
extern void shake_page(struct page *p, int access);
extern atomic_long_t mce_bad_pages;
extern int soft_offline_page(struct page *page, int flags);

extern void dump_page(struct page *page);


extern void clear_huge_page(struct page *page,
       unsigned long addr,
       unsigned int pages_per_huge_page);
extern void copy_user_huge_page(struct page *dst, struct page *src,
    unsigned long addr, struct vm_area_struct *vma,
    unsigned int pages_per_huge_page);
# 5 "/home/iago/torvalds/linux/arch/x86/include/asm/pci.h" 2
# 14 "/home/iago/torvalds/linux/arch/x86/include/asm/pci.h"
struct pci_sysdata {
 int domain;
 int node;

 void *iommu;

};

extern int pci_routeirq;
extern int noioapicquirk;
extern int noioapicreroute;


extern struct pci_bus *pci_scan_bus_on_node(int busno, struct pci_ops *ops,
         int node);
extern struct pci_bus *pci_scan_bus_with_sysdata(int busno);




static inline int pci_domain_nr(struct pci_bus *bus)
{
 struct pci_sysdata *sd = bus->sysdata;
 return sd->domain;
}

static inline int pci_proc_domain(struct pci_bus *bus)
{
 return pci_domain_nr(bus);
}






extern unsigned int pcibios_assign_all_busses(void);
extern int pci_legacy_init(void);
# 62 "/home/iago/torvalds/linux/arch/x86/include/asm/pci.h"
extern unsigned long pci_mem_start;





extern int pcibios_enabled;
void pcibios_config_init(void);
struct pci_bus *pcibios_scan_root(int bus);

void pcibios_set_master(struct pci_dev *dev);
void pcibios_penalize_isa_irq(int irq, int active);
struct irq_routing_table *pcibios_get_irq_routing_table(void);
int pcibios_set_irq_routing(struct pci_dev *dev, int pin, int irq);



extern int pci_mmap_page_range(struct pci_dev *dev, struct vm_area_struct *vma,
          enum pci_mmap_state mmap_state,
          int write_combine);



extern void early_quirks(void);
static inline void pci_dma_burst_advice(struct pci_dev *pdev,
     enum pci_dma_burst_strategy *strat,
     unsigned long *strategy_parameter)
{
 *strat = PCI_DMA_BURST_INFINITY;
 *strategy_parameter = ~0UL;
}




extern void pci_iommu_alloc(void);



static inline int x86_setup_msi_irqs(struct pci_dev *dev, int nvec, int type)
{
 return x86_msi.setup_msi_irqs(dev, nvec, type);
}

static inline void x86_teardown_msi_irqs(struct pci_dev *dev)
{
 x86_msi.teardown_msi_irqs(dev);
}

static inline void x86_teardown_msi_irq(unsigned int irq)
{
 x86_msi.teardown_msi_irq(irq);
}




int native_setup_msi_irqs(struct pci_dev *dev, int nvec, int type);
void native_teardown_msi_irq(unsigned int irq);


void default_teardown_msi_irqs(struct pci_dev *dev);
# 135 "/home/iago/torvalds/linux/arch/x86/include/asm/pci.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/pci_64.h" 1






static inline void *pci_iommu(struct pci_bus *bus)
{
 struct pci_sysdata *sd = bus->sysdata;
 return sd->iommu;
}

static inline void set_pci_iommu(struct pci_bus *bus, void *val)
{
 struct pci_sysdata *sd = bus->sysdata;
 sd->iommu = val;
}


extern int (*pci_config_read)(int seg, int bus, int dev, int fn,
         int reg, int len, u32 *value);
extern int (*pci_config_write)(int seg, int bus, int dev, int fn,
          int reg, int len, u32 value);
# 136 "/home/iago/torvalds/linux/arch/x86/include/asm/pci.h" 2



# 1 "include/asm-generic/pci-dma-compat.h" 1






# 1 "include/linux/dma-mapping.h" 1





# 1 "include/linux/dma-attrs.h" 1





# 1 "include/linux/bug.h" 1





enum bug_trap_type {
 BUG_TRAP_TYPE_NONE = 0,
 BUG_TRAP_TYPE_WARN = 1,
 BUG_TRAP_TYPE_BUG = 2,
};

struct pt_regs;




static inline int is_warning_bug(const struct bug_entry *bug)
{
 return bug->flags & (1 << 0);
}

const struct bug_entry *find_bug(unsigned long bugaddr);

enum bug_trap_type report_bug(unsigned long bug_addr, struct pt_regs *regs);


int is_valid_bugaddr(unsigned long addr);
# 7 "include/linux/dma-attrs.h" 2






enum dma_attr {
 DMA_ATTR_WRITE_BARRIER,
 DMA_ATTR_WEAK_ORDERING,
 DMA_ATTR_MAX,
};







struct dma_attrs {
 unsigned long flags[(((DMA_ATTR_MAX) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];
};






static inline void init_dma_attrs(struct dma_attrs *attrs)
{
 bitmap_zero(attrs->flags, (((DMA_ATTR_MAX) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))));
}







static inline void dma_set_attr(enum dma_attr attr, struct dma_attrs *attrs)
{
 if (attrs == ((void *)0))
  return;
 do { if (__builtin_expect(!!(attr >= DMA_ATTR_MAX), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/dma-attrs.h"), "i" (49), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 __set_bit(attr, attrs->flags);
}






static inline int dma_get_attr(enum dma_attr attr, struct dma_attrs *attrs)
{
 if (attrs == ((void *)0))
  return 0;
 do { if (__builtin_expect(!!(attr >= DMA_ATTR_MAX), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/dma-attrs.h"), "i" (62), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 return (__builtin_constant_p((attr)) ? constant_test_bit((attr), (attrs->flags)) : variable_test_bit((attr), (attrs->flags)));
}
# 7 "include/linux/dma-mapping.h" 2
# 1 "include/linux/dma-direction.h" 1






enum dma_data_direction {
 DMA_BIDIRECTIONAL = 0,
 DMA_TO_DEVICE = 1,
 DMA_FROM_DEVICE = 2,
 DMA_NONE = 3,
};
# 8 "include/linux/dma-mapping.h" 2
# 1 "include/linux/scatterlist.h" 1
# 10 "include/linux/scatterlist.h"
struct sg_table {
 struct scatterlist *sgl;
 unsigned int nents;
 unsigned int orig_nents;
};
# 55 "include/linux/scatterlist.h"
static inline void sg_assign_page(struct scatterlist *sg, struct page *page)
{
 unsigned long page_link = sg->page_link & 0x3;





 do { if (__builtin_expect(!!((unsigned long) page & 0x03), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/scatterlist.h"), "i" (63), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);

 do { if (__builtin_expect(!!(sg->sg_magic != 0x87654321), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/scatterlist.h"), "i" (65), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 do { if (__builtin_expect(!!(((sg)->page_link & 0x01)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/scatterlist.h"), "i" (66), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);

 sg->page_link = page_link | (unsigned long) page;
}
# 85 "include/linux/scatterlist.h"
static inline void sg_set_page(struct scatterlist *sg, struct page *page,
          unsigned int len, unsigned int offset)
{
 sg_assign_page(sg, page);
 sg->offset = offset;
 sg->length = len;
}

static inline struct page *sg_page(struct scatterlist *sg)
{

 do { if (__builtin_expect(!!(sg->sg_magic != 0x87654321), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/scatterlist.h"), "i" (96), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 do { if (__builtin_expect(!!(((sg)->page_link & 0x01)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/scatterlist.h"), "i" (97), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);

 return (struct page *)((sg)->page_link & ~0x3);
}
# 109 "include/linux/scatterlist.h"
static inline void sg_set_buf(struct scatterlist *sg, const void *buf,
         unsigned int buflen)
{
 sg_set_page(sg, (((struct page *)(0xffffea0000000000UL)) + (__phys_addr((unsigned long)(buf)) >> 12)), buflen, ((unsigned long)(buf) & ~(~(((1UL) << 12)-1))));
}
# 131 "include/linux/scatterlist.h"
static inline void sg_chain(struct scatterlist *prv, unsigned int prv_nents,
       struct scatterlist *sgl)
{







 prv[prv_nents - 1].offset = 0;
 prv[prv_nents - 1].length = 0;





 prv[prv_nents - 1].page_link = ((unsigned long) sgl | 0x01) & ~0x02;
}
# 160 "include/linux/scatterlist.h"
static inline void sg_mark_end(struct scatterlist *sg)
{

 do { if (__builtin_expect(!!(sg->sg_magic != 0x87654321), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/linux/scatterlist.h"), "i" (163), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);




 sg->page_link |= 0x02;
 sg->page_link &= ~0x01;
}
# 182 "include/linux/scatterlist.h"
static inline dma_addr_t sg_phys(struct scatterlist *sg)
{
 return ((dma_addr_t)(unsigned long)((sg_page(sg)) - ((struct page *)(0xffffea0000000000UL))) << 12) + sg->offset;
}
# 197 "include/linux/scatterlist.h"
static inline void *sg_virt(struct scatterlist *sg)
{
 return lowmem_page_address(sg_page(sg)) + sg->offset;
}

struct scatterlist *sg_next(struct scatterlist *);
struct scatterlist *sg_last(struct scatterlist *s, unsigned int);
void sg_init_table(struct scatterlist *, unsigned int);
void sg_init_one(struct scatterlist *, const void *, unsigned int);

typedef struct scatterlist *(sg_alloc_fn)(unsigned int, gfp_t);
typedef void (sg_free_fn)(struct scatterlist *, unsigned int);

void __sg_free_table(struct sg_table *, unsigned int, sg_free_fn *);
void sg_free_table(struct sg_table *);
int __sg_alloc_table(struct sg_table *, unsigned int, unsigned int, gfp_t,
       sg_alloc_fn *);
int sg_alloc_table(struct sg_table *, unsigned int, gfp_t);

size_t sg_copy_from_buffer(struct scatterlist *sgl, unsigned int nents,
      void *buf, size_t buflen);
size_t sg_copy_to_buffer(struct scatterlist *sgl, unsigned int nents,
    void *buf, size_t buflen);
# 248 "include/linux/scatterlist.h"
struct sg_mapping_iter {

 struct page *page;
 void *addr;
 size_t length;
 size_t consumed;


 struct scatterlist *__sg;
 unsigned int __nents;
 unsigned int __offset;
 unsigned int __flags;
};

void sg_miter_start(struct sg_mapping_iter *miter, struct scatterlist *sgl,
      unsigned int nents, unsigned int flags);
bool sg_miter_next(struct sg_mapping_iter *miter);
void sg_miter_stop(struct sg_mapping_iter *miter);
# 9 "include/linux/dma-mapping.h" 2

struct dma_map_ops {
 void* (*alloc_coherent)(struct device *dev, size_t size,
    dma_addr_t *dma_handle, gfp_t gfp);
 void (*free_coherent)(struct device *dev, size_t size,
         void *vaddr, dma_addr_t dma_handle);
 dma_addr_t (*map_page)(struct device *dev, struct page *page,
          unsigned long offset, size_t size,
          enum dma_data_direction dir,
          struct dma_attrs *attrs);
 void (*unmap_page)(struct device *dev, dma_addr_t dma_handle,
      size_t size, enum dma_data_direction dir,
      struct dma_attrs *attrs);
 int (*map_sg)(struct device *dev, struct scatterlist *sg,
        int nents, enum dma_data_direction dir,
        struct dma_attrs *attrs);
 void (*unmap_sg)(struct device *dev,
    struct scatterlist *sg, int nents,
    enum dma_data_direction dir,
    struct dma_attrs *attrs);
 void (*sync_single_for_cpu)(struct device *dev,
        dma_addr_t dma_handle, size_t size,
        enum dma_data_direction dir);
 void (*sync_single_for_device)(struct device *dev,
           dma_addr_t dma_handle, size_t size,
           enum dma_data_direction dir);
 void (*sync_sg_for_cpu)(struct device *dev,
    struct scatterlist *sg, int nents,
    enum dma_data_direction dir);
 void (*sync_sg_for_device)(struct device *dev,
       struct scatterlist *sg, int nents,
       enum dma_data_direction dir);
 int (*mapping_error)(struct device *dev, dma_addr_t dma_addr);
 int (*dma_supported)(struct device *dev, u64 mask);
 int (*set_dma_mask)(struct device *dev, u64 mask);
 int is_phys;
};





static inline int valid_dma_direction(int dma_direction)
{
 return ((dma_direction == DMA_BIDIRECTIONAL) ||
  (dma_direction == DMA_TO_DEVICE) ||
  (dma_direction == DMA_FROM_DEVICE));
}

static inline int is_device_dma_capable(struct device *dev)
{
 return dev->dma_mask != ((void *)0) && *dev->dma_mask != 0x0ULL;
}


# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/dma-mapping.h" 1
# 9 "/home/iago/torvalds/linux/arch/x86/include/asm/dma-mapping.h"
# 1 "include/linux/kmemcheck.h" 1
# 92 "include/linux/kmemcheck.h"
static inline void
kmemcheck_alloc_shadow(struct page *page, int order, gfp_t flags, int node)
{
}

static inline void
kmemcheck_free_shadow(struct page *page, int order)
{
}

static inline void
kmemcheck_slab_alloc(struct kmem_cache *s, gfp_t gfpflags, void *object,
       size_t size)
{
}

static inline void kmemcheck_slab_free(struct kmem_cache *s, void *object,
           size_t size)
{
}

static inline void kmemcheck_pagealloc_alloc(struct page *p,
 unsigned int order, gfp_t gfpflags)
{
}

static inline bool kmemcheck_page_is_tracked(struct page *p)
{
 return false;
}

static inline void kmemcheck_mark_unallocated(void *address, unsigned int n)
{
}

static inline void kmemcheck_mark_uninitialized(void *address, unsigned int n)
{
}

static inline void kmemcheck_mark_initialized(void *address, unsigned int n)
{
}

static inline void kmemcheck_mark_freed(void *address, unsigned int n)
{
}

static inline void kmemcheck_mark_unallocated_pages(struct page *p,
          unsigned int n)
{
}

static inline void kmemcheck_mark_uninitialized_pages(struct page *p,
            unsigned int n)
{
}

static inline void kmemcheck_mark_initialized_pages(struct page *p,
          unsigned int n)
{
}

static inline bool kmemcheck_is_obj_initialized(unsigned long addr, size_t size)
{
 return true;
}
# 10 "/home/iago/torvalds/linux/arch/x86/include/asm/dma-mapping.h" 2

# 1 "include/linux/dma-debug.h" 1
# 25 "include/linux/dma-debug.h"
struct device;
struct scatterlist;
struct bus_type;



extern void dma_debug_add_bus(struct bus_type *bus);

extern void dma_debug_init(u32 num_entries);

extern int dma_debug_resize_entries(u32 num_entries);

extern void debug_dma_map_page(struct device *dev, struct page *page,
          size_t offset, size_t size,
          int direction, dma_addr_t dma_addr,
          bool map_single);

extern void debug_dma_unmap_page(struct device *dev, dma_addr_t addr,
     size_t size, int direction, bool map_single);

extern void debug_dma_map_sg(struct device *dev, struct scatterlist *sg,
        int nents, int mapped_ents, int direction);

extern void debug_dma_unmap_sg(struct device *dev, struct scatterlist *sglist,
          int nelems, int dir);

extern void debug_dma_alloc_coherent(struct device *dev, size_t size,
         dma_addr_t dma_addr, void *virt);

extern void debug_dma_free_coherent(struct device *dev, size_t size,
        void *virt, dma_addr_t addr);

extern void debug_dma_sync_single_for_cpu(struct device *dev,
       dma_addr_t dma_handle, size_t size,
       int direction);

extern void debug_dma_sync_single_for_device(struct device *dev,
          dma_addr_t dma_handle,
          size_t size, int direction);

extern void debug_dma_sync_single_range_for_cpu(struct device *dev,
      dma_addr_t dma_handle,
      unsigned long offset,
      size_t size,
      int direction);

extern void debug_dma_sync_single_range_for_device(struct device *dev,
         dma_addr_t dma_handle,
         unsigned long offset,
         size_t size, int direction);

extern void debug_dma_sync_sg_for_cpu(struct device *dev,
          struct scatterlist *sg,
          int nelems, int direction);

extern void debug_dma_sync_sg_for_device(struct device *dev,
      struct scatterlist *sg,
      int nelems, int direction);

extern void debug_dma_dump_mappings(struct device *dev);
# 12 "/home/iago/torvalds/linux/arch/x86/include/asm/dma-mapping.h" 2


# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/swiotlb.h" 1



# 1 "include/linux/swiotlb.h" 1





struct device;
struct dma_attrs;
struct scatterlist;

extern int swiotlb_force;
# 25 "include/linux/swiotlb.h"
extern void swiotlb_init(int verbose);
extern void swiotlb_init_with_tbl(char *tlb, unsigned long nslabs, int verbose);
extern unsigned long swioltb_nr_tbl(void);




enum dma_sync_target {
 SYNC_FOR_CPU = 0,
 SYNC_FOR_DEVICE = 1,
};
extern void *swiotlb_tbl_map_single(struct device *hwdev, dma_addr_t tbl_dma_addr,
        phys_addr_t phys, size_t size,
        enum dma_data_direction dir);

extern void swiotlb_tbl_unmap_single(struct device *hwdev, char *dma_addr,
         size_t size, enum dma_data_direction dir);

extern void swiotlb_tbl_sync_single(struct device *hwdev, char *dma_addr,
        size_t size, enum dma_data_direction dir,
        enum dma_sync_target target);


extern void swiotlb_bounce(phys_addr_t phys, char *dma_addr, size_t size,
      enum dma_data_direction dir);

extern void
*swiotlb_alloc_coherent(struct device *hwdev, size_t size,
   dma_addr_t *dma_handle, gfp_t flags);

extern void
swiotlb_free_coherent(struct device *hwdev, size_t size,
        void *vaddr, dma_addr_t dma_handle);

extern dma_addr_t swiotlb_map_page(struct device *dev, struct page *page,
       unsigned long offset, size_t size,
       enum dma_data_direction dir,
       struct dma_attrs *attrs);
extern void swiotlb_unmap_page(struct device *hwdev, dma_addr_t dev_addr,
          size_t size, enum dma_data_direction dir,
          struct dma_attrs *attrs);

extern int
swiotlb_map_sg(struct device *hwdev, struct scatterlist *sg, int nents,
        enum dma_data_direction dir);

extern void
swiotlb_unmap_sg(struct device *hwdev, struct scatterlist *sg, int nents,
   enum dma_data_direction dir);

extern int
swiotlb_map_sg_attrs(struct device *hwdev, struct scatterlist *sgl, int nelems,
       enum dma_data_direction dir, struct dma_attrs *attrs);

extern void
swiotlb_unmap_sg_attrs(struct device *hwdev, struct scatterlist *sgl,
         int nelems, enum dma_data_direction dir,
         struct dma_attrs *attrs);

extern void
swiotlb_sync_single_for_cpu(struct device *hwdev, dma_addr_t dev_addr,
       size_t size, enum dma_data_direction dir);

extern void
swiotlb_sync_sg_for_cpu(struct device *hwdev, struct scatterlist *sg,
   int nelems, enum dma_data_direction dir);

extern void
swiotlb_sync_single_for_device(struct device *hwdev, dma_addr_t dev_addr,
          size_t size, enum dma_data_direction dir);

extern void
swiotlb_sync_sg_for_device(struct device *hwdev, struct scatterlist *sg,
      int nelems, enum dma_data_direction dir);

extern int
swiotlb_dma_mapping_error(struct device *hwdev, dma_addr_t dma_addr);

extern int
swiotlb_dma_supported(struct device *hwdev, u64 mask);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) swiotlb_free(void);




extern void swiotlb_print_info(void);
# 5 "/home/iago/torvalds/linux/arch/x86/include/asm/swiotlb.h" 2


extern int swiotlb;
extern int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pci_swiotlb_detect_override(void);
extern int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pci_swiotlb_detect_4gb(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pci_swiotlb_init(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pci_swiotlb_late_init(void);
# 30 "/home/iago/torvalds/linux/arch/x86/include/asm/swiotlb.h"
static inline void dma_mark_clean(void *addr, size_t size) {}
# 15 "/home/iago/torvalds/linux/arch/x86/include/asm/dma-mapping.h" 2
# 1 "include/asm-generic/dma-coherent.h" 1
# 16 "/home/iago/torvalds/linux/arch/x86/include/asm/dma-mapping.h" 2
# 25 "/home/iago/torvalds/linux/arch/x86/include/asm/dma-mapping.h"
extern int iommu_merge;
extern struct device x86_dma_fallback_dev;
extern int panic_on_overflow;

extern struct dma_map_ops *dma_ops;

static inline struct dma_map_ops *get_dma_ops(struct device *dev)
{



 if (__builtin_expect(!!(!dev), 0) || !dev->archdata.dma_ops)
  return dma_ops;
 else
  return dev->archdata.dma_ops;

}

# 1 "include/asm-generic/dma-mapping-common.h" 1
# 9 "include/asm-generic/dma-mapping-common.h"
static inline dma_addr_t dma_map_single_attrs(struct device *dev, void *ptr,
           size_t size,
           enum dma_data_direction dir,
           struct dma_attrs *attrs)
{
 struct dma_map_ops *ops = get_dma_ops(dev);
 dma_addr_t addr;

 kmemcheck_mark_initialized(ptr, size);
 do { if (__builtin_expect(!!(!valid_dma_direction(dir)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/asm-generic/dma-mapping-common.h"), "i" (18), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 addr = ops->map_page(dev, (((struct page *)(0xffffea0000000000UL)) + (__phys_addr((unsigned long)(ptr)) >> 12)),
        (unsigned long)ptr & ~(~(((1UL) << 12)-1)), size,
        dir, attrs);
 debug_dma_map_page(dev, (((struct page *)(0xffffea0000000000UL)) + (__phys_addr((unsigned long)(ptr)) >> 12)),
      (unsigned long)ptr & ~(~(((1UL) << 12)-1)), size,
      dir, addr, true);
 return addr;
}

static inline void dma_unmap_single_attrs(struct device *dev, dma_addr_t addr,
       size_t size,
       enum dma_data_direction dir,
       struct dma_attrs *attrs)
{
 struct dma_map_ops *ops = get_dma_ops(dev);

 do { if (__builtin_expect(!!(!valid_dma_direction(dir)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/asm-generic/dma-mapping-common.h"), "i" (35), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 if (ops->unmap_page)
  ops->unmap_page(dev, addr, size, dir, attrs);
 debug_dma_unmap_page(dev, addr, size, dir, true);
}

static inline int dma_map_sg_attrs(struct device *dev, struct scatterlist *sg,
       int nents, enum dma_data_direction dir,
       struct dma_attrs *attrs)
{
 struct dma_map_ops *ops = get_dma_ops(dev);
 int i, ents;
 struct scatterlist *s;

 for (i = 0, s = (sg); i < (nents); i++, s = sg_next(s))
  kmemcheck_mark_initialized(sg_virt(s), s->length);
 do { if (__builtin_expect(!!(!valid_dma_direction(dir)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/asm-generic/dma-mapping-common.h"), "i" (51), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 ents = ops->map_sg(dev, sg, nents, dir, attrs);
 debug_dma_map_sg(dev, sg, nents, ents, dir);

 return ents;
}

static inline void dma_unmap_sg_attrs(struct device *dev, struct scatterlist *sg,
          int nents, enum dma_data_direction dir,
          struct dma_attrs *attrs)
{
 struct dma_map_ops *ops = get_dma_ops(dev);

 do { if (__builtin_expect(!!(!valid_dma_direction(dir)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/asm-generic/dma-mapping-common.h"), "i" (64), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 debug_dma_unmap_sg(dev, sg, nents, dir);
 if (ops->unmap_sg)
  ops->unmap_sg(dev, sg, nents, dir, attrs);
}

static inline dma_addr_t dma_map_page(struct device *dev, struct page *page,
          size_t offset, size_t size,
          enum dma_data_direction dir)
{
 struct dma_map_ops *ops = get_dma_ops(dev);
 dma_addr_t addr;

 kmemcheck_mark_initialized(lowmem_page_address(page) + offset, size);
 do { if (__builtin_expect(!!(!valid_dma_direction(dir)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/asm-generic/dma-mapping-common.h"), "i" (78), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 addr = ops->map_page(dev, page, offset, size, dir, ((void *)0));
 debug_dma_map_page(dev, page, offset, size, dir, addr, false);

 return addr;
}

static inline void dma_unmap_page(struct device *dev, dma_addr_t addr,
      size_t size, enum dma_data_direction dir)
{
 struct dma_map_ops *ops = get_dma_ops(dev);

 do { if (__builtin_expect(!!(!valid_dma_direction(dir)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/asm-generic/dma-mapping-common.h"), "i" (90), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 if (ops->unmap_page)
  ops->unmap_page(dev, addr, size, dir, ((void *)0));
 debug_dma_unmap_page(dev, addr, size, dir, false);
}

static inline void dma_sync_single_for_cpu(struct device *dev, dma_addr_t addr,
        size_t size,
        enum dma_data_direction dir)
{
 struct dma_map_ops *ops = get_dma_ops(dev);

 do { if (__builtin_expect(!!(!valid_dma_direction(dir)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/asm-generic/dma-mapping-common.h"), "i" (102), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 if (ops->sync_single_for_cpu)
  ops->sync_single_for_cpu(dev, addr, size, dir);
 debug_dma_sync_single_for_cpu(dev, addr, size, dir);
}

static inline void dma_sync_single_for_device(struct device *dev,
           dma_addr_t addr, size_t size,
           enum dma_data_direction dir)
{
 struct dma_map_ops *ops = get_dma_ops(dev);

 do { if (__builtin_expect(!!(!valid_dma_direction(dir)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/asm-generic/dma-mapping-common.h"), "i" (114), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 if (ops->sync_single_for_device)
  ops->sync_single_for_device(dev, addr, size, dir);
 debug_dma_sync_single_for_device(dev, addr, size, dir);
}

static inline void dma_sync_single_range_for_cpu(struct device *dev,
       dma_addr_t addr,
       unsigned long offset,
       size_t size,
       enum dma_data_direction dir)
{
 dma_sync_single_for_cpu(dev, addr + offset, size, dir);
}

static inline void dma_sync_single_range_for_device(struct device *dev,
          dma_addr_t addr,
          unsigned long offset,
          size_t size,
          enum dma_data_direction dir)
{
 dma_sync_single_for_device(dev, addr + offset, size, dir);
}

static inline void
dma_sync_sg_for_cpu(struct device *dev, struct scatterlist *sg,
      int nelems, enum dma_data_direction dir)
{
 struct dma_map_ops *ops = get_dma_ops(dev);

 do { if (__builtin_expect(!!(!valid_dma_direction(dir)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/asm-generic/dma-mapping-common.h"), "i" (144), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 if (ops->sync_sg_for_cpu)
  ops->sync_sg_for_cpu(dev, sg, nelems, dir);
 debug_dma_sync_sg_for_cpu(dev, sg, nelems, dir);
}

static inline void
dma_sync_sg_for_device(struct device *dev, struct scatterlist *sg,
         int nelems, enum dma_data_direction dir)
{
 struct dma_map_ops *ops = get_dma_ops(dev);

 do { if (__builtin_expect(!!(!valid_dma_direction(dir)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("include/asm-generic/dma-mapping-common.h"), "i" (156), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 if (ops->sync_sg_for_device)
  ops->sync_sg_for_device(dev, sg, nelems, dir);
 debug_dma_sync_sg_for_device(dev, sg, nelems, dir);

}
# 44 "/home/iago/torvalds/linux/arch/x86/include/asm/dma-mapping.h" 2


static inline int dma_mapping_error(struct device *dev, dma_addr_t dma_addr)
{
 struct dma_map_ops *ops = get_dma_ops(dev);
 if (ops->mapping_error)
  return ops->mapping_error(dev, dma_addr);

 return (dma_addr == 0);
}




extern int dma_supported(struct device *hwdev, u64 mask);
extern int dma_set_mask(struct device *dev, u64 mask);

extern void *dma_generic_alloc_coherent(struct device *dev, size_t size,
     dma_addr_t *dma_addr, gfp_t flag);

static inline bool dma_capable(struct device *dev, dma_addr_t addr, size_t size)
{
 if (!dev->dma_mask)
  return 0;

 return addr + size - 1 <= *dev->dma_mask;
}

static inline dma_addr_t phys_to_dma(struct device *dev, phys_addr_t paddr)
{
 return paddr;
}

static inline phys_addr_t dma_to_phys(struct device *dev, dma_addr_t daddr)
{
 return daddr;
}

static inline void
dma_cache_sync(struct device *dev, void *vaddr, size_t size,
 enum dma_data_direction dir)
{
 flush_write_buffers();
}

static inline unsigned long dma_alloc_coherent_mask(struct device *dev,
          gfp_t gfp)
{
 unsigned long dma_mask = 0;

 dma_mask = dev->coherent_dma_mask;
 if (!dma_mask)
  dma_mask = (gfp & (( gfp_t)0x01u)) ? (((24) == 64) ? ~0ULL : ((1ULL<<(24))-1)) : (((32) == 64) ? ~0ULL : ((1ULL<<(32))-1));

 return dma_mask;
}

static inline gfp_t dma_alloc_coherent_gfp_flags(struct device *dev, gfp_t gfp)
{
 unsigned long dma_mask = dma_alloc_coherent_mask(dev, gfp);

 if (dma_mask <= (((24) == 64) ? ~0ULL : ((1ULL<<(24))-1)))
  gfp |= (( gfp_t)0x01u);

 if (dma_mask <= (((32) == 64) ? ~0ULL : ((1ULL<<(32))-1)) && !(gfp & (( gfp_t)0x01u)))
  gfp |= (( gfp_t)0x04u);

       return gfp;
}

static inline void *
dma_alloc_coherent(struct device *dev, size_t size, dma_addr_t *dma_handle,
  gfp_t gfp)
{
 struct dma_map_ops *ops = get_dma_ops(dev);
 void *memory;

 gfp &= ~((( gfp_t)0x01u) | (( gfp_t)0x02u) | (( gfp_t)0x04u));

 if ((0))
  return memory;

 if (!dev)
  dev = &x86_dma_fallback_dev;

 if (!is_device_dma_capable(dev))
  return ((void *)0);

 if (!ops->alloc_coherent)
  return ((void *)0);

 memory = ops->alloc_coherent(dev, size, dma_handle,
         dma_alloc_coherent_gfp_flags(dev, gfp));
 debug_dma_alloc_coherent(dev, size, *dma_handle, memory);

 return memory;
}

static inline void dma_free_coherent(struct device *dev, size_t size,
         void *vaddr, dma_addr_t bus)
{
 struct dma_map_ops *ops = get_dma_ops(dev);

 ({ int __ret_warn_on = !!(({ unsigned long _flags; do { ({ unsigned long __dummy; typeof(_flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); _flags = arch_local_save_flags(); } while (0); ({ ({ unsigned long __dummy; typeof(_flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_irqs_disabled_flags(_flags); }); })); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath_null("/home/iago/torvalds/linux/arch/x86/include/asm/dma-mapping.h", 147); __builtin_expect(!!(__ret_warn_on), 0); });

 if ((0))
  return;

 debug_dma_free_coherent(dev, size, vaddr, bus);
 if (ops->free_coherent)
  ops->free_coherent(dev, size, vaddr, bus);
}
# 65 "include/linux/dma-mapping.h" 2




static inline u64 dma_get_mask(struct device *dev)
{
 if (dev && dev->dma_mask && *dev->dma_mask)
  return *dev->dma_mask;
 return (((32) == 64) ? ~0ULL : ((1ULL<<(32))-1));
}




static inline int dma_set_coherent_mask(struct device *dev, u64 mask)
{
 if (!dma_supported(dev, mask))
  return -5;
 dev->coherent_dma_mask = mask;
 return 0;
}


extern u64 dma_get_required_mask(struct device *dev);

static inline unsigned int dma_get_max_seg_size(struct device *dev)
{
 return dev->dma_parms ? dev->dma_parms->max_segment_size : 65536;
}

static inline unsigned int dma_set_max_seg_size(struct device *dev,
      unsigned int size)
{
 if (dev->dma_parms) {
  dev->dma_parms->max_segment_size = size;
  return 0;
 } else
  return -5;
}

static inline unsigned long dma_get_seg_boundary(struct device *dev)
{
 return dev->dma_parms ?
  dev->dma_parms->segment_boundary_mask : 0xffffffff;
}

static inline int dma_set_seg_boundary(struct device *dev, unsigned long mask)
{
 if (dev->dma_parms) {
  dev->dma_parms->segment_boundary_mask = mask;
  return 0;
 } else
  return -5;
}


static inline int dma_get_cache_alignment(void)
{



 return 1;
}
# 137 "include/linux/dma-mapping.h"
static inline int
dma_declare_coherent_memory(struct device *dev, dma_addr_t bus_addr,
       dma_addr_t device_addr, size_t size, int flags)
{
 return 0;
}

static inline void
dma_release_declared_memory(struct device *dev)
{
}

static inline void *
dma_mark_declared_memory_occupied(struct device *dev,
      dma_addr_t device_addr, size_t size)
{
 return ERR_PTR(-16);
}





extern void *dmam_alloc_coherent(struct device *dev, size_t size,
     dma_addr_t *dma_handle, gfp_t gfp);
extern void dmam_free_coherent(struct device *dev, size_t size, void *vaddr,
          dma_addr_t dma_handle);
extern void *dmam_alloc_noncoherent(struct device *dev, size_t size,
        dma_addr_t *dma_handle, gfp_t gfp);
extern void dmam_free_noncoherent(struct device *dev, size_t size, void *vaddr,
      dma_addr_t dma_handle);






static inline int dmam_declare_coherent_memory(struct device *dev,
    dma_addr_t bus_addr, dma_addr_t device_addr,
    size_t size, gfp_t gfp)
{
 return 0;
}

static inline void dmam_release_declared_memory(struct device *dev)
{
}
# 8 "include/asm-generic/pci-dma-compat.h" 2

static inline int
pci_dma_supported(struct pci_dev *hwdev, u64 mask)
{
 return dma_supported(hwdev == ((void *)0) ? ((void *)0) : &hwdev->dev, mask);
}

static inline void *
pci_alloc_consistent(struct pci_dev *hwdev, size_t size,
       dma_addr_t *dma_handle)
{
 return dma_alloc_coherent(hwdev == ((void *)0) ? ((void *)0) : &hwdev->dev, size, dma_handle, ((( gfp_t)0x20u)));
}

static inline void
pci_free_consistent(struct pci_dev *hwdev, size_t size,
      void *vaddr, dma_addr_t dma_handle)
{
 dma_free_coherent(hwdev == ((void *)0) ? ((void *)0) : &hwdev->dev, size, vaddr, dma_handle);
}

static inline dma_addr_t
pci_map_single(struct pci_dev *hwdev, void *ptr, size_t size, int direction)
{
 return dma_map_single_attrs(hwdev == ((void *)0) ? ((void *)0) : &hwdev->dev, ptr, size, (enum dma_data_direction)direction, ((void *)0));
}

static inline void
pci_unmap_single(struct pci_dev *hwdev, dma_addr_t dma_addr,
   size_t size, int direction)
{
 dma_unmap_single_attrs(hwdev == ((void *)0) ? ((void *)0) : &hwdev->dev, dma_addr, size, (enum dma_data_direction)direction, ((void *)0));
}

static inline dma_addr_t
pci_map_page(struct pci_dev *hwdev, struct page *page,
      unsigned long offset, size_t size, int direction)
{
 return dma_map_page(hwdev == ((void *)0) ? ((void *)0) : &hwdev->dev, page, offset, size, (enum dma_data_direction)direction);
}

static inline void
pci_unmap_page(struct pci_dev *hwdev, dma_addr_t dma_address,
        size_t size, int direction)
{
 dma_unmap_page(hwdev == ((void *)0) ? ((void *)0) : &hwdev->dev, dma_address, size, (enum dma_data_direction)direction);
}

static inline int
pci_map_sg(struct pci_dev *hwdev, struct scatterlist *sg,
    int nents, int direction)
{
 return dma_map_sg_attrs(hwdev == ((void *)0) ? ((void *)0) : &hwdev->dev, sg, nents, (enum dma_data_direction)direction, ((void *)0));
}

static inline void
pci_unmap_sg(struct pci_dev *hwdev, struct scatterlist *sg,
      int nents, int direction)
{
 dma_unmap_sg_attrs(hwdev == ((void *)0) ? ((void *)0) : &hwdev->dev, sg, nents, (enum dma_data_direction)direction, ((void *)0));
}

static inline void
pci_dma_sync_single_for_cpu(struct pci_dev *hwdev, dma_addr_t dma_handle,
      size_t size, int direction)
{
 dma_sync_single_for_cpu(hwdev == ((void *)0) ? ((void *)0) : &hwdev->dev, dma_handle, size, (enum dma_data_direction)direction);
}

static inline void
pci_dma_sync_single_for_device(struct pci_dev *hwdev, dma_addr_t dma_handle,
      size_t size, int direction)
{
 dma_sync_single_for_device(hwdev == ((void *)0) ? ((void *)0) : &hwdev->dev, dma_handle, size, (enum dma_data_direction)direction);
}

static inline void
pci_dma_sync_sg_for_cpu(struct pci_dev *hwdev, struct scatterlist *sg,
  int nelems, int direction)
{
 dma_sync_sg_for_cpu(hwdev == ((void *)0) ? ((void *)0) : &hwdev->dev, sg, nelems, (enum dma_data_direction)direction);
}

static inline void
pci_dma_sync_sg_for_device(struct pci_dev *hwdev, struct scatterlist *sg,
  int nelems, int direction)
{
 dma_sync_sg_for_device(hwdev == ((void *)0) ? ((void *)0) : &hwdev->dev, sg, nelems, (enum dma_data_direction)direction);
}

static inline int
pci_dma_mapping_error(struct pci_dev *pdev, dma_addr_t dma_addr)
{
 return dma_mapping_error(&pdev->dev, dma_addr);
}


static inline int pci_set_dma_mask(struct pci_dev *dev, u64 mask)
{
 return dma_set_mask(&dev->dev, mask);
}

static inline int pci_set_consistent_dma_mask(struct pci_dev *dev, u64 mask)
{
 return dma_set_coherent_mask(&dev->dev, mask);
}
# 140 "/home/iago/torvalds/linux/arch/x86/include/asm/pci.h" 2


# 1 "include/asm-generic/pci.h" 1
# 17 "include/asm-generic/pci.h"
static inline void
pcibios_resource_to_bus(struct pci_dev *dev, struct pci_bus_region *region,
    struct resource *res)
{
 region->start = res->start;
 region->end = res->end;
}

static inline void
pcibios_bus_to_resource(struct pci_dev *dev, struct resource *res,
   struct pci_bus_region *region)
{
 res->start = region->start;
 res->end = region->end;
}

static inline struct resource *
pcibios_select_root(struct pci_dev *pdev, struct resource *res)
{
 struct resource *root = ((void *)0);

 if (res->flags & 0x00000100)
  root = &ioport_resource;
 if (res->flags & 0x00000200)
  root = &iomem_resource;

 return root;
}


static inline int pci_get_legacy_ide_irq(struct pci_dev *dev, int channel)
{
 return channel ? 15 : 14;
}
# 143 "/home/iago/torvalds/linux/arch/x86/include/asm/pci.h" 2




static inline int __pcibus_to_node(const struct pci_bus *bus)
{
 const struct pci_sysdata *sd = bus->sysdata;

 return sd->node;
}

static inline const struct cpumask *
cpumask_of_pcibus(const struct pci_bus *bus)
{
 int node;

 node = __pcibus_to_node(bus);
 return (node == -1) ? cpu_online_mask :
         cpumask_of_node(node);
}
# 1308 "include/linux/pci.h" 2
# 1330 "include/linux/pci.h"
static inline void *pci_get_drvdata(struct pci_dev *pdev)
{
 return dev_get_drvdata(&pdev->dev);
}

static inline void pci_set_drvdata(struct pci_dev *pdev, void *data)
{
 dev_set_drvdata(&pdev->dev, data);
}




static inline const char *pci_name(const struct pci_dev *pdev)
{
 return dev_name(&pdev->dev);
}






static inline void pci_resource_to_user(const struct pci_dev *dev, int bar,
  const struct resource *rsrc, resource_size_t *start,
  resource_size_t *end)
{
 *start = rsrc->start;
 *end = rsrc->end;
}
# 1370 "include/linux/pci.h"
struct pci_fixup {
 u16 vendor, device;
 void (*hook)(struct pci_dev *dev);
};

enum pci_fixup_pass {
 pci_fixup_early,
 pci_fixup_header,
 pci_fixup_final,
 pci_fixup_enable,
 pci_fixup_resume,
 pci_fixup_suspend,
 pci_fixup_resume_early,
};
# 1412 "include/linux/pci.h"
void pci_fixup_device(enum pci_fixup_pass pass, struct pci_dev *dev);





void *pcim_iomap(struct pci_dev *pdev, int bar, unsigned long maxlen);
void pcim_iounmap(struct pci_dev *pdev, void *addr);
void * const *pcim_iomap_table(struct pci_dev *pdev);
int pcim_iomap_regions(struct pci_dev *pdev, u16 mask, const char *name);
int pcim_iomap_regions_request_all(struct pci_dev *pdev, u16 mask,
       const char *name);
void pcim_iounmap_regions(struct pci_dev *pdev, u16 mask);

extern int pci_pci_problems;
# 1435 "include/linux/pci.h"
extern unsigned long pci_cardbus_io_size;
extern unsigned long pci_cardbus_mem_size;
extern u8 __attribute__ ((__section__(".devinit.data"))) pci_dfl_cache_line_size;
extern u8 pci_cache_line_size;

extern unsigned long pci_hotplug_io_size;
extern unsigned long pci_hotplug_mem_size;

int pcibios_add_platform_entries(struct pci_dev *dev);
void pcibios_disable_device(struct pci_dev *dev);
int pcibios_set_pcie_reset_state(struct pci_dev *dev,
     enum pcie_reset_state state);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pci_mmcfg_early_init(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pci_mmcfg_late_init(void);





int pci_ext_cfg_avail(struct pci_dev *dev);

void *pci_ioremap_bar(struct pci_dev *pdev, int bar);


extern int pci_enable_sriov(struct pci_dev *dev, int nr_virtfn);
extern void pci_disable_sriov(struct pci_dev *dev);
extern irqreturn_t pci_sriov_migration(struct pci_dev *dev);
extern int pci_num_vf(struct pci_dev *dev);
# 1484 "include/linux/pci.h"
extern void pci_hp_create_module_link(struct pci_slot *pci_slot);
extern void pci_hp_remove_module_link(struct pci_slot *pci_slot);
# 1499 "include/linux/pci.h"
static inline int pci_pcie_cap(struct pci_dev *dev)
{
 return dev->pcie_cap;
}







static inline bool pci_is_pcie(struct pci_dev *dev)
{
 return !!pci_pcie_cap(dev);
}

void pci_request_acs(void);
# 1554 "include/linux/pci.h"
static inline u16 pci_vpd_lrdt_size(const u8 *lrdt)
{
 return (u16)lrdt[1] + ((u16)lrdt[2] << 8);
}







static inline u8 pci_vpd_srdt_size(const u8 *srdt)
{
 return (*srdt) & 0x07;
}







static inline u8 pci_vpd_info_field_size(const u8 *info_field)
{
 return info_field[2];
}
# 1591 "include/linux/pci.h"
int pci_vpd_find_tag(const u8 *buf, unsigned int off, unsigned int len, u8 rdt);
# 1603 "include/linux/pci.h"
int pci_vpd_find_info_keyword(const u8 *buf, unsigned int off,
         unsigned int len, const char *kw);
# 1628 "include/linux/pci.h"
static inline void pci_set_of_node(struct pci_dev *dev) { }
static inline void pci_release_of_node(struct pci_dev *dev) { }
static inline void pci_set_bus_of_node(struct pci_bus *bus) { }
static inline void pci_release_bus_of_node(struct pci_bus *bus) { }
# 1643 "include/linux/pci.h"
struct pci_dev *pci_find_upstream_pcie_bridge(struct pci_dev *pdev);
# 11 "drivers/xen/xen-pciback/vpci.c" 2

# 1 "drivers/xen/xen-pciback/pciback.h" 1
# 10 "drivers/xen/xen-pciback/pciback.h"
# 1 "include/linux/interrupt.h" 1
# 11 "include/linux/interrupt.h"
# 1 "include/linux/irqnr.h" 1
# 26 "include/linux/irqnr.h"
extern int nr_irqs;
extern struct irq_desc *irq_to_desc(unsigned int irq);
unsigned int irq_get_next_irq(unsigned int offset);
# 12 "include/linux/interrupt.h" 2
# 1 "include/linux/hardirq.h" 1





# 1 "include/linux/ftrace_irq.h" 1





extern void ftrace_nmi_enter(void);
extern void ftrace_nmi_exit(void);
# 7 "include/linux/hardirq.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/hardirq.h" 1




# 1 "include/linux/irq.h" 1
# 28 "include/linux/irq.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/irq.h" 1
# 13 "/home/iago/torvalds/linux/arch/x86/include/asm/irq.h"
static inline int irq_canonicalize(int irq)
{
 return ((irq == 2) ? 9 : irq);
}
# 28 "/home/iago/torvalds/linux/arch/x86/include/asm/irq.h"
extern void fixup_irqs(void);
extern void irq_force_complete_move(int);


extern void (*x86_platform_ipi_callback)(void);
extern void native_init_IRQ(void);
extern bool handle_irq(unsigned irq, struct pt_regs *regs);

extern unsigned int do_IRQ(struct pt_regs *regs);


extern unsigned long used_vectors[(((256) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];
extern int vector_used_by_percpu_irq(unsigned int vector);

extern void init_ISA_irqs(void);
# 29 "include/linux/irq.h" 2

# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/irq_regs.h" 1
# 14 "/home/iago/torvalds/linux/arch/x86/include/asm/irq_regs.h"
extern __attribute__((section(".discard"), unused)) char __pcpu_scope_irq_regs; extern __attribute__((section(".data..percpu" ""))) __typeof__(struct pt_regs *) irq_regs;

static inline struct pt_regs *get_irq_regs(void)
{
 return ({ typeof(irq_regs) pfo_ret__; switch (sizeof(irq_regs)) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m" (irq_regs)); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m" (irq_regs)); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m" (irq_regs)); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m" (irq_regs)); break; default: __bad_percpu_size(); } pfo_ret__; });
}

static inline struct pt_regs *set_irq_regs(struct pt_regs *new_regs)
{
 struct pt_regs *old_regs;

 old_regs = get_irq_regs();
 do { typedef typeof(irq_regs) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = (new_regs); (void)pto_tmp__; } switch (sizeof(irq_regs)) { case 1: asm("mov" "b %1,""%%""gs"":" "%P" "0" : "+m" (irq_regs) : "qi" ((pto_T__)(new_regs))); break; case 2: asm("mov" "w %1,""%%""gs"":" "%P" "0" : "+m" (irq_regs) : "ri" ((pto_T__)(new_regs))); break; case 4: asm("mov" "l %1,""%%""gs"":" "%P" "0" : "+m" (irq_regs) : "ri" ((pto_T__)(new_regs))); break; case 8: asm("mov" "q %1,""%%""gs"":" "%P" "0" : "+m" (irq_regs) : "re" ((pto_T__)(new_regs))); break; default: __bad_percpu_size(); } } while (0);

 return old_regs;
}
# 31 "include/linux/irq.h" 2

struct seq_file;
struct irq_desc;
struct irq_data;
typedef void (*irq_flow_handler_t)(unsigned int irq,
         struct irq_desc *desc);
typedef void (*irq_preflow_handler_t)(struct irq_data *data);
# 70 "include/linux/irq.h"
enum {
 IRQ_TYPE_NONE = 0x00000000,
 IRQ_TYPE_EDGE_RISING = 0x00000001,
 IRQ_TYPE_EDGE_FALLING = 0x00000002,
 IRQ_TYPE_EDGE_BOTH = (IRQ_TYPE_EDGE_FALLING | IRQ_TYPE_EDGE_RISING),
 IRQ_TYPE_LEVEL_HIGH = 0x00000004,
 IRQ_TYPE_LEVEL_LOW = 0x00000008,
 IRQ_TYPE_LEVEL_MASK = (IRQ_TYPE_LEVEL_LOW | IRQ_TYPE_LEVEL_HIGH),
 IRQ_TYPE_SENSE_MASK = 0x0000000f,

 IRQ_TYPE_PROBE = 0x00000010,

 IRQ_LEVEL = (1 << 8),
 IRQ_PER_CPU = (1 << 9),
 IRQ_NOPROBE = (1 << 10),
 IRQ_NOREQUEST = (1 << 11),
 IRQ_NOAUTOEN = (1 << 12),
 IRQ_NO_BALANCING = (1 << 13),
 IRQ_MOVE_PCNTXT = (1 << 14),
 IRQ_NESTED_THREAD = (1 << 15),
 IRQ_NOTHREAD = (1 << 16),
};
# 106 "include/linux/irq.h"
enum {
 IRQ_SET_MASK_OK = 0,
 IRQ_SET_MASK_OK_NOCOPY,
};

struct msi_desc;
struct irq_domain;
# 134 "include/linux/irq.h"
struct irq_data {
 unsigned int irq;
 unsigned long hwirq;
 unsigned int node;
 unsigned int state_use_accessors;
 struct irq_chip *chip;
 struct irq_domain *domain;
 void *handler_data;
 void *chip_data;
 struct msi_desc *msi_desc;

 cpumask_var_t affinity;

};
# 166 "include/linux/irq.h"
enum {
 IRQD_TRIGGER_MASK = 0xf,
 IRQD_SETAFFINITY_PENDING = (1 << 8),
 IRQD_NO_BALANCING = (1 << 10),
 IRQD_PER_CPU = (1 << 11),
 IRQD_AFFINITY_SET = (1 << 12),
 IRQD_LEVEL = (1 << 13),
 IRQD_WAKEUP_STATE = (1 << 14),
 IRQD_MOVE_PCNTXT = (1 << 15),
 IRQD_IRQ_DISABLED = (1 << 16),
 IRQD_IRQ_MASKED = (1 << 17),
 IRQD_IRQ_INPROGRESS = (1 << 18),
};

static inline bool irqd_is_setaffinity_pending(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_SETAFFINITY_PENDING;
}

static inline bool irqd_is_per_cpu(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_PER_CPU;
}

static inline bool irqd_can_balance(struct irq_data *d)
{
 return !(d->state_use_accessors & (IRQD_PER_CPU | IRQD_NO_BALANCING));
}

static inline bool irqd_affinity_was_set(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_AFFINITY_SET;
}

static inline void irqd_mark_affinity_was_set(struct irq_data *d)
{
 d->state_use_accessors |= IRQD_AFFINITY_SET;
}

static inline u32 irqd_get_trigger_type(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_TRIGGER_MASK;
}




static inline void irqd_set_trigger_type(struct irq_data *d, u32 type)
{
 d->state_use_accessors &= ~IRQD_TRIGGER_MASK;
 d->state_use_accessors |= type & IRQD_TRIGGER_MASK;
}

static inline bool irqd_is_level_type(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_LEVEL;
}

static inline bool irqd_is_wakeup_set(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_WAKEUP_STATE;
}

static inline bool irqd_can_move_in_process_context(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_MOVE_PCNTXT;
}

static inline bool irqd_irq_disabled(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_IRQ_DISABLED;
}

static inline bool irqd_irq_masked(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_IRQ_MASKED;
}

static inline bool irqd_irq_inprogress(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_IRQ_INPROGRESS;
}






static inline void irqd_set_chained_irq_inprogress(struct irq_data *d)
{
 d->state_use_accessors |= IRQD_IRQ_INPROGRESS;
}

static inline void irqd_clr_chained_irq_inprogress(struct irq_data *d)
{
 d->state_use_accessors &= ~IRQD_IRQ_INPROGRESS;
}
# 293 "include/linux/irq.h"
struct irq_chip {
 const char *name;
 unsigned int (*irq_startup)(struct irq_data *data);
 void (*irq_shutdown)(struct irq_data *data);
 void (*irq_enable)(struct irq_data *data);
 void (*irq_disable)(struct irq_data *data);

 void (*irq_ack)(struct irq_data *data);
 void (*irq_mask)(struct irq_data *data);
 void (*irq_mask_ack)(struct irq_data *data);
 void (*irq_unmask)(struct irq_data *data);
 void (*irq_eoi)(struct irq_data *data);

 int (*irq_set_affinity)(struct irq_data *data, const struct cpumask *dest, bool force);
 int (*irq_retrigger)(struct irq_data *data);
 int (*irq_set_type)(struct irq_data *data, unsigned int flow_type);
 int (*irq_set_wake)(struct irq_data *data, unsigned int on);

 void (*irq_bus_lock)(struct irq_data *data);
 void (*irq_bus_sync_unlock)(struct irq_data *data);

 void (*irq_cpu_online)(struct irq_data *data);
 void (*irq_cpu_offline)(struct irq_data *data);

 void (*irq_suspend)(struct irq_data *data);
 void (*irq_resume)(struct irq_data *data);
 void (*irq_pm_shutdown)(struct irq_data *data);

 void (*irq_print_chip)(struct irq_data *data, struct seq_file *p);

 unsigned long flags;





};
# 340 "include/linux/irq.h"
enum {
 IRQCHIP_SET_TYPE_MASKED = (1 << 0),
 IRQCHIP_EOI_IF_HANDLED = (1 << 1),
 IRQCHIP_MASK_ON_SUSPEND = (1 << 2),
 IRQCHIP_ONOFFLINE_ENABLED = (1 << 3),
};


# 1 "include/linux/irqdesc.h" 1
# 11 "include/linux/irqdesc.h"
struct irq_affinity_notify;
struct proc_dir_entry;
struct timer_rand_state;
# 39 "include/linux/irqdesc.h"
struct irq_desc {
 struct irq_data irq_data;
 struct timer_rand_state *timer_rand_state;
 unsigned int *kstat_irqs;
 irq_flow_handler_t handle_irq;



 struct irqaction *action;
 unsigned int status_use_accessors;
 unsigned int core_internal_state__do_not_mess_with_it;
 unsigned int depth;
 unsigned int wake_depth;
 unsigned int irq_count;
 unsigned long last_unhandled;
 unsigned int irqs_unhandled;
 raw_spinlock_t lock;

 const struct cpumask *affinity_hint;
 struct irq_affinity_notify *affinity_notify;

 cpumask_var_t pending_mask;


 unsigned long threads_oneshot;
 atomic_t threads_active;
 wait_queue_head_t wait_for_threads;

 struct proc_dir_entry *dir;

 struct module *owner;
 const char *name;
} __attribute__((__aligned__(1 << (12))));







static inline struct irq_data *irq_desc_get_irq_data(struct irq_desc *desc)
{
 return &desc->irq_data;
}

static inline struct irq_chip *irq_desc_get_chip(struct irq_desc *desc)
{
 return desc->irq_data.chip;
}

static inline void *irq_desc_get_chip_data(struct irq_desc *desc)
{
 return desc->irq_data.chip_data;
}

static inline void *irq_desc_get_handler_data(struct irq_desc *desc)
{
 return desc->irq_data.handler_data;
}

static inline struct msi_desc *irq_desc_get_msi_desc(struct irq_desc *desc)
{
 return desc->irq_data.msi_desc;
}







static inline void generic_handle_irq_desc(unsigned int irq, struct irq_desc *desc)
{
 desc->handle_irq(irq, desc);
}

int generic_handle_irq(unsigned int irq);


static inline int irq_has_action(unsigned int irq)
{
 struct irq_desc *desc = irq_to_desc(irq);
 return desc->action != ((void *)0);
}


static inline void __irq_set_handler_locked(unsigned int irq,
         irq_flow_handler_t handler)
{
 struct irq_desc *desc;

 desc = irq_to_desc(irq);
 desc->handle_irq = handler;
}


static inline void
__irq_set_chip_handler_name_locked(unsigned int irq, struct irq_chip *chip,
       irq_flow_handler_t handler, const char *name)
{
 struct irq_desc *desc;

 desc = irq_to_desc(irq);
 irq_desc_get_irq_data(desc)->chip = chip;
 desc->handle_irq = handler;
 desc->name = name;
}

static inline int irq_balancing_disabled(unsigned int irq)
{
 struct irq_desc *desc;

 desc = irq_to_desc(irq);
 return desc->status_use_accessors & (IRQ_PER_CPU | IRQ_NO_BALANCING);
}

static inline void
irq_set_lockdep_class(unsigned int irq, struct lock_class_key *class)
{
 struct irq_desc *desc = irq_to_desc(irq);

 if (desc)
  lockdep_init_map(&(&desc->lock)->dep_map, "class", class, 0);
}
# 349 "include/linux/irq.h" 2




# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/hw_irq.h" 1
# 21 "/home/iago/torvalds/linux/arch/x86/include/asm/hw_irq.h"
# 1 "include/linux/profile.h" 1
# 9 "include/linux/profile.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/errno.h" 1
# 10 "include/linux/profile.h" 2






struct proc_dir_entry;
struct pt_regs;
struct notifier_block;


void create_prof_cpu_mask(struct proc_dir_entry *de);
int create_proc_profile(void);
# 34 "include/linux/profile.h"
enum profile_type {
 PROFILE_TASK_EXIT,
 PROFILE_MUNMAP
};



extern int prof_on __attribute__((__section__(".data..read_mostly")));


int profile_init(void);
int profile_setup(char *str);
void profile_tick(int type);




void profile_hits(int type, void *ip, unsigned int nr_hits);




static inline void profile_hit(int type, void *ip)
{



 if (__builtin_expect(!!(prof_on == type), 0))
  profile_hits(type, ip, 1);
}

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
# 22 "/home/iago/torvalds/linux/arch/x86/include/asm/hw_irq.h" 2




# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/sections.h" 1



# 1 "include/asm-generic/sections.h" 1





extern char _text[], _stext[], _etext[];
extern char _data[], _sdata[], _edata[];
extern char __bss_start[], __bss_stop[];
extern char __init_begin[], __init_end[];
extern char _sinittext[], _einittext[];
extern char _end[];
extern char __per_cpu_load[], __per_cpu_start[], __per_cpu_end[];
extern char __kprobes_text_start[], __kprobes_text_end[];
extern char __entry_text_start[], __entry_text_end[];
extern char __initdata_begin[], __initdata_end[];
extern char __start_rodata[], __end_rodata[];


extern char __ctors_start[], __ctors_end[];
# 30 "include/asm-generic/sections.h"
static inline int arch_is_kernel_text(unsigned long addr)
{
 return 0;
}



static inline int arch_is_kernel_data(unsigned long addr)
{
 return 0;
}
# 5 "/home/iago/torvalds/linux/arch/x86/include/asm/sections.h" 2
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/uaccess.h" 1
# 94 "/home/iago/torvalds/linux/arch/x86/include/asm/uaccess.h"
struct exception_table_entry {
 unsigned long insn, fixup;
};

extern int fixup_exception(struct pt_regs *regs);
# 115 "/home/iago/torvalds/linux/arch/x86/include/asm/uaccess.h"
extern int __get_user_1(void);
extern int __get_user_2(void);
extern int __get_user_4(void);
extern int __get_user_8(void);
extern int __get_user_bad(void);
# 220 "/home/iago/torvalds/linux/arch/x86/include/asm/uaccess.h"
extern void __put_user_bad(void);





extern void __put_user_1(void);
extern void __put_user_2(void);
extern void __put_user_4(void);
extern void __put_user_8(void);
# 431 "/home/iago/torvalds/linux/arch/x86/include/asm/uaccess.h"
struct __large_struct { unsigned long buf[100]; };
# 558 "/home/iago/torvalds/linux/arch/x86/include/asm/uaccess.h"
extern unsigned long
copy_from_user_nmi(void *to, const void *from, unsigned long n);
# 575 "/home/iago/torvalds/linux/arch/x86/include/asm/uaccess.h"
# 1 "/home/iago/torvalds/linux/arch/x86/include/asm/uaccess_64.h" 1
# 19 "/home/iago/torvalds/linux/arch/x86/include/asm/uaccess_64.h"
__attribute__((warn_unused_result)) unsigned long
copy_user_generic_string(void *to, const void *from, unsigned len);
__attribute__((warn_unused_result)) unsigned long
copy_user_generic_unrolled(void *to, const void *from, unsigned len);

static inline __attribute__((always_inline)) __attribute__((warn_unused_result)) unsigned long
copy_user_generic(void *to, const void *from, unsigned len)
{
 unsigned ret;

 asm volatile ("661:\n\t" "call %P[old]" "\n662:\n" ".section .altinstructions,\"a\"\n" " " ".balign 8" " " "\n" "	 .long 661b - .\n" "	 .long 663f - .\n" "	 .word " "(3*32+16)" "\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .discard,\"aw\",@progbits\n" "	 .byte 0xff + (664f-663f) - (662b-661b)\n" ".previous\n" ".section .altinstr_replacement, \"ax\"\n" "663:\n\t" "call %P[new]" "\n664:\n" ".previous" : "=a" (ret), "=D" (to), "=S" (from), "=d" (len) : [old] "i" (copy_user_generic_unrolled), [new] "i" (copy_user_generic_string), "1" (to), "2" (from), "3" (len) : "memory", "rcx", "r8", "r9", "r10", "r11")





                                                ;
 return ret;
}

__attribute__((warn_unused_result)) unsigned long
_copy_to_user(void *to, const void *from, unsigned len);
__attribute__((warn_unused_result)) unsigned long
_copy_from_user(void *to, const void *from, unsigned len);
__attribute__((warn_unused_result)) unsigned long
copy_in_user(void *to, const void *from, unsigned len);

static inline unsigned long __attribute__((warn_unused_result)) copy_from_user(void *to,
       const void *from,
       unsigned long n)
{
 int sz = __builtin_object_size(to, 0);

 might_fault();
 if (__builtin_expect(!!(sz == -1 || sz >= n), 1))
  n = _copy_from_user(to, from, n);

 else
  ({ int __ret_warn_on = !!(1); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath_fmt("/home/iago/torvalds/linux/arch/x86/include/asm/uaccess_64.h", 57, "Buffer overflow detected!\n"); __builtin_expect(!!(__ret_warn_on), 0); });

 return n;
}

static inline __attribute__((always_inline)) __attribute__((warn_unused_result))
int copy_to_user(void *dst, const void *src, unsigned size)
{
 might_fault();

 return _copy_to_user(dst, src, size);
}

static inline __attribute__((always_inline)) __attribute__((warn_unused_result))
int __copy_from_user(void *dst, const void *src, unsigned size)
{
 int ret = 0;

 might_fault();
 if (!__builtin_constant_p(size))
  return copy_user_generic(dst, ( void *)src, size);
 switch (size) {
 case 1:asm volatile("1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=q"(*(u8 *)dst) : "m" ((*(struct __large_struct *)((u8 *)src))), "i" (1), "0" (ret))
                                ;
  return ret;
 case 2:asm volatile("1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(*(u16 *)dst) : "m" ((*(struct __large_struct *)((u16 *)src))), "i" (2), "0" (ret))
                                ;
  return ret;
 case 4:asm volatile("1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(*(u32 *)dst) : "m" ((*(struct __large_struct *)((u32 *)src))), "i" (4), "0" (ret))
                                ;
  return ret;
 case 8:asm volatile("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(*(u64 *)dst) : "m" ((*(struct __large_struct *)((u64 *)src))), "i" (8), "0" (ret))
                               ;
  return ret;
 case 10:
  asm volatile("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(*(u64 *)dst) : "m" ((*(struct __large_struct *)((u64 *)src))), "i" (10), "0" (ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm volatile("1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(*(u16 *)(8 + (char *)dst)) : "m" ((*(struct __large_struct *)((u16 *)(8 + (char *)src)))), "i" (2), "0" (ret))

                                 ;
  return ret;
 case 16:
  asm volatile("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(*(u64 *)dst) : "m" ((*(struct __large_struct *)((u64 *)src))), "i" (16), "0" (ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm volatile("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(*(u64 *)(8 + (char *)dst)) : "m" ((*(struct __large_struct *)((u64 *)(8 + (char *)src)))), "i" (8), "0" (ret))

                                ;
  return ret;
 default:
  return copy_user_generic(dst, ( void *)src, size);
 }
}

static inline __attribute__((always_inline)) __attribute__((warn_unused_result))
int __copy_to_user(void *dst, const void *src, unsigned size)
{
 int ret = 0;

 might_fault();
 if (!__builtin_constant_p(size))
  return copy_user_generic(( void *)dst, src, size);
 switch (size) {
 case 1:asm volatile("1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "iq"(*(u8 *)src), "m" ((*(struct __large_struct *)((u8 *)dst))), "i" (1), "0" (ret))
                                ;
  return ret;
 case 2:asm volatile("1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir"(*(u16 *)src), "m" ((*(struct __large_struct *)((u16 *)dst))), "i" (2), "0" (ret))
                                ;
  return ret;
 case 4:asm volatile("1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir"(*(u32 *)src), "m" ((*(struct __large_struct *)((u32 *)dst))), "i" (4), "0" (ret))
                                ;
  return ret;
 case 8:asm volatile("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "er"(*(u64 *)src), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (8), "0" (ret))
                               ;
  return ret;
 case 10:
  asm volatile("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "er"(*(u64 *)src), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (10), "0" (ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm("":::"memory");
  asm volatile("1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir"(4[(u16 *)src]), "m" ((*(struct __large_struct *)(4 + (u16 *)dst))), "i" (2), "0" (ret))
                                 ;
  return ret;
 case 16:
  asm volatile("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "er"(*(u64 *)src), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (16), "0" (ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm("":::"memory");
  asm volatile("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "er"(1[(u64 *)src]), "m" ((*(struct __large_struct *)(1 + (u64 *)dst))), "i" (8), "0" (ret))
                                ;
  return ret;
 default:
  return copy_user_generic(( void *)dst, src, size);
 }
}

static inline __attribute__((always_inline)) __attribute__((warn_unused_result))
int __copy_in_user(void *dst, const void *src, unsigned size)
{
 int ret = 0;

 might_fault();
 if (!__builtin_constant_p(size))
  return copy_user_generic(( void *)dst,
      ( void *)src, size);
 switch (size) {
 case 1: {
  u8 tmp;
  asm volatile("1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=q"(tmp) : "m" ((*(struct __large_struct *)((u8 *)src))), "i" (1), "0" (ret))
                                 ;
  if (__builtin_expect(!!(!ret), 1))
   asm volatile("1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "iq"(tmp), "m" ((*(struct __large_struct *)((u8 *)dst))), "i" (1), "0" (ret))
                                  ;
  return ret;
 }
 case 2: {
  u16 tmp;
  asm volatile("1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(tmp) : "m" ((*(struct __large_struct *)((u16 *)src))), "i" (2), "0" (ret))
                                 ;
  if (__builtin_expect(!!(!ret), 1))
   asm volatile("1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir"(tmp), "m" ((*(struct __large_struct *)((u16 *)dst))), "i" (2), "0" (ret))
                                  ;
  return ret;
 }

 case 4: {
  u32 tmp;
  asm volatile("1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(tmp) : "m" ((*(struct __large_struct *)((u32 *)src))), "i" (4), "0" (ret))
                                 ;
  if (__builtin_expect(!!(!ret), 1))
   asm volatile("1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir"(tmp), "m" ((*(struct __large_struct *)((u32 *)dst))), "i" (4), "0" (ret))
                                  ;
  return ret;
 }
 case 8: {
  u64 tmp;
  asm volatile("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(tmp) : "m" ((*(struct __large_struct *)((u64 *)src))), "i" (8), "0" (ret))
                                ;
  if (__builtin_expect(!!(!ret), 1))
   asm volatile("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "er"(tmp), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (8), "0" (ret))
                                 ;
  return ret;
 }
 default:
  return copy_user_generic(( void *)dst,
      ( void *)src, size);
 }
}

__attribute__((warn_unused_result)) long
strncpy_from_user(char *dst, const char *src, long count);
__attribute__((warn_unused_result)) long
__strncpy_from_user(char *dst, const char *src, long count);
__attribute__((warn_unused_result)) long strnlen_user(const char *str, long n);
__attribute__((warn_unused_result)) long __strnlen_user(const char *str, long n);
__attribute__((warn_unused_result)) long strlen_user(const char *str);
__attribute__((warn_unused_result)) unsigned long clear_user(void *mem, unsigned long len);
__attribute__((warn_unused_result)) unsigned long __clear_user(void *mem, unsigned long len);

static __attribute__((warn_unused_result)) inline __attribute__((always_inline)) int
__copy_from_user_inatomic(void *dst, const void *src, unsigned size)
{
 return copy_user_generic(dst, ( const void *)src, size);
}

static __attribute__((warn_unused_result)) inline __attribute__((always_inline)) int
__copy_to_user_inatomic(void *dst, const void *src, unsigned size)
{
 return copy_user_generic(( void *)dst, src, size);
}

extern long __copy_user_nocache(void *dst, const void *src,
    unsigned size, int zerorest);

static inline int
__copy_from_user_nocache(void *dst, const void *src, unsigned size)
{
 do { __might_sleep("/home/iago/torvalds/linux/arch/x86/include/asm/uaccess_64.h", 239, 0); do { } while (0); } while (0);
 return __copy_user_nocache(dst, src, size, 1);
}

static inline int
__copy_from_user_inatomic_nocache(void *dst, const void *src,
      unsigned size)
{
 return __copy_user_nocache(dst, src, size, 0);
}

unsigned long
copy_user_handle_tail(char *to, char *from, unsigned len, unsigned zerorest);
# 576 "/home/iago/torvalds/linux/arch/x86/include/asm/uaccess.h" 2
# 6 "/home/iago/torvalds/linux/arch/x86/include/asm/sections.h" 2

extern char __brk_base[], __brk_limit[];
extern struct exception_table_entry __stop___ex_table[];


extern char __end_rodata_hpage_align[];
# 27 "/home/iago/torvalds/linux/arch/x86/include/asm/hw_irq.h" 2


extern void apic_timer_interrupt(void);
extern void x86_platform_ipi(void);
extern void error_interrupt(void);
extern void irq_work_interrupt(void);

extern void spurious_interrupt(void);
extern void thermal_interrupt(void);
extern void reschedule_interrupt(void);

extern void invalidate_interrupt(void);
extern void invalidate_interrupt0(void);
extern void invalidate_interrupt1(void);
extern void invalidate_interrupt2(void);
extern void invalidate_interrupt3(void);
extern void invalidate_interrupt4(void);
extern void invalidate_interrupt5(void);
extern void invalidate_interrupt6(void);
extern void invalidate_interrupt7(void);
extern void invalidate_interrupt8(void);
extern void invalidate_interrupt9(void);
extern void invalidate_interrupt10(void);
extern void invalidate_interrupt11(void);
extern void invalidate_interrupt12(void);
extern void invalidate_interrupt13(void);
extern void invalidate_interrupt14(void);
extern void invalidate_interrupt15(void);
extern void invalidate_interrupt16(void);
extern void invalidate_interrupt17(void);
extern void invalidate_interrupt18(void);
extern void invalidate_interrupt19(void);
extern void invalidate_interrupt20(void);
extern void invalidate_interrupt21(void);
extern void invalidate_interrupt22(void);
extern void invalidate_interrupt23(void);
extern void invalidate_interrupt24(void);
extern void invalidate_interrupt25(void);
extern void invalidate_interrupt26(void);
extern void invalidate_interrupt27(void);
extern void invalidate_interrupt28(void);
extern void invalidate_interrupt29(void);
extern void invalidate_interrupt30(void);
extern void invalidate_interrupt31(void);

extern void irq_move_cleanup_interrupt(void);
extern void reboot_interrupt(void);
extern void threshold_interrupt(void);

extern void call_function_interrupt(void);
extern void call_function_single_interrupt(void);



extern unsigned long io_apic_irqs;

extern void init_VISWS_APIC_irqs(void);
extern void setup_IO_APIC(void);
extern void disable_IO_APIC(void);

struct io_apic_irq_attr {
 int ioapic;
 int ioapic_pin;
 int trigger;
 int polarity;
};

static inline void set_io_apic_irq_attr(struct io_apic_irq_attr *irq_attr,
     int ioapic, int ioapic_pin,
     int trigger, int polarity)
{
 irq_attr->ioapic = ioapic;
 irq_attr->ioapic_pin = ioapic_pin;
 irq_attr->trigger = trigger;
 irq_attr->polarity = polarity;
}

struct irq_2_iommu {
 struct intel_iommu *iommu;
 u16 irte_index;
 u16 sub_handle;
 u8 irte_mask;
};






struct irq_cfg {
 struct irq_pin_list *irq_2_pin;
 cpumask_var_t domain;
 cpumask_var_t old_domain;
 u8 vector;
 u8 move_in_progress : 1;

 struct irq_2_iommu irq_2_iommu;

};

extern int assign_irq_vector(int, struct irq_cfg *, const struct cpumask *);
extern void send_cleanup_vector(struct irq_cfg *);

struct irq_data;
int __ioapic_set_affinity(struct irq_data *, const struct cpumask *,
     unsigned int *dest_id);
extern int IO_APIC_get_PCI_irq_vector(int bus, int devfn, int pin, struct io_apic_irq_attr *irq_attr);
extern void setup_ioapic_dest(void);

extern void enable_IO_APIC(void);


extern atomic_t irq_err_count;
extern atomic_t irq_mis_count;


extern void eisa_set_level_irq(unsigned int irq);


extern void smp_apic_timer_interrupt(struct pt_regs *);
extern void smp_spurious_interrupt(struct pt_regs *);
extern void smp_x86_platform_ipi(struct pt_regs *);
extern void smp_error_interrupt(struct pt_regs *);

extern void smp_irq_move_cleanup_interrupt(void);


extern void smp_reschedule_interrupt(struct pt_regs *);
extern void smp_call_function_interrupt(struct pt_regs *);
extern void smp_call_function_single_interrupt(struct pt_regs *);



extern void smp_invalidate_interrupt(struct pt_regs *);



extern void (*__attribute__ ((__section__(".init.rodata"))) interrupt[256 -0x20])(void);

typedef int vector_irq_t[256];
extern __attribute__((section(".discard"), unused)) char __pcpu_scope_vector_irq; extern __attribute__((section(".data..percpu" ""))) __typeof__(vector_irq_t) vector_irq;
extern void setup_vector_irq(int cpu);


extern void lock_vector_lock(void);
extern void unlock_vector_lock(void);
extern void __setup_vector_irq(int cpu);
# 354 "include/linux/irq.h" 2
# 365 "include/linux/irq.h"
struct irqaction;
extern int setup_irq(unsigned int irq, struct irqaction *new);
extern void remove_irq(unsigned int irq, struct irqaction *act);

extern void irq_cpu_online(void);
extern void irq_cpu_offline(void);
extern int __irq_set_affinity_locked(struct irq_data *data, const struct cpumask *cpumask);




void irq_move_irq(struct irq_data *data);
void irq_move_masked_irq(struct irq_data *data);





extern int no_irq_affinity;





extern void handle_level_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_fasteoi_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_edge_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_edge_eoi_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_simple_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_percpu_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_bad_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_nested_irq(unsigned int irq);


extern void note_interrupt(unsigned int irq, struct irq_desc *desc,
      irqreturn_t action_ret);



extern int noirqdebug_setup(char *str);


extern int can_request_irq(unsigned int irq, unsigned long irqflags);


extern struct irq_chip no_irq_chip;
extern struct irq_chip dummy_irq_chip;

extern void
irq_set_chip_and_handler_name(unsigned int irq, struct irq_chip *chip,
         irq_flow_handler_t handle, const char *name);

static inline void irq_set_chip_and_handler(unsigned int irq, struct irq_chip *chip,
         irq_flow_handler_t handle)
{
 irq_set_chip_and_handler_name(irq, chip, handle, ((void *)0));
}

extern void
__irq_set_handler(unsigned int irq, irq_flow_handler_t handle, int is_chained,
    const char *name);

static inline void
irq_set_handler(unsigned int irq, irq_flow_handler_t handle)
{
 __irq_set_handler(irq, handle, 0, ((void *)0));
}






static inline void
irq_set_chained_handler(unsigned int irq, irq_flow_handler_t handle)
{
 __irq_set_handler(irq, handle, 1, ((void *)0));
}

void irq_modify_status(unsigned int irq, unsigned long clr, unsigned long set);

static inline void irq_set_status_flags(unsigned int irq, unsigned long set)
{
 irq_modify_status(irq, 0, set);
}

static inline void irq_clear_status_flags(unsigned int irq, unsigned long clr)
{
 irq_modify_status(irq, clr, 0);
}

static inline void irq_set_noprobe(unsigned int irq)
{
 irq_modify_status(irq, 0, IRQ_NOPROBE);
}

static inline void irq_set_probe(unsigned int irq)
{
 irq_modify_status(irq, IRQ_NOPROBE, 0);
}

static inline void irq_set_nothread(unsigned int irq)
{
 irq_modify_status(irq, 0, IRQ_NOTHREAD);
}

static inline void irq_set_thread(unsigned int irq)
{
 irq_modify_status(irq, IRQ_NOTHREAD, 0);
}

static inline void irq_set_nested_thread(unsigned int irq, bool nest)
{
 if (nest)
  irq_set_status_flags(irq, IRQ_NESTED_THREAD);
 else
  irq_clear_status_flags(irq, IRQ_NESTED_THREAD);
}


extern unsigned int create_irq_nr(unsigned int irq_want, int node);
extern int create_irq(void);
extern void destroy_irq(unsigned int irq);





extern void dynamic_irq_cleanup(unsigned int irq);
static inline void dynamic_irq_init(unsigned int irq)
{
 dynamic_irq_cleanup(irq);
}


extern int irq_set_chip(unsigned int irq, struct irq_chip *chip);
extern int irq_set_handler_data(unsigned int irq, void *data);
extern int irq_set_chip_data(unsigned int irq, void *data);
extern int irq_set_irq_type(unsigned int irq, unsigned int type);
extern int irq_set_msi_desc(unsigned int irq, struct msi_desc *entry);
extern struct irq_data *irq_get_irq_data(unsigned int irq);

static inline struct irq_chip *irq_get_chip(unsigned int irq)
{
 struct irq_data *d = irq_get_irq_data(irq);
 return d ? d->chip : ((void *)0);
}

static inline struct irq_chip *irq_data_get_irq_chip(struct irq_data *d)
{
 return d->chip;
}

static inline void *irq_get_chip_data(unsigned int irq)
{
 struct irq_data *d = irq_get_irq_data(irq);
 return d ? d->chip_data : ((void *)0);
}

static inline void *irq_data_get_irq_chip_data(struct irq_data *d)
{
 return d->chip_data;
}

static inline void *irq_get_handler_data(unsigned int irq)
{
 struct irq_data *d = irq_get_irq_data(irq);
 return d ? d->handler_data : ((void *)0);
}

static inline void *irq_data_get_irq_handler_data(struct irq_data *d)
{
 return d->handler_data;
}

static inline struct msi_desc *irq_get_msi_desc(unsigned int irq)
{
 struct irq_data *d = irq_get_irq_data(irq);
 return d ? d->msi_desc : ((void *)0);
}

static inline struct msi_desc *irq_data_get_msi(struct irq_data *d)
{
 return d->msi_desc;
}

int __irq_alloc_descs(int irq, unsigned int from, unsigned int cnt, int node,
  struct module *owner);

static inline int irq_alloc_descs(int irq, unsigned int from, unsigned int cnt,
  int node)
{
 return __irq_alloc_descs(irq, from, cnt, node, ((struct module *)0));
}

void irq_free_descs(unsigned int irq, unsigned int cnt);
int irq_reserve_irqs(unsigned int from, unsigned int cnt);

static inline int irq_alloc_desc(int node)
{
 return irq_alloc_descs(-1, 0, 1, node);
}

static inline int irq_alloc_desc_at(unsigned int at, int node)
{
 return irq_alloc_descs(at, at, 1, node);
}

static inline int irq_alloc_desc_from(unsigned int from, int node)
{
 return irq_alloc_descs(-1, from, 1, node);
}

static inline void irq_free_desc(unsigned int irq)
{
 irq_free_descs(irq, 1);
}

static inline int irq_reserve_irq(unsigned int irq)
{
 return irq_reserve_irqs(irq, 1);
}
# 605 "include/linux/irq.h"
struct irq_chip_regs {
 unsigned long enable;
 unsigned long disable;
 unsigned long mask;
 unsigned long ack;
 unsigned long eoi;
 unsigned long type;
 unsigned long polarity;
};
# 626 "include/linux/irq.h"
struct irq_chip_type {
 struct irq_chip chip;
 struct irq_chip_regs regs;
 irq_flow_handler_t handler;
 u32 type;
};
# 655 "include/linux/irq.h"
struct irq_chip_generic {
 raw_spinlock_t lock;
 void *reg_base;
 unsigned int irq_base;
 unsigned int irq_cnt;
 u32 mask_cache;
 u32 type_cache;
 u32 polarity_cache;
 u32 wake_enabled;
 u32 wake_active;
 unsigned int num_ct;
 void *private;
 struct list_head list;
 struct irq_chip_type chip_types[0];
};
# 678 "include/linux/irq.h"
enum irq_gc_flags {
 IRQ_GC_INIT_MASK_CACHE = 1 << 0,
 IRQ_GC_INIT_NESTED_LOCK = 1 << 1,
};


void irq_gc_noop(struct irq_data *d);
void irq_gc_mask_disable_reg(struct irq_data *d);
void irq_gc_mask_set_bit(struct irq_data *d);
void irq_gc_mask_clr_bit(struct irq_data *d);
void irq_gc_unmask_enable_reg(struct irq_data *d);
void irq_gc_ack_set_bit(struct irq_data *d);
void irq_gc_ack_clr_bit(struct irq_data *d);
void irq_gc_mask_disable_reg_and_ack(struct irq_data *d);
void irq_gc_eoi(struct irq_data *d);
int irq_gc_set_wake(struct irq_data *d, unsigned int on);


struct irq_chip_generic *
irq_alloc_generic_chip(const char *name, int nr_ct, unsigned int irq_base,
         void *reg_base, irq_flow_handler_t handler);
void irq_setup_generic_chip(struct irq_chip_generic *gc, u32 msk,
       enum irq_gc_flags flags, unsigned int clr,
       unsigned int set);
int irq_setup_alt_chip(struct irq_data *d, unsigned int type);
void irq_remove_generic_chip(struct irq_chip_generic *gc, u32 msk,
        unsigned int clr, unsigned int set);

static inline struct irq_chip_type *irq_data_get_chip_type(struct irq_data *d)
{
 return ({ const typeof( ((struct irq_chip_type *)0)->chip ) *__mptr = (d->chip); (struct irq_chip_type *)( (char *)__mptr - __builtin_offsetof(struct irq_chip_type,chip) );});
}




static inline void irq_gc_lock(struct irq_chip_generic *gc)
{
 _raw_spin_lock(&gc->lock);
}

static inline void irq_gc_unlock(struct irq_chip_generic *gc)
{
 _raw_spin_unlock(&gc->lock);
}
# 6 "/home/iago/torvalds/linux/arch/x86/include/asm/hardirq.h" 2

typedef struct {
 unsigned int __softirq_pending;
 unsigned int __nmi_count;
 unsigned int irq0_irqs;

 unsigned int apic_timer_irqs;
 unsigned int irq_spurious_count;

 unsigned int x86_platform_ipis;
 unsigned int apic_perf_irqs;
 unsigned int apic_irq_work_irqs;

 unsigned int irq_resched_count;
 unsigned int irq_call_count;
 unsigned int irq_tlb_count;


 unsigned int irq_thermal_count;


 unsigned int irq_threshold_count;

} __attribute__((__aligned__((1 << (6))))) irq_cpustat_t;

extern __attribute__((section(".discard"), unused)) char __pcpu_scope_irq_stat; extern __attribute__((section(".data..percpu" "..shared_aligned"))) __typeof__(irq_cpustat_t) irq_stat __attribute__((__aligned__((1 << (6)))));
# 47 "/home/iago/torvalds/linux/arch/x86/include/asm/hardirq.h"
extern void ack_bad_irq(unsigned int irq);

extern u64 arch_irq_stat_cpu(unsigned int cpu);


extern u64 arch_irq_stat(void);
# 8 "include/linux/hardirq.h" 2
# 127 "include/linux/hardirq.h"
extern void synchronize_irq(unsigned int irq);




struct task_struct;






extern void account_system_vtime(struct task_struct *tsk);
# 166 "include/linux/hardirq.h"
extern void rcu_irq_enter(void);
extern void rcu_irq_exit(void);
extern void rcu_nmi_enter(void);
extern void rcu_nmi_exit(void);
# 194 "include/linux/hardirq.h"
extern void irq_enter(void);
# 209 "include/linux/hardirq.h"
extern void irq_exit(void);
# 13 "include/linux/interrupt.h" 2



# 1 "include/linux/hrtimer.h" 1
# 25 "include/linux/hrtimer.h"
# 1 "include/linux/timerqueue.h" 1







struct timerqueue_node {
 struct rb_node node;
 ktime_t expires;
};

struct timerqueue_head {
 struct rb_root head;
 struct timerqueue_node *next;
};


extern void timerqueue_add(struct timerqueue_head *head,
    struct timerqueue_node *node);
extern void timerqueue_del(struct timerqueue_head *head,
    struct timerqueue_node *node);
extern struct timerqueue_node *timerqueue_iterate_next(
      struct timerqueue_node *node);
# 34 "include/linux/timerqueue.h"
static inline
struct timerqueue_node *timerqueue_getnext(struct timerqueue_head *head)
{
 return head->next;
}

static inline void timerqueue_init(struct timerqueue_node *node)
{
 rb_init_node(&node->node);
}

static inline void timerqueue_init_head(struct timerqueue_head *head)
{
 head->head = (struct rb_root) { ((void *)0), };
 head->next = ((void *)0);
}
# 26 "include/linux/hrtimer.h" 2

struct hrtimer_clock_base;
struct hrtimer_cpu_base;




enum hrtimer_mode {
 HRTIMER_MODE_ABS = 0x0,
 HRTIMER_MODE_REL = 0x1,
 HRTIMER_MODE_PINNED = 0x02,
 HRTIMER_MODE_ABS_PINNED = 0x02,
 HRTIMER_MODE_REL_PINNED = 0x03,
};




enum hrtimer_restart {
 HRTIMER_NORESTART,
 HRTIMER_RESTART,
};
# 108 "include/linux/hrtimer.h"
struct hrtimer {
 struct timerqueue_node node;
 ktime_t _softexpires;
 enum hrtimer_restart (*function)(struct hrtimer *);
 struct hrtimer_clock_base *base;
 unsigned long state;

 int start_pid;
 void *start_site;
 char start_comm[16];

};
# 128 "include/linux/hrtimer.h"
struct hrtimer_sleeper {
 struct hrtimer timer;
 struct task_struct *task;
};
# 145 "include/linux/hrtimer.h"
struct hrtimer_clock_base {
 struct hrtimer_cpu_base *cpu_base;
 int index;
 clockid_t clockid;
 struct timerqueue_head active;
 ktime_t resolution;
 ktime_t (*get_time)(void);
 ktime_t softirq_time;
 ktime_t offset;
};

enum hrtimer_base_type {
 HRTIMER_BASE_MONOTONIC,
 HRTIMER_BASE_REALTIME,
 HRTIMER_BASE_BOOTTIME,
 HRTIMER_MAX_CLOCK_BASES,
};
# 178 "include/linux/hrtimer.h"
struct hrtimer_cpu_base {
 raw_spinlock_t lock;
 unsigned long active_bases;

 ktime_t expires_next;
 int hres_active;
 int hang_detected;
 unsigned long nr_events;
 unsigned long nr_retries;
 unsigned long nr_hangs;
 ktime_t max_hang_time;

 struct hrtimer_clock_base clock_base[HRTIMER_MAX_CLOCK_BASES];
};

static inline void hrtimer_set_expires(struct hrtimer *timer, ktime_t time)
{
 timer->node.expires = time;
 timer->_softexpires = time;
}

static inline void hrtimer_set_expires_range(struct hrtimer *timer, ktime_t time, ktime_t delta)
{
 timer->_softexpires = time;
 timer->node.expires = ktime_add_safe(time, delta);
}

static inline void hrtimer_set_expires_range_ns(struct hrtimer *timer, ktime_t time, unsigned long delta)
{
 timer->_softexpires = time;
 timer->node.expires = ktime_add_safe(time, ns_to_ktime(delta));
}

static inline void hrtimer_set_expires_tv64(struct hrtimer *timer, s64 tv64)
{
 timer->node.expires.tv64 = tv64;
 timer->_softexpires.tv64 = tv64;
}

static inline void hrtimer_add_expires(struct hrtimer *timer, ktime_t time)
{
 timer->node.expires = ktime_add_safe(timer->node.expires, time);
 timer->_softexpires = ktime_add_safe(timer->_softexpires, time);
}

static inline void hrtimer_add_expires_ns(struct hrtimer *timer, u64 ns)
{
 timer->node.expires = ({ (ktime_t){ .tv64 = (timer->node.expires).tv64 + (ns) }; });
 timer->_softexpires = ({ (ktime_t){ .tv64 = (timer->_softexpires).tv64 + (ns) }; });
}

static inline ktime_t hrtimer_get_expires(const struct hrtimer *timer)
{
 return timer->node.expires;
}

static inline ktime_t hrtimer_get_softexpires(const struct hrtimer *timer)
{
 return timer->_softexpires;
}

static inline s64 hrtimer_get_expires_tv64(const struct hrtimer *timer)
{
 return timer->node.expires.tv64;
}
static inline s64 hrtimer_get_softexpires_tv64(const struct hrtimer *timer)
{
 return timer->_softexpires.tv64;
}

static inline s64 hrtimer_get_expires_ns(const struct hrtimer *timer)
{
 return ((timer->node.expires).tv64);
}

static inline ktime_t hrtimer_expires_remaining(const struct hrtimer *timer)
{
 return ({ (ktime_t){ .tv64 = (timer->node.expires).tv64 - (timer->base->get_time()).tv64 }; });
}


struct clock_event_device;

extern void hrtimer_interrupt(struct clock_event_device *dev);




static inline ktime_t hrtimer_cb_get_time(struct hrtimer *timer)
{
 return timer->base->get_time();
}

static inline int hrtimer_is_hres_active(struct hrtimer *timer)
{
 return timer->base->cpu_base->hres_active;
}

extern void hrtimer_peek_ahead_timers(void);
# 311 "include/linux/hrtimer.h"
extern void clock_was_set(void);

extern void timerfd_clock_was_set(void);



extern void hrtimers_resume(void);

extern ktime_t ktime_get(void);
extern ktime_t ktime_get_real(void);
extern ktime_t ktime_get_boottime(void);
extern ktime_t ktime_get_monotonic_offset(void);

extern __attribute__((section(".discard"), unused)) char __pcpu_scope_tick_cpu_device; extern __attribute__((section(".data..percpu" ""))) __typeof__(struct tick_device) tick_cpu_device;





extern void hrtimer_init(struct hrtimer *timer, clockid_t which_clock,
    enum hrtimer_mode mode);


extern void hrtimer_init_on_stack(struct hrtimer *timer, clockid_t which_clock,
      enum hrtimer_mode mode);

extern void destroy_hrtimer_on_stack(struct hrtimer *timer);
# 349 "include/linux/hrtimer.h"
extern int hrtimer_start(struct hrtimer *timer, ktime_t tim,
    const enum hrtimer_mode mode);
extern int hrtimer_start_range_ns(struct hrtimer *timer, ktime_t tim,
   unsigned long range_ns, const enum hrtimer_mode mode);
extern int
__hrtimer_start_range_ns(struct hrtimer *timer, ktime_t tim,
    unsigned long delta_ns,
    const enum hrtimer_mode mode, int wakeup);

extern int hrtimer_cancel(struct hrtimer *timer);
extern int hrtimer_try_to_cancel(struct hrtimer *timer);

static inline int hrtimer_start_expires(struct hrtimer *timer,
      enum hrtimer_mode mode)
{
 unsigned long delta;
 ktime_t soft, hard;
 soft = hrtimer_get_softexpires(timer);
 hard = hrtimer_get_expires(timer);
 delta = ((({ (ktime_t){ .tv64 = (hard).tv64 - (soft).tv64 }; })).tv64);
 return hrtimer_start_range_ns(timer, soft, delta, mode);
}

static inline int hrtimer_restart(struct hrtimer *timer)
{
 return hrtimer_start_expires(timer, HRTIMER_MODE_ABS);
}


extern ktime_t hrtimer_get_remaining(const struct hrtimer *timer);
extern int hrtimer_get_res(const clockid_t which_clock, struct timespec *tp);

extern ktime_t hrtimer_get_next_event(void);






static inline int hrtimer_active(const struct hrtimer *timer)
{
 return timer->state != 0x00;
}




static inline int hrtimer_is_queued(struct hrtimer *timer)
{
 return timer->state & 0x01;
}





static inline int hrtimer_callback_running(struct hrtimer *timer)
{
 return timer->state & 0x02;
}


extern u64
hrtimer_forward(struct hrtimer *timer, ktime_t now, ktime_t interval);


static inline u64 hrtimer_forward_now(struct hrtimer *timer,
          ktime_t interval)
{
 return hrtimer_forward(timer, timer->base->get_time(), interval);
}


extern long hrtimer_nanosleep(struct timespec *rqtp,
         struct timespec *rmtp,
         const enum hrtimer_mode mode,
         const clockid_t clockid);
extern long hrtimer_nanosleep_restart(struct restart_block *restart_block);

extern void hrtimer_init_sleeper(struct hrtimer_sleeper *sl,
     struct task_struct *tsk);

extern int schedule_hrtimeout_range(ktime_t *expires, unsigned long delta,
      const enum hrtimer_mode mode);
extern int schedule_hrtimeout_range_clock(ktime_t *expires,
  unsigned long delta, const enum hrtimer_mode mode, int clock);
extern int schedule_hrtimeout(ktime_t *expires, const enum hrtimer_mode mode);


extern void hrtimer_run_queues(void);
extern void hrtimer_run_pending(void);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) hrtimers_init(void);
# 451 "include/linux/hrtimer.h"
extern void sysrq_timer_list_show(void);
# 17 "include/linux/interrupt.h" 2






# 1 "include/trace/events/irq.h" 1






# 1 "include/linux/tracepoint.h" 1
# 8 "include/trace/events/irq.h" 2

struct irqaction;
struct softirq_action;
# 37 "include/trace/events/irq.h"
extern struct tracepoint
# 54 "include/trace/events/irq.h"
 __tracepoint_irq_handler_entry
# 37 "include/trace/events/irq.h"
 ; static inline void
# 54 "include/trace/events/irq.h"
 trace_irq_handler_entry
# 37 "include/trace/events/irq.h"
 (int irq, struct irqaction *action) { if (static_branch(&
# 54 "include/trace/events/irq.h"
 __tracepoint_irq_handler_entry
# 37 "include/trace/events/irq.h"
 .key)) do { struct tracepoint_func *it_func_ptr; void *it_func; void *__data; if (!(1)) return; rcu_read_lock_sched_notrace(); it_func_ptr = ({ typeof(*((&__tracepoint_irq_handler_entry)->funcs)) *_________p1 = (typeof(*((&__tracepoint_irq_handler_entry)->funcs))* )(*(volatile typeof(((&__tracepoint_irq_handler_entry)->funcs)) *)&(((&__tracepoint_irq_handler_entry)->funcs))); do { static bool __warned; if (debug_lockdep_rcu_enabled() && !__warned && !(rcu_read_lock_sched_held() || (0))) { __warned = true; lockdep_rcu_dereference(
# 54 "include/trace/events/irq.h"
 "include/trace/events/irq.h"
# 37 "include/trace/events/irq.h"
 ,
# 54 "include/trace/events/irq.h"
 54
# 37 "include/trace/events/irq.h"
 ); } } while (0); ; do { } while (0); ((typeof(*((&__tracepoint_irq_handler_entry)->funcs)) *)(_________p1)); }); if (it_func_ptr) { do { it_func = (it_func_ptr)->func; __data = (it_func_ptr)->data; ((void(*)(void *__data, int irq, struct irqaction *action))(it_func))(__data, irq, action); } while ((++it_func_ptr)->func); } rcu_read_unlock_sched_notrace(); } while (0); } static inline int
# 54 "include/trace/events/irq.h"
 register_trace_irq_handler_entry
# 37 "include/trace/events/irq.h"
 (void (*probe)(void *__data, int irq, struct irqaction *action), void *data) { return tracepoint_probe_register("irq_handler_entry", (void *)probe, data); } static inline int
# 54 "include/trace/events/irq.h"
 unregister_trace_irq_handler_entry
# 37 "include/trace/events/irq.h"
 (void (*probe)(void *__data, int irq, struct irqaction *action), void *data) { return tracepoint_probe_unregister("irq_handler_entry", (void *)probe, data); } static inline void
# 54 "include/trace/events/irq.h"
 check_trace_callback_type_irq_handler_entry
# 37 "include/trace/events/irq.h"
 (void (*cb)(void *__data, int irq, struct irqaction *action)) { }
# 54 "include/trace/events/irq.h"
 ;
# 67 "include/trace/events/irq.h"
extern struct tracepoint
# 85 "include/trace/events/irq.h"
 __tracepoint_irq_handler_exit
# 67 "include/trace/events/irq.h"
 ; static inline void
# 85 "include/trace/events/irq.h"
 trace_irq_handler_exit
# 67 "include/trace/events/irq.h"
 (int irq, struct irqaction *action, int ret) { if (static_branch(&
# 85 "include/trace/events/irq.h"
 __tracepoint_irq_handler_exit
# 67 "include/trace/events/irq.h"
 .key)) do { struct tracepoint_func *it_func_ptr; void *it_func; void *__data; if (!(1)) return; rcu_read_lock_sched_notrace(); it_func_ptr = ({ typeof(*((&__tracepoint_irq_handler_exit)->funcs)) *_________p1 = (typeof(*((&__tracepoint_irq_handler_exit)->funcs))* )(*(volatile typeof(((&__tracepoint_irq_handler_exit)->funcs)) *)&(((&__tracepoint_irq_handler_exit)->funcs))); do { static bool __warned; if (debug_lockdep_rcu_enabled() && !__warned && !(rcu_read_lock_sched_held() || (0))) { __warned = true; lockdep_rcu_dereference(
# 85 "include/trace/events/irq.h"
 "include/trace/events/irq.h"
# 67 "include/trace/events/irq.h"
 ,
# 85 "include/trace/events/irq.h"
 85
# 67 "include/trace/events/irq.h"
 ); } } while (0); ; do { } while (0); ((typeof(*((&__tracepoint_irq_handler_exit)->funcs)) *)(_________p1)); }); if (it_func_ptr) { do { it_func = (it_func_ptr)->func; __data = (it_func_ptr)->data; ((void(*)(void *__data, int irq, struct irqaction *action, int ret))(it_func))(__data, irq, action, ret); } while ((++it_func_ptr)->func); } rcu_read_unlock_sched_notrace(); } while (0); } static inline int
# 85 "include/trace/events/irq.h"
 register_trace_irq_handler_exit
# 67 "include/trace/events/irq.h"
 (void (*probe)(void *__data, int irq, struct irqaction *action, int ret), void *data) { return tracepoint_probe_register("irq_handler_exit", (void *)probe, data); } static inline int
# 85 "include/trace/events/irq.h"
 unregister_trace_irq_handler_exit
# 67 "include/trace/events/irq.h"
 (void (*probe)(void *__data, int irq, struct irqaction *action, int ret), void *data) { return tracepoint_probe_unregister("irq_handler_exit", (void *)probe, data); } static inline void
# 85 "include/trace/events/irq.h"
 check_trace_callback_type_irq_handler_exit
# 67 "include/trace/events/irq.h"
 (void (*cb)(void *__data, int irq, struct irqaction *action, int ret)) { }
# 85 "include/trace/events/irq.h"
 ;


# 103 "include/trace/events/irq.h"
 ;
# 112 "include/trace/events/irq.h"
extern struct tracepoint




 __tracepoint_softirq_entry
# 112 "include/trace/events/irq.h"
 ; static inline void




 trace_softirq_entry
# 112 "include/trace/events/irq.h"
 (unsigned int vec_nr) { if (static_branch(&




 __tracepoint_softirq_entry
# 112 "include/trace/events/irq.h"
 .key)) do { struct tracepoint_func *it_func_ptr; void *it_func; void *__data; if (!(1)) return; rcu_read_lock_sched_notrace(); it_func_ptr = ({ typeof(*((&__tracepoint_softirq_entry)->funcs)) *_________p1 = (typeof(*((&__tracepoint_softirq_entry)->funcs))* )(*(volatile typeof(((&__tracepoint_softirq_entry)->funcs)) *)&(((&__tracepoint_softirq_entry)->funcs))); do { static bool __warned; if (debug_lockdep_rcu_enabled() && !__warned && !(rcu_read_lock_sched_held() || (0))) { __warned = true; lockdep_rcu_dereference(




 "include/trace/events/irq.h"
# 112 "include/trace/events/irq.h"
 ,




 117
# 112 "include/trace/events/irq.h"
 ); } } while (0); ; do { } while (0); ((typeof(*((&__tracepoint_softirq_entry)->funcs)) *)(_________p1)); }); if (it_func_ptr) { do { it_func = (it_func_ptr)->func; __data = (it_func_ptr)->data; ((void(*)(void *__data, unsigned int vec_nr))(it_func))(__data, vec_nr); } while ((++it_func_ptr)->func); } rcu_read_unlock_sched_notrace(); } while (0); } static inline int




 register_trace_softirq_entry
# 112 "include/trace/events/irq.h"
 (void (*probe)(void *__data, unsigned int vec_nr), void *data) { return tracepoint_probe_register("softirq_entry", (void *)probe, data); } static inline int




 unregister_trace_softirq_entry
# 112 "include/trace/events/irq.h"
 (void (*probe)(void *__data, unsigned int vec_nr), void *data) { return tracepoint_probe_unregister("softirq_entry", (void *)probe, data); } static inline void




 check_trace_callback_type_softirq_entry
# 112 "include/trace/events/irq.h"
 (void (*cb)(void *__data, unsigned int vec_nr)) { }




 ;
# 126 "include/trace/events/irq.h"
extern struct tracepoint




 __tracepoint_softirq_exit
# 126 "include/trace/events/irq.h"
 ; static inline void




 trace_softirq_exit
# 126 "include/trace/events/irq.h"
 (unsigned int vec_nr) { if (static_branch(&




 __tracepoint_softirq_exit
# 126 "include/trace/events/irq.h"
 .key)) do { struct tracepoint_func *it_func_ptr; void *it_func; void *__data; if (!(1)) return; rcu_read_lock_sched_notrace(); it_func_ptr = ({ typeof(*((&__tracepoint_softirq_exit)->funcs)) *_________p1 = (typeof(*((&__tracepoint_softirq_exit)->funcs))* )(*(volatile typeof(((&__tracepoint_softirq_exit)->funcs)) *)&(((&__tracepoint_softirq_exit)->funcs))); do { static bool __warned; if (debug_lockdep_rcu_enabled() && !__warned && !(rcu_read_lock_sched_held() || (0))) { __warned = true; lockdep_rcu_dereference(




 "include/trace/events/irq.h"
# 126 "include/trace/events/irq.h"
 ,




 131
# 126 "include/trace/events/irq.h"
 ); } } while (0); ; do { } while (0); ((typeof(*((&__tracepoint_softirq_exit)->funcs)) *)(_________p1)); }); if (it_func_ptr) { do { it_func = (it_func_ptr)->func; __data = (it_func_ptr)->data; ((void(*)(void *__data, unsigned int vec_nr))(it_func))(__data, vec_nr); } while ((++it_func_ptr)->func); } rcu_read_unlock_sched_notrace(); } while (0); } static inline int




 register_trace_softirq_exit
# 126 "include/trace/events/irq.h"
 (void (*probe)(void *__data, unsigned int vec_nr), void *data) { return tracepoint_probe_register("softirq_exit", (void *)probe, data); } static inline int




 unregister_trace_softirq_exit
# 126 "include/trace/events/irq.h"
 (void (*probe)(void *__data, unsigned int vec_nr), void *data) { return tracepoint_probe_unregister("softirq_exit", (void *)probe, data); } static inline void




 check_trace_callback_type_softirq_exit
# 126 "include/trace/events/irq.h"
 (void (*cb)(void *__data, unsigned int vec_nr)) { }




 ;
# 140 "include/trace/events/irq.h"
extern struct tracepoint




 __tracepoint_softirq_raise
# 140 "include/trace/events/irq.h"
 ; static inline void




 trace_softirq_raise
# 140 "include/trace/events/irq.h"
 (unsigned int vec_nr) { if (static_branch(&




 __tracepoint_softirq_raise
# 140 "include/trace/events/irq.h"
 .key)) do { struct tracepoint_func *it_func_ptr; void *it_func; void *__data; if (!(1)) return; rcu_read_lock_sched_notrace(); it_func_ptr = ({ typeof(*((&__tracepoint_softirq_raise)->funcs)) *_________p1 = (typeof(*((&__tracepoint_softirq_raise)->funcs))* )(*(volatile typeof(((&__tracepoint_softirq_raise)->funcs)) *)&(((&__tracepoint_softirq_raise)->funcs))); do { static bool __warned; if (debug_lockdep_rcu_enabled() && !__warned && !(rcu_read_lock_sched_held() || (0))) { __warned = true; lockdep_rcu_dereference(




 "include/trace/events/irq.h"
# 140 "include/trace/events/irq.h"
 ,




 145
# 140 "include/trace/events/irq.h"
 ); } } while (0); ; do { } while (0); ((typeof(*((&__tracepoint_softirq_raise)->funcs)) *)(_________p1)); }); if (it_func_ptr) { do { it_func = (it_func_ptr)->func; __data = (it_func_ptr)->data; ((void(*)(void *__data, unsigned int vec_nr))(it_func))(__data, vec_nr); } while ((++it_func_ptr)->func); } rcu_read_unlock_sched_notrace(); } while (0); } static inline int




 register_trace_softirq_raise
# 140 "include/trace/events/irq.h"
 (void (*probe)(void *__data, unsigned int vec_nr), void *data) { return tracepoint_probe_register("softirq_raise", (void *)probe, data); } static inline int




 unregister_trace_softirq_raise
# 140 "include/trace/events/irq.h"
 (void (*probe)(void *__data, unsigned int vec_nr), void *data) { return tracepoint_probe_unregister("softirq_raise", (void *)probe, data); } static inline void




 check_trace_callback_type_softirq_raise
# 140 "include/trace/events/irq.h"
 (void (*cb)(void *__data, unsigned int vec_nr)) { }




 ;




# 1 "include/trace/define_trace.h" 1
# 150 "include/trace/events/irq.h" 2
# 24 "include/linux/interrupt.h" 2
# 85 "include/linux/interrupt.h"
enum {
 IRQC_IS_HARDIRQ = 0,
 IRQC_IS_NESTED,
};

typedef irqreturn_t (*irq_handler_t)(int, void *);
# 106 "include/linux/interrupt.h"
struct irqaction {
 irq_handler_t handler;
 unsigned long flags;
 void *dev_id;
 struct irqaction *next;
 int irq;
 irq_handler_t thread_fn;
 struct task_struct *thread;
 unsigned long thread_flags;
 unsigned long thread_mask;
 const char *name;
 struct proc_dir_entry *dir;
} __attribute__((__aligned__(1 << (12))));

extern irqreturn_t no_action(int cpl, void *dev_id);


extern int __attribute__((warn_unused_result))
request_threaded_irq(unsigned int irq, irq_handler_t handler,
       irq_handler_t thread_fn,
       unsigned long flags, const char *name, void *dev);

static inline int __attribute__((warn_unused_result))
request_irq(unsigned int irq, irq_handler_t handler, unsigned long flags,
     const char *name, void *dev)
{
 return request_threaded_irq(irq, handler, ((void *)0), flags, name, dev);
}

extern int __attribute__((warn_unused_result))
request_any_context_irq(unsigned int irq, irq_handler_t handler,
   unsigned long flags, const char *name, void *dev_id);

extern void exit_irq_thread(void);
# 170 "include/linux/interrupt.h"
extern void free_irq(unsigned int, void *);

struct device;

extern int __attribute__((warn_unused_result))
devm_request_threaded_irq(struct device *dev, unsigned int irq,
     irq_handler_t handler, irq_handler_t thread_fn,
     unsigned long irqflags, const char *devname,
     void *dev_id);

static inline int __attribute__((warn_unused_result))
devm_request_irq(struct device *dev, unsigned int irq, irq_handler_t handler,
   unsigned long irqflags, const char *devname, void *dev_id)
{
 return devm_request_threaded_irq(dev, irq, handler, ((void *)0), irqflags,
      devname, dev_id);
}

extern void devm_free_irq(struct device *dev, unsigned int irq, void *dev_id);
# 208 "include/linux/interrupt.h"
extern void disable_irq_nosync(unsigned int irq);
extern void disable_irq(unsigned int irq);
extern void enable_irq(unsigned int irq);



extern void suspend_device_irqs(void);
extern void resume_device_irqs(void);

extern int check_wakeup_irqs(void);
# 229 "include/linux/interrupt.h"
extern cpumask_var_t irq_default_affinity;

extern int irq_set_affinity(unsigned int irq, const struct cpumask *cpumask);
extern int irq_can_set_affinity(unsigned int irq);
extern int irq_select_affinity(unsigned int irq);

extern int irq_set_affinity_hint(unsigned int irq, const struct cpumask *m);
# 249 "include/linux/interrupt.h"
struct irq_affinity_notify {
 unsigned int irq;
 struct kref kref;
 struct work_struct work;
 void (*notify)(struct irq_affinity_notify *, const cpumask_t *mask);
 void (*release)(struct kref *ref);
};

extern int
irq_set_affinity_notifier(unsigned int irq, struct irq_affinity_notify *notify);

static inline void irq_run_affinity_notifiers(void)
{
 flush_scheduled_work();
}
# 298 "include/linux/interrupt.h"
static inline void disable_irq_nosync_lockdep(unsigned int irq)
{
 disable_irq_nosync(irq);

 do { arch_local_irq_disable(); trace_hardirqs_off(); } while (0);

}

static inline void disable_irq_nosync_lockdep_irqsave(unsigned int irq, unsigned long *flags)
{
 disable_irq_nosync(irq);

 do { do { ({ unsigned long __dummy; typeof(*flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); *flags = arch_local_irq_save(); } while (0); trace_hardirqs_off(); } while (0);

}

static inline void disable_irq_lockdep(unsigned int irq)
{
 disable_irq(irq);

 do { arch_local_irq_disable(); trace_hardirqs_off(); } while (0);

}

static inline void enable_irq_lockdep(unsigned int irq)
{

 do { trace_hardirqs_on(); arch_local_irq_enable(); } while (0);

 enable_irq(irq);
}

static inline void enable_irq_lockdep_irqrestore(unsigned int irq, unsigned long *flags)
{

 do { if (({ ({ unsigned long __dummy; typeof(*flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_irqs_disabled_flags(*flags); })) { do { ({ unsigned long __dummy; typeof(*flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(*flags); } while (0); trace_hardirqs_off(); } else { trace_hardirqs_on(); do { ({ unsigned long __dummy; typeof(*flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(*flags); } while (0); } } while (0);

 enable_irq(irq);
}


extern int irq_set_irq_wake(unsigned int irq, unsigned int on);

static inline int enable_irq_wake(unsigned int irq)
{
 return irq_set_irq_wake(irq, 1);
}

static inline int disable_irq_wake(unsigned int irq)
{
 return irq_set_irq_wake(irq, 0);
}
# 380 "include/linux/interrupt.h"
extern bool force_irqthreads;
# 406 "include/linux/interrupt.h"
enum
{
 HI_SOFTIRQ=0,
 TIMER_SOFTIRQ,
 NET_TX_SOFTIRQ,
 NET_RX_SOFTIRQ,
 BLOCK_SOFTIRQ,
 BLOCK_IOPOLL_SOFTIRQ,
 TASKLET_SOFTIRQ,
 SCHED_SOFTIRQ,
 HRTIMER_SOFTIRQ,
 RCU_SOFTIRQ,

 NR_SOFTIRQS
};




extern char *softirq_to_name[NR_SOFTIRQS];





struct softirq_action
{
 void (*action)(struct softirq_action *);
};

 void do_softirq(void);
 void __do_softirq(void);
extern void open_softirq(int nr, void (*action)(struct softirq_action *));
extern void softirq_init(void);
static inline void __raise_softirq_irqoff(unsigned int nr)
{
 trace_softirq_raise(nr);
 do { typedef typeof(irq_stat.__softirq_pending) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = ((1UL << nr)); (void)pto_tmp__; } switch (sizeof(irq_stat.__softirq_pending)) { case 1: asm("or" "b %1,""%%""gs"":" "%P" "0" : "+m" (irq_stat.__softirq_pending) : "qi" ((pto_T__)((1UL << nr)))); break; case 2: asm("or" "w %1,""%%""gs"":" "%P" "0" : "+m" (irq_stat.__softirq_pending) : "ri" ((pto_T__)((1UL << nr)))); break; case 4: asm("or" "l %1,""%%""gs"":" "%P" "0" : "+m" (irq_stat.__softirq_pending) : "ri" ((pto_T__)((1UL << nr)))); break; case 8: asm("or" "q %1,""%%""gs"":" "%P" "0" : "+m" (irq_stat.__softirq_pending) : "re" ((pto_T__)((1UL << nr)))); break; default: __bad_percpu_size(); } } while (0);
}

extern void raise_softirq_irqoff(unsigned int nr);
extern void raise_softirq(unsigned int nr);
# 456 "include/linux/interrupt.h"
extern __attribute__((section(".discard"), unused)) char __pcpu_scope_softirq_work_list; extern __attribute__((section(".data..percpu" ""))) __typeof__(struct list_head [NR_SOFTIRQS]) softirq_work_list;

extern __attribute__((section(".discard"), unused)) char __pcpu_scope_ksoftirqd; extern __attribute__((section(".data..percpu" ""))) __typeof__(struct task_struct *) ksoftirqd;

static inline struct task_struct *this_cpu_ksoftirqd(void)
{
 return ({ typeof((ksoftirqd)) pscr_ret__; do { const void *__vpp_verify = (typeof(&((ksoftirqd))))((void *)0); (void)__vpp_verify; } while (0); switch(sizeof((ksoftirqd))) { case 1: pscr_ret__ = ({ typeof(((ksoftirqd))) pfo_ret__; switch (sizeof(((ksoftirqd)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((ksoftirqd))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((ksoftirqd))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((ksoftirqd))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((ksoftirqd))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 2: pscr_ret__ = ({ typeof(((ksoftirqd))) pfo_ret__; switch (sizeof(((ksoftirqd)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((ksoftirqd))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((ksoftirqd))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((ksoftirqd))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((ksoftirqd))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 4: pscr_ret__ = ({ typeof(((ksoftirqd))) pfo_ret__; switch (sizeof(((ksoftirqd)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((ksoftirqd))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((ksoftirqd))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((ksoftirqd))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((ksoftirqd))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 8: pscr_ret__ = ({ typeof(((ksoftirqd))) pfo_ret__; switch (sizeof(((ksoftirqd)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((ksoftirqd))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((ksoftirqd))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((ksoftirqd))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((ksoftirqd))); break; default: __bad_percpu_size(); } pfo_ret__; });break; default: __bad_size_call_parameter();break; } pscr_ret__; });
}




extern void send_remote_softirq(struct call_single_data *cp, int cpu, int softirq);




extern void __send_remote_softirq(struct call_single_data *cp, int cpu,
      int this_cpu, int softirq);
# 496 "include/linux/interrupt.h"
struct tasklet_struct
{
 struct tasklet_struct *next;
 unsigned long state;
 atomic_t count;
 void (*func)(unsigned long);
 unsigned long data;
};
# 512 "include/linux/interrupt.h"
enum
{
 TASKLET_STATE_SCHED,
 TASKLET_STATE_RUN
};


static inline int tasklet_trylock(struct tasklet_struct *t)
{
 return !test_and_set_bit(TASKLET_STATE_RUN, &(t)->state);
}

static inline void tasklet_unlock(struct tasklet_struct *t)
{
 __asm__ __volatile__("": : :"memory");
 clear_bit(TASKLET_STATE_RUN, &(t)->state);
}

static inline void tasklet_unlock_wait(struct tasklet_struct *t)
{
 while ((__builtin_constant_p((TASKLET_STATE_RUN)) ? constant_test_bit((TASKLET_STATE_RUN), (&(t)->state)) : variable_test_bit((TASKLET_STATE_RUN), (&(t)->state)))) { __asm__ __volatile__("": : :"memory"); }
}






extern void __tasklet_schedule(struct tasklet_struct *t);

static inline void tasklet_schedule(struct tasklet_struct *t)
{
 if (!test_and_set_bit(TASKLET_STATE_SCHED, &t->state))
  __tasklet_schedule(t);
}

extern void __tasklet_hi_schedule(struct tasklet_struct *t);

static inline void tasklet_hi_schedule(struct tasklet_struct *t)
{
 if (!test_and_set_bit(TASKLET_STATE_SCHED, &t->state))
  __tasklet_hi_schedule(t);
}

extern void __tasklet_hi_schedule_first(struct tasklet_struct *t);







static inline void tasklet_hi_schedule_first(struct tasklet_struct *t)
{
 if (!test_and_set_bit(TASKLET_STATE_SCHED, &t->state))
  __tasklet_hi_schedule_first(t);
}


static inline void tasklet_disable_nosync(struct tasklet_struct *t)
{
 atomic_inc(&t->count);
 __asm__ __volatile__("": : :"memory");
}

static inline void tasklet_disable(struct tasklet_struct *t)
{
 tasklet_disable_nosync(t);
 tasklet_unlock_wait(t);
 asm volatile("mfence":::"memory");
}

static inline void tasklet_enable(struct tasklet_struct *t)
{
 __asm__ __volatile__("": : :"memory");
 atomic_dec(&t->count);
}

static inline void tasklet_hi_enable(struct tasklet_struct *t)
{
 __asm__ __volatile__("": : :"memory");
 atomic_dec(&t->count);
}

extern void tasklet_kill(struct tasklet_struct *t);
extern void tasklet_kill_immediate(struct tasklet_struct *t, unsigned int cpu);
extern void tasklet_init(struct tasklet_struct *t,
    void (*func)(unsigned long), unsigned long data);

struct tasklet_hrtimer {
 struct hrtimer timer;
 struct tasklet_struct tasklet;
 enum hrtimer_restart (*function)(struct hrtimer *);
};

extern void
tasklet_hrtimer_init(struct tasklet_hrtimer *ttimer,
       enum hrtimer_restart (*function)(struct hrtimer *),
       clockid_t which_clock, enum hrtimer_mode mode);

static inline
int tasklet_hrtimer_start(struct tasklet_hrtimer *ttimer, ktime_t time,
     const enum hrtimer_mode mode)
{
 return hrtimer_start(&ttimer->timer, time, mode);
}

static inline
void tasklet_hrtimer_cancel(struct tasklet_hrtimer *ttimer)
{
 hrtimer_cancel(&ttimer->timer);
 tasklet_kill(&ttimer->tasklet);
}
# 668 "include/linux/interrupt.h"
extern unsigned long probe_irq_on(void);
extern int probe_irq_off(unsigned long);
extern unsigned int probe_irq_mask(unsigned long);




extern void init_irq_proc(void);






struct seq_file;
int show_interrupts(struct seq_file *p, void *v);
int arch_show_interrupts(struct seq_file *p, int prec);

extern int early_irq_init(void);
extern int arch_probe_nr_irqs(void);
extern int arch_early_irq_init(void);
# 11 "drivers/xen/xen-pciback/pciback.h" 2
# 1 "include/xen/xenbus.h" 1
# 44 "include/xen/xenbus.h"
# 1 "include/xen/interface/grant_table.h" 1
# 93 "include/xen/interface/grant_table.h"
struct grant_entry {

    uint16_t flags;

    domid_t domid;




    uint32_t frame;
};
# 153 "include/xen/interface/grant_table.h"
typedef uint32_t grant_ref_t;




typedef uint32_t grant_handle_t;
# 178 "include/xen/interface/grant_table.h"
struct gnttab_map_grant_ref {

    uint64_t host_addr;
    uint32_t flags;
    grant_ref_t ref;
    domid_t dom;

    int16_t status;
    grant_handle_t handle;
    uint64_t dev_bus_addr;
};
typedef struct gnttab_map_grant_ref * __guest_handle_gnttab_map_grant_ref;
# 203 "include/xen/interface/grant_table.h"
struct gnttab_unmap_grant_ref {

    uint64_t host_addr;
    uint64_t dev_bus_addr;
    grant_handle_t handle;

    int16_t status;
};
typedef struct gnttab_unmap_grant_ref * __guest_handle_gnttab_unmap_grant_ref;
# 223 "include/xen/interface/grant_table.h"
struct gnttab_setup_table {

    domid_t dom;
    uint32_t nr_frames;

    int16_t status;
    __guest_handle_ulong frame_list;
};
typedef struct gnttab_setup_table * __guest_handle_gnttab_setup_table;






struct gnttab_dump_table {

    domid_t dom;

    int16_t status;
};
typedef struct gnttab_dump_table * __guest_handle_gnttab_dump_table;
# 255 "include/xen/interface/grant_table.h"
struct gnttab_transfer {

    unsigned long mfn;
    domid_t domid;
    grant_ref_t ref;

    int16_t status;
};
typedef struct gnttab_transfer * __guest_handle_gnttab_transfer;
# 289 "include/xen/interface/grant_table.h"
struct gnttab_copy {

 struct {
  union {
   grant_ref_t ref;
   unsigned long gmfn;
  } u;
  domid_t domid;
  uint16_t offset;
 } source, dest;
 uint16_t len;
 uint16_t flags;

 int16_t status;
};
typedef struct gnttab_copy * __guest_handle_gnttab_copy;
# 314 "include/xen/interface/grant_table.h"
struct gnttab_query_size {

    domid_t dom;

    uint32_t nr_frames;
    uint32_t max_nr_frames;
    int16_t status;
};
typedef struct gnttab_query_size * __guest_handle_gnttab_query_size;
# 45 "include/xen/xenbus.h" 2
# 1 "include/xen/interface/io/xenbus.h" 1
# 16 "include/xen/interface/io/xenbus.h"
enum xenbus_state
{
 XenbusStateUnknown = 0,
 XenbusStateInitialising = 1,
 XenbusStateInitWait = 2,



 XenbusStateInitialised = 3,

 XenbusStateConnected = 4,
 XenbusStateClosing = 5,


 XenbusStateClosed = 6,




 XenbusStateReconfiguring = 7,

 XenbusStateReconfigured = 8
};
# 46 "include/xen/xenbus.h" 2
# 1 "include/xen/interface/io/xs_wire.h" 1
# 10 "include/xen/interface/io/xs_wire.h"
enum xsd_sockmsg_type
{
    XS_DEBUG,
    XS_DIRECTORY,
    XS_READ,
    XS_GET_PERMS,
    XS_WATCH,
    XS_UNWATCH,
    XS_TRANSACTION_START,
    XS_TRANSACTION_END,
    XS_INTRODUCE,
    XS_RELEASE,
    XS_GET_DOMAIN_PATH,
    XS_WRITE,
    XS_MKDIR,
    XS_RM,
    XS_SET_PERMS,
    XS_WATCH_EVENT,
    XS_ERROR,
    XS_IS_DOMAIN_INTRODUCED
};






struct xsd_errors
{
    int errnum;
    const char *errstring;
};

static struct xsd_errors xsd_errors[] __attribute__((unused)) = {
    { 22, "EINVAL" },
    { 13, "EACCES" },
    { 17, "EEXIST" },
    { 21, "EISDIR" },
    { 2, "ENOENT" },
    { 12, "ENOMEM" },
    { 28, "ENOSPC" },
    { 5, "EIO" },
    { 39, "ENOTEMPTY" },
    { 38, "ENOSYS" },
    { 30, "EROFS" },
    { 16, "EBUSY" },
    { 11, "EAGAIN" },
    { 106, "EISCONN" }
};

struct xsd_sockmsg
{
    uint32_t type;
    uint32_t req_id;
    uint32_t tx_id;
    uint32_t len;


};

enum xs_watch_type
{
    XS_WATCH_PATH = 0,
    XS_WATCH_TOKEN
};



typedef uint32_t XENSTORE_RING_IDX;

struct xenstore_domain_interface {
    char req[1024];
    char rsp[1024];
    XENSTORE_RING_IDX req_cons, req_prod;
    XENSTORE_RING_IDX rsp_cons, rsp_prod;
};
# 47 "include/xen/xenbus.h" 2


struct xenbus_watch
{
 struct list_head list;


 const char *node;


 void (*callback)(struct xenbus_watch *,
    const char **vec, unsigned int len);
};



struct xenbus_device {
 const char *devicetype;
 const char *nodename;
 const char *otherend;
 int otherend_id;
 struct xenbus_watch otherend_watch;
 struct device dev;
 enum xenbus_state state;
 struct completion down;
};

static inline struct xenbus_device *to_xenbus_device(struct device *dev)
{
 return ({ const typeof( ((struct xenbus_device *)0)->dev ) *__mptr = (dev); (struct xenbus_device *)( (char *)__mptr - __builtin_offsetof(struct xenbus_device,dev) );});
}

struct xenbus_device_id
{

 char devicetype[32];
};


struct xenbus_driver {
 char *name;
 struct module *owner;
 const struct xenbus_device_id *ids;
 int (*probe)(struct xenbus_device *dev,
       const struct xenbus_device_id *id);
 void (*otherend_changed)(struct xenbus_device *dev,
     enum xenbus_state backend_state);
 int (*remove)(struct xenbus_device *dev);
 int (*suspend)(struct xenbus_device *dev);
 int (*resume)(struct xenbus_device *dev);
 int (*uevent)(struct xenbus_device *, struct kobj_uevent_env *);
 struct device_driver driver;
 int (*read_otherend_details)(struct xenbus_device *dev);
 int (*is_ready)(struct xenbus_device *dev);
};

static inline struct xenbus_driver *to_xenbus_driver(struct device_driver *drv)
{
 return ({ const typeof( ((struct xenbus_driver *)0)->driver ) *__mptr = (drv); (struct xenbus_driver *)( (char *)__mptr - __builtin_offsetof(struct xenbus_driver,driver) );});
}

int __attribute__((warn_unused_result)) __xenbus_register_frontend(struct xenbus_driver *drv,
         struct module *owner,
         const char *mod_name);

static inline int __attribute__((warn_unused_result))
xenbus_register_frontend(struct xenbus_driver *drv)
{
 ({ int __ret_warn_on = !!(drv->owner != ((struct module *)0)); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath_null("include/xen/xenbus.h", 115); __builtin_expect(!!(__ret_warn_on), 0); });
 return __xenbus_register_frontend(drv, ((struct module *)0), "xen_pciback");
}

int __attribute__((warn_unused_result)) __xenbus_register_backend(struct xenbus_driver *drv,
        struct module *owner,
        const char *mod_name);
static inline int __attribute__((warn_unused_result))
xenbus_register_backend(struct xenbus_driver *drv)
{
 ({ int __ret_warn_on = !!(drv->owner != ((struct module *)0)); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath_null("include/xen/xenbus.h", 125); __builtin_expect(!!(__ret_warn_on), 0); });
 return __xenbus_register_backend(drv, ((struct module *)0), "xen_pciback");
}

void xenbus_unregister_driver(struct xenbus_driver *drv);

struct xenbus_transaction
{
 u32 id;
};




char **xenbus_directory(struct xenbus_transaction t,
   const char *dir, const char *node, unsigned int *num);
void *xenbus_read(struct xenbus_transaction t,
    const char *dir, const char *node, unsigned int *len);
int xenbus_write(struct xenbus_transaction t,
   const char *dir, const char *node, const char *string);
int xenbus_mkdir(struct xenbus_transaction t,
   const char *dir, const char *node);
int xenbus_exists(struct xenbus_transaction t,
    const char *dir, const char *node);
int xenbus_rm(struct xenbus_transaction t, const char *dir, const char *node);
int xenbus_transaction_start(struct xenbus_transaction *t);
int xenbus_transaction_end(struct xenbus_transaction t, int abort);


int xenbus_scanf(struct xenbus_transaction t,
   const char *dir, const char *node, const char *fmt, ...)
 __attribute__((format(scanf, 4, 5)));


int xenbus_printf(struct xenbus_transaction t,
    const char *dir, const char *node, const char *fmt, ...)
 __attribute__((format(printf, 4, 5)));



int xenbus_gather(struct xenbus_transaction t, const char *dir, ...);


extern int xenstored_ready;
int register_xenstore_notifier(struct notifier_block *nb);
void unregister_xenstore_notifier(struct notifier_block *nb);

int register_xenbus_watch(struct xenbus_watch *watch);
void unregister_xenbus_watch(struct xenbus_watch *watch);
void xs_suspend(void);
void xs_resume(void);
void xs_suspend_cancel(void);


void *xenbus_dev_request_and_reply(struct xsd_sockmsg *msg);

struct work_struct;


void xenbus_suspend(void);
void xenbus_resume(void);
void xenbus_probe(struct work_struct *);
void xenbus_suspend_cancel(void);
# 199 "include/xen/xenbus.h"
int xenbus_watch_path(struct xenbus_device *dev, const char *path,
        struct xenbus_watch *watch,
        void (*callback)(struct xenbus_watch *,
           const char **, unsigned int));
int xenbus_watch_pathfmt(struct xenbus_device *dev, struct xenbus_watch *watch,
    void (*callback)(struct xenbus_watch *,
       const char **, unsigned int),
    const char *pathfmt, ...)
 __attribute__ ((format (printf, 4, 5)));

int xenbus_switch_state(struct xenbus_device *dev, enum xenbus_state new_state);
int xenbus_grant_ring(struct xenbus_device *dev, unsigned long ring_mfn);
int xenbus_map_ring_valloc(struct xenbus_device *dev,
      int gnt_ref, void **vaddr);
int xenbus_map_ring(struct xenbus_device *dev, int gnt_ref,
      grant_handle_t *handle, void *vaddr);

int xenbus_unmap_ring_vfree(struct xenbus_device *dev, void *vaddr);
int xenbus_unmap_ring(struct xenbus_device *dev,
        grant_handle_t handle, void *vaddr);

int xenbus_alloc_evtchn(struct xenbus_device *dev, int *port);
int xenbus_bind_evtchn(struct xenbus_device *dev, int remote_port, int *port);
int xenbus_free_evtchn(struct xenbus_device *dev, int port);

enum xenbus_state xenbus_read_driver_state(const char *path);

__attribute__((format(printf, 3, 4)))
void xenbus_dev_error(struct xenbus_device *dev, int err, const char *fmt, ...);
__attribute__((format(printf, 3, 4)))
void xenbus_dev_fatal(struct xenbus_device *dev, int err, const char *fmt, ...);

const char *xenbus_strstate(enum xenbus_state state);
int xenbus_dev_is_online(struct xenbus_device *dev);
int xenbus_frontend_closed(struct xenbus_device *dev);
# 12 "drivers/xen/xen-pciback/pciback.h" 2




# 1 "include/xen/interface/io/pciif.h" 1
# 65 "include/xen/interface/io/pciif.h"
struct xen_msix_entry {
 uint16_t vector;
 uint16_t entry;
};
struct xen_pci_op {

 uint32_t cmd;


 int32_t err;


 uint32_t domain;
 uint32_t bus;
 uint32_t devfn;


 int32_t offset;
 int32_t size;


 uint32_t value;

 uint32_t info;

 struct xen_msix_entry msix_entries[128];
};


struct xen_pcie_aer_op {

 uint32_t cmd;

 int32_t err;


 uint32_t domain;
 uint32_t bus;
 uint32_t devfn;
};
struct xen_pci_sharedinfo {

 uint32_t flags;
 struct xen_pci_op op;
 struct xen_pcie_aer_op aer_op;
};
# 17 "drivers/xen/xen-pciback/pciback.h" 2



struct pci_dev_entry {
 struct list_head list;
 struct pci_dev *dev;
};






struct xen_pcibk_device {
 void *pci_dev_data;
 struct mutex dev_lock;
 struct xenbus_device *xdev;
 struct xenbus_watch be_watch;
 u8 be_watching;
 int evtchn_irq;
 struct xen_pci_sharedinfo *sh_info;
 unsigned long flags;
 struct work_struct op_work;
};

struct xen_pcibk_dev_data {
 struct list_head config_fields;
 unsigned int permissive:1;
 unsigned int warned_on_write:1;
 unsigned int enable_intx:1;
 unsigned int isr_on:1;
 unsigned int ack_intr:1;
 unsigned long handled;
 unsigned int irq;
 char irq_name[0];
};


extern wait_queue_head_t xen_pcibk_aer_wait_queue;
extern struct workqueue_struct *xen_pcibk_wq;

extern struct list_head xen_pcibk_quirks;


struct pci_dev *pcistub_get_pci_dev_by_slot(struct xen_pcibk_device *pdev,
         int domain, int bus,
         int slot, int func);
struct pci_dev *pcistub_get_pci_dev(struct xen_pcibk_device *pdev,
        struct pci_dev *dev);
void pcistub_put_pci_dev(struct pci_dev *dev);


void xen_pcibk_reset_device(struct pci_dev *pdev);


int xen_pcibk_config_init(void);
int xen_pcibk_config_init_dev(struct pci_dev *dev);
void xen_pcibk_config_free_dyn_fields(struct pci_dev *dev);
void xen_pcibk_config_reset_dev(struct pci_dev *dev);
void xen_pcibk_config_free_dev(struct pci_dev *dev);
int xen_pcibk_config_read(struct pci_dev *dev, int offset, int size,
     u32 *ret_val);
int xen_pcibk_config_write(struct pci_dev *dev, int offset, int size,
      u32 value);


typedef int (*publish_pci_dev_cb) (struct xen_pcibk_device *pdev,
       unsigned int domain, unsigned int bus,
       unsigned int devfn, unsigned int devid);
typedef int (*publish_pci_root_cb) (struct xen_pcibk_device *pdev,
        unsigned int domain, unsigned int bus);





struct xen_pcibk_backend {
 const char *name;
 int (*init)(struct xen_pcibk_device *pdev);
 void (*free)(struct xen_pcibk_device *pdev);
 int (*find)(struct pci_dev *pcidev, struct xen_pcibk_device *pdev,
      unsigned int *domain, unsigned int *bus,
      unsigned int *devfn);
 int (*publish)(struct xen_pcibk_device *pdev, publish_pci_root_cb cb);
 void (*release)(struct xen_pcibk_device *pdev, struct pci_dev *dev);
 int (*add)(struct xen_pcibk_device *pdev, struct pci_dev *dev,
     int devid, publish_pci_dev_cb publish_cb);
 struct pci_dev *(*get)(struct xen_pcibk_device *pdev,
          unsigned int domain, unsigned int bus,
          unsigned int devfn);
};

extern const struct xen_pcibk_backend xen_pcibk_vpci_backend;
extern const struct xen_pcibk_backend xen_pcibk_passthrough_backend;
extern const struct xen_pcibk_backend *xen_pcibk_backend;

static inline int xen_pcibk_add_pci_dev(struct xen_pcibk_device *pdev,
     struct pci_dev *dev,
     int devid,
     publish_pci_dev_cb publish_cb)
{
 if (xen_pcibk_backend && xen_pcibk_backend->add)
  return xen_pcibk_backend->add(pdev, dev, devid, publish_cb);
 return -1;
}

static inline void xen_pcibk_release_pci_dev(struct xen_pcibk_device *pdev,
          struct pci_dev *dev)
{
 if (xen_pcibk_backend && xen_pcibk_backend->free)
  return xen_pcibk_backend->release(pdev, dev);
}

static inline struct pci_dev *
xen_pcibk_get_pci_dev(struct xen_pcibk_device *pdev, unsigned int domain,
        unsigned int bus, unsigned int devfn)
{
 if (xen_pcibk_backend && xen_pcibk_backend->get)
  return xen_pcibk_backend->get(pdev, domain, bus, devfn);
 return ((void *)0);
}







static inline int xen_pcibk_get_pcifront_dev(struct pci_dev *pcidev,
          struct xen_pcibk_device *pdev,
          unsigned int *domain,
          unsigned int *bus,
          unsigned int *devfn)
{
 if (xen_pcibk_backend && xen_pcibk_backend->find)
  return xen_pcibk_backend->find(pcidev, pdev, domain, bus,
            devfn);
 return -1;
}

static inline int xen_pcibk_init_devices(struct xen_pcibk_device *pdev)
{
 if (xen_pcibk_backend && xen_pcibk_backend->init)
  return xen_pcibk_backend->init(pdev);
 return -1;
}

static inline int xen_pcibk_publish_pci_roots(struct xen_pcibk_device *pdev,
           publish_pci_root_cb cb)
{
 if (xen_pcibk_backend && xen_pcibk_backend->publish)
  return xen_pcibk_backend->publish(pdev, cb);
 return -1;
}

static inline void xen_pcibk_release_devices(struct xen_pcibk_device *pdev)
{
 if (xen_pcibk_backend && xen_pcibk_backend->free)
  return xen_pcibk_backend->free(pdev);
}


irqreturn_t xen_pcibk_handle_event(int irq, void *dev_id);
void xen_pcibk_do_op(struct work_struct *data);

int xen_pcibk_xenbus_register(void);
void xen_pcibk_xenbus_unregister(void);

extern int verbose_request;

void xen_pcibk_test_and_schedule_op(struct xen_pcibk_device *pdev);



void xen_pcibk_irq_handler(struct pci_dev *dev, int reset);
# 13 "drivers/xen/xen-pciback/vpci.c" 2



struct vpci_dev_data {

 struct list_head dev_list[32];
 struct mutex lock;
};

static inline struct list_head *list_first(struct list_head *head)
{
 return head->next;
}

static struct pci_dev *__xen_pcibk_get_pci_dev(struct xen_pcibk_device *pdev,
            unsigned int domain,
            unsigned int bus,
            unsigned int devfn)
{
 struct pci_dev_entry *entry;
 struct pci_dev *dev = ((void *)0);
 struct vpci_dev_data *vpci_dev = pdev->pci_dev_data;

 if (domain != 0 || bus != 0)
  return ((void *)0);

 if ((((devfn) >> 3) & 0x1f) < 32) {
  mutex_lock_nested(&vpci_dev->lock, 0);

  for (entry = ({ const typeof( ((typeof(*entry) *)0)->list ) *__mptr = ((&vpci_dev->dev_list[(((devfn) >> 3) & 0x1f)])->next); (typeof(*entry) *)( (char *)__mptr - __builtin_offsetof(typeof(*entry),list) );}); &entry->list != (&vpci_dev->dev_list[(((devfn) >> 3) & 0x1f)]); entry = ({ const typeof( ((typeof(*entry) *)0)->list ) *__mptr = (entry->list.next); (typeof(*entry) *)( (char *)__mptr - __builtin_offsetof(typeof(*entry),list) );}))

              {
   if (((entry->dev->devfn) & 0x07) == ((devfn) & 0x07)) {
    dev = entry->dev;
    break;
   }
  }

  mutex_unlock(&vpci_dev->lock);
 }
 return dev;
}

static inline int match_slot(struct pci_dev *l, struct pci_dev *r)
{
 if (pci_domain_nr(l->bus) == pci_domain_nr(r->bus)
     && l->bus == r->bus && (((l->devfn) >> 3) & 0x1f) == (((r->devfn) >> 3) & 0x1f))
  return 1;

 return 0;
}

static int __xen_pcibk_add_pci_dev(struct xen_pcibk_device *pdev,
       struct pci_dev *dev, int devid,
       publish_pci_dev_cb publish_cb)
{
 int err = 0, slot, func = -1;
 struct pci_dev_entry *t, *dev_entry;
 struct vpci_dev_data *vpci_dev = pdev->pci_dev_data;

 if ((dev->class >> 24) == 0x06) {
  err = -14;
  xenbus_dev_fatal(pdev->xdev, err,
     "Can't export bridges on the virtual PCI bus");
  goto out;
 }

 dev_entry = kmalloc(sizeof(*dev_entry), ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
 if (!dev_entry) {
  err = -12;
  xenbus_dev_fatal(pdev->xdev, err,
     "Error adding entry to virtual PCI bus");
  goto out;
 }

 dev_entry->dev = dev;

 mutex_lock_nested(&vpci_dev->lock, 0);


 for (slot = 0; slot < 32; slot++) {
  if (!list_empty(&vpci_dev->dev_list[slot])) {
   t = ({ const typeof( ((struct pci_dev_entry *)0)->list ) *__mptr = (list_first(&vpci_dev->dev_list[slot])); (struct pci_dev_entry *)( (char *)__mptr - __builtin_offsetof(struct pci_dev_entry,list) );})
                                      ;

   if (match_slot(dev, t->dev)) {
    printk("<6>" "xen-pciback" ": vpci: %s: " "assign to virtual slot %d func %d\n", pci_name(dev), slot, ((dev->devfn) & 0x07))


                          ;
    list_add_tail(&dev_entry->list,
           &vpci_dev->dev_list[slot]);
    func = ((dev->devfn) & 0x07);
    goto unlock;
   }
  }
 }


 for (slot = 0; slot < 32; slot++) {
  if (list_empty(&vpci_dev->dev_list[slot])) {
   printk("<6>" "xen-pciback"
          ": vpci: %s: assign to virtual slot %d\n",
          pci_name(dev), slot);
   list_add_tail(&dev_entry->list,
          &vpci_dev->dev_list[slot]);
   func = ((dev->devfn) & 0x07);
   goto unlock;
  }
 }

 err = -12;
 xenbus_dev_fatal(pdev->xdev, err,
    "No more space on root virtual PCI bus");

unlock:
 mutex_unlock(&vpci_dev->lock);


 if (!err)
  err = publish_cb(pdev, 0, 0, ((((slot) & 0x1f) << 3) | ((func) & 0x07)), devid);

out:
 return err;
}

static void __xen_pcibk_release_pci_dev(struct xen_pcibk_device *pdev,
     struct pci_dev *dev)
{
 int slot;
 struct vpci_dev_data *vpci_dev = pdev->pci_dev_data;
 struct pci_dev *found_dev = ((void *)0);

 mutex_lock_nested(&vpci_dev->lock, 0);

 for (slot = 0; slot < 32; slot++) {
  struct pci_dev_entry *e;

  for (e = ({ const typeof( ((typeof(*e) *)0)->list ) *__mptr = ((&vpci_dev->dev_list[slot])->next); (typeof(*e) *)( (char *)__mptr - __builtin_offsetof(typeof(*e),list) );}); &e->list != (&vpci_dev->dev_list[slot]); e = ({ const typeof( ((typeof(*e) *)0)->list ) *__mptr = (e->list.next); (typeof(*e) *)( (char *)__mptr - __builtin_offsetof(typeof(*e),list) );})) {
   if (e->dev == dev) {
    list_del(&e->list);
    found_dev = e->dev;
    kfree(e);
    goto out;
   }
  }
 }

out:
 mutex_unlock(&vpci_dev->lock);

 if (found_dev)
  pcistub_put_pci_dev(found_dev);
}

static int __xen_pcibk_init_devices(struct xen_pcibk_device *pdev)
{
 int slot;
 struct vpci_dev_data *vpci_dev;

 vpci_dev = kmalloc(sizeof(*vpci_dev), ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
 if (!vpci_dev)
  return -12;

 do { static struct lock_class_key __key; __mutex_init((&vpci_dev->lock), "&vpci_dev->lock", &__key); } while (0);

 for (slot = 0; slot < 32; slot++)
  INIT_LIST_HEAD(&vpci_dev->dev_list[slot]);

 pdev->pci_dev_data = vpci_dev;

 return 0;
}

static int __xen_pcibk_publish_pci_roots(struct xen_pcibk_device *pdev,
      publish_pci_root_cb publish_cb)
{

 return publish_cb(pdev, 0, 0);
}

static void __xen_pcibk_release_devices(struct xen_pcibk_device *pdev)
{
 int slot;
 struct vpci_dev_data *vpci_dev = pdev->pci_dev_data;

 for (slot = 0; slot < 32; slot++) {
  struct pci_dev_entry *e, *tmp;
  for (e = ({ const typeof( ((typeof(*e) *)0)->list ) *__mptr = ((&vpci_dev->dev_list[slot])->next); (typeof(*e) *)( (char *)__mptr - __builtin_offsetof(typeof(*e),list) );}), tmp = ({ const typeof( ((typeof(*e) *)0)->list ) *__mptr = (e->list.next); (typeof(*e) *)( (char *)__mptr - __builtin_offsetof(typeof(*e),list) );}); &e->list != (&vpci_dev->dev_list[slot]); e = tmp, tmp = ({ const typeof( ((typeof(*tmp) *)0)->list ) *__mptr = (tmp->list.next); (typeof(*tmp) *)( (char *)__mptr - __builtin_offsetof(typeof(*tmp),list) );}))
            {
   list_del(&e->list);
   pcistub_put_pci_dev(e->dev);
   kfree(e);
  }
 }

 kfree(vpci_dev);
 pdev->pci_dev_data = ((void *)0);
}

static int __xen_pcibk_get_pcifront_dev(struct pci_dev *pcidev,
     struct xen_pcibk_device *pdev,
     unsigned int *domain, unsigned int *bus,
     unsigned int *devfn)
{
 struct pci_dev_entry *entry;
 struct pci_dev *dev = ((void *)0);
 struct vpci_dev_data *vpci_dev = pdev->pci_dev_data;
 int found = 0, slot;

 mutex_lock_nested(&vpci_dev->lock, 0);
 for (slot = 0; slot < 32; slot++) {
  for (entry = ({ const typeof( ((typeof(*entry) *)0)->list ) *__mptr = ((&vpci_dev->dev_list[slot])->next); (typeof(*entry) *)( (char *)__mptr - __builtin_offsetof(typeof(*entry),list) );}); &entry->list != (&vpci_dev->dev_list[slot]); entry = ({ const typeof( ((typeof(*entry) *)0)->list ) *__mptr = (entry->list.next); (typeof(*entry) *)( (char *)__mptr - __builtin_offsetof(typeof(*entry),list) );}))

             {
   dev = entry->dev;
   if (dev && dev->bus->number == pcidev->bus->number
    && pci_domain_nr(dev->bus) ==
     pci_domain_nr(pcidev->bus)
    && dev->devfn == pcidev->devfn) {
    found = 1;
    *domain = 0;
    *bus = 0;
    *devfn = ((((slot) & 0x1f) << 3) | ((((pcidev->devfn) & 0x07)) & 0x07))
                              ;
   }
  }
 }
 mutex_lock_nested(&vpci_dev->lock, 0);
 return found;
}

const struct xen_pcibk_backend xen_pcibk_vpci_backend = {
 .name = "vpci",
 .init = __xen_pcibk_init_devices,
 .free = __xen_pcibk_release_devices,
 .find = __xen_pcibk_get_pcifront_dev,
 .publish = __xen_pcibk_publish_pci_roots,
 .release = __xen_pcibk_release_pci_dev,
 .add = __xen_pcibk_add_pci_dev,
 .get = __xen_pcibk_get_pci_dev,
};
