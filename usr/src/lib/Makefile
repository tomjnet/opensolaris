#
# CDDL HEADER START
#
# The contents of this file are subject to the terms of the
# Common Development and Distribution License (the "License").
# You may not use this file except in compliance with the License.
#
# You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
# or http://www.opensolaris.org/os/licensing.
# See the License for the specific language governing permissions
# and limitations under the License.
#
# When distributing Covered Code, include this CDDL HEADER in each
# file and include the License file at usr/src/OPENSOLARIS.LICENSE.
# If applicable, add the following below this CDDL HEADER, with the
# fields enclosed by brackets "[]" replaced with your own identifying
# information: Portions Copyright [yyyy] [name of copyright owner]
#
# CDDL HEADER END
#
#
# Copyright 2009 Sun Microsystems, Inc.  All rights reserved.
# Use is subject to license terms.
#

include ../Makefile.master

#	Note that libcurses installs commands along with its library.
#	This is a minor bug which probably should be fixed.
#	Note also that a few extra libraries are kept in cmd source.
#
# Certain libraries are linked with, hence depend on, other libraries.
#
# Although we have historically used .WAIT to express dependencies, it
# reduces the amount of parallelism and thus lengthens the time it
# takes to build the libraries.  Thus, we now require that any new
# libraries explicitly call out their dependencies.  Eventually, all
# the library dependencies will be called out explicitly.  See
# "Library interdependencies" near the end of this file.
#
# Aside from explicit dependencies (and legacy .WAITs), all libraries
# are built in parallel.
#
.PARALLEL:

#
# The $(CLOSED_BUILD) additions to SUBDIRS & MSGSUBDIRS are unfortunate,
# but required due to the "dependencies" of using .WAIT to barrier the
# parallel dmake builds.  once 4631488 has been fixed, they can be
# consolidated into one $(CLOSED_BUILD)SUBDIRS += (all closed libs) as
# shown in HDRSUBDIRS
#
SUBDIRS= \
	common			.WAIT	\
	../cmd/sgs/libconv		\
	../cmd/sgs/libdl	.WAIT

$(CLOSED_BUILD)SUBDIRS += \
	$(CLOSED)/lib/libc_i18n

SUBDIRS += \
	libc			.WAIT	\
	../cmd/sgs/libelf	.WAIT	\
	c_synonyms			\
	libmd				\
	libmd5				\
	librsm				\
	libmp			.WAIT	\
	libnsl			\
	libsecdb		.WAIT	\
	librpcsvc			\
	libsocket		.WAIT	\
	libsctp			\
	libsip			\
	libcommputil		\
	libresolv			\
	libresolv2		.WAIT	\
	libw			.WAIT	\
	libintl			.WAIT	\
	../cmd/sgs/librtld_db	\
	libaio			\
	libast			\
	libdll			\
	libcmd			\
	libshell		\
	libsum			\
	librt			\
	libadm			\
	libctf			\
	libdtrace		\
	libdtrace_jni		\
	libcurses		\
	libgen			\
	libgss			\
	libpam			\
	libuuid			\
	libthread		\
	libpthread	.WAIT	\
	libslp		\
	libbsdmalloc	\
	libdoor		\
	libdevinfo	\
	libdladm	\
	libdlpi		\
	libeti		\
	libcrypt	\
	libdns_sd	\
	libefi		\
	libfstyp	\
	libwanboot	\
	libwanbootutil	\
	libcryptoutil	\
	libinetcfg	\
	libinetutil	\
	libipmp		\
	libiscsit	\
	libiscsitgt	\
	libkmf		\
	libkstat	\
	libkvm		\
	liblm		\
	libmalloc	\
	libmapmalloc	\
	libmtmalloc	\
	libnls		\
	libnwam		\
	libsmbios	\
	libtecla	\
	libumem		\
	libnvpair	.WAIT	\
	libexacct	\
	libplot		\
	libldap4	\
	libsasl		\
	libldap5	\
	libsldap	.WAIT	\
	libbsm		\
	libsys		\
	libsysevent	\
	libnisdb	\
	libpool		\
	libpp		\
	libproc		\
	libproject	\
	libsendfile	\
	nametoaddr	\
	ncad_addr	\
	hbaapi		\
	smhba		\
	sun_fc		\
	sun_sas		\
	gss_mechs/mech_krb5	.WAIT	\
	libkrb5	.WAIT	\
	krb5	.WAIT	\
	libsmbfs	\
	libfcoe		\
	libstmf		\
	libstmfproxy	\
	libnsctl	\
	libunistat	\
	libdscfg	\
	librdc		\
	libinstzones	\
	libpkg

SUBDIRS += \
	passwdutil	\
	pam_modules	\
	crypt_modules	\
	libadt_jni	\
	abi		\
	auditd_plugins	\
	libvolmgt	\
	libdevice	\
	libdevid	\
	libdhcpsvc	\
	libc_db		\
	libndmp		\
	libsec		\
	libtnfprobe	\
	libtnf		\
	libtnfctl	\
	libdhcpagent	\
	libdhcpdu	\
	libdhcputil	\
	libxnet		\
	libipsecutil
$(CLOSED_BUILD)SUBDIRS += \
	$(CLOSED)/lib/libike
SUBDIRS += \
	nsswitch	\
	print		\
	libuutil	\
	libscf		\
	libinetsvc	\
	librestart	\
	libsched	\
	libelfsign	\
	pkcs11		.WAIT	\
	libpctx		.WAIT	\
	libcpc		\
	watchmalloc	\
	extendedFILE	\
	madv		\
	mpss		\
	libdisasm	\
	libwrap		\
	libxcurses	\
	libxcurses2	\
	libbrand	.WAIT   \
	libzonecfg	\
	libzoneinfo	\
	libtsnet	\
	libtsol		\
	gss_mechs/mech_spnego	\
	gss_mechs/mech_dummy	\
	gss_mechs/mech_dh	\
	rpcsec_gss	\
	libraidcfg	.WAIT	\
	librcm		.WAIT	\
	libcfgadm	.WAIT	\
	libpicl		.WAIT	\
	libpicltree	.WAIT \
	raidcfg_plugins	\
	cfgadm_plugins	\
	libmail		\
	lvm		\
	libsmedia	\
	libipp		\
	libdiskmgt	\
	liblgrp		\
	libfsmgt	\
	fm		\
	libavl		\
	libcmdutils	\
	libcontract	\
	../cmd/sendmail/libmilter	\
	sasl_plugins	\
	udapl		\
	libzpool	\
	libzfs		\
	libzfs_jni	\
	pyzfs		\
	libmapid	\
	brand		\
	policykit	\
	hal		\
	libshare	\
	libsqlite	\
	libidmap	\
	libadutils	\
	libdserv	\
	libnfs		\
	libipmi		\
	libexacct/demo	\
	libvrrpadm	\
	libvscan	\
	libgrubmgmt	\
	smbsrv		\
	libilb		\
	scsi		\
	mms		\
	libima		\
	libsun_ima	\
	mpapi		\
	librstp		\
	libreparse	\
	libhotplug	\
	libfruutils	.WAIT	\
	libfru		\
	$($(MACH)_SUBDIRS)

i386_SUBDIRS=		\
	libntfs		\
	libparted	\
	libfdisk

sparc_SUBDIRS= .WAIT	\
	efcode		\
	libc_psr	.WAIT	\
	libds		\
	libdscp		\
	libprtdiag	.WAIT	\
	libprtdiag_psr	\
	libpri		\
	librsc		\
	storage		\
	libpcp		\
	libtsalarm

FM_sparc_DEPLIBS= libpri

fm:			\
	libexacct	\
	libipmi		\
	libzfs		\
	scsi		\
	$(FM_$(MACH)_DEPLIBS)

#
# Create a special version of $(SUBDIRS) with no .WAIT's, for use with the
# clean and clobber targets (for more information, see those targets, below).
#
NOWAIT_SUBDIRS= $(SUBDIRS:.WAIT=)

DCSUBDIRS =		\
	lvm

MSGSUBDIRS=		\
	abi		\
	auditd_plugins	\
	brand		\
	cfgadm_plugins	\
	gss_mechs/mech_dh	\
	gss_mechs/mech_krb5	\
	krb5		\
	libast		\
	libbsm		\
	libc		\
	libcfgadm	\
	libcmd		\
	libcontract	\
	libcurses	\
	libdhcpsvc 	\
	libdhcputil	\
	libipsecutil	\
	libdiskmgt	\
	libdladm	\
	libdll		\
	libgrubmgmt	\
	libgss		\
	libidmap	\
	libinetcfg	\
	libipmp		\
	libilb		\
	libinetutil	\
	libinstzones	\
	libnsl		\
	libpam		\
	libpicl		\
	libpool		\
	libpkg		\
	libpp		\
	libscf		\
	libsasl		\
	libldap5	\
	libsecdb	\
	libshare	\
	libshell	\
	libsldap	\
	libslp		\
	libsmbfs	\
	libsmedia	\
	libsum		\
	libtsol		\
	libuutil	\
	libvrrpadm	\
	libvscan	\
	libwanboot	\
	libwanbootutil	\
	libzfs		\
	libzonecfg	\
	lvm		\
	madv		\
	mms		\
	mpss		\
	pam_modules	\
	pyzfs		\
	rpcsec_gss	\
	libreparse
MSGSUBDIRS += \
	$($(MACH)_MSGSUBDIRS)

sparc_MSGSUBDIRS=	\
	libprtdiag	\
	libprtdiag_psr

i386_MSGSUBDIRS= libfdisk

HDRSUBDIRS=		\
	auditd_plugins	\
	libast		\
	libbrand	\
	libbsm		\
	libc		\
	libcmd		\
	libcmdutils	\
	libcontract	\
	libcpc		\
	libctf		\
	libcurses	\
	libcryptoutil	\
	libdevice	\
	libdevid	\
	libdevinfo	\
	libdiskmgt	\
	libdladm	\
	libdll		\
	libdlpi		\
	libdhcpagent	\
	libdhcpsvc	\
	libdhcputil	\
	libdisasm	\
	libdns_sd	\
	libdscfg	\
	libdtrace	\
	libdtrace_jni	\
	libelfsign	\
	libeti		\
	libfru		\
	libfstyp	\
	libgen		\
	libwanboot	\
	libwanbootutil	\
	libipsecutil	\
	libinetcfg	\
	libinetsvc	\
	libinetutil	\
	libinstzones	\
	libipmi		\
	libipmp		\
	libipp		\
	libiscsit	\
	libiscsitgt	\
	libkstat	\
	libkvm		\
	libmail		\
	libmd		\
	libmtmalloc	\
	libndmp		\
	libnvpair	\
	libnsctl	\
	libnsl		\
	libnwam		\
	libpam		\
	libpctx		\
	libpicl		\
	libpicltree	\
	libplot		\
	libpool		\
	libpp		\
	libproc		\
	libraidcfg	\
	librcm		\
	librdc		\
	libscf		\
	libsip		\
	libcommputil	\
	libsmbios	\
	librestart	\
	librpcsvc	\
	librsm		\
	librstp		\
	libsasl		\
	libsec		\
	libshell	\
	libslp		\
	libsmedia	\
	libsqlite	\
	libfcoe		\
	libstmf		\
	libstmfproxy	\
	libsum		\
	libsysevent	\
	libtecla	\
	libtnf		\
	libtnfctl	\
	libtnfprobe	\
	libtsnet	\
	libtsol		\
	libvrrpadm	\
	libvolmgt	\
	libumem		\
	libunistat	\
	libuutil	\
	libwrap		\
	libxcurses2	\
	libzfs		\
	libzfs_jni	\
	libzoneinfo	\
	hal		\
	policykit	\
	lvm		\
	pkcs11		\
	passwdutil	\
	../cmd/sendmail/libmilter	\
	fm		\
	udapl		\
	libmapid	\
	libkrb5		\
	libsmbfs	\
	libshare	\
	libidmap	\
	libvscan	\
	libgrubmgmt	\
	smbsrv		\
	libilb		\
	libdserv	\
	libnfs		\
	scsi		\
	hbaapi		\
	smhba		\
	libima		\
	libsun_ima	\
	mpapi		\
	mms		\
	libreparse	\
	$($(MACH)_HDRSUBDIRS)

$(CLOSED_BUILD)HDRSUBDIRS += \
	$(CLOSED)/lib/libc_i18n	\
	$(CLOSED)/lib/libike

i386_HDRSUBDIRS=	\
	libparted	\
	libfdisk

sparc_HDRSUBDIRS=	\
	libds		\
	libdscp		\
	libpri		\
	storage

all :=		TARGET= all
check :=	TARGET= check
clean :=	TARGET= clean
clobber :=	TARGET= clobber
install :=	TARGET= install
install_h :=	TARGET= install_h
lint :=		TARGET= lint
_dc :=		TARGET= _dc
_msg :=		TARGET= _msg

.KEEP_STATE:

#
# For the all and install targets, we clearly must respect library
# dependencies so that the libraries link correctly.  However, for
# the remaining targets (check, clean, clobber, install_h, lint, _dc
# and _msg), libraries do not have any dependencies on one another
# and thus respecting dependencies just slows down the build.
# As such, for these rules, we use pattern replacement to explicitly
# avoid triggering the dependency information.  Note that for clean,
# clobber and lint, we must use $(NOWAIT_SUBDIRS) rather than
# $(SUBDIRS), to prevent `.WAIT' from expanding to `.WAIT-nodepend'.
#

all:			$(SUBDIRS)

install:		$(SUBDIRS) .WAIT install_extra

# extra libraries kept in other source areas
install_extra:
	@cd ../cmd/sgs; pwd; $(MAKE) install_lib
	@pwd

clean clobber lint:	$(NOWAIT_SUBDIRS:%=%-nodepend)

install_h check:	$(HDRSUBDIRS:%=%-nodepend)

_msg:			$(MSGSUBDIRS:%=%-nodepend) .WAIT _dc

_dc:			$(DCSUBDIRS:%=%-nodepend)

#
# Library interdependencies are called out explicitly here
#
auditd_plugins: libbsm libnsl libsecdb
gss_mechs/mech_krb5:	libgss libnsl libsocket libresolv pkcs11
libadt_jni:	libbsm
$(CLOSED_BUILD)libc:		$(CLOSED)/lib/libc_i18n
libast: 	libsocket
libadutils: 	libldap5 libresolv libsocket libnsl
nsswitch:	libadutils libidmap
libbsm:		libtsol
libcmd: 	libsum libast libsocket libnsl
libcmdutils:	libavl
libcontract:	libnvpair
libdevid:	libdevinfo
libdevinfo:	libnvpair libsec
libdhcpagent:	libsocket libdhcputil libuuid libdlpi libcontract
libdhcpsvc:	libinetutil
libdhcputil:	libnsl libgen libinetutil libdlpi
libdladm:	libdevinfo libinetutil libsocket libscf librcm libnvpair \
		libexacct libnsl libkstat libcurses
libdll: 	libast
libdlpi:	libinetutil libdladm
libdscfg:	libnsctl libunistat libsocket libnsl
libdtrace:	libproc libgen libctf
libdtrace_jni:	libuutil libdtrace
libefi:		libuuid
libfstyp:	libnvpair
libelfsign:	libcryptoutil libkmf
libidmap:	libadutils libldap5 libavl libsldap
libinetcfg:	libnsl libsocket libdlpi
libiscsit:	libc libnvpair libstmf libuuid libnsl
libkmf:		libcryptoutil pkcs11
libnsl:		libmd5 libscf
libmapid:	libresolv
libnwam:	libdoor
librdc:		libsocket libnsl libnsctl libunistat libdscfg
libuuid:	libdlpi
$(CLOSED_BUILD)libike:	libipsecutil libxnet libcryptoutil
libinetutil:	libsocket
libipsecutil:	libtecla libsocket
libinstzones:	libzonecfg libcontract
libpkg:		libwanboot libscf libadm
libsecdb:	libnsl
libsasl:	libgss libsocket pkcs11 libmd
sasl_plugins:	pkcs11 libgss libsocket libsasl
libsctp:	libsocket
libshell:	libast libcmd libdll libsocket libsecdb
libsip:		libmd5
libsmbfs:	libsocket libnsl libkrb5
libsocket:	libnsl
libstmfproxy: 	libstmf libsocket libnsl libpthread
libsum: 	libast
libldap5:	libsasl libsocket libnsl libmd
libsldap:	libldap5 libtsol libnsl libc libscf libresolv
libpool:	libnvpair libexacct
libpp:		libast
libzonecfg:	libc libsocket libnsl libuuid libnvpair libsysevent libsec \
		libbrand libpool libscf
libproc:	../cmd/sgs/librtld_db ../cmd/sgs/libelf libctf
libproject:	libpool libproc libsecdb
libtsnet:	libnsl libtsol libsecdb
libwrap:	libnsl libsocket
libwanboot:	libnvpair libresolv libnsl libsocket libdevinfo libinetutil \
		libdhcputil
libwanbootutil:	libnsl
pam_modules:	libproject passwdutil smbsrv
libscf:		libuutil libmd libgen libsmbios
libinetsvc:	libscf
librestart:	libuutil libscf
../cmd/sgs/libdl:	../cmd/sgs/libconv
../cmd/sgs/libelf:	../cmd/sgs/libconv
pkcs11:		libcryptoutil
print:		libldap5
udapl/udapl_tavor:	udapl/libdat
libzfs:		libdevid libgen libnvpair libuutil libiscsitgt \
		libadm libavl libefi libidmap
libzfs_jni:	libdiskmgt libnvpair libzfs
libzpool:	libavl libumem libnvpair
libsec:		libavl libidmap
libdserv:	libc libumem libuutil libscf
libnfs:		libc libumem libuutil libscf libzfs
brand:		libc libsocket
libshare:	libscf libzfs libuuid libfsmgt libsecdb libumem libsmbfs
libexacct/demo:	libexacct libproject libsocket libnsl
libtsalarm:	libpcp
smbsrv:		libsocket libnsl libmd libxnet libpthread librt \
		libshare libidmap pkcs11 libsqlite
libvrrpadm:	libsocket libdladm
libvscan:	libscf
scsi:		libnvpair
mpapi:		libpthread libdevinfo libsysevent libnvpair
libgrubmgmt:	libdevinfo libzfs libfstyp
pyzfs:		libnvpair libsec libidmap libzfs
libreparse:	libnvpair
libhotplug:	libnvpair
cfgadm_plugins:	libhotplug
libilb:		libsocket
$(INTEL_BUILD)libdiskmgt:libfdisk

#
# The reason this rule checks for the existence of the
# Makefile is that some of the directories do not exist
# in certain situations (e.g., exportable source builds,
# OpenSolaris).
#
$(SUBDIRS): FRC
	@if [ -f $@/Makefile  ]; then \
		cd $@; pwd; $(MAKE) $(TARGET); \
	else \
		true; \
	fi

$(SUBDIRS:%=%-nodepend):
	@if [ -f $(@:%-nodepend=%)/Makefile  ]; then \
		cd $(@:%-nodepend=%); pwd; $(MAKE) $(TARGET); \
	else \
		true; \
	fi

FRC:
