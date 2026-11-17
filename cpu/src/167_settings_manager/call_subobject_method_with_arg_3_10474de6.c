/* @k10d call_subobject_method_with_arg_3_10474de6 @ 0x10474de6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on the object's sub-object pointer at offset 0xc with argument 3.
 * summary:
 *   This is virtual slot 4 of cls_105aa3c4. It dereferences the pointer stored at offset
 *   0xc of the object (param_1) and calls free_heap_if_flag_set_1047740c on that sub-
 *   object, passing the constant 3 as the second argument. No other state is modified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subobject_method_with_arg_3_10474de6(int param_1)

{
  free_heap_if_flag_set_1047740c(*(void **)(param_1 + 0xc),3);
  return;
}
