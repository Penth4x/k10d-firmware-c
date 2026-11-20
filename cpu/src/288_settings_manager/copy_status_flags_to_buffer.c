/* @k10d copy_status_flags_to_buffer @ 0x1052d06c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a series of status flags from a source object into a destination buffer at
 *   offset 0x164.
 * summary:
 *   The function initializes a destination buffer by calling a virtual method and a helper.
 *   It then checks a condition via check_object_property_43; if true, it iterates through a
 *   fixed set of indices (0x135-0x159) and copies corresponding values from a source object
 *   (retrieved via get_or_create_singleton_object_104fb12e) into the destination buffer
 *   using settings_getter and field_setter. Finally, it calls copy_flag_bytes_to_struct
 *   with the object and buffer pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_status_flags_to_buffer(int param_1)

{
  int iVar1;
  uint uVar2;
  uint8_t uVar3;
  
  release_heap_block_and_clear_104bcd58((cls_105b934c *)(param_1 + 0x1dc));
  test_mode_state_reset(*(void **)(param_1 + 500));
  field_setter(*(int *)(param_1 + 500) + 0x164,0xb0,1);
  iVar1 = get_or_create_singleton_object_104fb12e();
  uVar2 = check_object_property_43(*(int *)(iVar1 + 0x74));
  if (uVar2 != 0) {
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x135);
    field_setter(iVar1,0xd,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x136);
    field_setter(iVar1,0xe,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x137);
    field_setter(iVar1,0xf,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x138);
    field_setter(iVar1,0x10,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x139);
    field_setter(iVar1,0x11,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x13a);
    field_setter(iVar1,0x12,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x13b);
    field_setter(iVar1,0x13,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x13c);
    field_setter(iVar1,0x14,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x13d);
    field_setter(iVar1,0x15,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x13e);
    field_setter(iVar1,0x16,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x13f);
    field_setter(iVar1,0x17,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x140);
    field_setter(iVar1,0x18,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x141);
    field_setter(iVar1,0x19,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x142);
    field_setter(iVar1,0x1a,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x143);
    field_setter(iVar1,0x1b,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x144);
    field_setter(iVar1,0x1c,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x145);
    field_setter(iVar1,0x1d,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x146);
    field_setter(iVar1,0x1e,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x147);
    field_setter(iVar1,0x1f,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x148);
    field_setter(iVar1,0x20,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x149);
    field_setter(iVar1,0x21,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x14a);
    field_setter(iVar1,0x22,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x14b);
    field_setter(iVar1,0x23,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x14c);
    field_setter(iVar1,0x24,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x14d);
    field_setter(iVar1,0x25,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x14e);
    field_setter(iVar1,0x26,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x14f);
    field_setter(iVar1,0x27,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x150);
    field_setter(iVar1,0x28,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x151);
    field_setter(iVar1,0x29,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x152);
    field_setter(iVar1,0x2a,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x154);
    field_setter(iVar1,0x2c,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x155);
    field_setter(iVar1,0x2d,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x157);
    field_setter(iVar1,0x2f,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x158);
    field_setter(iVar1,0x30,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x153);
    field_setter(iVar1,0x2b,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x156);
    field_setter(iVar1,0x2e,uVar3);
    iVar1 = *(int *)(param_1 + 500) + 0x164;
    uVar3 = settings_getter(iVar1,0x159);
    field_setter(iVar1,0x31,uVar3);
  }
  copy_flag_bytes_to_struct(param_1,*(int *)(param_1 + 500) + 0x164);
  return;
}
