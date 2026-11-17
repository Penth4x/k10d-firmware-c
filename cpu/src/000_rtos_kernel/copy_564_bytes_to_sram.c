/* @k10d copy_564_bytes_to_sram @ 0x100080f4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_564_bytes_to_sram(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x234;
  do {
    iVar1 = iVar2 + -1;
    (&DAT_80000447/*SDRAM*/)[iVar2] = *(uint8_t *)(iVar2 + 0x10008153/*ROM*/);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
