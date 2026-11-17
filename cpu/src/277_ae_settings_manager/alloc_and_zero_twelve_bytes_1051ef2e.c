/* @k10d alloc_and_zero_twelve_bytes_1051ef2e @ 0x1051ef2e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_twelve_bytes_1051ef2e(uint16_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0xc), param_1 != (uint16_t *)0x0)) {
    *param_1 = 0;
    iVar1 = 0;
    iVar2 = 2;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 2) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 3) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 4) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 3;
    } while (-1 < iVar2);
  }
  return;
}
