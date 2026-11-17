/* @k10d alloc_and_zero_struct_10508a50 @ 0x10508a50
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x34-byte heap block and zeroes most of its fields, returning the pointer.
 * summary:
 *   If param_1 is NULL it calls heap_alloc(0x34); on success it sets the first word to 0,
 *   calls alloc_and_init_small_object on the second word, and explicitly zeroes a series of
 *   byte and word fields across the 0x34-byte structure. The function returns the (possibly
 *   caller-provided) pointer in r4. The role of the structure and the purpose of
 *   alloc_and_init_small_object are not determinable from the given pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * alloc_and_zero_struct_10508a50(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x34), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    alloc_and_init_small_object(param_1 + 1);
    *(uint8_t *)(param_1 + 6) = 0;
    *(uint8_t *)(param_1 + 7) = 0;
    *(uint8_t *)((int)param_1 + 0x1d) = 0;
    *(uint8_t *)((int)param_1 + 0x1e) = 0;
    *(uint8_t *)((int)param_1 + 0x1f) = 0;
    *(uint8_t *)(param_1 + 8) = 0;
    *(uint8_t *)((int)param_1 + 0x21) = 0;
    *(uint8_t *)((int)param_1 + 0x22) = 0;
    *(uint8_t *)((int)param_1 + 0x23) = 0;
    *(uint8_t *)(param_1 + 9) = 0;
    param_1[10] = 0;
    *(uint8_t *)(param_1 + 0xb) = 0;
    *(uint8_t *)((int)param_1 + 0x2d) = 0;
    param_1[0xc] = 0;
  }
  return param_1;
}
