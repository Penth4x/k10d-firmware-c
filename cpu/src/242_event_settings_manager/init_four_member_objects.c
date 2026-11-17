/* @k10d init_four_member_objects @ 0x104cfd1c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates four member objects and calls their virtual slot 2 with argument 0.
 * summary:
 *   The function initializes a struct by creating four instances of classes cls_105b9a7c,
 *   cls_105b9b2c, and cls_105b9a3c (twice). It stores the pointers at offsets 0x08, 0x0c,
 *   0x10, and 0x14 of the object. It then invokes virtual slot 2 (offset 0x14 in vtable) on
 *   each of the four members, passing 0 as the argument. This appears to be a constructor
 *   or initialization routine for a composite object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_four_member_objects(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = (uint32_t)cls_105b9a7c_new(0);
  *(uint32_t *)(param_1 + 8) = uVar1;
  uVar1 = (uint32_t)cls_105b9b2c_new(0);
  *(uint32_t *)(param_1 + 0xc) = uVar1;
  uVar1 = (uint32_t)cls_105b9a3c_new((uint32_t *)0x0);
  *(uint32_t *)(param_1 + 0x10) = uVar1;
  uVar1 = (uint32_t)cls_105b9a3c_new((uint32_t *)0x0);
  *(uint32_t *)(param_1 + 0x14) = uVar1;
  iVar2 = **(int **)(param_1 + 8);
  (**(code **)(iVar2 + 0x14))((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar2 + 0x10),0);
  iVar2 = **(int **)(param_1 + 0xc);
  (**(code **)(iVar2 + 0x14))((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar2 + 0x10),0);
  iVar2 = **(int **)(param_1 + 0x10);
  (**(code **)(iVar2 + 0x14))((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar2 + 0x10),0);
  iVar2 = **(int **)(param_1 + 0x14);
  (**(code **)(iVar2 + 0x14))((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar2 + 0x10),0);
  return;
}
