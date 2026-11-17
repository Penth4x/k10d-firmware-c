/* @k10d call_subroutine_with_offset_0x20 @ 0x1039c526
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the value at param_1+0x20 and param_2 to app_obj_factory and returns its result.
 * summary:
 *   This is a thin wrapper that extracts a field from the object pointed to by param_1 (at
 *   offset 0x20) and forwards it along with param_2 to app_obj_factory. The return value of
 *   app_obj_factory is passed directly back to the caller. No other side effects or state
 *   modifications are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_offset_0x20(int param_1,void *param_2)

{
  uint32_t uVar1;
  
  uVar1 = (uint32_t)app_obj_factory((void *)(*(uint32_t *)(param_1 + 0x20)),param_2,0,0);
  return uVar1;
}
