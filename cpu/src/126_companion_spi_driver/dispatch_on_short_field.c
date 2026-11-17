/* @k10d dispatch_on_short_field @ 0x1044a1bc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a 16-bit field at offset 0xe0 and conditionally calls a second
 *   helper.
 * summary:
 *   Reads a ushort from param_1+0xe0 and passes it to sdhc_send_command_0x909. If that call
 *   returns non-zero, it calls copy_two_fields_from_offset_0x17d and returns its result;
 *   otherwise returns 0. The specific subsystem is not identifiable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_short_field(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sdhc_send_command_0x909(param_1,(uint)*(ushort *)((int)param_1 + 0xe0));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = copy_two_fields_from_offset_0x17d(param_1);
  }
  return uVar2;
}
