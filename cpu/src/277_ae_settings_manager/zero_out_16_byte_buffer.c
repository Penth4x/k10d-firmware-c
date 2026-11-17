/* @k10d zero_out_16_byte_buffer @ 0x1051ef84
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_out_16_byte_buffer(uint16_t *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  *param_1 = 0;
  iVar2 = 1;
  do {
    *(uint8_t *)((int)param_1 + iVar1 + 2) = 0;
    *(uint8_t *)((int)param_1 + iVar1 + 3) = 0;
    *(uint8_t *)((int)param_1 + iVar1 + 4) = 0;
    *(uint8_t *)((int)param_1 + iVar1 + 5) = 0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 4;
  } while (-1 < iVar2);
  return;
}
