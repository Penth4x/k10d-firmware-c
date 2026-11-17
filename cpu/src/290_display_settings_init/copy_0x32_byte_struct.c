/* @k10d copy_0x32_byte_struct @ 0x10530b24
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 290_display_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_0x32_byte_struct(void *param_1,uint16_t *param_2,uint16_t *param_3)

{
  *param_3 = *param_2;
  param_3[1] = param_2[1];
  param_3[2] = param_2[2];
  param_3[3] = param_2[3];
  param_3[4] = param_2[4];
  param_3[5] = param_2[5];
  param_3[6] = param_2[6];
  param_3[7] = param_2[7];
  param_3[8] = param_2[8];
  param_3[9] = param_2[9];
  param_3[10] = param_2[10];
  param_3[0xb] = param_2[0xb];
  param_3[0xc] = param_2[0xc];
  param_3[0xd] = param_2[0xd];
  param_3[0xe] = param_2[0xe];
  param_3[0xf] = param_2[0xf];
  param_3[0x10] = param_2[0x10];
  param_3[0x11] = param_2[0x11];
  param_3[0x12] = param_2[0x12];
  *(uint8_t *)(param_3 + 0x13) = *(uint8_t *)(param_2 + 0x13);
  *(uint8_t *)((int)param_3 + 0x27) = *(uint8_t *)((int)param_2 + 0x27);
  *(uint8_t *)(param_3 + 0x14) = *(uint8_t *)(param_2 + 0x14);
  *(uint8_t *)((int)param_3 + 0x29) = *(uint8_t *)((int)param_2 + 0x29);
  *(uint8_t *)(param_3 + 0x15) = *(uint8_t *)(param_2 + 0x15);
  *(uint8_t *)((int)param_3 + 0x2b) = *(uint8_t *)((int)param_2 + 0x2b);
  *(uint8_t *)(param_3 + 0x16) = *(uint8_t *)(param_2 + 0x16);
  *(uint8_t *)((int)param_3 + 0x2d) = *(uint8_t *)((int)param_2 + 0x2d);
  *(uint8_t *)(param_3 + 0x17) = *(uint8_t *)(param_2 + 0x17);
  *(uint8_t *)((int)param_3 + 0x2f) = *(uint8_t *)((int)param_2 + 0x2f);
  *(uint8_t *)(param_3 + 0x18) = *(uint8_t *)(param_2 + 0x18);
  *(uint8_t *)((int)param_3 + 0x31) = *(uint8_t *)((int)param_2 + 0x31);
  *(uint8_t *)(param_3 + 0x19) = *(uint8_t *)(param_2 + 0x19);
  return;
}
