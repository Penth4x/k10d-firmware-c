/* @k10d validate_buffer_copy @ 0x104de31a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Checks that a buffer descriptor is valid and non-empty, then attempts a copy via an
 *   unknown callee.
 * summary:
 *   The function first verifies that the pointer stored in *param_1 is non-NULL and that
 *   the length field param_1[1] is at least param_3. If these checks pass and param_2 is
 *   non-NULL, it calls compare_buffer_bytes with param_2, the buffer pointer, and the
 *   length. It returns 1 if the callee returns 0 (success), otherwise 0. The specific role
 *   of compare_buffer_bytes is unknown, so the exact nature of the operation (e.g., memcpy,
 *   DMA, validation) cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_buffer_copy(uint32_t *param_1,void *param_2,uint param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  if (((void *)*param_1 == (void *)0x0) || ((uint)param_1[1] < param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (param_2 != (void *)0x0) {
      iVar2 = compare_buffer_bytes(param_2,(void *)*param_1,param_3);
      uVar1 = 1;
      if (iVar2 != 0) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}
