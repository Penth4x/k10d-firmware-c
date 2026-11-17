/* @k10d test_two_mmio_writes @ 0x104c5fe6
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Writes two constants to MMIO addresses and returns 1 if the carry flag is set after
 *   both writes.
 * summary:
 *   Calls pack_lens_fw_update_word with (0x3d800000, param_2), then conditionally calls it
 *   again with (param_2, 0x43800000) if the carry flag is set. Returns 1 if the carry flag
 *   remains set after the second call, otherwise 0. The callee pack_lens_fw_update_word is
 *   not yet named, so the specific MMIO operation is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t test_two_mmio_writes(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  char in_CF;
  
  pack_lens_fw_update_word(0x3d800000,param_2);
  uVar1 = 0;
  if ((in_CF != '\0') && (pack_lens_fw_update_word(param_2,0x43800000), in_CF != '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}
