/* @k10d execute_repeat_shutter_script @ 0x104b6884
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 218_config_parser (unit names are model-proposed)
 * purpose:
 *   Initializes a sequence object, iterates through a string of commands, and dispatches
 *   each character to a handler.
 * summary:
 *   The function calls initialization routines on the object pointed to by param_1. It then
 *   reads a count from the object (param_1[0x1f]) and loops, calling
 *   parse_numeric_expression to retrieve a value from the string param_2 and passing it to
 *   camera_shutter_trigger. The loop terminates when the string is exhausted or the count
 *   is reached. Finally, it calls script_dispatcher with two previously retrieved values
 *   and returns the result of a comparison.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool execute_repeat_shutter_script(uint32_t *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *r7_in;
  int iVar5;
  uint32_t uVar6;
  
  poll_until_bit16_clear(param_1);
  call_subroutine_with_offset_104b746c(*param_1);
  uVar1 = parse_numeric_expression(param_1,0,param_2,r7_in);
  uVar2 = parse_numeric_expression(param_1,0,param_2,r7_in);
  if (*param_2 == '\0') {
    param_1[0x1f] = 0;
  }
  else {
    uVar3 = parse_numeric_expression(param_1,0,param_2,r7_in);
    param_1[0x1f] = uVar3;
  }
  store_value_at_offset_0x870(*param_1,param_1[0x1f]);
  iVar4 = param_1[0x1f];
  iVar5 = 0;
  if ((*param_2 != '\0') && (0 < iVar4)) {
    do {
      uVar6 = *param_1;
      uVar3 = parse_numeric_expression(param_1,0,param_2,r7_in);
      camera_shutter_trigger(uVar6,uVar3,iVar5);
      iVar5 = iVar5 + 1;
      if (*param_2 == '\0') break;
    } while (iVar5 < iVar4);
  }
  iVar4 = script_dispatcher(param_1,uVar1,uVar2);
  return iVar4 != 1;
}
