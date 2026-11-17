/* @k10d spi_wait_flag_set @ 0x10465f6a
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed wait_for_spi_transfer_complete)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Polls a transaction context flag until the SPI transfer completes or a timeout occurs.
 * summary:
 *   Checks the status flag at offset 0x14 of the transaction context. If active, it loops
 *   calling spi_poll_complete (likely a timeout or progress check) and spi_state_set
 *   (likely a completion check). If a timeout or error is detected, it calls spi_set_state
 *   with argument 2 to set an error state before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void spi_wait_flag_set(void *param_1)

{
  bool bVar2;
  int iVar1;
  
  bVar2 = test_flag_set_if_active(*(void **)((int)param_1 + 0x14));
  if (bVar2) {
    do {
      iVar1 = spi_poll_complete(param_1);
      if (iVar1 != 0) {
        bVar2 = spi_state_set(param_1);
        if (bVar2) {
          return;
        }
        spi_set_state(param_1,2);
        return;
      }
      bVar2 = test_flag_set_if_active(*(void **)((int)param_1 + 0x14));
    } while (bVar2);
  }
  return;
}
