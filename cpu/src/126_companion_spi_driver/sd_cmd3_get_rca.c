/* @k10d sd_cmd3_get_rca @ 0x1044a190
 * name: verified (structural evidence: decomp: FUN_10448098 (command word 0x31a, index 3); host+0xe0 = response>>16; host+0xe0 is the CMD55 argument)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Card-init step: SD CMD3 SEND_RELATIVE_ADDR; stores the card's RCA (response bits 31:16)
 *   at host+0xe0.
 * summary:
 *   VERIFIED: decomp: sd_cmd31_send_status (command word 0x31a, index 3); host+0xe0 =
 *   response>>16; host+0xe0 is the CMD55 argument
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool sd_cmd3_get_rca(void *param_1)

{
  int extraout_r4;
  
  sd_cmd31_send_status(param_1);
  if (extraout_r4 != 0) {
    *(short *)((int)param_1 + 0xe0) = (short)((uint)*(uint32_t *)((int)param_1 + 0x3b4) >> 0x10);
  }
  return extraout_r4 != 0;
}
