/* @k10d process_34_entry_sequence @ 0x104d81c0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Iterates through 34 entries, calling a handler for each if a lookup succeeds, after
 *   verifying three status flags.
 * summary:
 *   The function first checks three specific flags (indices 3, 4, and 1) via
 *   attempt_operation_with_fallbacks_104d827e. If all are set, it retrieves a base pointer
 *   from add_offset_to_pointer_104d65b6 and loops 0x22 (34) times. In each iteration, it
 *   calls read_byte_at_offset_0x88 with the current index; if that returns non-zero, it
 *   calls attempt_operation_with_fallbacks_104d82e0 with a mode parameter (2 for the first
 *   loop, 7 for the second). If any step fails, it jumps to cleanup. On success, it checks
 *   flag 0 and returns 1, otherwise 0. It calls toggle_object_state_flag with 0 in both
 *   success and failure paths.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_34_entry_sequence(uint32_t param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = return_r4_passthrough_104d800e();
  adjust_pointer_by_flag(uVar1,1);
  init_six_struct_members((void *)(uint32_t)param_1);
  iVar2 = attempt_operation_with_fallbacks_104d827e(param_1,3);
  if (((iVar2 != 0) && (iVar2 = attempt_operation_with_fallbacks_104d827e(param_1,4), iVar2 != 0)) &&
     (iVar2 = attempt_operation_with_fallbacks_104d827e(param_1,1), iVar2 != 0)) {
    uVar1 = return_r4_passthrough_104d800e();
    adjust_pointer_by_flag(uVar1,1);
    iVar2 = 0;
    uVar1 = add_offset_to_pointer_104d65b6((uint32_t)param_1);
    do {
      iVar3 = read_byte_at_offset_0x88(uVar1,iVar2);
      if ((iVar3 != 0) && (iVar3 = attempt_operation_with_fallbacks_104d82e0(param_1,2,iVar2), iVar3 == 0)) goto LAB_104d8266;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x22);
    iVar2 = 0;
    do {
      iVar3 = read_byte_at_offset_0x88(uVar1,iVar2);
      if ((iVar3 != 0) && (iVar3 = attempt_operation_with_fallbacks_104d82e0(param_1,7,iVar2), iVar3 == 0)) goto LAB_104d8266;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x22);
    iVar2 = attempt_operation_with_fallbacks_104d827e(param_1,0);
    if (iVar2 != 0) {
      toggle_object_state_flag(param_1,0);
      return 1;
    }
  }
LAB_104d8266:
  toggle_object_state_flag(param_1,0);
  return 0;
}
