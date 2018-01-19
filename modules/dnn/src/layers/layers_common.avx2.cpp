#ifdef __VXWORKS__
#include "cv_cpu_config.h"
#endif

#ifdef CV_CPU_COMPILE_AVX2
#undef CV_CPU_DISPATCH_MODE
#define CV_CPU_DISPATCH_MODE AVX2
#endif

#include "precomp.hpp"
#include "layers/layers_common.simd.hpp"
