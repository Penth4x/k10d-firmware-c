/* @k10d set_mode_and_timeout_103da31a @ 0x103da31a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a mode value into a struct and sets a timeout byte based on the mode, optionally
 *   calling mode-specific handlers.
 * summary:
 *   Writes param_2 to offset 0x14 of the object pointed to by param_1. If the new value is
 *   0x11, it dispatches to get_or_init_sram_object_103e3f56 or
 *   get_or_init_singleton_object_103c8200 based on the value at offset 0x18. If the value
 *   is 0xc, it calls get_or_init_singleton_object_103c8200. For various other values (7, 0,
 *   1, 3, 0x19, 9, 0x18, 0x2c, 10), it sets the byte at offset 0x22 to specific constants
 *   (0x8c, 0x50, 0xb4, 200) and returns 0. Otherwise, it returns the result of the handler
 *   call or the initial param_1 value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103da390) overlaps instruction at (ram,0x103da38e)
    */

int set_mode_and_timeout_103da31a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0x11) {
    if (*(int *)(param_1 + 0x18) == 0x188000e) {
      iVar2 = get_or_init_sram_object_103e3f56();
    }
    else if (*(int *)(param_1 + 0x18) == 0x1880011) {
      iVar2 = get_or_init_singleton_object_103c8200();
    }
  }
  if (*(int *)(param_1 + 0x14) == 0xc) {
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
