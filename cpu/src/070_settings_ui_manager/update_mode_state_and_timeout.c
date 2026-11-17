/* @k10d update_mode_state_and_timeout @ 0x103d1b32
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 070_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a new mode value in a struct, triggers mode-specific helpers, and sets a timeout
 *   byte based on the mode.
 * summary:
 *   Writes param_2 to offset 0x14 of the object pointed to by param_1. If the object's
 *   field at 0x18 is 0x18b000d and the new mode is 0xd or 0xe, it calls setting_set and
 *   get_or_init_sram_object_103d0b28. If the new mode is 0xc or 0x11, it calls
 *   get_or_init_singleton_object_103c8200. Finally, it sets the byte at offset 0x22 to a
 *   specific value (0x8c, 0x50, 0xb4, or 200) depending on the mode value, returning 0 in
 *   those cases.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d1bb0) overlaps instruction at (ram,0x103d1bae)
    */

int update_mode_state_and_timeout(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if ((*(int *)(param_1 + 0x18) == 0x18b000d) && ((param_2 == 0xd || (param_2 == 0xe)))) {
    setting_set(*(int *)(param_1 + 8),0x90,(uint)bRam10595f99);
    iVar2 = get_or_init_sram_object_103d0b28();
  }
  if ((*(int *)(param_1 + 0x14) == 0xc) || (*(int *)(param_1 + 0x14) == 0x11)) {
    iVar2 = get_or_init_singleton_object_103c8200();
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    *(uint8_t *)(param_1 + 0x22) = 0x8c;
    iVar2 = 0;
  }
  if ((*(int *)(param_1 + 0x14) == 0x19) || (*(int *)(param_1 + 0x14) == 9)) {
    *(uint8_t *)(param_1 + 0x22) = 0x50;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x14) == 0x18) {
    *(uint8_t *)(param_1 + 0x22) = 0xb4;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x14) == 0x2c) {
    *(uint8_t *)(param_1 + 0x22) = 0x8c;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x14) == 10) {
    *(uint8_t *)(param_1 + 0x22) = 200;
    iVar2 = 0;
  }
  return iVar2;
}
