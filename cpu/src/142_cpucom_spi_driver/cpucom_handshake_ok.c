/* @k10d cpucom_handshake_ok @ 0x104661aa
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed cpucom_xfer_idle)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if the CPUCOM transaction context at offset 0x1c is zero, indicating no
 *   active transfer.
 * summary:
 *   Checks a single 32-bit field in the transaction context structure passed as param_1.
 *   The caller cpucom_spi_xfer uses this to determine if the SPI channel is free or if a
 *   previous transfer has completed/aborted. The field at offset 0x1c likely holds a status
 *   code or pointer that is non-zero during an active exchange.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool cpucom_handshake_ok(void *param_1)

{
  return *(int *)((int)param_1 + 0x1c) == 0;
}
