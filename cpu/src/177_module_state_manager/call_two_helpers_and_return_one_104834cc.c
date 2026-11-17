/* @k10d call_two_helpers_and_return_one_104834cc @ 0x104834cc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions with the object pointer and a no-arg function, then
 *   returns 1.
 * summary:
 *   This is virtual slot 3 of class cls_105ab8ac. It passes the object pointer (param_1) to
 *   call_three_initializers_104835b2, then calls copy_564_bytes_to_sram with no arguments,
 *   and finally returns the constant 1. The specific roles of the two callees are unknown,
 *   so the function's behavior is described mechanically as a sequence of two calls
 *   followed by a constant return.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_and_return_one_104834cc(void *param_1)

{
  call_three_initializers_104835b2(param_1);
  copy_564_bytes_to_sram();
  return 1;
}
