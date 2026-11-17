/* @k10d cpucom_spi_wait_handshake @ 0x10465fb0
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed wait_for_spi_transfer_complete)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Polls the SPI transaction context until the transfer is complete or a timeout occurs.
 * summary:
 *   Checks a status flag via gpio_dsp_ack_check on a pointer at offset 0xc of the
 *   transaction context. If active, it loops calling spi_poll_complete to check for
 *   completion. If completion is detected, it calls spi_state_set to verify success; if
 *   that fails, it calls spi_set_state with argument 3 (likely a timeout/error code) and
 *   returns. This function is part of the CPUCOM SPI driver module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cpucom_spi_wait_handshake(void *param_1)

{
  bool bVar2;
  int iVar1;
  
  bVar2 = gpio_dsp_ack_check(*(void **)((int)param_1 + 0xc));
  if (bVar2) {
    do {
      iVar1 = spi_poll_complete(param_1);
      if (iVar1 != 0) {
        bVar2 = spi_state_set(param_1);
        if (bVar2) {
          return;
        }
        spi_set_state(param_1,3);
        return;
      }
      bVar2 = gpio_dsp_ack_check(*(void **)((int)param_1 + 0xc));
    } while (bVar2);
  }
  return;
}
