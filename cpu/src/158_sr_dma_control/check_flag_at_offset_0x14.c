/* @k10d check_flag_at_offset_0x14 @ 0x1046da54
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 158_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Returns true if a helper reports non-zero for the value stored at offset 0x14 of the
 *   given object.
 * summary:
 *   Reads the 32-bit field at param_1 + 0x14 and passes it to
 *   verify_settings_flash_integrity. The result is returned as a boolean (non-zero means
 *   true). The specific meaning of the field and the helper's check are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_flag_at_offset_0x14(int param_1)

{
  int iVar1;
  
  iVar1 = verify_settings_flash_integrity(*(uint32_t *)(param_1 + 0x14));
  return iVar1 != 0;
}
