/* @k10d pack_lens_fw_update_word @ 0x10544534
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Packs two 16-bit fields into a 32-bit word for lens firmware update data.
 * summary:
 *   The function takes two 32-bit parameters and constructs a 64-bit return value. The
 *   lower 32 bits are param_2 shifted left by 1. The upper 32 bits are either 0, param_1
 *   shifted left by 1, or a value derived from the upper byte of param_1 multiplied by
 *   0x1000000, depending on specific bit conditions in the inputs. This logic appears to
 *   format data for transmission or storage during the lens firmware update process
 *   indicated by the source module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x1054454c) */
/* WARNING: Removing unreachable block (ram,0x10544550) */

ulonglong pack_lens_fw_update_word(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 << 1;
  if ((param_2 >> 0x17 & 0xff) == 0) {
    iVar1 = (param_1 >> 0x17) * 0x1000000;
    if (iVar1 == 0) {
      return (ulonglong)uVar2;
    }
  }
  else {
    iVar1 = 0;
    if (param_1 << 1 != 0) {
      return CONCAT44(param_1 << 1,uVar2);
    }
  }
  return CONCAT44(iVar1,uVar2);
}
