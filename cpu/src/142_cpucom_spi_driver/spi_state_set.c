/* @k10d spi_state_set @ 0x104661b8
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_transaction_state_flag)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if the 4-byte field at offset 0x1c of the given transaction context is
 *   non-zero.
 * summary:
 *   Reads a single int-sized field at offset 0x1c from the structure pointed to by param_1
 *   and returns a boolean indicating whether it is non-zero. The module context suggests
 *   param_1 is a CPUcom SPI transaction context, but the specific meaning of the 0x1c field
 *   is not determinable from this code alone. No side effects or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool spi_state_set(void *param_1)

{
  return *(int *)((int)param_1 + 0x1c) != 0;
}
