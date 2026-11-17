/* @k10d init_0x50_byte_object_1051e422 @ 0x1051e422
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_0x50_byte_object_1051e422(uint8_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint8_t *)0x0) ||
     (param_1 = (uint8_t *)heap_alloc((void *)0x50), param_1 != (uint8_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 9;
    param_1[2] = 3;
    param_1[3] = 3;
    param_1[4] = 0;
    param_1[5] = 0;
    iVar1 = 0;
    *(uint16_t *)(param_1 + 6) = 0;
    *(uint16_t *)(param_1 + 8) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0x4c] = 0;
    iVar2 = 3;
    do {
      *(uint32_t *)(param_1 + iVar1 + 0xc) = 0;
      *(uint32_t *)(param_1 + iVar1 + 0x10) = 0;
      *(uint32_t *)(param_1 + iVar1 + 0x14) = 0;
      *(uint32_t *)(param_1 + iVar1 + 0x18) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
  }
  return;
}
