/* @k10d compute_lens_fw_block_offset_10544502 @ 0x10544502
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Calculates a byte offset or size for a lens firmware update block based on a block
 *   index and total size.
 * summary:
 *   The function takes a block index (param_1) and a size or count (param_3). If a specific
 *   bitfield in param_3 (bits 20-28) is zero, it returns the block index shifted left by 21
 *   (multiplied by 0x200000), effectively calculating an offset for 2MB blocks. Otherwise,
 *   it performs a different calculation involving doubling the index and checking against
 *   the size. Given the module context 'lens_firmware_update', this likely computes memory
 *   offsets for writing lens firmware data to the lens EEPROM or buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x1054451a) */
/* WARNING: Removing unreachable block (ram,0x1054451e) */
/* WARNING: Removing unreachable block (ram,0x10544522) */

int compute_lens_fw_block_offset_10544502(uint param_1,void *param_2,uint param_3)

{
  int iVar1;
  
  if ((param_3 >> 0x14 & 0x7ff) == 0) {
    iVar1 = (param_1 >> 0x14) * 0x200000;
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = param_1 * 2;
    if ((iVar1 != 0) && (iVar1 + param_3 * -2 == 0)) {
      return iVar1;
    }
  }
  return iVar1;
}
