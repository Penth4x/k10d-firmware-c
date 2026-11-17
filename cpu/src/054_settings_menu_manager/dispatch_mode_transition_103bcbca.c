/* @k10d dispatch_mode_transition_103bcbca @ 0x103bcbca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103bce5e) overlaps instruction at (ram,0x103bce5c)
    */

int dispatch_mode_transition_103bcbca(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x18) = param_2;
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = param_1;
  if ((((((iVar1 != 0x1010038) && (iVar1 != 0x101003a)) && (iVar1 != 0x101003c)) &&
       ((iVar1 != 0x1010045 && (iVar1 != 0x1010047)))) &&
      ((iVar1 != 0x1010049 && ((iVar1 != 0x1010052 && (iVar1 != 0x1010054)))))) &&
     (((iVar1 != 0x1010019 &&
       (((((iVar1 != 0x101001b && (iVar1 != 0x101001d)) && (iVar1 != 0x101001f)) &&
         (((iVar1 != 0x1010023 && (iVar1 != 0x1010025)) &&
          ((iVar1 != 0x1010027 && ((iVar1 != 0x1010029 && (iVar1 != 0x101002b)))))))) &&
        (iVar1 != 0x1010031)))) && ((iVar1 != 0x1010032 && (iVar1 != 0x1010033)))))) {
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
      iVar2 = get_or_create_sram_object_103be36c();
      *(uint32_t *)(param_1 + 0x1c) = 0x1010074;
    }
    if (*(int *)(param_1 + 0x18) == 0x26) {
      iVar2 = get_or_create_sram_object_103be36c();
      *(uint32_t *)(param_1 + 0x1c) = 0x1010074;
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    *(uint8_t *)(param_1 + 0x36) = 0x8c;
    iVar2 = 0;
  }
  if ((*(int *)(param_1 + 0x18) == 0x19) || (*(int *)(param_1 + 0x18) == 9)) {
    *(uint8_t *)(param_1 + 0x36) = 0x50;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x18) == 0x18) {
    *(uint8_t *)(param_1 + 0x36) = 0xb4;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x18) == 0x2c) {
    *(uint8_t *)(param_1 + 0x36) = 0x8c;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x18) == 10) {
    *(uint8_t *)(param_1 + 0x36) = 200;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0x101000f) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0x10) {
      iVar2 = get_or_create_sram_object_103be36c();
    }
    else if (iVar1 == 0xd) {
      iVar2 = get_or_init_singleton_object_103c74d0();
    }
    else if (iVar1 == 0xe) {
      iVar2 = setting_get(*(int *)(param_1 + 8),0xb0);
      if (iVar2 == 0) {
        iVar2 = initialize_singleton_object_103d4044();
      }
      else {
        iVar2 = get_or_init_sram_object_103c0f94();
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if ((((iVar1 == 0x1010074) || (iVar1 == 0x1010077)) ||
      ((iVar1 == 0x1010078 ||
       ((((iVar1 == 0x1010079 || (iVar1 == 0x101007a)) || (iVar1 == 0x101007b)) ||
        ((iVar1 == 0x101007c || (iVar1 == 0x101007d)))))))) && (*(int *)(param_1 + 0x18) == 0xf)) {
    iVar2 = get_or_create_sram_object_103be36c();
  }
  if ((*(int *)(param_1 + 0x18) == 0xc) || (*(int *)(param_1 + 0x18) == 0x11)) {
    *(uint8_t *)(param_1 + 0x36) = 0x50;
    iVar2 = 0;
  }
  return iVar2;
}
