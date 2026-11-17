/* @k10d call_subroutine_on_offset_field_1047ab9e @ 0x1047ab9e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on the object's field at offset 0x48 and returns 1.
 * summary:
 *   This is virtual slot 3 of cls_105aa8bc. It takes the object pointer (param_1), adds
 *   0x48 to address a member field, and passes that address to zero_six_bytes. It
 *   unconditionally returns 1. The specific role of the field at 0x48 and the callee's
 *   behavior are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_on_offset_field_1047ab9e(int param_1)

{
  zero_six_bytes((void *)(param_1 + 0x48));
  return 1;
}
