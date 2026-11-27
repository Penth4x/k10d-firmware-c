/* @k10d get_registered_reply_code @ 0x104651cc
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the CPUCOM reply code stored at offset 0x44 of the transaction context, or 0 if
 *   none is set.
 * summary:
 *   Reads the integer at param_1+0x44. If it is zero, returns 0. Otherwise passes that
 *   value to invoke_context_handler and returns the result. Given the module context
 *   (cpucom_spi_driver) and the neighboring verified function cpucom_register_cmd which
 *   registers a context under a reply code, this function likely retrieves or validates the
 *   registered reply code for a transaction context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_registered_reply_code(void *param_1)

{
  uint32_t uVar1;
  
  if (*(int *)((int)param_1 + 0x44) == 0) {
    uVar1 = 0;
  }
  else {
    /* caller_rN FIX (d329): invoke_context_handler reposts the companion MESSAGE, which the original
     * receives in r5. The decompiler dropped it (modeled as an uninitialised r5_in local in the callee),
     * so the recompiled code reposted garbage (0x80) -> the spurious companion command before the POST ->
     * B-6 crash (MENU LAYER-3). The message is NOT a fresh register: it is this context's message field
     * param_1[6] (every companion sender builds it via cpucom_msg_set_cmd(param_1[6],..)). VERIFIED vs stock:
     * invoke_context_handler r5 = execute_cpucom_transaction's param_1[6]. Pass it explicitly. */
    uVar1 = invoke_context_handler(*(int *)((int)param_1 + 0x44), (uint8_t *)((int *)param_1)[6]);
  }
  return uVar1;
}
