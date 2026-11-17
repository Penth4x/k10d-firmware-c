/* @k10d compute_three_values_from_object @ 0x104b86d6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Conditionally extracts three values from a class instance and passes them to a helper
 *   function.
 * summary:
 *   Checks a condition on param_1. If true, instantiates a cls_105a6d8c object, initializes
 *   it with a value from param_1, and retrieves three values via virtual method slot 2
 *   (indices 0xc, 0xd, 0xe). These values are passed to map_mode_params_to_index along with
 *   param_1. The result of map_mode_params_to_index is returned. The temporary object is
 *   deleted after use.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_three_values_from_object(int param_1)

{
  bool bVar4;
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar5;
  uintptr_t sp;
  uint32_t auStack_24 [7];
  
  bVar4 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  uVar5 = 0;
  if (bVar4) {
    cls_105a6d8c_new(auStack_24);
    copy_status_block_bytes(*(int *)(param_1 + 0x1c),auStack_24);
    iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0xc);
    iVar2 = extract_field_from_struct_1045ff0e((int)auStack_24,0xd);
    iVar3 = extract_field_from_struct_1045ff0e((int)auStack_24,0xe);
    uVar5 = map_mode_params_to_index(param_1,iVar1,iVar2,iVar3);
    delete_signal_semaphore((int *)(param_1 + 0x2c));
    cls_105a6d8c_delete(auStack_24,2);
  }
  return uVar5;
}
