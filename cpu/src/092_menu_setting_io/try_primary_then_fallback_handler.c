/* @k10d try_primary_then_fallback_handler @ 0x1040a700
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Attempts a primary operation via extract_and_check_struct_fields if a flag is set,
 *   otherwise falls back to retry_operation_until_state_matches.
 * summary:
 *   Checks a boolean flag from reset_and_reinit_if_flag_set on a field at offset 0x48 of
 *   param_1. If true, it calls extract_and_check_struct_fields with two stack-allocated
 *   pointers; on success, it reads fields from param_1 (offsets 0x30-0x58) and calls
 *   write_two_stage_command, returning 1 if the result is not 0 or 2. If the flag is false
 *   or the primary path fails, it calls and returns the result of
 *   retry_operation_until_state_matches.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t try_primary_then_fallback_handler(void *param_1,uint8_t *param_2,uint *param_3,uint32_t *param_4)

{
  bool bVar1;
  int extraout_r4;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t auStack_24 [8];
  uint8_t auStack_c [2];
  uint8_t auStack_a [2];
  
  piVar5 = (int *)auStack_24;
  bVar1 = reset_and_reinit_if_flag_set((int *)((int)param_1 + 0x48));
  if (bVar1) {
    *piVar5 = (int)auStack_c;
    piVar5[1] = (int)auStack_a;
    bVar1 = extract_and_check_struct_fields((int)param_1,param_2,param_3,param_4,(uint16_t *)*piVar5,
                         (uint16_t *)piVar5[1]);
    if (bVar1) {
      uVar2 = *(uint32_t *)((int)param_1 + 0x58);
      uVar3 = *(uint32_t *)((int)param_1 + 0x38);
      uVar4 = *(uint32_t *)((int)param_1 + 0x30);
      *piVar5 = *(uint32_t *)((int)param_1 + 0x34);
      piVar5[1] = uVar4;
      write_two_stage_command(param_1,0,uVar2,uVar3,*piVar5,piVar5[1]);
      if ((extraout_r4 != 2) && (extraout_r4 != 0)) {
        return 1;
      }
    }
  }
  uVar2 = retry_operation_until_state_matches(param_1,param_2,param_3,param_4);
  return uVar2;
}
