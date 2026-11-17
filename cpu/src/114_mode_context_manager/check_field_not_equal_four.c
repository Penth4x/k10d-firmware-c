/* @k10d check_field_not_equal_four @ 0x1042f9e6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Returns true if the value at offset 0x20 of the object is not equal to 4.
 * summary:
 *   The function calls wait_sem_obj with the address of the field at offset 0x20 within the
 *   object pointed to by param_1. It compares the returned integer value against 4 and
 *   returns a boolean indicating whether they are different. The specific role of the field
 *   or the callee is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_field_not_equal_four(int param_1)

{
  int iVar1;
  
  iVar1 = wait_sem_obj((void *)(param_1 + 0x20));
  return iVar1 != 4;
}
