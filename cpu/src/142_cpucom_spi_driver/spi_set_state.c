/* @k10d spi_set_state @ 0x104661cc
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed set_cpucom_txn_status_code)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit status code into the transaction context at offset 0x1c, combining it
 *   with a high word from offset 0x20.
 * summary:
 *   Takes a transaction context pointer and a 16-bit code. If the code is zero, it writes 0
 *   to offset 0x1c. Otherwise, it reads the value at offset 0x20, shifts it left by 16
 *   bits, ORs it with the lower 16 bits of the input code, and writes the result to offset
 *   0x1c. This appears to update a status or result field in the CPUCOM SPI transaction
 *   structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void spi_set_state(void *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)param_1 + 0x20) * 0x10000 + (param_2 & 0xffff);
  }
  *(int *)((int)param_1 + 0x1c) = iVar1;
  return;
}
