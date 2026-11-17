/* @k10d dispatch_mode_transition_10424c7a @ 0x10424c7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10424d24) overlaps instruction at (ram,0x10424d22)
    */

int dispatch_mode_transition_10424c7a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0x27) {
    iVar2 = setting_get(*(int *)(param_1 + 8),0xb0);
    if (iVar2 == 0) {
      iVar2 = initialize_singleton_object_103d4044();
    }
    else {
      iVar2 = get_or_init_sram_object_103c0f94();
    }
  }
  if (*(int *)(param_1 + 0x14) == 0x28) {
    iVar2 = get_or_init_singleton_object_103c74d0();
  }
  if (*(int *)(param_1 + 0x14) == 0x25) {
    iVar2 = get_or_init_singleton_object_103c8200();
    *(uint32_t *)(param_1 + 0x18) = 0x10e000c;
  }
  if (*(int *)(param_1 + 0x14) == 0x26) {
    iVar2 = init_singleton_object_103cc008();
    *(uint32_t *)(param_1 + 0x18) = 0x10e000c;
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
  if (*(int *)(param_1 + 0x18) == 0x10e0009) {
    if (*(int *)(param_1 + 0x14) == 0x10) {
      iVar2 = init_singleton_object_103cc008();
    }
    else if (*(int *)(param_1 + 0x14) == 0xd) {
      iVar2 = get_or_init_sram_object_10423e2c(iVar2);
    }
  }
  if ((*(int *)(param_1 + 0x18) == 0x10e000c) && (*(int *)(param_1 + 0x14) == 0xd)) {
    iVar2 = get_or_init_sram_object_104231ce();
  }
  if (*(int *)(param_1 + 0x18) == 0x10e000f) {
    if (*(int *)(param_1 + 0x14) == 0xf) {
      iVar2 = get_or_init_singleton_object_103c8200();
    }
    else if (*(int *)(param_1 + 0x14) == 0xd) {
      iVar2 = get_or_create_sram_object_10424eda();
    }
  }
  if ((*(int *)(param_1 + 0x14) == 0xc) || (*(int *)(param_1 + 0x14) == 0x11)) {
    *(uint8_t *)(param_1 + 0x22) = 0x50;
    iVar2 = 0;
  }
  return iVar2;
}
