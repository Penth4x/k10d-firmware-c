/* @k10d copy_512_bytes_from_rom @ 0x10438818
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_512_bytes_from_rom(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xc740;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar2 + -0x7ff0c7bc) = *(uint32_t *)(iVar2 + 0x107d3844);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
