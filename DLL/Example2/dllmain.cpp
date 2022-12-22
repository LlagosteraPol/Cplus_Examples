// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"

BOOL APIENTRY DllMain( HMODULE hModule, /* Library instance handle. */ 
                       DWORD  ul_reason_for_call, /* Reason this function is being called. */
                       LPVOID lpReserved /* Not used. */
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	
	/* Returns TRUE on success, FALSE on failure */
	return TRUE;
}

