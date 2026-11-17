/* @k10d init_system_parameter_block @ 0x10536110
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and zero-initializes a 0x30-byte system parameter structure, setting one
 *   field via a helper call.
 * summary:
 *   The function either uses the provided pointer or allocates a 0x30-byte block from the
 *   heap. It zeroes out most of the structure's fields, including a byte at offset 0x14 and
 *   another at offset 0x2c. It calls cls_10621c28_new_10535e14 with 0 to initialize the
 *   field at offset 0x10. This appears to be a constructor or initialization routine for a
 *   system parameter object within the system_parameter_store module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * init_system_parameter_block(uint32_t *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x30), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar1 = cls_10621c28_new_10535e14(0);
    param_1[4] = uVar1;
    *(uint8_t *)(param_1 + 5) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *(uint8_t *)(param_1 + 0xb) = 0;
  }
  return param_1;
}
