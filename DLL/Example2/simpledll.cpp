// simpledll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "simpledll.h"


/*********************************************************************/
/* This is an exported routine for the DLL. 						 */
/*********************************************************************/

/* SIMPLEDLL_API */ double __stdcall internal_mul_function(double x, double y)
	{
	return(x * y);
	}

