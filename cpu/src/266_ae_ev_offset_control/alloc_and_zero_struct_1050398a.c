/* @k10d alloc_and_zero_struct_1050398a @ 0x1050398a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_struct_1050398a(uint16_t *param_1)

{
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x34), param_1 != (uint16_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    *(uint8_t *)(param_1 + 0x13) = 0;
    *(uint8_t *)((int)param_1 + 0x27) = 0;
    *(uint8_t *)(param_1 + 0x14) = 0;
    *(uint8_t *)((int)param_1 + 0x29) = 0;
    *(uint8_t *)(param_1 + 0x15) = 0;
    *(uint8_t *)((int)param_1 + 0x2b) = 0;
    *(uint8_t *)(param_1 + 0x16) = 0;
    *(uint8_t *)((int)param_1 + 0x2d) = 0;
    *(uint8_t *)(param_1 + 0x17) = 0;
    *(uint8_t *)((int)param_1 + 0x2f) = 0;
    *(uint8_t *)(param_1 + 0x18) = 0;
    *(uint8_t *)((int)param_1 + 0x31) = 0;
    *(uint8_t *)(param_1 + 0x19) = 0;
  }
  return;
}
