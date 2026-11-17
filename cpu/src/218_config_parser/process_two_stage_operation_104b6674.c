/* @k10d process_two_stage_operation_104b6674 @ 0x104b6674
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 218_config_parser (unit names are model-proposed)
 * purpose:
 *   Executes a two-stage operation on a state object, storing results in specific fields.
 * summary:
 *   The function first calls parse_line_terminated_record with the state object and a
 *   second parameter. If this initial call succeeds (returns non-zero), it calls
 *   evaluate_comparison_expression. The result of the second call is stored at offset 0x215
 *   in the state object. Depending on whether this result is 1, a flag at offset 0x79 is
 *   set to 1 or 0. A value from offset 0x7a is copied to offset 0x78. The function returns
 *   1 if the second stage was executed, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_two_stage_operation_104b6674(uint32_t *param_1,byte *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  param_1[0x7b] = param_1[4];
  iVar1 = parse_line_terminated_record((int)param_1,param_2,&uStack_c,param_1 + 0x7a);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = evaluate_comparison_expression(param_1,param_2,__frv_reg_unset(6),(void *)__frv_reg_unset(7));
    *(char *)((int)param_1 + 0x215) = (char)iVar1;
    if (iVar1 == 1) {
      *(uint8_t *)(param_1 + 0x79) = 1;
    }
    else {
      *(uint8_t *)(param_1 + 0x79) = 0;
      uStack_c = param_1[0x7a];
    }
    param_1[0x78] = uStack_c;
    uVar2 = 1;
  }
  return uVar2;
}
