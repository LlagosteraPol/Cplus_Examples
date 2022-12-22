// AddDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "AddDll.h"


/*********************************************************************/
/* This is an exported routine for the DLL. 						 */
/*********************************************************************/

/* ADDDLL2_API */ double __stdcall internal_add_function(double x, double y)
	{
	return(x + y);
	}

/* ADDDLL2_API */ double __stdcall internal_mult_function(double x, double y)
{
	return(x * y);
}

