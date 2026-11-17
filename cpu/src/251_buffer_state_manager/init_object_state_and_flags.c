/* @k10d init_object_state_and_flags @ 0x104e15f8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling two setup routines and setting a field to 6.
 * summary:
 *   The function takes a pointer to an object (param_1) and calls two unnamed
 *   initialization functions, release_object_members and validate_sequence_counter, passing
 *   the object pointer to both. It then writes the value 6 to the memory location at offset
 *   0x34 from the pointer stored in param_1[1]. Finally, it returns 1. The specific roles
 *   of the callees and the meaning of the field at offset 0x34 are not determinable from
 *   the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_state_and_flags(int *param_1)

{
  release_object_members(param_1);
  validate_sequence_counter(param_1);
  *(uint32_t *)(param_1[1] + 0x34) = 6;
  return 1;
}
