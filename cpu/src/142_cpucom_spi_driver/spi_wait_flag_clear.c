/* @k10d spi_wait_flag_clear @ 0x10465f24
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed wait_for_cpucom_byte_ready)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Polls the CPUCOM transaction context until the SPI channel is ready for the next byte
 *   transfer.
 * summary:
 *   Checks a flag in the transaction context (offset 0x14) via test_flag_clear_if_active.
 *   If active, it loops calling spi_poll_complete to check status; if a condition is met,
 *   it calls spi_state_set and spi_set_state to handle completion or error states. Used by
 *   cpucom_spi_xfer to synchronize byte transfers over the SPI-like channel at 0x5c004040.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void spi_wait_flag_clear(void *param_1)

{
  bool bVar2;
  int iVar1;
  
  bVar2 = test_flag_clear_if_active(*(void **)((int)param_1 + 0x14));
  if (bVar2) {
    do {
      iVar1 = spi_poll_complete(param_1);
      if (iVar1 != 0) {
        bVar2 = spi_state_set(param_1);
        if (bVar2) {
          return;
        }
        spi_set_state(param_1,1);
        return;
      }
      bVar2 = test_flag_clear_if_active(*(void **)((int)param_1 + 0x14));
    } while (bVar2);
  }
  return;
}
