/* @k10d dispatch_mode_state_change_103c60f8 @ 0x103c60f8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103c618a) overlaps instruction at (ram,0x103c6188)
    */

int dispatch_mode_state_change_103c60f8(int param_1,int param_2)

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
    iVar2 = get_or_init_sram_object_103c63a0();
    *(uint32_t *)(param_1 + 0x18) = 0x10b0030;
  }
  if (*(int *)(param_1 + 0x14) == 0x26) {
    iVar2 = get_or_init_sram_object_103c40b8();
    *(uint32_t *)(param_1 + 0x18) = 0x10b0030;
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
  if (*(int *)(param_1 + 0x18) == 0x10b0017) {
    if (*(int *)(param_1 + 0x14) == 0x10) {
      iVar2 = get_or_init_sram_object_103c40b8();
    }
    else if (*(int *)(param_1 + 0x14) == 0xd) {
      iVar2 = get_or_init_sram_object_103e72c2(iVar2);
    }
  }
  if ((*(int *)(param_1 + 0x18) == 0x10b001c) && (*(int *)(param_1 + 0x14) == 0xd)) {
    iVar2 = get_or_create_singleton_object_103df3d0();
  }
  if ((*(int *)(param_1 + 0x18) == 0x10b0021) && (*(int *)(param_1 + 0x14) == 0xd)) {
    iVar2 = get_or_create_singleton_object_103e7efa();
  }
  if ((*(int *)(param_1 + 0x18) == 0x10b0026) && (*(int *)(param_1 + 0x14) == 0xd)) {
    iVar2 = get_or_create_sram_object_103e55e4();
  }
  if ((*(int *)(param_1 + 0x18) == 0x10b002b) && (*(int *)(param_1 + 0x14) == 0xd)) {
    iVar2 = get_or_init_sram_object_103e78de();
  }
  if (*(int *)(param_1 + 0x18) == 0x10b0030) {
    if (*(int *)(param_1 + 0x14) == 0xf) {
      iVar2 = get_or_init_sram_object_103c63a0();
    }
    else if (*(int *)(param_1 + 0x14) == 0xd) {
      iVar2 = get_or_init_sram_object_103e0008();
    }
  }
  if ((*(int *)(param_1 + 0x14) == 0xc) || (*(int *)(param_1 + 0x14) == 0x11)) {
    *(uint8_t *)(param_1 + 0x22) = 0x50;
    iVar2 = 0;
  }
  return iVar2;
}
