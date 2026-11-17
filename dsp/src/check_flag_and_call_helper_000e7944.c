/* @k10d check_flag_and_call_helper_000e7944 @ 0x000e7944
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns 0 if bit 6 of DAT_0003c00f is clear, otherwise returns the result of
 *   call_subroutine_with_arg_9.
 * summary:
 *   The function tests bit 6 (0x40) of the global DAT_0003c00f. If the bit is not set, it
 *   returns 0. If the bit is set, it calls call_subroutine_with_arg_9 and returns its
 *   result. The role of DAT_0003c00f and call_subroutine_with_arg_9 is not determinable
 *   from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_flag_and_call_helper_000e7944(void)

{
  uint32_t uVar1;
  
  if ((DAT_0003c00f & 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = call_subroutine_with_arg_9();
  }
  return uVar1;
}
