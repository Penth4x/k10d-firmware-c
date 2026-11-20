/* @k10d dispatch_virtual_slot_3 @ 0x105200f8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Performs a virtual call to slot 3 of an object stored in a struct member.
 * summary:
 *   The function reads a pointer from offset 0xc of the input struct, retrieves the vtable,
 *   and calls the method at offset 0x44 (slot 3) with a this-adjustment from offset 0x40.
 *   It passes a flag (uVar2) and a value from offset 0x04 as arguments. Prior to the call,
 *   it may invoke an external function at 0x104ad2ea if a specific condition involving a
 *   lookup table is met.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_3(cls_105d7078 *param_1,uint param_2,uint32_t param_3,uint param_4,
                 uint32_t param_5)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  int iVar3;
  
  puVar1 = (uint32_t *)
           (*(code *)0x1052081e/*ROM*/)
                     (*(uint32_t *)
                       (param_1->field_0x8 + (((int)(param_2 & 0xff00) >> 8) - 1U & 0xff) * 4),
                      param_2 & 0xff);
  uVar2 = 0;
  param_1->field_0xc = param_5;
  if (puVar1 != (uint32_t *)0x0) {
    if ((int)(uint)*(byte *)(puVar1 + 1) < (int)param_4) {
      param_4 = (uint)*(byte *)(puVar1 + 1);
    }
    uVar2 = 1;
    (*(code *)0x104ad2ea/*ROM*/)(param_1->field_0x4,*puVar1,param_4,0);
  }
  iVar3 = *(int *)param_1->field_0xc;
  (((vtbl_entry*)(iVar3))[8].fn)
            ((int)param_1->field_0xc + (int)((vtbl_entry*)(iVar3))[8].adj,uVar2,param_1->field_0x4);
  return;
}
