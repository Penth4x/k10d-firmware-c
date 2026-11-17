/* @k10d copy_settings_to_destination_buffer @ 0x10523e7c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 281_test_mode_telemetry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10523ec2) overlaps instruction at (ram,0x10523ec0)
    */

void copy_settings_to_destination_buffer(uint32_t param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  uint16_t uVar4;
  void *pvVar5;
  
  iVar1 = get_or_create_singleton_object_10485138();
  pvVar5 = *(void **)(iVar1 + 8);
  settings_refresh_working_copy(pvVar5);
  iVar1 = get_or_create_singleton_object_104fb12e();
  uVar2 = check_object_property_43(*(int *)(iVar1 + 0x74));
  param_2 = param_2 + 0x164;
  if (uVar2 == 0) {
    uVar3 = setting_get((int)pvVar5,0xd);
    field_setter(param_2,0xd,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0xe);
    field_setter(param_2,0xe,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0xf);
    field_setter(param_2,0xf,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x10);
    field_setter(param_2,0x10,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x11);
    field_setter(param_2,0x11,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x12);
    field_setter(param_2,0x12,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x13);
    field_setter(param_2,0x13,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x14);
    field_setter(param_2,0x14,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x15);
    field_setter(param_2,0x15,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x16);
    field_setter(param_2,0x16,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x17);
    field_setter(param_2,0x17,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x18);
    field_setter(param_2,0x18,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x19);
    field_setter(param_2,0x19,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x1a);
    field_setter(param_2,0x1a,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x1b);
    field_setter(param_2,0x1b,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x1c);
    field_setter(param_2,0x1c,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x1d);
    field_setter(param_2,0x1d,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x1e);
    field_setter(param_2,0x1e,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x1f);
    field_setter(param_2,0x1f,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x20);
    field_setter(param_2,0x20,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x21);
    field_setter(param_2,0x21,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x22);
    field_setter(param_2,0x22,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x23);
    field_setter(param_2,0x23,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x24);
    field_setter(param_2,0x24,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x25);
    field_setter(param_2,0x25,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x26);
    field_setter(param_2,0x26,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x27);
    field_setter(param_2,0x27,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x28);
    field_setter(param_2,0x28,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x29);
    field_setter(param_2,0x29,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x2a);
    field_setter(param_2,0x2a,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x2c);
    field_setter(param_2,0x2c,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x2d);
    field_setter(param_2,0x2d,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x2f);
    field_setter(param_2,0x2f,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x30);
    field_setter(param_2,0x30,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x2b);
    field_setter(param_2,0x2b,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x2e);
    field_setter(param_2,0x2e,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x31);
    field_setter(param_2,0x31,(char)uVar3);
    uVar4 = call_method_at_offset_0x14(pvVar5,0,0);
    write_two_byte_field(param_2,0,0,uVar4);
    uVar4 = call_method_at_offset_0x14(pvVar5,0,2);
    write_two_byte_field(param_2,0,2,uVar4);
    uVar4 = call_method_at_offset_0x14(pvVar5,0,3);
    write_two_byte_field(param_2,0,3,uVar4);
    uVar4 = call_method_at_offset_0x14(pvVar5,0,1);
  }
  else {
    uVar3 = setting_get((int)pvVar5,0x135);
    field_setter(param_2,0xd,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x136);
    field_setter(param_2,0xe,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x137);
    field_setter(param_2,0xf,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x138);
    field_setter(param_2,0x10,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x139);
    field_setter(param_2,0x11,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x13a);
    field_setter(param_2,0x12,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x13b);
    field_setter(param_2,0x13,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x13c);
    field_setter(param_2,0x14,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x13d);
    field_setter(param_2,0x15,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x13e);
    field_setter(param_2,0x16,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x13f);
    field_setter(param_2,0x17,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x140);
    field_setter(param_2,0x18,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x141);
    field_setter(param_2,0x19,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x142);
    field_setter(param_2,0x1a,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x143);
    field_setter(param_2,0x1b,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x144);
    field_setter(param_2,0x1c,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x145);
    field_setter(param_2,0x1d,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x146);
    field_setter(param_2,0x1e,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x147);
    field_setter(param_2,0x1f,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x148);
    field_setter(param_2,0x20,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x149);
    field_setter(param_2,0x21,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x14a);
    field_setter(param_2,0x22,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x14b);
    field_setter(param_2,0x23,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x14c);
    field_setter(param_2,0x24,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x14d);
    field_setter(param_2,0x25,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x14e);
    field_setter(param_2,0x26,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x14f);
    field_setter(param_2,0x27,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x150);
    field_setter(param_2,0x28,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x151);
    field_setter(param_2,0x29,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x152);
    field_setter(param_2,0x2a,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x154);
    field_setter(param_2,0x2c,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x155);
    field_setter(param_2,0x2d,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x157);
    field_setter(param_2,0x2f,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x158);
    field_setter(param_2,0x30,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x153);
    field_setter(param_2,0x2b,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x156);
    field_setter(param_2,0x2e,(char)uVar3);
    uVar3 = setting_get((int)pvVar5,0x159);
    field_setter(param_2,0x31,(char)uVar3);
    uVar4 = forward_call_with_offset(pvVar5,0,0,0);
    write_two_byte_field(param_2,0,0,uVar4);
    uVar4 = forward_call_with_offset(pvVar5,0,2,0);
    write_two_byte_field(param_2,0,2,uVar4);
    uVar4 = forward_call_with_offset(pvVar5,0,3,0);
    write_two_byte_field(param_2,0,3,uVar4);
    uVar4 = forward_call_with_offset(pvVar5,0,1,0);
  }
  write_two_byte_field(param_2,0,1,uVar4);
  return;
}
