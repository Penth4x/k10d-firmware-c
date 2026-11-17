/* @k10d dispatch_mode_transition_103cc674 @ 0x103cc674
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103cc75a) overlaps instruction at (ram,0x103cc758)
    */

int dispatch_mode_transition_103cc674(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int extraout_r4;
  int iVar3;
  
  iVar2 = get_or_init_singleton_104aa272();
  iVar3 = *(int *)(iVar2 + 8);
  *(int *)(param_1 + 0x18) = param_2;
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
  if (*(int *)(param_1 + 0x18) == 0x28) {
    iVar2 = get_or_init_singleton_object_103c74d0();
  }
  if (*(int *)(param_1 + 0x18) == 0x25) {
    get_or_create_singleton_object_104fb12e();
    iVar2 = debug_mode_wrapper();
    if (iVar2 == 0) {
      iVar2 = get_or_init_singleton_object_103c8200();
    }
    else {
      iVar2 = get_or_init_sram_object_104248cc();
    }
    *(uint32_t *)(param_1 + 0x1c) = 0x1060019;
  }
  if (*(int *)(param_1 + 0x18) == 0x26) {
    iVar2 = init_singleton_object_103c9046();
    *(uint32_t *)(param_1 + 0x1c) = 0x1060019;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    *(uint8_t *)(param_1 + 0x26) = 0x8c;
    iVar2 = 0;
  }
  if ((*(int *)(param_1 + 0x18) == 0x19) || (*(int *)(param_1 + 0x18) == 9)) {
    *(uint8_t *)(param_1 + 0x26) = 0x50;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x18) == 0x18) {
    *(uint8_t *)(param_1 + 0x26) = 0xb4;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x18) == 0x2c) {
    *(uint8_t *)(param_1 + 0x26) = 0x8c;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x18) == 10) {
    *(uint8_t *)(param_1 + 0x26) = 200;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0x1060010) {
    if (*(int *)(param_1 + 0x18) == 0x10) {
      iVar2 = init_singleton_object_103c9046();
    }
    else if ((*(int *)(param_1 + 0x18) == 0xd) && (send_command_and_wait_ack(iVar3), extraout_r4 != 0)) {
      iVar2 = get_or_init_sram_object_103cfbca();
    }
  }
  if ((*(int *)(param_1 + 0x1c) == 0x1060013) && (*(int *)(param_1 + 0x18) == 0xd)) {
    iVar2 = get_or_init_sram_object_103d255a();
  }
  if ((*(int *)(param_1 + 0x1c) == 0x1060016) && (*(int *)(param_1 + 0x18) == 0xd)) {
    iVar2 = initialize_singleton_object_1040adb2();
  }
  if (*(int *)(param_1 + 0x1c) == 0x1060019) {
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0x10) {
      iVar2 = init_singleton_object_103c9046();
    }
    else if (iVar3 == 0xf) {
      get_or_create_singleton_object_104fb12e();
      iVar2 = debug_mode_wrapper();
      if (iVar2 == 0) {
        iVar2 = get_or_init_singleton_object_103c8200();
      }
      else {
        iVar2 = get_or_init_sram_object_104248cc();
      }
    }
    else if (iVar3 == 0xd) {
      iVar2 = get_or_init_object_at_8001c66c();
    }
  }
  if ((*(int *)(param_1 + 0x18) == 0xc) || (*(int *)(param_1 + 0x18) == 0x11)) {
    *(uint8_t *)(param_1 + 0x26) = 0x50;
    iVar2 = 0;
  }
  return iVar2;
}
