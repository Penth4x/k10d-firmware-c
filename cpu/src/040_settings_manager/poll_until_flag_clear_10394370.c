/* @k10d poll_until_flag_clear_10394370 @ 0x10394370
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Polls a status source in a loop until it returns zero or a byte at offset 0x4d in the
 *   context is non-zero.
 * summary:
 *   The function initializes a return value to 1 and enters a do-while loop guarded by the
 *   result of get_field_at_offset_0x28(get_or_create_singleton_object_1050b118()). Inside
 *   the loop, it checks if the byte at param_1 + 0x4d is non-zero; if so, it sets the
 *   return value to 0 and breaks. Otherwise, it calls
 *   check_kernel_call_success_10459fea(10), and on the first iteration, calls
 *   reset_and_select_channel_1039a462 and set_and_apply_object_flag with specific
 *   arguments. After the loop, if the initial flag was not set, it calls
 *   reset_and_select_channel_1039a462 and set_and_apply_object_flag with cleanup arguments
 *   (0xffffffff and 0). The specific subsystem is not identifiable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_until_flag_clear_10394370(int param_1)

{
  bool bVar1;
  int iVar2;
  uint32_t uVar3;
  
  bVar1 = true;
  iVar2 = get_or_create_singleton_object_1050b118();
  iVar2 = get_field_at_offset_0x28(iVar2);
  uVar3 = 1;
  if (iVar2 != 0) {
    do {
      if (*(char *)(param_1 + 0x4d) != '\0') {
        uVar3 = 0;
        break;
      }
      check_kernel_call_success_10459fea();
      if (bVar1) {
        reset_and_select_channel_1039a462(param_1 + 4,5);
        set_and_apply_object_flag(param_1,1);
        bVar1 = false;
      }
      iVar2 = get_or_create_singleton_object_1050b118();
      iVar2 = get_field_at_offset_0x28(iVar2);
    } while (iVar2 != 0);
  }
  if (!bVar1) {
    reset_and_select_channel_1039a462(param_1 + 4,0xffffffff);
    set_and_apply_object_flag(param_1,0);
  }
  return uVar3;
}
