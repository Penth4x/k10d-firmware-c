/* @k10d initialize_object_with_optional_param @ 0x10466f8c
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * purpose:
 *   Initializes an object and optionally sets a field at offset 0xc if the second argument
 *   is not -1.
 * summary:
 *   Calls clear_flag_at_offset_0x28 to initialize the object pointed to by param_1. If
 *   param_2 is not -1, it calls set_byte_at_offset_0x29 with a flag of 1, then calls
 *   check_heap_alloc_success to write param_2 to the object's field at offset 0xc. The
 *   specific role of the object and the meaning of the parameter are not determinable from
 *   the provided pseudocode and unverified callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_with_optional_param(int param_1,int param_2)

{
  clear_flag_at_offset_0x28((void *)param_1);
  if (param_2 != -1) {
    set_byte_at_offset_0x29((void *)param_1,1);
    check_heap_alloc_success((int *)(param_1 + 0xc),param_2);
  }
  return;
}
