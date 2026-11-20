/* @k10d dispatch_virtual_slot_9_1051cfae @ 0x1051cfae
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 9 of an object based on two integer selector parameters.
 * summary:
 *   Checks if param_3 is 0 and param_4 is 0 or 1. If valid, it performs a virtual call to
 *   slot 9 (offset 0x4c) of the object pointed to by *(param_1 + 4). The call passes the
 *   adjusted object pointer, param_2, a value from offset 0x58 or 0x5c of param_1, and the
 *   selector value (0 or 1). Returns the result of the virtual call or 0 if selectors are
 *   invalid.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_slot_9_1051cfae(cls_105d6ce0 *param_1,uint32_t param_2,int param_3,int param_4)

{
  uint32_t uVar1;
  
  if (param_3 == 0) {
    if (param_4 == 0) {
      uVar1 = (((vtbl_entry*)(param_1->field_0x4))[9].fn)
                        (&param_1->field_0x0 + ((vtbl_entry*)(param_1->field_0x4))[9].adj,param_2,
                         param_1->field_0x58,0);
      return uVar1;
    }
    if (param_4 == 1) {
      uVar1 = (((vtbl_entry*)(param_1->field_0x4))[9].fn)
                        (&param_1->field_0x0 + ((vtbl_entry*)(param_1->field_0x4))[9].adj,param_2,
                         param_1->field_0x5c,1);
      return uVar1;
    }
  }
  return 0;
}
