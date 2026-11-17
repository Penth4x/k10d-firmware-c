/* @k10d alloc_and_zero_struct_104abf8c @ 0x104abf8c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 211_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x2c-byte structure on the heap and zero-initializes all of its fields.
 * summary:
 *   If the input pointer is NULL, it calls heap_alloc for 0x2c bytes. It then writes zero
 *   to the first byte and to the ten subsequent 4-byte words, covering the entire 0x2c-byte
 *   block. The function returns void, so the allocated pointer is not returned to the
 *   caller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_struct_104abf8c(uint8_t *param_1)

{
  if ((param_1 != (uint8_t *)0x0) ||
     (param_1 = (uint8_t *)heap_alloc((void *)0x2c), param_1 != (uint8_t *)0x0)) {
    *param_1 = 0;
    *(uint32_t *)(param_1 + 4) = 0;
    *(uint32_t *)(param_1 + 8) = 0;
    *(uint32_t *)(param_1 + 0xc) = 0;
    *(uint32_t *)(param_1 + 0x10) = 0;
    *(uint32_t *)(param_1 + 0x14) = 0;
    *(uint32_t *)(param_1 + 0x18) = 0;
    *(uint32_t *)(param_1 + 0x1c) = 0;
    *(uint32_t *)(param_1 + 0x20) = 0;
    *(uint32_t *)(param_1 + 0x24) = 0;
    *(uint32_t *)(param_1 + 0x28) = 0;
  }
  return;
}
