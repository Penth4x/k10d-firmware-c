/* @k10d sd_file_lookup_locked @ 0x10481260
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed lookup_file_with_lock)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, performs a file lookup by name, releases the lock, and returns the
 *   result.
 * summary:
 *   The function calls call_kernel_with_short_id on a pointer derived from param_1 (offset
 *   0xc), which appears to be a lock acquisition. It then calls screen_registry_enable_chk
 *   with a pointer from param_1 (offset 8) and param_2, which prior notes suggest is a
 *   filesystem file lookup by name. Finally, it calls check_kernel_call_success_10459d88 on
 *   the same pointer as the first call, likely releasing the lock. The return value of the
 *   lookup is passed through.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sd_file_lookup_locked(void *param_1,void *param_2)

{
  uint32_t uVar1;
  
  call_kernel_with_short_id((uint32_t *)((int)param_1 + 0xc));
  uVar1 = screen_registry_enable_chk((void *)(*(uint32_t *)((int)param_1 + 8)),param_2);
  check_kernel_call_success_10459d88((uint32_t *)((int)param_1 + 0xc));
  return uVar1;
}
