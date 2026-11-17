/* @k10d call_subobject_method_with_arg_3_10476334 @ 0x10476334
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on the object pointer stored at offset 0x10 with argument 3.
 * summary:
 *   This is virtual slot 4 of cls_105aa498. It dereferences the pointer at param_1+0x10 and
 *   calls free_heap_if_flag_set_1047740c with that pointer and the constant 3. No other
 *   side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subobject_method_with_arg_3_10476334(int param_1)

{
  free_heap_if_flag_set_1047740c(*(void **)(param_1 + 0x10),3);
  return;
}
