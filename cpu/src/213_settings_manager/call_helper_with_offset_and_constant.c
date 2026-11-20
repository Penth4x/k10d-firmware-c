/* @k10d call_helper_with_offset_and_constant @ 0x104ae1a2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper passing the object pointer, a field at offset 0x24, and the constant
 *   0x12.
 * summary:
 *   This is virtual slot 2 of cls_105b76e8. It reads param_1[9] (offset 0x24 in the
 *   0x28-byte object) and passes it along with the object pointer and the immediate 0x12 to
 *   invoke_virtual_slot_two_104af0c8. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_and_constant(cls_105b76e8 *param_1)

{
  invoke_virtual_slot_two_104af0c8((void *)&param_1->field_0x0, (void *)param_1->field_0x24, 0x12);
  return;
}
