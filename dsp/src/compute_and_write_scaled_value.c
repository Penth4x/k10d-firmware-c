/* @k10d compute_and_write_scaled_value @ 0x000c168e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Scales the return value of compute_flag_based_value by 3/4, adds 0x5c, and passes the
 *   result to clamp_value_to_range_000d9ac0 with constants 0x1c and DAT_0003c578.
 * summary:
 *   The function calls compute_flag_based_value to obtain an integer value. It performs a
 *   fixed-point multiplication by 3 (via shift and add) and adds the offset 0x5c. The
 *   resulting short value is passed as the first argument to clamp_value_to_range_000d9ac0,
 *   along with the constant 0x1c and the global DAT_0003c578. The specific roles of the
 *   callees and the global are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_and_write_scaled_value(void)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = compute_flag_based_value();
  uVar2 = clamp_value_to_range_000d9ac0((int)(short)((short)((uint)(iVar1 * 3) >> 2) + 0x5c),0x1c,DAT_0003c578);
  return uVar2;
}
