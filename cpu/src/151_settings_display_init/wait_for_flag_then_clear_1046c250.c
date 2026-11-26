/* @k10d wait_for_flag_then_clear_1046c250 @ 0x1046c250
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 151_settings_display_init (unit names are model-proposed)
 * purpose:
 *   Polls a flag at param_1+4 until it is zero, calling a clear routine each iteration.
 * summary:
 *   The function reads a value from the memory location param_1+4 via
 *   call_virtual_slot_2_10459ae6. It loops while this value is non-zero, calling
 *   check_kernel_call_success_10459fea(1) on each pass. Once the value becomes zero, the
 *   loop exits and the function returns 1. The specific roles of the callees are unknown,
 *   but the pattern is a standard busy-wait or polling loop for a status flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t wait_for_flag_then_clear_1046c250(int param_1)

{
  int iVar1;
  
  iVar1 = call_virtual_slot_2_10459ae6(param_1 + 4);
  while (iVar1 != 0) {
    check_kernel_call_success_10459fea(0x1);
    iVar1 = call_virtual_slot_2_10459ae6(param_1 + 4);
  }
  return 1;
}
