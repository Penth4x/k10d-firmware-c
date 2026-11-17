/* @k10d call_subroutine_with_offset8 @ 0x1047682e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte value at param_1+8 and passes it as the sole argument to
 *   get_curve_point_value, returning that result.
 * summary:
 *   This is a one-line trampoline. It dereferences the field at offset 8 of the object
 *   pointed to by param_1 and forwards it to the callee get_curve_point_value, whose role
 *   is unknown. The return value of the callee is returned unchanged. No other side effects
 *   are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_offset8(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = get_curve_point_value(*(uint32_t *)(param_1 + 8), __frv_reg_unset(5));
  return uVar1;
}
