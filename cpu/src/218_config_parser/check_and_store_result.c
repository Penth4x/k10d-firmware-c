/* @k10d check_and_store_result @ 0x104b6594
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 218_config_parser (unit names are model-proposed)
 * purpose:
 *   Calls two helper functions with the input parameters and stores the second result into
 *   a struct field.
 * summary:
 *   The function initializes two local variables to zero and passes them as output
 *   parameters to parse_line_terminated_record. If that call returns non-zero, it calls
 *   evaluate_comparison_expression, stores the result in the byte at offset 0x85 of the
 *   first parameter, and conditionally updates a local variable. Finally, it writes the
 *   local variable to offset 0x78 of the first parameter and returns 1 if the first check
 *   passed, or 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_store_result(uint32_t *param_1,byte *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint uStack_10;
  uint uStack_c;
  
  uStack_10 = 0;
  uStack_c = 0;
  iVar1 = parse_line_terminated_record((int)param_1,param_2,&uStack_10,&uStack_c);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = evaluate_comparison_expression(param_1,param_2,__frv_reg_unset(6),(void *)__frv_reg_unset(7));
    *(char *)(param_1 + 0x85) = (char)iVar1;
    if (iVar1 == 1) {
      uStack_c = uStack_10;
    }
    param_1[0x78] = uStack_c;
    uVar2 = 1;
  }
  return uVar2;
}
