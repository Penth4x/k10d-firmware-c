/* @k10d menu_screen_activate @ 0x104479fc
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed sdhc_write_block_range)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a range of blocks to the SD card via SDHCI, handling single-block and multi-
 *   block cases.
 * summary:
 *   Checks if the requested block range fits within the card capacity (offset +0x14). If
 *   the card is not ready (offset +0xdd is 0), sets status +0x120 to 6. Otherwise,
 *   configures the SDHCI block size to 512 bytes (0x200) and dispatches to a single-block
 *   write (dispatch_mode_based_on_flag), a full-card write (dispatch_two_phase_write), or a
 *   multi-block write (dispatch_mode_state_update_104494dc) based on the block count and
 *   position. Sets status +0x120 to 1 on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int menu_screen_activate(cls_105a1a84 *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)(param_2 + param_3) <= (uint)param_1->field_0x14) {
    if (param_1->field_0xdd == '\0') {
      param_1->field_0x120 = 6;
    }
    else {
      param_1->field_0x120 = 0;
      set_flag_and_notify_object(param_1,1);
      write_masked_value_to_struct_offset_1044b396((char*)(param_1) ->field_0x110,0x1ff);
      sdhc_set_block_size((char*)(param_1) ->field_0x110,0x200);
      if (param_3 == 1) {
        iVar1 = dispatch_mode_based_on_flag(param_1,param_2,param_4);
      }
      else if (param_1->field_0x14 == param_2 + param_3) {
        iVar1 = dispatch_two_phase_write((void *)(uint32_t)param_1,(uint32_t)param_2,(uint32_t)param_3,(uint32_t)param_4);
      }
      else {
        iVar1 = dispatch_mode_state_update_104494dc(param_1,param_2,param_3,param_4);
      }
      set_flag_and_notify_object(param_1,0);
      if (iVar1 == 0) {
        param_1->field_0x120 = 1;
      }
    }
  }
  return iVar1;
}
