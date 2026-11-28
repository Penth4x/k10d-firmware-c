/* @k10d get_lens_update_status @ 0x10537118
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Returns the current status or progress value of the lens firmware update process.
 * summary:
 *   This function acts as a simple wrapper that calls act_tsk_syscall_dispatcher and
 *   returns its result. Given the source module context 'lens_firmware_update', it likely
 *   retrieves the state of the lens CPU firmware update operation. The specific meaning of
 *   the returned value depends on the implementation of act_tsk_syscall_dispatcher, which
 *   is not provided.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

uint32_t get_lens_update_status(void)

{
  uint32_t status;

  status = __trap_act_tsk_syscall_dispatcher();
  return status;
}
