/* @k10d process_event_with_callback_104742be @ 0x104742be
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates an event, invokes a virtual method on an associated object, and dispatches
 *   the result to two handlers.
 * summary:
 *   The function first calls check_and_fetch_value_10476550 to check a condition using
 *   param_1 and param_2. If valid, it retrieves an object pointer via
 *   call_helper_with_field_at_offset_8_10476864 and calls virtual slot 2 (offset 0x14) on
 *   it. The result is passed to copy_8_byte_block_if_valid along with a field from param_1.
 *   It then calls a function at 0x104779aa and passes the result to
 *   call_handler_with_lock_10480ea2. If the final check succeeds, it calls
 *   call_helper_with_field_at_offset_8_10476852 and returns 1, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_event_with_callback_104742be(int param_1,uint32_t param_2)

{
  int iVar1;
  int *piVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uintptr_t sp;
  int iStack_c;
  
  iStack_c = 0;
  iVar1 = check_and_fetch_value_10476550(*(uint32_t *)(param_1 + 8),param_2,&iStack_c);
  uVar5 = 0;
  if (((iVar1 != 0) && (iStack_c == 0)) &&
     (piVar2 = (int *)call_helper_with_field_at_offset_8_10476864(*(int *)(param_1 + 8)), piVar2 != (int *)0x0)) {
    uVar4 = *(uint32_t *)(param_1 + 0x10);
    uVar3 = (((vtbl_entry*)(*piVar2))[2].fn)((int)((vtbl_entry*)(*piVar2))[2].adj + (int)piVar2);
    copy_8_byte_block_if_valid(uVar4,(void*)(uVar3));
    uVar4 = *(uint32_t *)(param_1 + 4);
    uVar3 = (*(code *)0x104779aa/*ROM*/)(*(uint32_t *)(param_1 + 0x10));
    iVar1 = call_handler_with_lock_10480ea2(uVar4,uVar3);
    if (iVar1 != 0) {
      call_helper_with_field_at_offset_8_10476852(*(uint32_t *)(param_1 + 8),param_2);
      uVar5 = 1;
    }
  }
  return uVar5;
}
