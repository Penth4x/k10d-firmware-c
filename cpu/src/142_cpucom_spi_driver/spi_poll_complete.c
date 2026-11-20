/* @k10d spi_poll_complete @ 0x10466234
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed read_transfer_complete_flag)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the transfer-complete status flag from a transaction object via a virtual call.
 * summary:
 *   The function retrieves a pointer to a transaction object from offset 0x18 of the input
 *   parameter. It then performs a virtual call to slot 10 (offset 0x54) of that object's
 *   vtable, passing the object as the 'this' pointer. The return value of this virtual call
 *   is returned directly to the caller. The module context suggests this is part of a CPU
 *   communication or SPI driver, likely checking if a data transfer has finished.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t spi_poll_complete(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)((int)param_1 + 0x18) + 4);
  uVar1 = (((vtbl_entry*)(iVar2))[10].fn)(*(int *)((int)param_1 + 0x18) + (int)((vtbl_entry*)(iVar2))[10].adj)
  ;
  return uVar1;
}
