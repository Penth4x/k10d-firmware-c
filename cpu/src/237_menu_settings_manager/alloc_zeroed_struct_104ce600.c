/* @k10d alloc_zeroed_struct_104ce600 @ 0x104ce600
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 12-byte heap block and zeroes its three 32-bit fields, or uses a provided
 *   pointer.
 * summary:
 *   If param_1 is NULL, it calls heap_alloc(0xc) to obtain a 12-byte block. It then writes
 *   0 to the first three 32-bit words of the resulting pointer. The function returns void,
 *   so the allocated pointer is not returned to the caller, implying the caller may manage
 *   the pointer separately or this is a helper for a specific initialization pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_zeroed_struct_104ce600(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
