/* @k10d sd_cmd12_stop_transfer @ 0x10448098
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sends SD command 0x31a (CMD12) to the SDHCI host to stop an ongoing data transfer.
 * summary:
 *   Calls sdhc_send_command with the host pointer, command index 0x31a, and zero
 *   arguments/modes. This corresponds to the standard SD/MMC CMD12 STOP_TRANSMISSION
 *   command, which aborts a multi-block read or write operation. The caller is part of the
 *   SD card initialization sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void sd_cmd12_stop_transfer(void *param_1)

{
  sdhc_send_command(param_1,0x31a,0,0);
  return;
}
