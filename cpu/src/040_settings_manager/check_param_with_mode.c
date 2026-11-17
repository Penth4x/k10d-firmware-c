/* @k10d check_param_with_mode @ 0x10396214
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates a parameter against a mode-specific condition and returns a success/failure
 *   flag.
 * summary:
 *   The function retrieves two values via add_offset_to_pointer_104d65b6 and
 *   map_index_to_code_and_dispatch, combines them with find_entry_by_key_in_table, and then
 *   branches on param_2 to call read_byte_from_struct_offset_104d5b30 with a mode-specific
 *   argument (3, 2, or 1). It returns 0 if the check passes (iVar3 == 0) or if param_2 is
 *   0, otherwise it returns 1. The specific subsystem is not identifiable from the
 *   available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_param_with_mode(uint32_t param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t uVar4;
  
  uVar4 = 1;
  uVar1 = add_offset_to_pointer_104d65b6(param_3);
  uVar2 = map_index_to_code_and_dispatch(param_1);
  uVar1 = find_entry_by_key_in_table(uVar1,uVar2);
  if (param_2 != 0) {
    if (param_2 == 1) {
      iVar3 = read_byte_from_struct_offset_104d5b30(uVar1,3);
    }
    else if (param_2 == 2) {
      iVar3 = read_byte_from_struct_offset_104d5b30(uVar1,2);
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      iVar3 = read_byte_from_struct_offset_104d5b30(uVar1,1);
    }
    if (iVar3 == 0) {
      uVar4 = 0;
    }
  }
  return uVar4;
}
