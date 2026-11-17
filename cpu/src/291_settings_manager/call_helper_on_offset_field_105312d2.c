/* @k10d call_helper_on_offset_field_105312d2 @ 0x105312d2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls alloc_pool_and_init_task on the field at param_1+4 with fixed arguments 0xf,
 *   0x1000, 4 and returns 1.
 * summary:
 *   The function takes an object pointer (param_1), passes the address of its 4th byte
 *   (param_1 + 4) as the first argument to alloc_pool_and_init_task along with constants
 *   0xf, 0x1000, and 4. It then returns the constant 1. It is virtual method slot 2 of
 *   cls_1061e0fc. The specific role of alloc_pool_and_init_task is unknown, so the
 *   operation is described mechanically as invoking a helper on a specific object field.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_on_offset_field_105312d2(int param_1)

{
  alloc_pool_and_init_task((int *)(param_1 + 4),0xf,0x1000,4);
  return 1;
}
