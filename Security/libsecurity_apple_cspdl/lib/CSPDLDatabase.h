/*
 * Copyright (c) 2000-2001,2011,2014 Apple Inc. All Rights Reserved.
 * 
 * The contents of this file constitute Original Code as defined in and are
 * subject to the Apple Public Source License Version 1.2 (the 'License').
 * You may not use this file except in compliance with the License. Please obtain
 * a copy of the License at http://www.apple.com/publicsource and read it before
 * using this file.
 * 
 * This Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS
 * OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES, INCLUDING WITHOUT
 * LIMITATION, ANY WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
 * PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT. Please see the License for the
 * specific language governing rights and limitations under the License.
 */


//
//  CSPDLDatabase.h - Description t.b.d.
//
#ifndef _H_CSPDLDATABASE
#define _H_CSPDLDATABASE

#include <security_cdsa_plugin/Database.h>
#include <security_cdsa_plugin/DbContext.h>
#include <security_cdsa_utilities/handleobject.h>
#include <security_utilities/refcount.h>
#include <vector>

//
// CSPDLDatabaseManager
//
class CSPDLDatabaseManager : public DatabaseManager
{
public:
    Database *make(const DbName &inDbName);
};

#endif //_H_CSPDLDATABASE
