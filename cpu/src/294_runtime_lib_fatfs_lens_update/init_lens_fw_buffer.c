/* @k10d init_lens_fw_buffer @ 0x105379bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t init_lens_fw_buffer(void)

{
  uint32_t uVar1;
  int iVar2;
  
  if (_DAT_80014980/*SDRAM*/ == (void *)0x0) {
    _DAT_80014980/*SDRAM*/ = (void *)alloc_pool2_block((void *)0x100);
    if (_DAT_80014980/*SDRAM*/ == (void *)0x0) {
      uVar1 = 0xfffffff4;
    }
    else {
      fill_byte_array(_DAT_80014980/*SDRAM*/,0,0x100);
      for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 0x80) {
        *(uint8_t *)(iVar2 + (int)_DAT_80014980/*SDRAM*/) = 0;
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xfffffda8;
  }
  return uVar1;
}
