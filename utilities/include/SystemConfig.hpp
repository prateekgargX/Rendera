#ifndef SYSTEMCONFIG_HPP
#define SYSTEMCONFIG_HPP

#if USE_DOUBLE
    #if XSIMD_WITH_AVX2 || XSIMD_WITH_AVX
        #define ALIGN_WIDTH 32
        typedef double UType;
        typedef xsimd::avx UArch;
        #define DOUBLE_TO_FLOAT_REVERT 0
    #else
        #define DOUBLE_TO_FLOAT_REVERT 1
    #endif 
#else
    #define ALIGN_WIDTH 16
    typedef float Utype;
    typedef xsimd::sse4_2 UArch;
    #define DOUBLE_TO_FLOAT_REVERT 0
#endif 

//Float is preferred to maximize cache efficiency.
//So regardless of whethere AVX is available, Floats are used.

#endif