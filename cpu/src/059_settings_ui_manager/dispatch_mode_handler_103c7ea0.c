/* @k10d dispatch_mode_handler_103c7ea0 @ 0x103c7ea0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 059_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103c7efa) overlaps instruction at (ram,0x103c7ef8)
    */

int dispatch_mode_handler_103c7ea0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0x27) {
    iVar2 = get_or_init_singleton_object_103c8200();
  }
  if (*(int *)(param_1 + 0x14) == 0x28) {
    iVar2 = get_or_init_ram_object_103b95ee();
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
  if ((*(int *)(param_1 + 0x14) == 0xe) && (*(int *)(param_1 + 0x18) == 0x103000b)) {
    iVar2 = get_or_init_ram_object_103b95ee();
  }
  if (*(int *)(param_1 + 0x14) == 0xd) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0x103000b) {
      iVar2 = get_or_init_singleton_object_103c8200();
    }
    else if (iVar1 == 0x1030010) {
      iVar2 = get_or_init_sram_object_10408f34();
    }
    else if (iVar1 == 0x1030013) {
      iVar2 = get_or_create_singleton_object_103e6480();
    }
    else if (iVar1 == 0x103001a) {
      iVar2 = get_or_init_sram_object_103d701c();
    }
    else if (iVar1 == 0x103001d) {
      *(uint8_t *)(param_1 + 0x22) = 0x78;
      iVar2 = 0;
    }
    else if (iVar1 == 0x1030020) {
      iVar2 = get_or_create_singleton_object_103e979c();
    }
  }
  if (*(int *)(param_1 + 0x14) == 0x11) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x18) == 0x1030020) {
      *(uint8_t *)(param_1 + 0x22) = 100;
    }
    else {
      *(uint8_t *)(param_1 + 0x22) = 0x50;
    }
  }
  if (*(int *)(param_1 + 0x14) == 0xc) {
    *(uint8_t *)(param_1 + 0x22) = 0x50;
    iVar2 = 0;
  }
  return iVar2;
}
