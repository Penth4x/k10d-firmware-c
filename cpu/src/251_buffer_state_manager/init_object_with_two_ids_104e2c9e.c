/* @k10d init_object_with_two_ids_104e2c9e @ 0x104e2c9e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling setup helpers and conditionally setting fields at
 *   offsets 0x24 and 0x48.
 * summary:
 *   Calls release_object_members and validate_sequence_counter on param_1. If
 *   validate_sequence_counter returns non-zero, calls dispatch_virtual_slot_two_104df936
 *   with constants 0x1004 and 0x14, invokes two function pointers at 0x104e0324 and
 *   0x104e032c with param_3, and writes 2 and 3 to offsets 0x24 and 0x48 of param_3.
 *   Returns 1 on success, 9 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_two_ids_104e2c9e(int *param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  release_object_members(param_1);
  iVar1 = validate_sequence_counter(param_1);
  uVar2 = 9;
  if (iVar1 != 0) {
    dispatch_virtual_slot_two_104df936(param_1,0x1004,0x14);
    (*(code *)0x104e0324/*ROM*/)(param_3,1);
    (*(code *)0x104e032c/*ROM*/)(param_3,0x10001);
    *(uint32_t *)(param_3 + 0x24) = 2;
    *(uint32_t *)(param_3 + 0x48) = 3;
    uVar2 = 1;
  }
  return uVar2;
}
