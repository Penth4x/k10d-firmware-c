/* @k10d verify_settings_flash_integrity @ 0x10483ece
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Writes four settings blocks to flash and verifies them by reading back and comparing
 *   against expected values.
 * summary:
 *   Iterates four times, writing a block from DAT_105ab898 via
 *   write_field_at_offset_four_104282f8, saving settings via settings_save_block0, writing
 *   a magic pattern (0xa55a5aa5), and calling invoke_virtual_slot_15_1048360c. It then
 *   reads back via get_field_at_offset_four_104282fe and compares to the expected value. If
 *   any mismatch occurs, it calls invoke_virtual_slot_13_104835f0, re-saves settings, and
 *   returns 0; otherwise returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int verify_settings_flash_integrity(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iStack_c;
  
  uVar1 = get_sram_address_0x8001dedc();
  iStack_c = 1;
  uVar4 = 0;
  iVar3 = 0;
  do {
    write_field_at_offset_four_104282f8(uVar1,*(uint32_t *)(&DAT_105ab898/*ROM*/ + iVar3));
    settings_save_block0(param_1);
    write_field_at_offset_four_104282f8(uVar1,0xa55a5aa5);
    invoke_virtual_slot_15_1048360c(param_1);
    iVar2 = get_field_at_offset_four_104282fe(uVar1);
    if (iVar2 != *(int *)(&DAT_105ab898/*ROM*/ + iVar3)) {
      iStack_c = 0;
      break;
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (uVar4 < 4);
  if (iStack_c == 0) {
    invoke_virtual_slot_13_104835f0(param_1);
    settings_save_block0(param_1);
  }
  return iStack_c;
}
