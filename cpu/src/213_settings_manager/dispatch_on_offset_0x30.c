/* @k10d dispatch_on_offset_0x30 @ 0x104ade68
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a flag at offset 0x30 and either calls two initializers or a helper with fields
 *   at 0x2c and 0x30.
 * summary:
 *   The function reads a uint at offset 0x30 of the object. If zero, it calls
 *   zero_struct_fields_20_to_30_104adfa2 and invoke_virtual_slot_two_104ae294, returning 0.
 *   Otherwise, it calls dispatch_buffer_write_request with the object pointer, the int at
 *   offset 0x2c, and the uint at offset 0x30, returning the result. The specific subsystem
 *   is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_offset_0x30(cls_105b7670 *param_1)

{
  uint32_t uVar1;
  
  if (param_1->field_0x30 == 0) {
    uVar1 = 0;
    zero_struct_fields_20_to_30_104adfa2(__frv_reg_unset(4));
    invoke_virtual_slot_two_104ae294(param_1);
  }
  else {
    uVar1 = dispatch_buffer_write_request((int)param_1,param_1->field_0x2c,param_1->field_0x30);
  }
  return uVar1;
}
