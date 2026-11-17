/* @k10d query_status_at_0x107e3848 @ 0x104387ee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a fixed pointer and returns its boolean result.
 * summary:
 *   The function passes the constant address 0x107e3848 to check_magic_sentinel_104384a6
 *   and returns the boolean value it provides. No other operations or side effects are
 *   visible in this wrapper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool query_status_at_0x107e3848(void)

{
  bool bVar1;
  
  bVar1 = check_magic_sentinel_104384a6((int *)0x107e3848);
  return bVar1;
}
