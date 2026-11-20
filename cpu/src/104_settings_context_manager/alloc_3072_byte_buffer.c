/* @k10d alloc_3072_byte_buffer @ 0x10427848
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0xc00-byte heap buffer, calling get_lens_fw_update_status on success, and
 *   returns the pointer.
 * summary:
 *   If param_1 is non-NULL it is returned directly; otherwise heap_alloc(0xc00) is called
 *   and the result stored in param_1. On successful allocation get_lens_fw_update_status()
 *   is invoked with no arguments. The allocated pointer (or the original param_1) is
 *   returned in r4. The role of get_lens_fw_update_status is unknown, so the broader
 *   subsystem purpose is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int alloc_3072_byte_buffer(int param_1)

{
  if ((param_1 != 0) || (param_1 = heap_alloc((void *)0xc00), param_1 != 0)) {
    /* Tail-forwards through get_lens_fw_update_status, an incoming-register passthrough the
       decompiler models as (void). Called bare like its ~21 other callers (the explicit-arg
       reconstruction is deferred until the whole caller set is swept together). */
    get_lens_fw_update_status();
  }
  return param_1;
}
