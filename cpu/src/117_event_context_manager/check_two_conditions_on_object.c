/* @k10d check_two_conditions_on_object @ 0x1043297e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 117_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Returns 0 if a first check on field 0x38 is zero and a second check on field 0x6c
 *   equals 2, otherwise returns 1.
 * summary:
 *   The function takes an object pointer and reads the 32-bit field at offset 0x38, passing
 *   it to check_field_not_equal_four. If that call returns 0, it then reads the field at
 *   offset 0x6c and passes it to wait_sem_obj. If the second call returns 2, the function
 *   returns 0; in all other cases it returns 1. The specific roles of the two callee
 *   functions and the object fields are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_conditions_on_object(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = check_field_not_equal_four(*(uint32_t *)((int)param_1 + 0x38));
  if ((iVar1 == 0) && (iVar1 = wait_sem_obj((void *)((int)param_1 + 0x6c)), iVar1 == 2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
