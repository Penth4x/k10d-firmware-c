/* @k10d cpucom_request_clone @ 0x10465504
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed alloc_init_request_context)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a 0x18-byte context structure, optionally with a data buffer
 *   of param_2 bytes.
 * summary:
 *   Allocates a 0x18-byte structure via heap_alloc. Initializes fields at offsets 0, 8,
 *   0x10, and 0x14 to zero, and stores param_2 at offset 0xc. If param_2 is non-zero,
 *   allocates a data buffer of that size via heap_alloc_2 and stores the pointer at offset
 *   4. Returns the context pointer or NULL on allocation failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t * cpucom_request_clone(uint8_t *param_1,int param_2)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint8_t *)0x0) ||
     (param_1 = (uint8_t *)heap_alloc((void *)0x18), param_1 != (uint8_t *)0x0)) {
    *param_1 = 0;
    *(uint32_t *)(param_1 + 4) = 0;
    *(uint32_t *)(param_1 + 8) = 0;
    *(int *)(param_1 + 0xc) = param_2;
    *(uint32_t *)(param_1 + 0x10) = 0;
    *(uint32_t *)(param_1 + 0x14) = 0;
    if (param_2 != 0) {
      uVar1 = heap_alloc_2(param_2);
      *(uint32_t *)(param_1 + 4) = uVar1;
    }
  }
  return param_1;
}
