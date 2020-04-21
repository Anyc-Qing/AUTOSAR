/*
 * Ifx_Ssw_Compilers.h
 *
 *  Created on: 23.06.2016
 *      Author: abbi
 */

#ifndef IFX_SSW_COMPILERS_H_
#define IFX_SSW_COMPILERS_H_

/*Macro definition to show GNUC macros with the editor*/
#if!defined(__DCC__) && !defined(__TASKING__) && !defined(__GNUC__)
#define __GNUC__
//#define __TASKING__
//#define __DCC__
#endif

/*Include files for each compiler*/
#ifdef __DCC__
#include "Ifx_Ssw_CompilersDcc.h"

#elif defined(__GNUC__)
#include "Ifx_Ssw_CompilersGnuc.h"

#elif defined(__TASKING__)
#include "Ifx_Ssw_CompilersTasking.h"
#endif

#endif /* IFX_SSW_COMPILERS_H_ */

