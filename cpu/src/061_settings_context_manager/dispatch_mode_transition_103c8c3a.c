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

cls_10595818 * dispatch_mode_transition_103c8c3a(cls_10595818 *param_1,int param_2)

{
  int iVar1;
  cls_10595818 *pcVar2;
  
  param_1->field_0x18 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0x27) {
    iVar1 = setting_get(param_1->field_0x8,0xb0);
    if (iVar1 == 0) {
      pcVar2 = (cls_10595818 *)initialize_singleton_object_103d4044();
    }
    else {
      pcVar2 = (cls_10595818 *)get_or_init_sram_object_103c0f94();
    }
  }
  if (param_1->field_0x18 == 0x28) {
    pcVar2 = (cls_10595818 *)get_or_init_singleton_object_103c74d0();
  }
  if (param_1->field_0x18 == 0x25) {
    pcVar2 = (cls_10595818 *)init_singleton_object_103c9046();
    param_1->field_0x1c = 0x1040028;
  }
  if (param_1->field_0x18 == 0x26) {
    get_or_create_singleton_object_104fb12e();
    iVar1 = debug_mode_wrapper();
    if (iVar1 == 0) {
      pcVar2 = (cls_10595818 *)init_singleton_object_103cc008();
      param_1->field_0x1c = 0x1040028;
    }
    else {
      pcVar2 = (cls_10595818 *)get_or_init_sram_object_104248cc();
      param_1->field_0x1c = 0x1040028;
    }
  }
  iVar1 = param_1->field_0x18;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x26 = 0x8c;
    pcVar2 = (cls_10595818 *)0x0;
  }
  if ((param_1->field_0x18 == 0x19) || (param_1->field_0x18 == 9)) {
    param_1->field_0x26 = 0x50;
    pcVar2 = (cls_10595818 *)0x0;
  }
  if (param_1->field_0x18 == 0x18) {
    param_1->field_0x26 = 0xb4;
    pcVar2 = (cls_10595818 *)0x0;
  }
  if (param_1->field_0x18 == 0x2c) {
    param_1->field_0x26 = 0x8c;
    pcVar2 = (cls_10595818 *)0x0;
  }
  if (param_1->field_0x18 == 10) {
    param_1->field_0x26 = 200;
    pcVar2 = (cls_10595818 *)0x0;
  }
  if (param_1->field_0x1c == 0x1040010) {
    iVar1 = param_1->field_0x18;
    if (iVar1 == 0x10) {
      get_or_create_singleton_object_104fb12e();
      iVar1 = debug_mode_wrapper();
      if (iVar1 == 0) {
        pcVar2 = (cls_10595818 *)init_singleton_object_103cc008();
      }
      else {
        pcVar2 = (cls_10595818 *)get_or_init_sram_object_104248cc();
      }
    }
    else if (iVar1 == 0xd) {
      iVar1 = setting_get(param_1->field_0x8,0xb0);
      if (iVar1 == 0) {
        pcVar2 = (cls_10595818 *)initialize_singleton_object_103d4044();
      }
      else {
        pcVar2 = (cls_10595818 *)get_or_init_sram_object_103c0f94();
      }
    }
    else if (iVar1 == 0xe) {
      pcVar2 = (cls_10595818 *)get_or_init_singleton_object_103c74d0();
    }
  }
  if ((param_1->field_0x1c == 0x1040018) && (param_1->field_0x18 == 0xd)) {
    pcVar2 = (cls_10595818 *)get_or_create_singleton_object_103ebe9e();
  }
  if ((param_1->field_0x1c == 0x1040015) && (param_1->field_0x18 == 0xd)) {
    pcVar2 = (cls_10595818 *)get_or_init_sram_object_103d9db8();
  }
  if ((param_1->field_0x1c == 0x104001b) && (param_1->field_0x18 == 0xd)) {
    iVar1 = setting_get(param_1->field_0x8,0x90);
    if (iVar1 == 0) {
      pcVar2 = (cls_10595818 *)get_or_init_sram_object_103d0fa6();
    }
    else {
      pcVar2 = (cls_10595818 *)get_or_init_sram_object_103d0b28();
    }
  }
  if ((param_1->field_0x1c == 0x1040020) && (param_1->field_0x18 == 0xd)) {
    pcVar2 = (cls_10595818 *)get_or_init_screen_object();
  }
  if ((param_1->field_0x1c == 0x1040023) && (param_1->field_0x18 == 0xd)) {
    pcVar2 = (cls_10595818 *)get_or_init_singleton_object_103f21a6();
  }
  if (param_1->field_0x1c == 0x1040028) {
    if (param_1->field_0x18 == 0xd) {
      pcVar2 = (cls_10595818 *)get_language_select_screen();
    }
    else if (param_1->field_0x18 == 0xf) {
      pcVar2 = (cls_10595818 *)init_singleton_object_103c9046();
    }
  }
  if ((param_1->field_0x18 == 0xc) || (param_1->field_0x18 == 0x11)) {
    param_1->field_0x26 = 0x50;
    pcVar2 = (cls_10595818 *)0x0;
  }
  return pcVar2;
}
