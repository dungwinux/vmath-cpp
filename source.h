#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <string>
#include <algorithm>
#include "algorithm.h"

using namespace std;

#if defined(__clang__)
	/* Clang/LLVM. ---------------------------------------------- */
    #define compiler "CLang-LLVM"
    #define compiler_ver __VERSION__

#elif defined(__ICC) || defined(__INTEL_COMPILER)
	/* Intel ICC/ICPC. ------------------------------------------ */
    #define compiler "Intel ICC/ICPC"
    #define compiler_ver __VERSION__+" ver. "+to_string(__INTEL_COMPILER)

#elif defined(__GNUC__) || defined(__GNUG__)
	/* GNU GCC/G++. --------------------------------------------- */
    #define compiler "GNU GCC/G++"
    #define compiler_ver __VERSION__

#elif defined(__IBMC__) || defined(__IBMCPP__)
	/* IBM XL C/C++. -------------------------------------------- */
    #define compiler "IBM XL C/C++"
    #define compiler_ver __xlc__

#elif defined(_MSC_VER)
	/* Microsoft Visual Studio. --------------------------------- */
	#define compiler "Visual C/C++"
	#define compiler_ver to_string(_MSC_FULL_VER)

#elif defined(__PGI)
	/* Portland Group PGCC/PGCPP. ------------------------------- */
	#define compiler "Portland Group PGCC/PGCPP"
	#define compiler_ver to_string(__PGIC__)+"."+to_string(__PGIC_MINOR)+"."+to_string(__PGIC_PATCHLEVEL__)

#elif defined(__SUNPRO_C)
	/* Oracle Solaris Studio. ----------------------------------- */
	#define compiler "Oracle Solaris Studio"
	#define compiler_ver to_string(__SUNPRO_C)

#elif defined(__SUNPRO_CC)
	/* Oracle Solaris Studio. ----------------------------------- */
	#define compiler "Oracle Solaris Studio"
	#define compiler_ver to_string(__SUNPRO_CC)

#else 
    #define compiler "Unknown C/C++ compiler"
    #define compiler_ver "Unknown"

#endif

#define Copyright "Copyright (c) 2017 Nguyen Tuan Dung (Winux8yt3)."
#define ProgramName "VMath-cpp"
#define Version "0.1"
#define VersionInfo "Alpha"
#define Build __DATE__ " " __TIME__