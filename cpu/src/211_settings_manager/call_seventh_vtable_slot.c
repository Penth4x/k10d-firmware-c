/* @k10d call_seventh_vtable_slot @ 0x104ac3a4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 211_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 8th pointer from a vtable at param_1+0x18 and invokes it with the pointer and
 *   its own value as arguments.
 * summary:
 *   The function dereferences the pointer at offset 0x18 of param_1 to obtain a vtable,
 *   then loads the 8th entry (index 7). It calls the function at that address, passing the
 *   vtable pointer and the loaded value as the first two arguments. The callee
 *   merge_masked_word_fields is not named, so the specific subsystem role is not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_seventh_vtable_slot(int param_1)

{
  uint uVar1;
  
  uVar1 = (*(uint32_t **)(param_1 + 0x18))[7];
  merge_masked_word_fields(*(uint32_t **)(param_1 + 0x18),uVar1,uVar1);
  return;
}
