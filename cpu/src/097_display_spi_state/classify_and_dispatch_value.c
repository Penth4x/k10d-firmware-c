/* @k10d classify_and_dispatch_value @ 0x1041dee4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Computes a 3-level category from a clamped value in param_2 and dispatches it via a
 *   virtual call.
 * summary:
 *   The function reads four uint fields from param_2 (offsets 0x1c-0x28) and takes their
 *   minimum. It maps this minimum to a category: 0 if <0x6001, 1 if <0xc001, else 2. This
 *   category is stored at param_1+0xb4 and passed as an argument to a virtual method (slot
 *   17) of the object pointer found at param_1+0x2c. No specific camera subsystem is
 *   identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void classify_and_dispatch_value(void *param_1,int param_2)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_2 + 0x1c);
  if (*(uint *)(param_2 + 0x20) < uVar1) {
    uVar1 = *(uint *)(param_2 + 0x20);
  }
  if (*(uint *)(param_2 + 0x24) < uVar1) {
    uVar1 = *(uint *)(param_2 + 0x24);
  }
  if (*(uint *)(param_2 + 0x28) < uVar1) {
    uVar1 = *(uint *)(param_2 + 0x28);
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
  (**(code **)(iVar3 + 0x8c))(*(int *)((int)param_1 + 0x2c) + (int)*(short *)(iVar3 + 0x88),uVar2);
  return;
}
