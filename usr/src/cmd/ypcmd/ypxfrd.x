%/*
% * CDDL HEADER START
% *
% * The contents of this file are subject to the terms of the
% * Common Development and Distribution License, Version 1.0 only
% * (the "License").  You may not use this file except in compliance
% * with the License.
% *
% * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
% * or http://www.opensolaris.org/os/licensing.
% * See the License for the specific language governing permissions
% * and limitations under the License.
% *
% * When distributing Covered Code, include this CDDL HEADER in each
% * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
% * If applicable, add the following below this CDDL HEADER, with the
% * fields enclosed by brackets "[]" replaced with your own identifying
% * information: Portions Copyright [yyyy] [name of copyright owner]
% *
% * CDDL HEADER END
% *
% * Copyright 1989 Sun Microsystems, Inc.  All rights reserved.
% * Use is subject to license terms.
% */
%
%#pragma ident	"%Z%%M%	%I%	%E% SMI"
%
%/*
% * This is NOT source code!
% * DO NOT EDIT THIS FILE!
% */

const PBLEN  = 1024;
const DBLEN  = 4096;
enum answer {OK,GETDBM_EOF,GETDBM_ERROR};


typedef opaque pagblock[PBLEN];
typedef opaque dirblock[DBLEN];
typedef string pathname<1024>;
struct  hosereq{
pathname map;
pathname domain;
};

struct pagdat {
int	blkno;
pagblock blkdat;
};

struct dirdat {
int	blkno;
dirblock blkdat;
};



union pag  switch (answer status){
case OK:
	pagdat ok;	
	
default:
	void;
};

struct paglist {
    struct pag d;
    struct paglist *next;
};

union dir  switch (answer status){
case OK:
	dirdat ok;	
	
default:
	void;
};


struct dirlist {
    struct dir d;
    struct dirlist *next;
};
struct du {
struct paglist p;
struct dirlist d;

};
union dbmfyl switch (answer status){
case OK:
	struct du ok;
default :
	void;
};

program YPXFRD {
	version V1{
	dbmfyl  getdbm(hosereq)=1;
	}=1;
}=100069;
