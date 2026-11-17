/* @k10d alloc_and_zero_struct_104b247a @ 0x104b247a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x4c-byte heap block (or uses a provided pointer) and zeroes all 19 words
 *   of it.
 * summary:
 *   If param_1 is NULL, calls heap_alloc(0x4c) to obtain a 76-byte buffer; otherwise uses
 *   the caller-supplied pointer. In either case, writes zero to every 4-byte slot (indices
 *   0..0x12) plus one explicit byte at offset 0x18, fully clearing the structure. No other
 *   side effects or device I/O are performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_struct_104b247a(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x4c), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(uint8_t *)(param_1 + 6) = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  return;
}
