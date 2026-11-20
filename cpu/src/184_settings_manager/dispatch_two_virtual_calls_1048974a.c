/* @k10d dispatch_two_virtual_calls_1048974a @ 0x1048974a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 3 on param_1 and, if non-zero, virtual slot 4 on param_2 with arg
 *   0x1f, then returns one of two helper results.
 * summary:
 *   Performs a virtual call on param_1 via vtable offset 0x1c (slot 3) with this-adjustment
 *   from offset 0x18. If the result is non-zero, it makes a second virtual call on param_2
 *   via vtable offset 0x24 (slot 4) with argument 0x1f. Depending on whether that second
 *   call returns zero, it calls get_or_create_sram_object_104899a6 or
 *   get_or_init_sram_object_104897f2 and returns the result. The function is virtual slot 2
 *   of cls_105b3870.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b3870 * dispatch_two_virtual_calls_1048974a(cls_105b3870 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (((vtbl_entry*)(param_1->field_0x0))[3].fn)
                    ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[3].adj);
  if (iVar1 != 0) {
    iVar1 = (((vtbl_entry*)(*param_2))[4].fn)((int)((vtbl_entry*)(*param_2))[4].adj + (int)param_2,0x1f);
    if (iVar1 == 0) {
      param_1 = (cls_105b3870 *)get_or_create_sram_object_104899a6();
    }
    else {
      param_1 = (cls_105b3870 *)get_or_init_sram_object_104897f2();
    }
  }
  return param_1;
}
