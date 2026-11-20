/* @k10d invoke_context_handler @ 0x10465330
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls the handler stored at offset 0x400 of the context if present.
 * summary:
 *   Checks if the pointer at param_1 + 0x400 is NULL. If not, it calls
 *   cpucom_repost_request with that pointer and the current r5 register, returning the
 *   result. If NULL, it returns 0. This acts as a dispatcher for a specific handler slot
 *   within a context structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_context_handler(int param_1)

{
  uint32_t extraout_r4;
  uint32_t uVar1;
  uint8_t *r5_in;
  
  if (*(void **)(param_1 + 0x400) == 0) {
    uVar1 = 0;
  }
  else {
    cpucom_repost_request(*(void **)(param_1 + 0x400),r5_in);
    uVar1 = extraout_r4;
  }
  return uVar1;
}
