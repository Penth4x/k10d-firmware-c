/* @k10d test_flag_set_if_active @ 0x1043d800
 * name: earlier (carried from an earlier Ghidra session, not re-verified)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if the flag object at param_1+0x10c is non-null and its underlying flag is
 *   set.
 * summary:
 *   Checks whether the pointer at offset 0x10c of the passed object is null; if so returns
 *   false. Otherwise calls test_flag_set on that pointer and returns its boolean result.
 *   The caller context (cpucom_request_line_asserted) suggests this tests a GPIO/handshake
 *   flag state, but the callee test_flag_set is unnamed so the exact flag semantics are not
 *   independently confirmed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_flag_set_if_active(void *param_1)

{
  bool bVar1;
  
  if (*(void **)((int)param_1 + 0x10c) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = test_flag_set(*(void **)((int)param_1 + 0x10c));
  }
  return bVar1;
}
