/* @k10d classify_capture_quality @ 0x1041de72
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Determines a 3-level quality tier from a minimum dimension and dispatches a virtual
 *   update.
 * summary:
 *   Reads four 32-bit values from param_2 (offsets 0x18-0x24) and calculates the minimum.
 *   It maps this minimum to a tier: 0 if < 0x6001, 1 if < 0xc001, and 2 otherwise. This
 *   tier is stored at param_1+0xb4 and passed as an argument to a virtual function call
 *   (slot 17) on an object pointer found at param_1+0x2c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void classify_capture_quality(void *param_1,int param_2)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  if (*(uint *)(param_2 + 0x1c) < uVar1) {
    uVar1 = *(uint *)(param_2 + 0x1c);
  }
  if (*(uint *)(param_2 + 0x20) < uVar1) {
    uVar1 = *(uint *)(param_2 + 0x20);
  }
  if (*(uint *)(param_2 + 0x24) < uVar1) {
    uVar1 = *(uint *)(param_2 + 0x24);
  }
  *(uint16_t *)((int)param_1 + 0xb4) = 0;
  if (uVar1 < 0xc001) {
    if (uVar1 < 0x6001) {
      *(uint16_t *)((int)param_1 + 0xb4) = 0;
      uVar2 = 0;
    }
    else {
      *(uint16_t *)((int)param_1 + 0xb4) = 1;
      uVar2 = 1;
    }
  }
  else {
    *(uint16_t *)((int)param_1 + 0xb4) = 2;
    uVar2 = 2;
  }
  iVar3 = *(int *)(*(int *)((int)param_1 + 0x2c) + 4);
  (((vtbl_entry*)(iVar3))[17].fn)(*(int *)((int)param_1 + 0x2c) + (int)((vtbl_entry*)(iVar3))[17].adj,uVar2);
  return;
}
