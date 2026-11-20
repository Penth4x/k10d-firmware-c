/* @k10d clamp_and_copy_buffer_field @ 0x104ad81c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a length from the object, clamps it to 0x24, and copies that many bytes from an
 *   internal pointer.
 * summary:
 *   Calls dispatch_virtual_slot_two_104af096 with arguments (param_1, 4, 1) to retrieve a
 *   value, likely a length or size field. If the returned value exceeds 0x24 (36), it is
 *   clamped to 0x24. Then it calls invoke_virtual_slot_two_104af0c8 with param_1, the
 *   pointer stored at param_1[8], and the clamped length, suggesting a copy or
 *   initialization operation on a buffer pointed to by the object's 8th field. The object
 *   size is 0x24 bytes, matching the clamp limit.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clamp_and_copy_buffer_field(cls_105b7588 *param_1)

{
  uint uVar1;
  
  uVar1 = dispatch_virtual_slot_two_104af096((int)param_1,4,1);
  if (0x24 < uVar1) {
    uVar1 = 0x24;
  }
  invoke_virtual_slot_two_104af0c8(&param_1->field_0x0,(void *)param_1->field_0x20,uVar1);
  return;
}
