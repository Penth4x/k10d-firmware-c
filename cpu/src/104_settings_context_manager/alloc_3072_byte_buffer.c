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
    /* The original sets up r4=buffer, r5=0x100, r6=0xc, r7=alloc_and_zero_struct_104278ce and
       tail-forwards through get_lens_fw_update_status (an incoming-register passthrough the
       decompiler mistyped as (void), dropping this register setup as dead stores). Reconstruct
       the real call: init the 3072-byte buffer as 0x100 x 0xc-byte elements, each zeroed by
       alloc_and_zero_struct_104278ce. (0x100*0xc == 0xc00 == the heap_alloc size.) */
    get_lens_fw_update_status(param_1, 0x100, 0xc,
                              (code *)alloc_and_zero_struct_104278ce, (code *)0, 0);
  }
  return param_1;
}
