/* @k10d query_and_store_pair @ 0x10474e28
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Queries a state value from an object, performs conditional updates, and stores two
 *   16-bit results into a pointer.
 * summary:
 *   The function initializes a local variable to zero and passes it to
 *   read_field_at_offset_eight_104766f6 using a field at offset 8 of the first argument. If
 *   the result is non-zero, it retrieves a value via
 *   call_helper_with_field_at_offset_8_104767e6, calls
 *   invoke_virtual_slot_two_and_store_result and check_and_fetch_value_10476550 with that
 *   value, and potentially calls iterate_until_condition_met. It then retrieves another
 *   value via call_helper_with_offset_c_10476666 and writes both values as 16-bit shorts to
 *   the memory location pointed to by param_2. Returns 1 on success (non-zero initial
 *   state) or 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_and_store_pair(int param_1,uint16_t *param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  int iStack_10;
  int iStack_c;
  
  iStack_10 = 0;
  iStack_c = 0;
  read_field_at_offset_eight_104766f6(*(uint32_t *)(param_1 + 8),&iStack_10);
  uVar3 = 0;
  if (iStack_10 != 0) {
    iVar1 = call_helper_with_field_at_offset_8_104767e6(*(int *)(param_1 + 8));
    invoke_virtual_slot_two_and_store_result(*(uint32_t *)(param_1 + 8),iVar1,*(uint32_t *)(param_1 + 0xc));
    check_and_fetch_value_10476550(*(uint32_t *)(param_1 + 8),iVar1,&iStack_c);
    if (iStack_c == 0) {
      iVar1 = iterate_until_condition_met(param_1,iVar1);
      iVar2 = call_helper_with_field_at_offset_8_104767e6(*(int *)(param_1 + 8));
      if (iVar1 == iVar2) {
        return 0;
      }
    }
    uVar3 = call_helper_with_offset_c_10476666(*(int *)(param_1 + 8));
    *param_2 = (short)iVar1;
    param_2[1] = (short)uVar3;
    uVar3 = 1;
  }
  return uVar3;
}
