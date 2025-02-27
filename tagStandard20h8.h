#ifndef _TAGStandard20H8
#define _TAGStandard20H8

#include "apriltag.h"

#ifdef __cplusplus
extern "C" {
#endif

apriltag_family_t *tagStandard20h8_create();
void tagStandard20h8_destroy(apriltag_family_t *tf);

#ifdef __cplusplus
}
#endif

#endif
