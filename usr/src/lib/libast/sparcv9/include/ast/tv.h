/***********************************************************************
*                                                                      *
*               This software is part of the ast package               *
*          Copyright (c) 1985-2009 AT&T Intellectual Property          *
*                      and is licensed under the                       *
*                  Common Public License, Version 1.0                  *
*                    by AT&T Intellectual Property                     *
*                                                                      *
*                A copy of the License is available at                 *
*            http://www.opensource.org/licenses/cpl1.0.txt             *
*         (with md5 checksum 059e8cd6165cb4c31e351f2b69388fd9)         *
*                                                                      *
*              Information and Software Systems Research               *
*                            AT&T Research                             *
*                           Florham Park NJ                            *
*                                                                      *
*                 Glenn Fowler <gsf@research.att.com>                  *
*                  David Korn <dgk@research.att.com>                   *
*                   Phong Vo <kpv@research.att.com>                    *
*                                                                      *
***********************************************************************/

/* : : generated by proto : : */
/* : : generated from /home/gisburn/ksh93/ast_ksh_20091014/build_sparc_64bit/src/lib/libast/features/tv by iffe version 2009-10-06 : : */
                  
#ifndef _TV_H
#if !defined(__PROTO__)
#  if defined(__STDC__) || defined(__cplusplus) || defined(_proto) || defined(c_plusplus)
#    if defined(__cplusplus)
#      define __LINKAGE__	"C"
#    else
#      define __LINKAGE__
#    endif
#    define __STDARG__
#    define __PROTO__(x)	x
#    define __OTORP__(x)
#    define __PARAM__(n,o)	n
#    if !defined(__STDC__) && !defined(__cplusplus)
#      if !defined(c_plusplus)
#      	define const
#      endif
#      define signed
#      define void		int
#      define volatile
#      define __V_		char
#    else
#      define __V_		void
#    endif
#  else
#    define __PROTO__(x)	()
#    define __OTORP__(x)	x
#    define __PARAM__(n,o)	o
#    define __LINKAGE__
#    define __V_		char
#    define const
#    define signed
#    define void		int
#    define volatile
#  endif
#  define __MANGLE__	__LINKAGE__
#  if defined(__cplusplus) || defined(c_plusplus)
#    define __VARARG__	...
#  else
#    define __VARARG__
#  endif
#  if defined(__STDARG__)
#    define __VA_START__(p,a)	va_start(p,a)
#  else
#    define __VA_START__(p,a)	va_start(p)
#  endif
#  if !defined(__INLINE__)
#    if defined(__cplusplus)
#      define __INLINE__	extern __MANGLE__ inline
#    else
#      if defined(_WIN32) && !defined(__GNUC__)
#      	define __INLINE__	__inline
#      endif
#    endif
#  endif
#endif
#if !defined(__LINKAGE__)
#define __LINKAGE__		/* 2004-08-11 transition */
#endif

#define _TV_H	1
/*
 * AT&T Research
 *
 * high resolution Tv_t interface definitions
 */

#include <ast.h>

#define TV_NSEC_IGNORE		(1000000000L)
#define TV_TOUCH_RETAIN		((Tv_t*)1)

typedef struct Tv_s
{
	uint32_t	tv_sec;
	uint32_t	tv_nsec;
} Tv_t;

#define ST_ATIME_NSEC_GET(st)	((st)->st_atim.tv_nsec)
#define ST_CTIME_NSEC_GET(st)	((st)->st_ctim.tv_nsec)
#define ST_MTIME_NSEC_GET(st)	((st)->st_mtim.tv_nsec)

#define ST_ATIME_NSEC_SET(st,n)	(ST_ATIME_NSEC_GET(st)=(n))
#define ST_CTIME_NSEC_SET(st,n)	(ST_CTIME_NSEC_GET(st)=(n))
#define ST_MTIME_NSEC_SET(st,n)	(ST_MTIME_NSEC_GET(st)=(n))

#define tvgetatime(t,s)	((t)->tv_nsec=ST_ATIME_NSEC_GET(s),(t)->tv_sec=(s)->st_atime)
#define tvgetmtime(t,s)	((t)->tv_nsec=ST_MTIME_NSEC_GET(s),(t)->tv_sec=(s)->st_mtime)
#define tvgetctime(t,s)	((t)->tv_nsec=ST_CTIME_NSEC_GET(s),(t)->tv_sec=(s)->st_ctime)

#define tvsetatime(t,s)	(ST_ATIME_NSEC_SET(s,(t)->tv_nsec),(s)->st_atime=(t)->tv_sec)
#define tvsetmtime(t,s)	(ST_MTIME_NSEC_SET(s,(t)->tv_nsec),(s)->st_mtime=(t)->tv_sec)
#define tvsetctime(t,s)	(ST_CTIME_NSEC_SET(s,(t)->tv_nsec),(s)->st_ctime=(t)->tv_sec)

#if _BLD_ast && defined(__EXPORT__)
#undef __MANGLE__
#define __MANGLE__ __LINKAGE__		__EXPORT__
#endif

extern __MANGLE__ int		tvgettime __PROTO__((Tv_t*));
extern __MANGLE__ int		tvsettime __PROTO__((const Tv_t*));
extern __MANGLE__ int		tvcmp __PROTO__((const Tv_t*, const Tv_t*));
extern __MANGLE__ int		tvtouch __PROTO__((const char*, const Tv_t*, const Tv_t*, const Tv_t*, int));
extern __MANGLE__ int		tvsleep __PROTO__((const Tv_t*, Tv_t*));

extern __MANGLE__ char*		fmttv __PROTO__((const char*, Tv_t*));

#endif
