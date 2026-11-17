/* @k10d release_object_at_offset_0x20 @ 0x10522684
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Clears a flag at offset 0x30 and frees the object pointer stored at offset 0x20 if non-
 *   null.
 * summary:
 *   This is virtual slot 4 of cls_105d8bc8. It writes zero to the byte at param_1+0x30,
 *   then checks the pointer at param_1+0x20. If that pointer is not null, it calls
 *   clear_flag_and_call_two_helpers_1052226c with that pointer as an argument, likely
 *   releasing or destroying the referenced object. The function acts as a cleanup or
 *   destructor-like routine for the object's internal state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_at_offset_0x20(int param_1)

{
  *(uint8_t *)(param_1 + 0x30) = 0;
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    clear_flag_and_call_two_helpers_1052226c(*(void **)(param_1 + 0x20));
  }
  return;
}
