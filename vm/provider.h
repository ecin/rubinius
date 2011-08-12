/*
 * Generated by dtrace(1M).
 */

#ifndef	_PROVIDER_H
#define	_PROVIDER_H

#include <unistd.h>

#ifdef	__cplusplus
extern "C" {
#endif

#define RUBINIUS_STABILITY "___dtrace_stability$rubinius$v1$1_1_0_1_1_0_1_1_0_1_1_0_1_1_0"

#define RUBINIUS_TYPEDEFS "___dtrace_typedefs$rubinius$v2"

#define	RUBINIUS_GC_END() \
do { \
	__asm__ volatile(".reference " RUBINIUS_TYPEDEFS); \
	__dtrace_probe$rubinius$gc_end$v1(); \
	__asm__ volatile(".reference " RUBINIUS_STABILITY); \
} while (0)
#define	RUBINIUS_GC_END_ENABLED() \
	__dtrace_isenabled$rubinius$gc_end$v1()
#define	RUBINIUS_GC_START() \
do { \
	__asm__ volatile(".reference " RUBINIUS_TYPEDEFS); \
	__dtrace_probe$rubinius$gc_start$v1(); \
	__asm__ volatile(".reference " RUBINIUS_STABILITY); \
} while (0)
#define	RUBINIUS_GC_START_ENABLED() \
	__dtrace_isenabled$rubinius$gc_start$v1()


extern void __dtrace_probe$rubinius$gc_end$v1(void);
extern int __dtrace_isenabled$rubinius$gc_end$v1(void);
extern void __dtrace_probe$rubinius$gc_start$v1(void);
extern int __dtrace_isenabled$rubinius$gc_start$v1(void);

#ifdef	__cplusplus
}
#endif

#endif	/* _PROVIDER_H */