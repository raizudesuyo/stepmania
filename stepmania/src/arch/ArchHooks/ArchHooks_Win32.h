#ifndef ARCH_HOOKS_WIN32_H
#define ARCH_HOOKS_WIN32_H

#include "ArchHooks.h"
class ArchHooks_Win32: public ArchHooks
{
public:
    ArchHooks_Win32();
    void DumpDebugInfo();
    void MessageBoxOK( CString sMessage, CString ID );
	void MessageBoxError( CString error );
    MessageBoxResult MessageBoxAbortRetryIgnore( CString sMessage, CString ID );
};

#undef ARCH_HOOKS
#define ARCH_HOOKS ArchHooks_Win32

#endif
/*
 * Copyright (c) 2002-2003 by the person(s) listed below.  All rights reserved.
 *
 * Glenn Maynard
 */
