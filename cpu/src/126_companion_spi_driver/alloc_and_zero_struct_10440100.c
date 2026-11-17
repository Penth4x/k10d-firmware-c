/* @k10d alloc_and_zero_struct_10440100 @ 0x10440100
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x34-byte heap block (or uses a provided pointer) and zeroes all 13 words.
 * summary:
 *   Takes an optional pointer; if NULL it calls heap_alloc(0x34). On success it writes zero
 *   to the first 13 uint32 slots of the block. The caller is virtual method slot 2 of
 *   cls_105a0adc, suggesting this is a constructor or reset routine for a 52-byte object,
 *   but the specific camera subsystem is not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_struct_10440100(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x34), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  return;
}
