/* @k10d call_callback_with_offset_value @ 0x103684ea
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 011_ae_bracketing_control (unit names are model-proposed)
 * purpose:
 *   Reads a value from an object offset and passes it to a function pointer at a fixed
 *   address.
 * summary:
 *   The function takes a pointer (param_1), calls read_byte_at_offset_five_1051e924 with
 *   the value at offset 0x1c of that object, and then invokes the function pointer stored
 *   at 0x10382052, passing the object's offset 0x6c and the result of the first call. The
 *   role of the object and the target function is not determinable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_callback_with_offset_value(cls_10557a18 *param_1)

{
  uint8_t uVar1;
  
  uVar1 = read_byte_at_offset_five_1051e924((int)&param_1->field_0x1c);
  (*(code *)0x10382052/*ROM*/)(&param_1->field_0x6c,uVar1);
  return;
}
