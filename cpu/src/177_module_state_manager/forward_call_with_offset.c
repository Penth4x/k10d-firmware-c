/* @k10d forward_call_with_offset @ 0x10484e28
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Forwards four arguments to read_structured_field, adding 0x14 to the first pointer
 *   argument.
 * summary:
 *   This is a thin wrapper that takes a void pointer and three integers, adds 0x14 to the
 *   pointer, and passes all four values to read_structured_field. It returns the 16-bit
 *   result from the callee directly. The specific role of read_structured_field is unknown,
 *   so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t forward_call_with_offset(void *param_1,int param_2,int param_3,int param_4)

{
  uint16_t uVar1;
  
  uVar1 = read_structured_field((int)param_1 + 0x14,param_2,param_3,param_4);
  return uVar1;
}
