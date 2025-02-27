#include <stdlib.h>
#include "tagStandard20h8.h"

static uint64_t codedata[13] = {
   0x000000000008b5bbUL,
   0x000000000006c145UL,
   0x00000000000cfaf7UL,
   0x00000000000a0c46UL,
   0x000000000005291fUL,
   0x000000000001eca2UL,
   0x00000000000a610bUL,
   0x00000000000a7435UL,
   0x00000000000649aeUL,
   0x00000000000da239UL,
   0x00000000000e1b15UL,
   0x00000000000f3da7UL,
   0x0000000000026b50UL,
};
apriltag_family_t *tagStandard20h8_create()
{
   apriltag_family_t *tf = calloc(1, sizeof(apriltag_family_t));
   tf->name = strdup("tagStandard20h8");
   tf->h = 8;
   tf->ncodes = 13;
   tf->codes = codedata;
   tf->nbits = 20;
   tf->bit_x = calloc(20, sizeof(uint32_t));
   tf->bit_y = calloc(20, sizeof(uint32_t));
   tf->bit_x[0] = -2;
   tf->bit_y[0] = -2;
   tf->bit_x[1] = -1;
   tf->bit_y[1] = -2;
   tf->bit_x[2] = 0;
   tf->bit_y[2] = -2;
   tf->bit_x[3] = 1;
   tf->bit_y[3] = -2;
   tf->bit_x[4] = 2;
   tf->bit_y[4] = -2;
   tf->bit_x[5] = 3;
   tf->bit_y[5] = -2;
   tf->bit_x[6] = 3;
   tf->bit_y[6] = -1;
   tf->bit_x[7] = 3;
   tf->bit_y[7] = 0;
   tf->bit_x[8] = 3;
   tf->bit_y[8] = 1;
   tf->bit_x[9] = 3;
   tf->bit_y[9] = 2;
   tf->bit_x[10] = 3;
   tf->bit_y[10] = 3;
   tf->bit_x[11] = 2;
   tf->bit_y[11] = 3;
   tf->bit_x[12] = 1;
   tf->bit_y[12] = 3;
   tf->bit_x[13] = 0;
   tf->bit_y[13] = 3;
   tf->bit_x[14] = -1;
   tf->bit_y[14] = 3;
   tf->bit_x[15] = -2;
   tf->bit_y[15] = 3;
   tf->bit_x[16] = -2;
   tf->bit_y[16] = 2;
   tf->bit_x[17] = -2;
   tf->bit_y[17] = 1;
   tf->bit_x[18] = -2;
   tf->bit_y[18] = 0;
   tf->bit_x[19] = -2;
   tf->bit_y[19] = -1;
   tf->width_at_border = 2;
   tf->total_width = 6;
   tf->reversed_border = true;
   return tf;
}

void tagStandard20h8_destroy(apriltag_family_t *tf)
{
   free(tf->bit_x);
   free(tf->bit_y);
   free(tf->name);
   free(tf);
}
