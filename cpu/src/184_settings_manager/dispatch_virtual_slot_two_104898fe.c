/* @k10d dispatch_virtual_slot_two_104898fe @ 0x104898fe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on param_1 and, if nonzero, invokes virtual slot 3 on param_2
 *   with argument 0x17, returning the result of one of two helper functions.
 * summary:
 *   This is virtual method slot 2 of cls_105b38d0. It performs a virtual call on param_1
 *   (slot 2, offset 0x1c) and, if the result is non-zero, performs a virtual call on
 *   param_2 (slot 3, offset 0x24) with the constant 0x17. Depending on the second call's
 *   result, it returns the value from get_or_create_sram_object_104899a6 or
 *   get_or_create_singleton_object_10489a38. The specific camera subsystem role is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b38d0 * dispatch_virtual_slot_two_104898fe(cls_105b38d0 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (((vtbl_entry*)(param_1->field_0x0))[3].fn)
                    ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[3].adj);
  if (iVar1 != 0) {
    iVar1 = (((vtbl_entry*)(*param_2))[4].fn)((int)((vtbl_entry*)(*param_2))[4].adj + (int)param_2,0x17);
    if (iVar1 == 0) {
      param_1 = (cls_105b38d0 *)get_or_create_sram_object_104899a6();
    }
    else {
      param_1 = (cls_105b38d0 *)get_or_create_singleton_object_10489a38();
    }
  }
  return param_1;
}
