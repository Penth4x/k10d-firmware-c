/* @k10d dispatch_buffer_event_via_vtable @ 0x105317f6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object, and if the result is 2, processes a buffer state
 *   change and calls a second virtual method.
 * summary:
 *   The function retrieves a pointer from param_1+4 and calls virtual slot 7 (offset 0x3c).
 *   If the return value is 2 and a flag at param_1+0x1c is set, it calls
 *   read_little_endian_word_104acb5e and dispatch_buffer_copy to compute a size. It then
 *   calls a function at 0x104ad2d4 with computed parameters. Finally, it calls virtual slot
 *   6 (offset 0x34) with the result. The specific subsystem is not identifiable from the
 *   provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_buffer_event_via_vtable(cls_1061e14c *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  
  iVar5 = *(int *)param_1->field_0x4;
  iVar5 = (((vtbl_entry*)(iVar5))[7].fn)(param_1->field_0x4 + (int)((vtbl_entry*)(iVar5))[7].adj);
  if ((param_1->field_0x1c != 0) && (iVar5 == 2)) {
    uVar4 = ((uint32_t *)param_1->field_0x18)[3];
    if (param_1->field_0xc == 0) {
      uVar2 = read_little_endian_word_104acb5e(*(void **)param_1->field_0x18,4);
      param_1->field_0xc = uVar2;
    }
    iVar3 = dispatch_buffer_copy((void*)(param_1->field_0x18),(void*)(param_1->field_0x1c),uVar4);
    uVar1 = param_1->field_0xc - iVar3;
    param_1->field_0xc = uVar1;
    uVar2 = *(int *)(param_1->field_0x1c + 4) - *(int *)(param_1->field_0x1c + 0xc);
    if (uVar1 <= uVar2) {
      uVar2 = uVar1;
    }
    if ((uVar1 == 0) || (uVar2 == 0)) {
      param_1->field_0x1c = 0;
      (*(code *)0x104ad2d4/*ROM*/)(param_1->field_0x18,0,0,0);
    }
    else {
      (*(code *)0x104ad2d4/*ROM*/)(param_1->field_0x18,param_1->field_0x10,uVar2,0);
      iVar5 = *(int *)param_1->field_0x4;
      iVar5 = (((vtbl_entry*)(iVar5))[6].fn)
                        (param_1->field_0x4 + (int)((vtbl_entry*)(iVar5))[6].adj,1,param_1->field_0x18);
    }
  }
  return iVar5;
}
