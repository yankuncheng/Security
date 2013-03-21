/*
 * compiler/core/oid.h - routine for building an ENC_OID from an arc number list
 *
 * Copyright (C) 1991, 1992 Michael Sample
 *            and the University of British Columbia
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * $Header: /cvs/root/Security/SecuritySNACCRuntime/compiler/core/Attic/oid.h,v 1.1 2001/06/20 21:27:58 dmitch Exp $
 * $Log: oid.h,v $
 * Revision 1.1  2001/06/20 21:27:58  dmitch
 * Adding missing snacc compiler files.
 *
 * Revision 1.1.1.1  1999/03/16 18:06:51  aram
 * Originals from SMIME Free Library.
 *
 * Revision 1.2  1994/10/08 03:48:51  rj
 * since i was still irritated by cpp standing for c++ and not the C preprocessor, i renamed them to cxx (which is one known suffix for C++ source files). since the standard #define is __cplusplus, cplusplus would have been the more obvious choice, but it is a little too long.
 *
 * Revision 1.1  1994/08/28  09:49:27  rj
 * first check-in. for a list of changes to the snacc-1.1 distribution please refer to the ChangeLog.
 *
 */


int           OidArcNameToNum PROTO ((char *name));
unsigned long EncodedOidLen PROTO ((OID *oid));
void          BuildEncodedOid PROTO ((OID *oid, AsnOid *result));
void          UnbuildEncodedOid PROTO ((AsnOid *eoid, OID **result));
