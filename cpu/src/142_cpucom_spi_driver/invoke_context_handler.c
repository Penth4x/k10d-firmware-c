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

uint32_t invoke_context_handler(int param_1, uint8_t *param_2)

{
  uint32_t extraout_r4;
  uint32_t uVar1;
  /* caller_rN FIX (d329): the reposted MESSAGE arrived in r5 (the decompiler dropped it to an unassigned
   * r5_in local, so the recompiled code reposted garbage -> spurious 0x80 companion command -> MENU LAYER-3
   * crash). Now an explicit param, supplied by get_registered_reply_code as its ctx's message field param_1[6]. */
  if (*(void **)(param_1 + 0x400) == 0) {
    uVar1 = 0;
  }
  else {
    cpucom_repost_request(*(void **)(param_1 + 0x400),param_2);
    uVar1 = extraout_r4;
  }
  return uVar1;
}
