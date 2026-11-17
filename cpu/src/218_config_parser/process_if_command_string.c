/* @k10d process_if_command_string @ 0x104b65e0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 218_config_parser (unit names are model-proposed)
 * purpose:
 *   Checks for an 'if' prefix in a command string and dispatches to a handler if found.
 * summary:
 *   The function first calls parse_line_terminated_record to validate or parse the input.
 *   If successful and a flag at offset 0x85 is clear, it checks if the command string
 *   starts with 'if' or 'IF'. If so, it blanks the prefix, calls
 *   strip_whitespace_and_check_comment and evaluate_comparison_expression, and stores the
 *   result in the flag. Otherwise, it sets the flag to 1. Finally, it writes a value from
 *   the stack to offset 0x78 of the object and returns 1 on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104b662a) overlaps instruction at (ram,0x104b6628)
    */

uint32_t process_if_command_string(uint32_t *param_1,char *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint uStack_10;
  uint uStack_c;
  
  uStack_10 = 0;
  uStack_c = 0;
  iVar1 = parse_line_terminated_record((int)param_1,param_2,&uStack_10,&uStack_c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x85) == '\0') {
      if (((*param_2 == 'i') || (*param_2 == 'I')) && ((param_2[1] == 'f' || (param_2[1] == 'F'))))
      {
        *param_2 = ' ';
        param_2[1] = ' ';
        strip_whitespace_and_check_comment(param_1,param_2);
        iVar1 = evaluate_comparison_expression(param_1,param_2,__frv_reg_unset(6),(void *)__frv_reg_unset(7));
        *(char *)(param_1 + 0x85) = (char)iVar1;
        if (iVar1 == 1) {
          uStack_c = uStack_10;
        }
      }
      else {
        *(uint8_t *)(param_1 + 0x85) = 1;
        uStack_c = uStack_10;
      }
    }
    param_1[0x78] = uStack_c;
    uVar2 = 1;
  }
  return uVar2;
}
