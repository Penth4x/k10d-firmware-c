/* @k10d zero_and_fill_sram_buffers @ 0x1046a71a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zero_and_fill_sram_buffers(uint32_t param_x0)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  int iVar3;
  
  iVar3 = 0x3bff;
  puVar1 = (uint32_t *)_DAT_800042c4/*SDRAM*/;
  puVar2 = (uint32_t *)_DAT_800042c8/*SDRAM*/;
  do {
    *puVar2 = 0;
    *puVar1 = 0;
    puVar2[1] = 0;
    puVar1[1] = 0;
    puVar2[2] = 0;
    puVar1[2] = 0;
    puVar2[3] = 0;
    puVar1[3] = 0;
    puVar2[4] = 0;
    puVar2 = puVar2 + 5;
    puVar1[4] = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + 5;
  } while (-1 < iVar3);
  iVar3 = 0x1dff;
  do {
    *puVar2 = 0x80808080/*SDRAM*/;
    *puVar1 = 0x80808080/*SDRAM*/;
    puVar2[1] = 0x80808080/*SDRAM*/;
    puVar1[1] = 0x80808080/*SDRAM*/;
    puVar2[2] = 0x80808080/*SDRAM*/;
    puVar1[2] = 0x80808080/*SDRAM*/;
    puVar2[3] = 0x80808080/*SDRAM*/;
    puVar1[3] = 0x80808080/*SDRAM*/;
    puVar2[4] = 0x80808080/*SDRAM*/;
    puVar2 = puVar2 + 5;
    puVar1[4] = 0x80808080/*SDRAM*/;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + 5;
  } while (-1 < iVar3);
  return;
}
