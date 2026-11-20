/* @k10d dispatch_mode_transition_handler_103c6f0a @ 0x103c6f0a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode ID in a struct and dispatches to specific handlers or sets timeout values
 *   based on the mode and state fields.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   performs a series of conditional checks on this value (and a second field at 0x18) to
 *   either call specific handler functions (e.g., get_or_init_ram_object_103b95ee,
 *   get_or_init_sram_object_103c0f94) or set a byte at offset 0x22 to specific values
 *   (0x8c, 0x50, 0xb4, 200). The return value is the result of the last handler called or 0
 *   if a timeout was set.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103c6f9c) overlaps instruction at (ram,0x103c6f9a)
    */

cls_105953cc * dispatch_mode_transition_handler_103c6f0a(cls_105953cc *param_1,int param_2)

{
  int iVar1;
  cls_105953cc *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0x27) {
    pcVar2 = (cls_105953cc *)get_or_init_ram_object_103b95ee();
  }
  if (param_1->field_0x14 == 0x28) {
    pcVar2 = (cls_105953cc *)get_or_init_singleton_object_103c8200();
  }
  if (param_1->field_0x14 == 0x25) {
    pcVar2 = (cls_105953cc *)get_or_init_sram_object_103c0f94();
    param_1->field_0x18 = 0x10d002a;
  }
  if (param_1->field_0x14 == 0x26) {
    pcVar2 = (cls_105953cc *)get_or_init_sram_object_103c531c();
    param_1->field_0x18 = 0x10d002a;
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105953cc *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_105953cc *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_105953cc *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105953cc *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_105953cc *)0x0;
  }
  if (param_1->field_0x18 == 0x10d0016) {
    if (param_1->field_0x14 == 0x10) {
      pcVar2 = (cls_105953cc *)get_or_init_sram_object_103c531c();
    }
    else if (param_1->field_0x14 == 0xd) {
      pcVar2 = (cls_105953cc *)get_or_init_ram_object_103ce3dc((uint32_t)(pcVar2));
    }
  }
  if ((param_1->field_0x18 == 0x10d001b) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_105953cc *)get_or_create_singleton_object_103e9180();
  }
  if ((param_1->field_0x18 == 0x10d0020) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_105953cc *)get_or_init_sram_object_103cddc0();
  }
  if ((param_1->field_0x18 == 0x10d0025) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_105953cc *)get_or_create_sram_object_1042683a();
  }
  if (param_1->field_0x18 == 0x10d002a) {
    if (param_1->field_0x14 == 0xf) {
      pcVar2 = (cls_105953cc *)get_or_init_sram_object_103c0f94();
    }
    else if (param_1->field_0x14 == 0xd) {
      pcVar2 = (cls_105953cc *)get_or_init_ram_object_103d3918();
    }
  }
  if ((param_1->field_0x14 == 0xc) || (param_1->field_0x14 == 0x11)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_105953cc *)0x0;
  }
  return pcVar2;
}
