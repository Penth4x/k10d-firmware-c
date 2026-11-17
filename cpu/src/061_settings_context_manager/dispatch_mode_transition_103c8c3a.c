/* @k10d dispatch_mode_transition_103c8c3a @ 0x103c8c3a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 061_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Stores a new mode ID in a state struct and dispatches to mode-specific initialization
 *   or cleanup routines based on the mode and sub-state.
 * summary:
 *   The function writes param_2 to offset 0x18 of the object pointed to by param_1. It then
 *   performs a series of conditional checks on this value and other fields (like offset
 *   0x1c) to call various helper functions (e.g., get_or_init_sram_object_103c0f94,
 *   get_or_init_singleton_object_103c74d0) or set specific flags at offset 0x26. It uses
 *   setting_get to read configuration values (0xb0, 0x90) to determine which branch to
 *   take. The return value is the result of the last executed helper or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103c8d10) overlaps instruction at (ram,0x103c8d0e)
    */

int dispatch_mode_transition_103c8c3a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
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
    iVar2 = init_singleton_object_103c9046();
    *(uint32_t *)(param_1 + 0x1c) = 0x1040028;
  }
  if (*(int *)(param_1 + 0x18) == 0x26) {
    get_or_create_singleton_object_104fb12e();
    iVar2 = debug_mode_wrapper();
    if (iVar2 == 0) {
      iVar2 = init_singleton_object_103cc008();
      *(uint32_t *)(param_1 + 0x1c) = 0x1040028;
    }
    else {
      iVar2 = get_or_init_sram_object_104248cc();
      *(uint32_t *)(param_1 + 0x1c) = 0x1040028;
    }
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
  if (*(int *)(param_1 + 0x1c) == 0x1040010) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0x10) {
      get_or_create_singleton_object_104fb12e();
      iVar2 = debug_mode_wrapper();
      if (iVar2 == 0) {
        iVar2 = init_singleton_object_103cc008();
      }
      else {
        iVar2 = get_or_init_sram_object_104248cc();
      }
    }
    else if (iVar1 == 0xd) {
      iVar2 = setting_get(*(int *)(param_1 + 8),0xb0);
      if (iVar2 == 0) {
        iVar2 = initialize_singleton_object_103d4044();
      }
      else {
        iVar2 = get_or_init_sram_object_103c0f94();
      }
    }
    else if (iVar1 == 0xe) {
      iVar2 = get_or_init_singleton_object_103c74d0();
    }
  }
  if ((*(int *)(param_1 + 0x1c) == 0x1040018) && (*(int *)(param_1 + 0x18) == 0xd)) {
    iVar2 = get_or_create_singleton_object_103ebe9e();
  }
  if ((*(int *)(param_1 + 0x1c) == 0x1040015) && (*(int *)(param_1 + 0x18) == 0xd)) {
    iVar2 = get_or_init_sram_object_103d9db8();
  }
  if ((*(int *)(param_1 + 0x1c) == 0x104001b) && (*(int *)(param_1 + 0x18) == 0xd)) {
    iVar2 = setting_get(*(int *)(param_1 + 8),0x90);
    if (iVar2 == 0) {
      iVar2 = get_or_init_sram_object_103d0fa6();
    }
    else {
      iVar2 = get_or_init_sram_object_103d0b28();
    }
  }
  if ((*(int *)(param_1 + 0x1c) == 0x1040020) && (*(int *)(param_1 + 0x18) == 0xd)) {
    iVar2 = get_or_init_screen_object();
  }
  if ((*(int *)(param_1 + 0x1c) == 0x1040023) && (*(int *)(param_1 + 0x18) == 0xd)) {
    iVar2 = get_or_init_singleton_object_103f21a6();
  }
  if (*(int *)(param_1 + 0x1c) == 0x1040028) {
    if (*(int *)(param_1 + 0x18) == 0xd) {
      iVar2 = get_language_select_screen();
    }
    else if (*(int *)(param_1 + 0x18) == 0xf) {
      iVar2 = init_singleton_object_103c9046();
    }
  }
  if ((*(int *)(param_1 + 0x18) == 0xc) || (*(int *)(param_1 + 0x18) == 0x11)) {
    *(uint8_t *)(param_1 + 0x26) = 0x50;
    iVar2 = 0;
  }
  return iVar2;
}
