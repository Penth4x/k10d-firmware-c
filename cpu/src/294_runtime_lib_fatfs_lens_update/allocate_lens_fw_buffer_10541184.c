/* @k10d allocate_lens_fw_buffer_10541184 @ 0x10541184
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Allocates and zeroes a 4KB buffer for lens firmware update data after checking two
 *   preconditions.
 * summary:
 *   The function first calls init_lens_fw_buffer and allocate_lens_fw_update_buffer,
 *   proceeding only if both return 0. It then allocates 0x1000 bytes via alloc_pool2_block,
 *   storing the pointer in _DAT_8005b2b0. If allocation fails, it returns -0xc; otherwise,
 *   it calls fill_byte_array to initialize the buffer (likely zeroing it) and returns 0.
 *   This is part of the lens firmware update module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int allocate_lens_fw_buffer_10541184(void)

{
  int iVar1;
  
  iVar1 = init_lens_fw_buffer();
  if ((iVar1 == 0) && (iVar1 = allocate_lens_fw_update_buffer(), iVar1 == 0)) {
    _DAT_8005b2b0/*SDRAM*/ = (void *)alloc_pool2_block((void *)0x1000);
    if (_DAT_8005b2b0/*SDRAM*/ == 0) {
      iVar1 = -0xc;
    }
    else {
      fill_byte_array(_DAT_8005b2b0/*SDRAM*/,0,0x1000);
    }
  }
  return iVar1;
}
