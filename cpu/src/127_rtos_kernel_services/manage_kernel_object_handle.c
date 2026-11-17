/* @k10d manage_kernel_object_handle @ 0x10459554
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Validates, creates, or destroys a kernel object handle stored in a two-word structure
 *   based on a state parameter.
 * summary:
 *   The function treats param_1 as a pointer to a structure containing an object ID
 *   (param_1[0]) and a state/type (param_1[1]). It calls activate_timeout_queue_entry to
 *   check validity, cancel_timeout_queue_entry to release resources, and
 *   remove_node_from_timeout_queue_1000e46c to query status. If the object is invalid and
 *   param_2 is non-zero, it allocates a new object via find_free_tcb_slot_1000d6e4, updates
 *   the structure with the new ID and state, and returns the result of a final validity
 *   check. The module context suggests these are wrappers for REALOS kernel primitives.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool manage_kernel_object_handle(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t local_18;
  int *piStack_14;
  code *pcStack_10;
  int iStack_c;
  uint32_t uStack_8;
  
  iVar2 = -3;
  if (0 < *param_1) {
    sVar1 = (short)*param_1;
    if (param_2 < 1) {
      if (param_2 == 0) {
        iVar2 = activate_timeout_queue_entry((int)sVar1);
      }
    }
    else {
      if (param_2 == param_1[1]) {
        iVar2 = activate_timeout_queue_entry((int)sVar1);
        return iVar2 == 0;
      }
      cancel_timeout_queue_entry((int)sVar1);
      iVar2 = remove_node_from_timeout_queue_1000e46c((int)(short)*param_1);
      if (iVar2 == 0) {
        *param_1 = 0;
        local_18 = 0;
        uStack_8 = 0;
        pcStack_10 = (code *)call_virtual_slot_two_1045962a;
        piStack_14 = param_1;
        iStack_c = param_2;
        iVar2 = find_free_tcb_slot_1000d6e4((void *)&local_18);
        if (0 < iVar2) {
          *param_1 = iVar2;
          param_1[1] = param_2;
          iVar2 = activate_timeout_queue_entry((int)(short)iVar2);
          return iVar2 == 0;
        }
      }
    }
  }
  return iVar2 == 0;
}
