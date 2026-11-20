/* @k10d create_message_box_104594ea @ 0x104594ea
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Creates a ÃÂµITRON message box with the given capacity and stores the resulting kernel
 *   object ID in the caller's pointer.
 * summary:
 *   Validates that param_2 (capacity) is at least 1, then builds a stack-allocated
 *   descriptor struct (pointing to call_virtual_slot_two_1045962a as a callback/attribute,
 *   with param_1 and param_2 as fields) and passes it to find_free_tcb_slot_1000d6e4. On
 *   success (return >= 1), it writes the new object ID into *param_1 and the capacity into
 *   param_1[1]. On failure it maps kernel error codes (0, -0x21) to 0 and -1 respectively,
 *   defaulting to -3. The source module is verified as rtos_wrappers_and_heap, and the
 *   pattern matches a cre_mbx wrapper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

int create_message_box_104594ea(int *param_1,int param_2)

{
  struct {
    uint32_t uStack_18;
    int * piStack_14;
    code * pcStack_10;
    int iStack_c;
    uint32_t uStack_8;
  } _cfg_18;
  int iVar1;
  uintptr_t sp;
  if (param_2 < 1) {
    iVar1 = -3;
  }
  else {
    _cfg_18.uStack_18 = 0;
    _cfg_18.uStack_8 = 0;
    _cfg_18.pcStack_10 = call_virtual_slot_two_1045962a;
    _cfg_18.piStack_14 = param_1;
    _cfg_18.iStack_c = param_2;
    iVar1 = __trap_find_free_tcb_slot_1000d6e4(&_cfg_18.uStack_18);
    *param_1 = 0;
    if (iVar1 < 1) {
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else if (iVar1 == -0x21) {
        iVar1 = -1;
      }
      else {
        iVar1 = -3;
      }
    }
    else {
      *param_1 = iVar1;
      param_1[1] = param_2;
    }
  }
  return iVar1;
}
