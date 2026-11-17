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

int dispatch_mode_transition_handler_103c6f0a(int param_1,int param_2)

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
    iVar2 = get_or_init_sram_object_103c0f94();
    *(uint32_t *)(param_1 + 0x18) = 0x10d002a;
  }
  if (*(int *)(param_1 + 0x14) == 0x26) {
    iVar2 = get_or_init_sram_object_103c531c();
    *(uint32_t *)(param_1 + 0x18) = 0x10d002a;
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
  if (*(int *)(param_1 + 0x18) == 0x10d0016) {
    if (*(int *)(param_1 + 0x14) == 0x10) {
      iVar2 = get_or_init_sram_object_103c531c();
    }
    else if (*(int *)(param_1 + 0x14) == 0xd) {
      iVar2 = get_or_init_ram_object_103ce3dc(iVar2);
    }
  }
  if ((*(int *)(param_1 + 0x18) == 0x10d001b) && (*(int *)(param_1 + 0x14) == 0xd)) {
    iVar2 = get_or_create_singleton_object_103e9180();
  }
  if ((*(int *)(param_1 + 0x18) == 0x10d0020) && (*(int *)(param_1 + 0x14) == 0xd)) {
    iVar2 = get_or_init_sram_object_103cddc0();
  }
  if ((*(int *)(param_1 + 0x18) == 0x10d0025) && (*(int *)(param_1 + 0x14) == 0xd)) {
    iVar2 = get_or_create_sram_object_1042683a();
  }
  if (*(int *)(param_1 + 0x18) == 0x10d002a) {
    if (*(int *)(param_1 + 0x14) == 0xf) {
      iVar2 = get_or_init_sram_object_103c0f94();
    }
    else if (*(int *)(param_1 + 0x14) == 0xd) {
      iVar2 = get_or_init_ram_object_103d3918();
    }
  }
  if ((*(int *)(param_1 + 0x14) == 0xc) || (*(int *)(param_1 + 0x14) == 0x11)) {
    *(uint8_t *)(param_1 + 0x22) = 0x50;
    iVar2 = 0;
  }
  return iVar2;
}
