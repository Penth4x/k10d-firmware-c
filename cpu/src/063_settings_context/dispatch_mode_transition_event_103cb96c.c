/* @k10d dispatch_mode_transition_event_103cb96c @ 0x103cb96c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 063_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103cba56) overlaps instruction at (ram,0x103cba54)
    */

int dispatch_mode_transition_event_103cb96c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = param_1;
  if (((((iVar1 == 0x1050071) || (iVar1 == 0x1050033)) || (iVar1 == 0x1050028)) ||
      ((iVar1 == 0x105001b || (iVar1 == 0x105005e)))) || (iVar1 == 0x1050010)) {
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
      iVar2 = init_singleton_object_103cc008();
      *(uint32_t *)(param_1 + 0x18) = 0x1050010;
    }
    if (*(int *)(param_1 + 0x14) == 0x26) {
      iVar2 = get_or_init_singleton_object_103c8200();
      *(uint32_t *)(param_1 + 0x18) = 0x1050010;
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || ((iVar1 == 1 || (iVar1 == 3)))) {
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
  if ((*(int *)(param_1 + 0x18) == 0x1050010) && (*(int *)(param_1 + 0x14) == 0xf)) {
    iVar2 = init_singleton_object_103cc008();
  }
  if ((*(int *)(param_1 + 0x18) == 0x1050071) && (*(int *)(param_1 + 0x14) == 0x10)) {
    iVar2 = get_or_init_singleton_object_103c8200();
  }
  if ((*(int *)(param_1 + 0x14) == 0xc) || (*(int *)(param_1 + 0x14) == 0x11)) {
    *(uint8_t *)(param_1 + 0x22) = 0x50;
    iVar2 = 0;
  }
  return iVar2;
}
