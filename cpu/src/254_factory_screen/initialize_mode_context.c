/* @k10d initialize_mode_context @ 0x104e8f7e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 254_factory_screen (unit names are model-proposed)
 * purpose:
 *   Initializes a mode context object by copying settings and configuring UI elements based
 *   on the mode ID.
 * summary:
 *   The function validates the input object and waits for a state flag to reach 4. It then
 *   populates a sub-object (offset 0xab) with camera settings (AE, AF, etc.) using
 *   setting_get and field_setter. Based on param_3 (mode ID), it configures UI layout
 *   parameters via write_two_words_to_struct_10513bca and sets specific flags. Finally, it
 *   links the context to the parent object and initializes associated resources.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104e904a) overlaps instruction at (ram,0x104e9048)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_mode_context(int param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint32_t uVar2;
  uint16_t uVar3;
  uint8_t uVar4;
  int *piVar5;
  uint32_t *puVar6;
  void *pvVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x180) != 0) {
    return 0x82;
  }
  if (param_2[7] != 4) {
    iVar8 = param_2[7];
    while (iVar8 != 4) {
      check_kernel_call_success_10459fea();
      iVar8 = param_2[7];
    }
  }
  *param_2 = param_1 + 4;
  piVar5 = param_2 + 0xab;
  field_setter((int)piVar5,0x51,0);
  field_setter((int)piVar5,0x53,0);
  field_setter((int)piVar5,0x52,0);
  if (param_4 != 0) {
    iVar8 = get_or_create_singleton_object_10485138();
    pvVar7 = *(void **)(iVar8 + 8);
    settings_refresh_working_copy(pvVar7);
    iVar8 = get_or_create_singleton_object_104fb12e();
    uVar1 = check_object_property_43(*(int *)(iVar8 + 0x74));
    if (uVar1 == 0) {
      uVar2 = setting_get((int)pvVar7,0x50);
      field_setter((int)piVar5,0x50,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x59);
      field_setter((int)piVar5,0x59,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x5a);
      field_setter((int)piVar5,0x5a,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x58);
      field_setter((int)piVar5,0x58,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x56);
      field_setter((int)piVar5,0x56,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x57);
      field_setter((int)piVar5,0x57,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x55);
      field_setter((int)piVar5,0x55,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0xc2);
      field_setter((int)piVar5,0xc2,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0xd);
      field_setter((int)piVar5,0xd,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0xe);
      field_setter((int)piVar5,0xe,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0xf);
      field_setter((int)piVar5,0xf,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x10);
      field_setter((int)piVar5,0x10,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x11);
      field_setter((int)piVar5,0x11,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x12);
      field_setter((int)piVar5,0x12,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x13);
      field_setter((int)piVar5,0x13,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x14);
      field_setter((int)piVar5,0x14,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x15);
      field_setter((int)piVar5,0x15,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x16);
      field_setter((int)piVar5,0x16,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x17);
      field_setter((int)piVar5,0x17,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x18);
      field_setter((int)piVar5,0x18,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x19);
      field_setter((int)piVar5,0x19,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x1a);
      field_setter((int)piVar5,0x1a,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x1b);
      field_setter((int)piVar5,0x1b,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x1c);
      field_setter((int)piVar5,0x1c,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x1d);
      field_setter((int)piVar5,0x1d,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x1e);
      field_setter((int)piVar5,0x1e,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x1f);
      field_setter((int)piVar5,0x1f,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x20);
      field_setter((int)piVar5,0x20,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x21);
      field_setter((int)piVar5,0x21,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x22);
      field_setter((int)piVar5,0x22,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x23);
      field_setter((int)piVar5,0x23,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x24);
      field_setter((int)piVar5,0x24,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x25);
      field_setter((int)piVar5,0x25,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x26);
      field_setter((int)piVar5,0x26,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x27);
      field_setter((int)piVar5,0x27,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x28);
      field_setter((int)piVar5,0x28,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x29);
      field_setter((int)piVar5,0x29,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x2a);
      field_setter((int)piVar5,0x2a,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x2c);
      field_setter((int)piVar5,0x2c,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x2d);
      field_setter((int)piVar5,0x2d,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x2f);
      field_setter((int)piVar5,0x2f,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x30);
      field_setter((int)piVar5,0x30,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x2b);
      field_setter((int)piVar5,0x2b,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x2e);
      field_setter((int)piVar5,0x2e,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x31);
      field_setter((int)piVar5,0x31,(char)uVar2);
      uVar3 = call_method_at_offset_0x14(pvVar7,0,0);
      write_two_byte_field((int)piVar5,0,0,uVar3);
      uVar3 = call_method_at_offset_0x14(pvVar7,0,2);
      write_two_byte_field((int)piVar5,0,2,uVar3);
      uVar3 = call_method_at_offset_0x14(pvVar7,0,3);
      write_two_byte_field((int)piVar5,0,3,uVar3);
      uVar3 = call_method_at_offset_0x14(pvVar7,0,1);
    }
    else {
      uVar2 = setting_get((int)pvVar7,0x160);
      field_setter((int)piVar5,0x50,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x169);
      field_setter((int)piVar5,0x59,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x16a);
      field_setter((int)piVar5,0x5a,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x168);
      field_setter((int)piVar5,0x58,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x166);
      field_setter((int)piVar5,0x56,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x167);
      field_setter((int)piVar5,0x57,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x165);
      field_setter((int)piVar5,0x55,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0xc2);
      field_setter((int)piVar5,0xc2,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x135);
      field_setter((int)piVar5,0xd,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x136);
      field_setter((int)piVar5,0xe,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x137);
      field_setter((int)piVar5,0xf,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x138);
      field_setter((int)piVar5,0x10,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x139);
      field_setter((int)piVar5,0x11,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x13a);
      field_setter((int)piVar5,0x12,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x13b);
      field_setter((int)piVar5,0x13,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x13c);
      field_setter((int)piVar5,0x14,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x13d);
      field_setter((int)piVar5,0x15,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x13e);
      field_setter((int)piVar5,0x16,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x13f);
      field_setter((int)piVar5,0x17,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x140);
      field_setter((int)piVar5,0x18,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x141);
      field_setter((int)piVar5,0x19,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x142);
      field_setter((int)piVar5,0x1a,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x143);
      field_setter((int)piVar5,0x1b,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x144);
      field_setter((int)piVar5,0x1c,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x145);
      field_setter((int)piVar5,0x1d,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x146);
      field_setter((int)piVar5,0x1e,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x147);
      field_setter((int)piVar5,0x1f,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x148);
      field_setter((int)piVar5,0x20,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x149);
      field_setter((int)piVar5,0x21,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x14a);
      field_setter((int)piVar5,0x22,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x14b);
      field_setter((int)piVar5,0x23,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x14c);
      field_setter((int)piVar5,0x24,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x14d);
      field_setter((int)piVar5,0x25,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x14e);
      field_setter((int)piVar5,0x26,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x14f);
      field_setter((int)piVar5,0x27,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x150);
      field_setter((int)piVar5,0x28,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x151);
      field_setter((int)piVar5,0x29,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x152);
      field_setter((int)piVar5,0x2a,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x154);
      field_setter((int)piVar5,0x2c,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x155);
      field_setter((int)piVar5,0x2d,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x157);
      field_setter((int)piVar5,0x2f,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x158);
      field_setter((int)piVar5,0x30,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x153);
      field_setter((int)piVar5,0x2b,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x156);
      field_setter((int)piVar5,0x2e,(char)uVar2);
      uVar2 = setting_get((int)pvVar7,0x159);
      field_setter((int)piVar5,0x31,(char)uVar2);
      uVar3 = forward_call_with_offset(pvVar7,0,0,0);
      write_two_byte_field((int)piVar5,0,0,uVar3);
      uVar3 = forward_call_with_offset(pvVar7,0,2,0);
      write_two_byte_field((int)piVar5,0,2,uVar3);
      uVar3 = forward_call_with_offset(pvVar7,0,3,0);
      write_two_byte_field((int)piVar5,0,3,uVar3);
      uVar3 = forward_call_with_offset(pvVar7,0,1,0);
    }
    write_two_byte_field((int)piVar5,0,1,uVar3);
    iVar8 = setting_get((int)pvVar7,0xbb);
    if (iVar8 == 0) {
      field_setter((int)piVar5,0x11,7);
      field_setter((int)piVar5,0x12,7);
    }
  }
  switch(param_3) {
  case 0:
    field_setter((int)piVar5,0x51,1);
    field_setter((int)piVar5,0x54,0);
    pvVar7 = (void *)(param_1 + 0x3c);
    write_two_words_to_struct_10513bca(pvVar7,0,2,2);
    write_two_words_to_struct_10513bca(pvVar7,1,0xd,0);
    write_two_words_to_struct_10513bca(pvVar7,2,0x13,0);
    write_two_words_to_struct_10513bca(pvVar7,3,8,7);
    write_two_words_to_struct_10513bca(pvVar7,4,0x13,0);
    write_two_words_to_struct_10513bca(pvVar7,5,0xb,1);
    write_two_words_to_struct_10513bca(pvVar7,6,0x13,0);
    write_two_words_to_struct_10513bca(pvVar7,7,0xc,0);
    write_two_words_to_struct_10513bca(pvVar7,8,0x13,0);
    write_two_words_to_struct_10513bca(pvVar7,9,1,2);
    write_two_words_to_struct_10513bca(pvVar7,10,0x19,0);
    iVar8 = 0xb;
    break;
  case 1:
    field_setter((int)piVar5,0x51,1);
    field_setter((int)piVar5,0x54,1);
    pvVar7 = (void *)(param_1 + 0x3c);
    write_two_words_to_struct_10513bca(pvVar7,0,2,2);
    write_two_words_to_struct_10513bca(pvVar7,1,0xd,0);
    write_two_words_to_struct_10513bca(pvVar7,2,0x13,0);
    write_two_words_to_struct_10513bca(pvVar7,3,8,7);
    write_two_words_to_struct_10513bca(pvVar7,4,0x13,0);
    write_two_words_to_struct_10513bca(pvVar7,5,0xb,1);
    write_two_words_to_struct_10513bca(pvVar7,6,0x13,0);
    write_two_words_to_struct_10513bca(pvVar7,7,0xc,0);
    write_two_words_to_struct_10513bca(pvVar7,8,0x13,0);
    write_two_words_to_struct_10513bca(pvVar7,9,1,2);
    write_two_words_to_struct_10513bca(pvVar7,10,0x19,0);
    iVar8 = 0xb;
    break;
  case 2:
    goto code_r0x104e9e44;
  case 3:
    iVar8 = 0x52;
    goto LAB_104e9cb8;
  case 4:
    iVar8 = 0x52;
    goto LAB_104e9cc0;
  case 5:
    goto LAB_104e9cda;
  case 6:
    uVar4 = 1;
    goto LAB_104e9cc8;
  case 7:
    uVar4 = 2;
LAB_104e9cc8:
    field_setter((int)piVar5,0x52,uVar4);
LAB_104e9cda:
    iVar8 = 0x53;
LAB_104e9cb8:
    uVar4 = 1;
LAB_104e9cf6:
    field_setter((int)piVar5,iVar8,uVar4);
    goto LAB_104e9e46;
  case 8:
    goto LAB_104e9cf2;
  case 9:
    uVar4 = 1;
    goto LAB_104e9ce0;
  case 10:
    uVar4 = 2;
LAB_104e9ce0:
    field_setter((int)piVar5,0x52,uVar4);
LAB_104e9cf2:
    iVar8 = 0x53;
LAB_104e9cc0:
    uVar4 = 2;
    goto LAB_104e9cf6;
  case 0xb:
    pvVar7 = (void *)(param_1 + 0x3c);
    write_two_words_to_struct_10513bca(pvVar7,0,2,2);
    write_two_words_to_struct_10513bca(pvVar7,1,8,7);
    write_two_words_to_struct_10513bca(pvVar7,2,0x13,0);
    write_two_words_to_struct_10513bca(pvVar7,3,0xb,1);
    write_two_words_to_struct_10513bca(pvVar7,4,0x13,0);
    write_two_words_to_struct_10513bca(pvVar7,5,0xc,0);
    write_two_words_to_struct_10513bca(pvVar7,6,0x13,0);
    write_two_words_to_struct_10513bca(pvVar7,7,1,2);
    write_two_words_to_struct_10513bca(pvVar7,8,0x19,0);
    iVar8 = 9;
    break;
  case 0xc:
    pvVar7 = (void *)(param_1 + 0x3c);
    write_two_words_to_struct_10513bca(pvVar7,0,2,2);
    write_two_words_to_struct_10513bca(pvVar7,1,8,7);
    write_two_words_to_struct_10513bca(pvVar7,2,0x13,0);
    write_two_words_to_struct_10513bca(pvVar7,3,0xb,1);
    write_two_words_to_struct_10513bca(pvVar7,4,0x13,0);
    write_two_words_to_struct_10513bca(pvVar7,5,0xc,0);
    write_two_words_to_struct_10513bca(pvVar7,6,0x13,0);
    write_two_words_to_struct_10513bca(pvVar7,7,1,2);
    write_two_words_to_struct_10513bca(pvVar7,8,0x19,0);
    iVar8 = 9;
    break;
  default:
    goto code_r0x104e9e44;
  }
  write_two_words_to_struct_10513bca((void *)(param_1 + 0x3c),iVar8,0x13,0);
code_r0x104e9e44:
LAB_104e9e46:
  if ((((param_3 != 0xb) && (param_3 != 0xc)) && (param_3 != 0)) && (param_3 != 1)) {
    pvVar7 = (void *)(param_1 + 0x3c);
    write_two_words_to_struct_10513bca(pvVar7,0,2,2);
    write_two_words_to_struct_10513bca(pvVar7,1,8,7);
    write_two_words_to_struct_10513bca(pvVar7,2,0x13,0);
    write_two_words_to_struct_10513bca(pvVar7,3,0xb,1);
    write_two_words_to_struct_10513bca(pvVar7,4,0x13,0);
    write_two_words_to_struct_10513bca(pvVar7,5,0xc,0);
    write_two_words_to_struct_10513bca(pvVar7,6,0x13,0);
    write_two_words_to_struct_10513bca(pvVar7,7,1,2);
    write_two_words_to_struct_10513bca(pvVar7,8,0x19,0);
    write_two_words_to_struct_10513bca(pvVar7,9,0x13,0);
  }
  set_object_field_0x20((int)param_2,(void *)(param_1 + 0x3c));
  (((vtbl_entry*)(param_2[0x235]))[14].fn)((int)((vtbl_entry*)(param_2[0x235]))[14].adj + (int)param_2,4);
  (((vtbl_entry*)(param_2[0x235]))[10].fn)
            ((int)((vtbl_entry*)(param_2[0x235]))[10].adj + (int)param_2,param_2[0x15]);
  puVar6 = (uint32_t *)(param_1 + 0x188);
  *(int **)(param_1 + 0x180) = param_2;
  eventflag_clr_flg(puVar6,0x10);
  call_two_helpers_on_object_10514cfa(*(int *)(param_1 + 0x2c));
  eventflag_wai_flg(puVar6,0x10,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar6,0x10);
  reg_framework_send(param_1 + 0x10);
  check_kernel_call_success_10459fea();
  return 0;
}
