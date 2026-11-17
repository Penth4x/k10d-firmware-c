/* @k10d loop_write_32_blocks @ 0x104689e0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Iterates up to 32 times, calling a write helper with an incrementing offset and
 *   checking the result.
 * summary:
 *   The function loops 0x20 times, calling update_state_and_call_helper with an
 *   incrementing index and param_2. It then calls release_struct_fields_10466d06 and drains
 *   a queue via check_transaction_context_flag. It calls execute_multi_byte_transfer with a
 *   base pointer from param_1+0x240, a constant 0xf0, a running offset starting at
 *   _DAT_800042c0+0x800000, and length 0x2000. If the result does not match _DAT_105a7ce8,
 *   it returns 0. Otherwise it calls release_context_two_fields, drains another queue via
 *   check_transaction_context_valid, and increments the offset by 0x2000. Returns 1 on
 *   success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int loop_write_32_blocks(void *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 1;
  iVar4 = _DAT_800042c0/*SDRAM*/ + 0x800000;
  uVar2 = 0;
  do {
    update_state_and_call_helper(param_1,uVar2,param_2);
    release_struct_fields_10466d06(*(void **)((int)param_1 + 0x244));
    iVar1 = check_transaction_context_flag(*(int *)((int)param_1 + 0x244));
    while (iVar1 != 0) {
      iVar1 = check_transaction_context_flag(*(int *)((int)param_1 + 0x244));
    }
    iVar1 = execute_multi_byte_transfer(*(int *)((int)param_1 + 0x240),0xf0,iVar4,0x2000);
    if (iVar1 != _DAT_105a7ce8/*ROM*/) {
      iVar3 = 0;
    }
    release_context_two_fields(*(void **)((int)param_1 + 0x244));
    if (iVar3 != 0) {
      iVar1 = check_transaction_context_valid(*(int *)((int)param_1 + 0x244));
      while (iVar1 != 0) {
        iVar1 = check_transaction_context_valid(*(int *)((int)param_1 + 0x244));
      }
      iVar4 = iVar4 + 0x2000;
    }
    uVar2 = uVar2 + 1;
  } while ((uVar2 < 0x20) && (iVar3 != 0));
  return iVar3;
}
