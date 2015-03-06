/**
* =============================================================================
* Source Python
* Copyright (C) 2015 Source Python Development Team.  All rights reserved.
* =============================================================================
*
* This program is free software; you can redistribute it and/or modify it under
* the terms of the GNU General Public License, version 3.0, as published by the
* Free Software Foundation.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
* FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
* details.
*
* You should have received a copy of the GNU General Public License along with
* this program.  If not, see <http://www.gnu.org/licenses/>.
*
* As a special exception, the Source Python Team gives you permission
* to link the code of this program (as well as its derivative works) to
* "Half-Life 2," the "Source Engine," and any Game MODs that run on software
* by the Valve Corporation.  You must obey the GNU General Public License in
* all respects for all other code used.  Additionally, the Source.Python
* Development Team grants this exception to all derivative works.
*/

#ifndef _ENTITIES_PROPS_WRAP_CSGO_H
#define _ENTITIES_PROPS_WRAP_CSGO_H

//-----------------------------------------------------------------------------
// Includes.
//-----------------------------------------------------------------------------
#include "dt_send.h"
#include "server_class.h"


//-----------------------------------------------------------------------------
// ServerClass extension class.
//-----------------------------------------------------------------------------
class ServerClassExt
{
public:
	static const char *get_name(ServerClass *pServerClass)
	{
		return (const char *)pServerClass->m_pNetworkName;
	}
};


//-----------------------------------------------------------------------------
// SendProp constructor declaration.
//-----------------------------------------------------------------------------
SendProp::SendProp()
{
	m_pVarName = NULL;
	m_Offset = 0;
	m_pDataTable = NULL;
	m_ProxyFn = NULL;
	m_pExcludeDTName = NULL;
	m_pParentArrayPropName = NULL;

	m_Type = DPT_Int;
	m_Flags = 0;
	m_nBits = 0;

	m_fLowValue = 0.0f;
	m_fHighValue = 0.0f;
	m_fHighLowMul = 0.0f;
	m_pArrayProp = 0;
	m_ArrayLengthProxy = 0;
	m_nElements = 1;
	m_ElementStride = -1;
	m_DataTableProxyFn = NULL;
	m_pMatchingRecvProp	= NULL;

	m_priority = SENDPROP_DEFAULT_PRIORITY;
}


#endif // _ENTITIES_PROPS_WRAP_CSGO_H
