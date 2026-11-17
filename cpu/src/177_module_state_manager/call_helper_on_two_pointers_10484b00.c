/* @k10d call_helper_on_two_pointers_10484b00 @ 0x10484b00
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes write_two_byte_field twice with the same arguments, using two different pointer
 *   values derived from param_1.
 * summary:
 *   The function takes a base pointer (param_1) and three additional parameters. It first
 *   calls write_two_byte_field with the address at offset 0x14 of param_1, then calls it
 *   again with the value stored at offset 0xc of param_1. The other three arguments
 *   (param_2, param_3, param_4) are passed unchanged to both calls. No other side effects
 *   or state modifications are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_two_pointers_10484b00(void *param_1,int param_2,int param_3,uint16_t param_4)

{
  write_two_byte_field((int)param_1 + 0x14,param_2,param_3,param_4);
  write_two_byte_field(*(int *)((int)param_1 + 0xc),param_2,param_3,param_4);
  return;
}
