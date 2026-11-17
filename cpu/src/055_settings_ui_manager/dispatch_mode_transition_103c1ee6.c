/* @k10d dispatch_mode_transition_103c1ee6 @ 0x103c1ee6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 055_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103c200e) overlaps instruction at (ram,0x103c200c)
    */

int dispatch_mode_transition_103c1ee6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0x27) {
    iVar2 = get_or_init_ram_object_103b95ee();
  }
  if (*(int *)(param_1 + 0x14) == 0x28) {
    iVar2 = get_or_init_singleton_object_103c8200();
  }
  if (*(int *)(param_1 + 0x14) == 0x25) {
    iVar2 = get_or_init_sram_object_103c21d0();
    *(uint32_t *)(param_1 + 0x18) = 0x1070039;
  }
  if (*(int *)(param_1 + 0x14) == 0x26) {
    iVar2 = get_or_init_sram_object_103c63a0();
    *(uint32_t *)(param_1 + 0x18) = 0x1070039;
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
  if (*(int *)(param_1 + 0x18) == 0x107000e) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0x10) {
      iVar2 = get_or_init_sram_object_103c63a0();
    }
    else if (iVar1 == 0xd) {
      iVar2 = get_or_init_ram_object_103b95ee();
    }
    else if (iVar1 == 0xe) {
      iVar2 = get_or_init_singleton_object_103c8200();
    }
  }
  if ((*(int *)(param_1 + 0x18) == 0x107001a) &&
     ((*(int *)(param_1 + 0x14) == 0xd || (*(int *)(param_1 + 0x14) == 0xe)))) {
    setting_set(*(int *)(param_1 + 8),0xb0,0);
    iVar2 = initialize_singleton_object_103d4044();
  }
  if ((*(int *)(param_1 + 0x18) == 0x1070020) && (*(int *)(param_1 + 0x14) == 0xd)) {
    iVar2 = get_or_init_sram_object_103e5c00();
  }
  if ((*(int *)(param_1 + 0x18) == 0x1070027) && (*(int *)(param_1 + 0x14) == 0xd)) {
    iVar2 = get_or_create_sram_object_103d7726();
  }
  if ((*(int *)(param_1 + 0x18) == 0x1070031) && (*(int *)(param_1 + 0x14) == 0xd)) {
    iVar2 = get_or_create_sram_object_103dd452();
  }
  if ((*(int *)(param_1 + 0x18) == 0x107002c) && (*(int *)(param_1 + 0x14) == 0xd)) {
    iVar2 = get_or_init_sram_object_103ddcd2();
  }
  if (*(int *)(param_1 + 0x18) == 0x1070039) {
    if (*(int *)(param_1 + 0x14) == 0xf) {
      iVar2 = get_or_init_sram_object_103c21d0();
    }
    else if (*(int *)(param_1 + 0x14) == 0xd) {
      iVar2 = get_or_init_sram_object_103e09d0();
    }
  }
  if ((*(int *)(param_1 + 0x14) == 0xc) || (*(int *)(param_1 + 0x14) == 0x11)) {
    *(uint8_t *)(param_1 + 0x22) = 0x50;
    iVar2 = 0;
  }
  return iVar2;
}
