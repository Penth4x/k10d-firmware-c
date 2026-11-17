/* @k10d dispatch_mode_specific_handler_103c5074 @ 0x103c5074
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103c5106) overlaps instruction at (ram,0x103c5104)
    */

int dispatch_mode_specific_handler_103c5074(int param_1,int param_2)

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
    iVar2 = get_or_init_sram_object_103c531c();
    *(uint32_t *)(param_1 + 0x18) = 0x10a003a;
  }
  if (*(int *)(param_1 + 0x14) == 0x26) {
    iVar2 = get_or_init_sram_object_103c30bc();
    *(uint32_t *)(param_1 + 0x18) = 0x10a003a;
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
  if (*(int *)(param_1 + 0x18) == 0x10a0017) {
    if (*(int *)(param_1 + 0x14) == 0x10) {
      iVar2 = get_or_init_sram_object_103c30bc();
    }
    else if (*(int *)(param_1 + 0x14) == 0xd) {
      iVar2 = get_or_create_singleton_object_103d32fc(iVar2);
    }
  }
  if ((*(int *)(param_1 + 0x18) == 0x10a001c) && (*(int *)(param_1 + 0x14) == 0xd)) {
    iVar2 = get_or_init_sram_object_103e49e6();
  }
  if ((*(int *)(param_1 + 0x18) == 0x10a0024) && (*(int *)(param_1 + 0x14) == 0xd)) {
    iVar2 = get_or_init_sram_object_103eaa4a();
  }
  if ((*(int *)(param_1 + 0x18) == 0x10a002a) && (*(int *)(param_1 + 0x14) == 0xd)) {
    iVar2 = get_or_init_sram_object_103eb2e8();
  }
  if ((*(int *)(param_1 + 0x18) == 0x10a0032) && (*(int *)(param_1 + 0x14) == 0xd)) {
    iVar2 = get_or_init_sram_object_103ce9f8();
  }
  if (*(int *)(param_1 + 0x18) == 0x10a003a) {
    if (*(int *)(param_1 + 0x14) == 0xf) {
      iVar2 = get_or_init_sram_object_103c531c();
    }
    else if (*(int *)(param_1 + 0x14) == 0xd) {
      iVar2 = get_or_create_singleton_object_103da4b4();
    }
  }
  if ((*(int *)(param_1 + 0x14) == 0xc) || (*(int *)(param_1 + 0x14) == 0x11)) {
    *(uint8_t *)(param_1 + 0x22) = 0x50;
    iVar2 = 0;
  }
  return iVar2;
}
