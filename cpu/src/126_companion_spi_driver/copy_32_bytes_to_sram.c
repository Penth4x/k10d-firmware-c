/* @k10d copy_32_bytes_to_sram @ 0x10436cb0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_32_bytes_to_sram(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x80;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar2 + -0x7ffe1964) = *(uint32_t *)(iVar2 + 0x1000c5d4/*ROM*/);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
