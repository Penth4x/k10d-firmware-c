/* @k10d call_handler_with_lock_10481308 @ 0x10481308
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, calls a handler with a parameter, releases the lock, and returns the
 *   handler's result.
 * summary:
 *   The function takes a pointer to a structure and a parameter. It calls
 *   call_kernel_with_short_id on a field at offset 0xc, likely acquiring a mutex or lock.
 *   It then calls check_object_state_flag_1048001e, passing a field at offset 8 (possibly a
 *   function pointer or object) and the input parameter. Finally, it calls
 *   check_kernel_call_success_10459d88 on the same field at offset 0xc, likely releasing
 *   the lock, and returns the result from check_object_state_flag_1048001e.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_handler_with_lock_10481308(void *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  call_kernel_with_short_id((uint32_t *)((int)param_1 + 0xc));
  uVar1 = check_object_state_flag_1048001e(*(uint32_t *)((int)param_1 + 8),param_2);
  check_kernel_call_success_10459d88((uint32_t *)((int)param_1 + 0xc));
  return uVar1;
}
