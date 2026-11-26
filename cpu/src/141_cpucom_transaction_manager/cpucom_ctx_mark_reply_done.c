/* @k10d cpucom_ctx_mark_reply_done @ 0x10464698
 * name: verified (structural evidence: decomp + emulator trace of the Cmd:01 poll)
 * unit: 141_cpucom_transaction_manager (unit names are model-proposed)
 * purpose:
 *   CPUCOM transaction vtable+0x84: sets bit 2 in the context's flag and returns 0 without
 *   examining the reply bytes.
 * summary:
 *   VERIFIED: decomp + emulator trace of the Cmd:01 poll
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t cpucom_ctx_mark_reply_done(int param_1)

{
  set_flg_obj((uint32_t *)(param_1 + 0x34), 0x2);
  return 0;
}
