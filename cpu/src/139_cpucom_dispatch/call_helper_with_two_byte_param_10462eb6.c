/* @k10d call_helper_with_two_byte_param_10462eb6 @ 0x10462eb6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Splits a 16-bit parameter into two bytes and passes them to a helper function.
 * summary:
 *   The function takes a pointer and a 16-bit value. It stores the low and high bytes of
 *   the value on the stack and calls issue_indexed_command_and_wait with the pointer, a
 *   pointer to the next element, the constant 0x13, a pointer to the stack bytes, and 0. It
 *   returns the result of the helper call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_two_byte_param_10462eb6(int *param_1,uint32_t param_2)

{
  int iVar1;
  uintptr_t sp;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  uStack_9 = (uint8_t)param_2;
  uStack_a = (uint8_t)((uint)param_2 >> 8);
  iVar1 = issue_indexed_command_and_wait(param_1,param_1 + 1,0x13,&uStack_a,0);
  return iVar1;
}
