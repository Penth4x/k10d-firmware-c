/* @k10d call_helper_then_followup @ 0x1044a638
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a field at offset 0xe0, and if it returns non-zero, calls a second
 *   helper.
 * summary:
 *   The function reads a 16-bit value from param_1 at offset 0xe0 and passes it as the
 *   second argument to sdhc_send_command_0x909. If sdhc_send_command_0x909 returns 0, this
 *   function returns 0. Otherwise, it calls populate_card_capacity_fields with param_1 and
 *   returns that result. The specific roles of the callees are unknown, so the behavior is
 *   described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_then_followup(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sdhc_send_command_0x909(param_1,(uint)*(ushort *)((int)param_1 + 0xe0));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = populate_card_capacity_fields(param_1);
  }
  return uVar2;
}
