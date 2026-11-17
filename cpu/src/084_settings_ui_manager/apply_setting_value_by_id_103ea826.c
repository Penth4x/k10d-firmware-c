/* @k10d apply_setting_value_by_id_103ea826 @ 0x103ea826
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores param_2 into a struct field and conditionally writes a setting via setting_set
 *   based on the stored value and a second field.
 * summary:
 *   Writes param_2 to offset 0x14 of the object pointed to by param_1. Depending on the
 *   resulting value (and a check at offset 0x18 against constants 0x19f000a/0x19f000f), it
 *   calls setting_set with key 0xbe and a byte from bRam1059783c or bRam1059783d. It also
 *   sets a byte at offset 0x22 to various constants (0x8c, 0x50, 0xb4, 200) based on the
 *   value at offset 0x14. Calls get_or_init_sram_object_103c30bc in some branches, whose
 *   role is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103ea926) overlaps instruction at (ram,0x103ea924)
    */

int apply_setting_value_by_id_103ea826(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c30bc();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x19f000a) {
      setting_set(*(int *)(param_1 + 8),0xbe,(uint)bRam1059783c);
      iVar2 = get_or_init_sram_object_103c30bc();
    }
    if (*(int *)(param_1 + 0x18) == 0x19f000f) {
      setting_set(*(int *)(param_1 + 8),0xbe,(uint)bRam1059783d);
      iVar2 = get_or_init_sram_object_103c30bc();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x19f000a) {
      setting_set(*(int *)(param_1 + 8),0xbe,(uint)bRam1059783c);
    }
    if (*(int *)(param_1 + 0x18) == 0x19f000f) {
      setting_set(*(int *)(param_1 + 8),0xbe,(uint)bRam1059783d);
    }
    *(uint8_t *)(param_1 + 0x22) = 0x8c;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x14) == 3) {
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
