/* @k10d init_object_with_two_ids_104e1178 @ 0x104e1178
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling two helpers and conditionally setting up a sub-object
 *   with a virtual call.
 * summary:
 *   Calls release_object_members and validate_sequence_counter on the input pointer. If the
 *   second call returns non-zero, it writes 0x100c to a sub-object, invokes a virtual
 *   method (slot 5) with argument 0x80, copies a value from the parent, and sets two fields
 *   to 3 and 1. Returns 9 on failure or 1 on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_two_ids_104e1178(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  release_object_members(param_1);
  iVar1 = validate_sequence_counter(param_1);
  if (iVar1 == 0) {
    uVar2 = 9;
  }
  else {
    *(uint16_t *)(param_1[4] + 4) = 0x100c;
    iVar1 = *(int *)(param_1[4] + 0x40);
    (**(code **)(iVar1 + 0x34))(param_1[4] + (int)*(short *)(iVar1 + 0x30),0x80);
    uVar2 = 1;
    *(uint32_t *)(param_1[4] + 0xc) = *(uint32_t *)(*param_1 + 0xc);
    *(uint32_t *)(param_1[1] + 0x30) = 3;
    *(uint32_t *)(param_1[1] + 0x34) = 1;
  }
  return uVar2;
}
