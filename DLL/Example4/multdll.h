/* multdll.h */


#ifndef _MULTDLL_H_
#define _MULTDLL_H_

#if BUILDING_DLL
# define MULTDLL_API __declspec (dllexport)

#else /* Not BUILDING_DLL */
# define MULTDLL_API __declspec (dllimport)
#endif /* Not BUILDING_DLL */



#endif /* _MULTDLL_H_ */