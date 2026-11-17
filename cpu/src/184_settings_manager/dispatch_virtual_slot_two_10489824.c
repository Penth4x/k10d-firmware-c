/* @k10d dispatch_virtual_slot_two_10489824 @ 0x10489824
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 3 of param_1 and, if nonzero, virtual slot 4 of param_2 with arg
 *   0xd, then returns one of two helper results.
 * summary:
 *   This is virtual method slot 2 of cls_105b38b0. It makes a virtual call through
 *   param_1's vtable at offset 0x1c (slot 3) with a this-adjustment from the short at 0x18.
 *   If that call returns nonzero, it makes a second virtual call through param_2's vtable
 *   at offset 0x24 (slot 4) with a this-adjustment from the short at 0x20 and a second
 *   argument of 0xd. Depending on whether the second call returns zero, it calls
 *   get_or_create_sram_object_104899a6 or get_or_create_singleton_object_104898cc and
 *   returns that result; otherwise it returns param_1 unchanged. No camera-specific
 *   subsystem is evident from the code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * dispatch_virtual_slot_two_10489824(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))((int)*(short *)(*param_1 + 0x18) + (int)param_1);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_2 + 0x24))((int)*(short *)(*param_2 + 0x20) + (int)param_2,0xd);
    if (iVar1 == 0) {
      param_1 = (int *)get_or_create_sram_object_104899a6();
    }
    else {
      param_1 = (int *)get_or_create_singleton_object_104898cc();
    }
  }
  return param_1;
}
