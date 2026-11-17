/* @k10d allocate_lens_fw_update_buffer @ 0x1053e34c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t allocate_lens_fw_update_buffer(void)

{
  uint32_t uVar1;
  int iVar2;
  
  if (_DAT_800149fc/*SDRAM*/ == (void *)0x0) {
    _DAT_800149fc/*SDRAM*/ = (void *)alloc_pool2_block((void *)0x230);
    if (_DAT_800149fc/*SDRAM*/ == (void *)0x0) {
      uVar1 = 0xfffffff4;
    }
    else {
      fill_byte_array(_DAT_800149fc/*SDRAM*/,0,0x230);
      for (iVar2 = 0; iVar2 < 0x230; iVar2 = iVar2 + 0x1c) {
        *(uint32_t *)(iVar2 + (int)_DAT_800149fc/*SDRAM*/) = 0;
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xfffffda8;
  }
  return uVar1;
}
