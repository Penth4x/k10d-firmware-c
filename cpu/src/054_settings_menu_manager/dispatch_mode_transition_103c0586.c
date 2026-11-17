/* @k10d dispatch_mode_transition_103c0586 @ 0x103c0586
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103c068e) overlaps instruction at (ram,0x103c068c)
    */

int dispatch_mode_transition_103c0586(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x18) = param_2;
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = param_1;
  if ((((((iVar1 != 0x1020014) && (iVar1 != 0x1020015)) && (iVar1 != 0x1020017)) &&
       ((iVar1 != 0x102001a && (iVar1 != 0x1020018)))) &&
      ((iVar1 != 0x102001b && ((iVar1 != 0x1020028 && (iVar1 != 0x102002a)))))) &&
     (iVar1 != 0x1020020)) {
    if (param_2 == 0x27) {
      iVar2 = get_or_init_singleton_object_103c74d0();
    }
    if (*(int *)(param_1 + 0x18) == 0x28) {
      iVar2 = setting_get(*(int *)(param_1 + 8),0xb0);
      if (iVar2 == 0) {
        iVar2 = initialize_singleton_object_103d4044();
      }
      else {
        iVar2 = get_or_init_sram_object_103c0f94();
      }
    }
    if (*(int *)(param_1 + 0x18) == 0x25) {
      iVar2 = get_or_init_ram_object_103b95ee();
      *(uint32_t *)(param_1 + 0x1c) = 0x1020046;
    }
    if (*(int *)(param_1 + 0x18) == 0x26) {
      iVar2 = get_or_init_ram_object_103b95ee();
      *(uint32_t *)(param_1 + 0x1c) = 0x1020046;
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    *(uint8_t *)(param_1 + 0x33) = 0x8c;
    iVar2 = 0;
  }
  if ((*(int *)(param_1 + 0x18) == 0x19) || (*(int *)(param_1 + 0x18) == 9)) {
    *(uint8_t *)(param_1 + 0x33) = 0x50;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x18) == 0x18) {
    *(uint8_t *)(param_1 + 0x33) = 0xb4;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x18) == 0x2c) {
    *(uint8_t *)(param_1 + 0x33) = 0x8c;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x18) == 10) {
    *(uint8_t *)(param_1 + 0x33) = 200;
    iVar2 = 0;
  }
  if ((*(int *)(param_1 + 0x1c) == 0x1020011) && (*(int *)(param_1 + 0x18) == 0x10)) {
    iVar2 = get_or_init_ram_object_103b95ee();
  }
  if ((*(int *)(param_1 + 0x1c) == 0x1020025) && (*(int *)(param_1 + 0x18) == 0xf)) {
    iVar2 = get_or_init_ram_object_103b95ee();
  }
  if (*(int *)(param_1 + 0x1c) == 0x102002f) {
    if (*(int *)(param_1 + 0x18) == 0xf) {
      iVar2 = get_or_init_ram_object_103b95ee();
    }
    else if (*(int *)(param_1 + 0x18) == 0xd) {
      iVar2 = get_or_create_singleton_object_103d7d42();
    }
  }
  if (*(int *)(param_1 + 0x1c) == 0x1020037) {
    if (*(int *)(param_1 + 0x18) == 0xd) {
      iVar2 = get_or_init_sram_object_103e205e();
    }
    else if (*(int *)(param_1 + 0x18) == 0xf) {
      iVar2 = get_or_init_ram_object_103b95ee();
    }
  }
  if (*(int *)(param_1 + 0x1c) == 0x1020043) {
    if (*(int *)(param_1 + 0x18) == 0xd) {
      iVar2 = get_or_init_sram_object_103e111a();
    }
    else if (*(int *)(param_1 + 0x18) == 0xf) {
      iVar2 = get_or_init_ram_object_103b95ee();
    }
  }
  if (*(int *)(param_1 + 0x1c) == 0x1020046) {
    if (*(int *)(param_1 + 0x18) == 0xd) {
      iVar2 = get_manual_focal_length_list();
    }
    else if (*(int *)(param_1 + 0x18) == 0xf) {
      iVar2 = get_or_init_ram_object_103b95ee();
    }
  }
  if ((*(int *)(param_1 + 0x18) == 0xc) || (*(int *)(param_1 + 0x18) == 0x11)) {
    *(uint8_t *)(param_1 + 0x33) = 0x50;
    iVar2 = 0;
  }
  return iVar2;
}
