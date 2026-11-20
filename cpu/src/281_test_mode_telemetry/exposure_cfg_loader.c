/* @k10d exposure_cfg_loader @ 0x1052293e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed copy_settings_fields_by_mode)
 * unit: 281_test_mode_telemetry (unit names are model-proposed)
 * purpose:
 *   Copies a large set of fields from a settings store into a state object, with the field
 *   set and post-processing gated by a mode parameter.
 * summary:
 *   The function branches on param_3 (values 1, 2, 3, 4, 5, 6, 7, and default). For most
 *   modes it reads values from a sub-object at param_2+0x59 using settings_getter and
 *   writes them to indices in the same object using field_setter. It also makes virtual
 *   calls on param_2 (slot 2) with various arguments to check conditions before writing
 *   specific fields (0x51, 0x5b, 0x60). The prior 'exposure' label is not supported by the
 *   code itself, which performs generic field copying and conditional state updates.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1052335e) overlaps instruction at (ram,0x1052335c)
    */
/* Exposure/flash configuration loader. r8=state+0x164 settings store; reads user settings
   0x128-0x154 via 0x10428ca2, writes fields via 0x10428900; lens/strobe conditional at 1052330e
   (STROBE field 3). */

void exposure_cfg_loader(int param_1,int *param_2,int param_3)

{
  uint8_t uVar2;
  uint16_t uVar1;
  char cVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = param_2 + 0x59;
  if (param_3 == 5) {
    field_setter((int)piVar5,0x5b,0);
    iVar4 = 0x60;
    uVar2 = 0;
  }
  else {
    if (param_3 == 7) {
      iVar4 = (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0x2b);
      if (iVar4 == 1) {
        uVar2 = settings_getter((int)piVar5,0x128);
        field_setter((int)piVar5,0,uVar2);
        uVar2 = settings_getter((int)piVar5,0x129);
        field_setter((int)piVar5,1,uVar2);
        uVar2 = settings_getter((int)piVar5,0x12a);
        field_setter((int)piVar5,2,uVar2);
        uVar2 = settings_getter((int)piVar5,299);
        field_setter((int)piVar5,3,uVar2);
        uVar2 = settings_getter((int)piVar5,300);
        field_setter((int)piVar5,4,uVar2);
        uVar2 = settings_getter((int)piVar5,0x12d);
        field_setter((int)piVar5,5,uVar2);
        uVar2 = settings_getter((int)piVar5,0x12e);
        field_setter((int)piVar5,6,uVar2);
        uVar2 = settings_getter((int)piVar5,0x12f);
        field_setter((int)piVar5,7,uVar2);
        uVar2 = settings_getter((int)piVar5,0x130);
        field_setter((int)piVar5,8,uVar2);
        uVar2 = settings_getter((int)piVar5,0x131);
        field_setter((int)piVar5,9,uVar2);
        uVar2 = settings_getter((int)piVar5,0x132);
        field_setter((int)piVar5,10,uVar2);
        uVar2 = settings_getter((int)piVar5,0x133);
        field_setter((int)piVar5,0xb,uVar2);
        uVar2 = settings_getter((int)piVar5,0x134);
        field_setter((int)piVar5,0xc,uVar2);
        uVar2 = settings_getter((int)piVar5,0x135);
        field_setter((int)piVar5,0xd,uVar2);
        uVar2 = settings_getter((int)piVar5,0x136);
        field_setter((int)piVar5,0xe,uVar2);
        uVar2 = settings_getter((int)piVar5,0x137);
        field_setter((int)piVar5,0xf,uVar2);
        uVar2 = settings_getter((int)piVar5,0x138);
        field_setter((int)piVar5,0x10,uVar2);
        uVar2 = settings_getter((int)piVar5,0x160);
        field_setter((int)piVar5,0x50,uVar2);
        uVar2 = settings_getter((int)piVar5,0x161);
        field_setter((int)piVar5,0x51,uVar2);
        uVar2 = settings_getter((int)piVar5,0x164);
        field_setter((int)piVar5,0x54,uVar2);
        uVar2 = settings_getter((int)piVar5,0x162);
        field_setter((int)piVar5,0x52,uVar2);
        uVar2 = settings_getter((int)piVar5,0x163);
        field_setter((int)piVar5,0x53,uVar2);
        uVar2 = settings_getter((int)piVar5,0x165);
        field_setter((int)piVar5,0x55,uVar2);
        uVar2 = settings_getter((int)piVar5,0x166);
        field_setter((int)piVar5,0x56,uVar2);
        uVar2 = settings_getter((int)piVar5,0x167);
        field_setter((int)piVar5,0x57,uVar2);
        uVar2 = settings_getter((int)piVar5,0x168);
        field_setter((int)piVar5,0x58,uVar2);
        uVar2 = settings_getter((int)piVar5,0x169);
        field_setter((int)piVar5,0x59,uVar2);
        uVar2 = settings_getter((int)piVar5,0x16a);
        field_setter((int)piVar5,0x5a,uVar2);
        uVar2 = settings_getter((int)piVar5,0x16b);
        field_setter((int)piVar5,0x5b,uVar2);
        uVar2 = settings_getter((int)piVar5,0x16c);
        field_setter((int)piVar5,0x5c,uVar2);
        uVar2 = settings_getter((int)piVar5,0x16d);
        field_setter((int)piVar5,0x5d,uVar2);
        uVar2 = settings_getter((int)piVar5,0x16e);
        field_setter((int)piVar5,0x5e,uVar2);
        uVar2 = settings_getter((int)piVar5,0x16f);
        field_setter((int)piVar5,0x5f,uVar2);
        uVar2 = settings_getter((int)piVar5,0x171);
        field_setter((int)piVar5,0x61,uVar2);
        uVar2 = settings_getter((int)piVar5,0x174);
        field_setter((int)piVar5,100,uVar2);
        uVar2 = settings_getter((int)piVar5,0x175);
        field_setter((int)piVar5,0x65,uVar2);
        uVar2 = settings_getter((int)piVar5,0x176);
        field_setter((int)piVar5,0x66,uVar2);
        uVar2 = settings_getter((int)piVar5,0x177);
        field_setter((int)piVar5,0x67,uVar2);
        uVar2 = settings_getter((int)piVar5,0x178);
        field_setter((int)piVar5,0x68,uVar2);
        uVar2 = settings_getter((int)piVar5,0x179);
        field_setter((int)piVar5,0x69,uVar2);
        uVar2 = settings_getter((int)piVar5,0x17a);
        field_setter((int)piVar5,0x6a,uVar2);
        uVar2 = settings_getter((int)piVar5,0x17b);
        field_setter((int)piVar5,0x6b,uVar2);
        uVar2 = settings_getter((int)piVar5,0x17c);
        field_setter((int)piVar5,0x6c,uVar2);
        uVar1 = read_structured_field((int)piVar5,0,0,0);
        write_two_byte_field((int)piVar5,0,0,uVar1);
        uVar1 = read_structured_field((int)piVar5,0,1,0);
        write_two_byte_field((int)piVar5,0,1,uVar1);
        uVar1 = read_structured_field((int)piVar5,0,2,0);
        write_two_byte_field((int)piVar5,0,2,uVar1);
        uVar1 = read_structured_field((int)piVar5,0,3,0);
        write_two_byte_field((int)piVar5,0,3,uVar1);
        uVar2 = settings_getter((int)piVar5,0x139);
        field_setter((int)piVar5,0x11,uVar2);
        uVar2 = settings_getter((int)piVar5,0x13a);
        field_setter((int)piVar5,0x12,uVar2);
        uVar2 = settings_getter((int)piVar5,0x13b);
        field_setter((int)piVar5,0x13,uVar2);
        uVar2 = settings_getter((int)piVar5,0x13c);
        field_setter((int)piVar5,0x14,uVar2);
        uVar2 = settings_getter((int)piVar5,0x13d);
        field_setter((int)piVar5,0x15,uVar2);
        uVar2 = settings_getter((int)piVar5,0x13e);
        field_setter((int)piVar5,0x16,uVar2);
        uVar2 = settings_getter((int)piVar5,0x13f);
        field_setter((int)piVar5,0x17,uVar2);
        uVar2 = settings_getter((int)piVar5,0x140);
        field_setter((int)piVar5,0x18,uVar2);
        uVar2 = settings_getter((int)piVar5,0x141);
        field_setter((int)piVar5,0x19,uVar2);
        uVar2 = settings_getter((int)piVar5,0x142);
        field_setter((int)piVar5,0x1a,uVar2);
        uVar2 = settings_getter((int)piVar5,0x143);
        field_setter((int)piVar5,0x1b,uVar2);
        uVar2 = settings_getter((int)piVar5,0x144);
        field_setter((int)piVar5,0x1c,uVar2);
        uVar2 = settings_getter((int)piVar5,0x145);
        field_setter((int)piVar5,0x1d,uVar2);
        uVar2 = settings_getter((int)piVar5,0x146);
        field_setter((int)piVar5,0x1e,uVar2);
        uVar2 = settings_getter((int)piVar5,0x147);
        field_setter((int)piVar5,0x1f,uVar2);
        uVar2 = settings_getter((int)piVar5,0x148);
        field_setter((int)piVar5,0x20,uVar2);
        uVar2 = settings_getter((int)piVar5,0x149);
        field_setter((int)piVar5,0x21,uVar2);
        uVar2 = settings_getter((int)piVar5,0x14a);
        field_setter((int)piVar5,0x22,uVar2);
        uVar2 = settings_getter((int)piVar5,0x14b);
        field_setter((int)piVar5,0x23,uVar2);
        uVar2 = settings_getter((int)piVar5,0x14c);
        field_setter((int)piVar5,0x24,uVar2);
        uVar2 = settings_getter((int)piVar5,0x14d);
        field_setter((int)piVar5,0x25,uVar2);
        uVar2 = settings_getter((int)piVar5,0x14e);
        field_setter((int)piVar5,0x26,uVar2);
        uVar2 = settings_getter((int)piVar5,0x14f);
        field_setter((int)piVar5,0x27,uVar2);
        uVar2 = settings_getter((int)piVar5,0x150);
        field_setter((int)piVar5,0x28,uVar2);
        uVar2 = settings_getter((int)piVar5,0x151);
        field_setter((int)piVar5,0x29,uVar2);
        uVar2 = settings_getter((int)piVar5,0x152);
        field_setter((int)piVar5,0x2a,uVar2);
        uVar2 = settings_getter((int)piVar5,0x154);
        field_setter((int)piVar5,0x2c,uVar2);
        uVar2 = settings_getter((int)piVar5,0x155);
        field_setter((int)piVar5,0x2d,uVar2);
        uVar2 = settings_getter((int)piVar5,0x157);
        field_setter((int)piVar5,0x2f,uVar2);
        uVar2 = settings_getter((int)piVar5,0x158);
        field_setter((int)piVar5,0x30,uVar2);
        uVar2 = settings_getter((int)piVar5,0x153);
        field_setter((int)piVar5,0x2b,uVar2);
        uVar2 = settings_getter((int)piVar5,0x156);
        field_setter((int)piVar5,0x2e,uVar2);
        uVar2 = settings_getter((int)piVar5,0x159);
        field_setter((int)piVar5,0x31,uVar2);
        uVar1 = read_structured_field((int)piVar5,0,0,0);
        write_two_byte_field((int)piVar5,0,0,uVar1);
        uVar1 = read_structured_field((int)piVar5,0,2,0);
        write_two_byte_field((int)piVar5,0,2,uVar1);
        uVar1 = read_structured_field((int)piVar5,0,3,0);
        write_two_byte_field((int)piVar5,0,3,uVar1);
        uVar1 = read_structured_field((int)piVar5,0,1,0);
        write_two_byte_field((int)piVar5,0,1,uVar1);
        return;
      }
      return;
    }
    if (param_3 == 1) {
      cVar3 = settings_getter((int)piVar5,0xba);
      if (cVar3 != '\x01') {
        return;
      }
      iVar4 = param_2[0x1f];
      iVar4 = (((vtbl_entry*)(iVar4))[3].fn)((int)(param_2 + 0x1f) + (int)((vtbl_entry*)(iVar4))[3].adj,3);
      if (iVar4 == 0) {
        return;
      }
      iVar4 = 0xd;
      uVar2 = 8;
    }
    else {
      iVar4 = (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0x2b);
      if (iVar4 == 1) {
        uVar2 = settings_getter((int)piVar5,0x128);
        field_setter((int)piVar5,0,uVar2);
        uVar2 = settings_getter((int)piVar5,0x129);
        field_setter((int)piVar5,1,uVar2);
        uVar2 = settings_getter((int)piVar5,0x12a);
        field_setter((int)piVar5,2,uVar2);
        uVar2 = settings_getter((int)piVar5,299);
        field_setter((int)piVar5,3,uVar2);
        uVar2 = settings_getter((int)piVar5,300);
        field_setter((int)piVar5,4,uVar2);
        uVar2 = settings_getter((int)piVar5,0x12d);
        field_setter((int)piVar5,5,uVar2);
        uVar2 = settings_getter((int)piVar5,0x12e);
        field_setter((int)piVar5,6,uVar2);
        uVar2 = settings_getter((int)piVar5,0x12f);
        field_setter((int)piVar5,7,uVar2);
        uVar2 = settings_getter((int)piVar5,0x130);
        field_setter((int)piVar5,8,uVar2);
        uVar2 = settings_getter((int)piVar5,0x131);
        field_setter((int)piVar5,9,uVar2);
        uVar2 = settings_getter((int)piVar5,0x132);
        field_setter((int)piVar5,10,uVar2);
        uVar2 = settings_getter((int)piVar5,0x133);
        field_setter((int)piVar5,0xb,uVar2);
        uVar2 = settings_getter((int)piVar5,0x134);
        field_setter((int)piVar5,0xc,uVar2);
        uVar2 = settings_getter((int)piVar5,0x135);
        field_setter((int)piVar5,0xd,uVar2);
        uVar2 = settings_getter((int)piVar5,0x136);
        field_setter((int)piVar5,0xe,uVar2);
        uVar2 = settings_getter((int)piVar5,0x137);
        field_setter((int)piVar5,0xf,uVar2);
        uVar2 = settings_getter((int)piVar5,0x138);
        field_setter((int)piVar5,0x10,uVar2);
        uVar2 = settings_getter((int)piVar5,0x160);
        field_setter((int)piVar5,0x50,uVar2);
        uVar2 = settings_getter((int)piVar5,0x161);
        field_setter((int)piVar5,0x51,uVar2);
        uVar2 = settings_getter((int)piVar5,0x164);
        field_setter((int)piVar5,0x54,uVar2);
        uVar2 = settings_getter((int)piVar5,0x162);
        field_setter((int)piVar5,0x52,uVar2);
        uVar2 = settings_getter((int)piVar5,0x163);
        field_setter((int)piVar5,0x53,uVar2);
        uVar2 = settings_getter((int)piVar5,0x165);
        field_setter((int)piVar5,0x55,uVar2);
        uVar2 = settings_getter((int)piVar5,0x166);
        field_setter((int)piVar5,0x56,uVar2);
        uVar2 = settings_getter((int)piVar5,0x167);
        field_setter((int)piVar5,0x57,uVar2);
        uVar2 = settings_getter((int)piVar5,0x168);
        field_setter((int)piVar5,0x58,uVar2);
        uVar2 = settings_getter((int)piVar5,0x169);
        field_setter((int)piVar5,0x59,uVar2);
        uVar2 = settings_getter((int)piVar5,0x16a);
        field_setter((int)piVar5,0x5a,uVar2);
        uVar2 = settings_getter((int)piVar5,0x16b);
        field_setter((int)piVar5,0x5b,uVar2);
        uVar2 = settings_getter((int)piVar5,0x16c);
        field_setter((int)piVar5,0x5c,uVar2);
        uVar2 = settings_getter((int)piVar5,0x16d);
        field_setter((int)piVar5,0x5d,uVar2);
        uVar2 = settings_getter((int)piVar5,0x16e);
        field_setter((int)piVar5,0x5e,uVar2);
        uVar2 = settings_getter((int)piVar5,0x16f);
        field_setter((int)piVar5,0x5f,uVar2);
        uVar2 = settings_getter((int)piVar5,0x171);
        field_setter((int)piVar5,0x61,uVar2);
        uVar2 = settings_getter((int)piVar5,0x174);
        field_setter((int)piVar5,100,uVar2);
        uVar2 = settings_getter((int)piVar5,0x175);
        field_setter((int)piVar5,0x65,uVar2);
        uVar2 = settings_getter((int)piVar5,0x176);
        field_setter((int)piVar5,0x66,uVar2);
        uVar2 = settings_getter((int)piVar5,0x177);
        field_setter((int)piVar5,0x67,uVar2);
        uVar2 = settings_getter((int)piVar5,0x178);
        field_setter((int)piVar5,0x68,uVar2);
        uVar2 = settings_getter((int)piVar5,0x179);
        field_setter((int)piVar5,0x69,uVar2);
        uVar2 = settings_getter((int)piVar5,0x17a);
        field_setter((int)piVar5,0x6a,uVar2);
        uVar2 = settings_getter((int)piVar5,0x17b);
        field_setter((int)piVar5,0x6b,uVar2);
        uVar2 = settings_getter((int)piVar5,0x17c);
        field_setter((int)piVar5,0x6c,uVar2);
        uVar1 = read_structured_field((int)piVar5,0,0,0);
        write_two_byte_field((int)piVar5,0,0,uVar1);
        uVar1 = read_structured_field((int)piVar5,0,1,0);
        write_two_byte_field((int)piVar5,0,1,uVar1);
        uVar1 = read_structured_field((int)piVar5,0,2,0);
        write_two_byte_field((int)piVar5,0,2,uVar1);
        uVar1 = read_structured_field((int)piVar5,0,3,0);
        write_two_byte_field((int)piVar5,0,3,uVar1);
        uVar2 = settings_getter((int)piVar5,0x139);
        field_setter((int)piVar5,0x11,uVar2);
        uVar2 = settings_getter((int)piVar5,0x13a);
        field_setter((int)piVar5,0x12,uVar2);
        uVar2 = settings_getter((int)piVar5,0x13b);
        field_setter((int)piVar5,0x13,uVar2);
        uVar2 = settings_getter((int)piVar5,0x13c);
        field_setter((int)piVar5,0x14,uVar2);
        uVar2 = settings_getter((int)piVar5,0x13d);
        field_setter((int)piVar5,0x15,uVar2);
        uVar2 = settings_getter((int)piVar5,0x13e);
        field_setter((int)piVar5,0x16,uVar2);
        uVar2 = settings_getter((int)piVar5,0x13f);
        field_setter((int)piVar5,0x17,uVar2);
        uVar2 = settings_getter((int)piVar5,0x140);
        field_setter((int)piVar5,0x18,uVar2);
        uVar2 = settings_getter((int)piVar5,0x141);
        field_setter((int)piVar5,0x19,uVar2);
        uVar2 = settings_getter((int)piVar5,0x142);
        field_setter((int)piVar5,0x1a,uVar2);
        uVar2 = settings_getter((int)piVar5,0x143);
        field_setter((int)piVar5,0x1b,uVar2);
        uVar2 = settings_getter((int)piVar5,0x144);
        field_setter((int)piVar5,0x1c,uVar2);
        uVar2 = settings_getter((int)piVar5,0x145);
        field_setter((int)piVar5,0x1d,uVar2);
        uVar2 = settings_getter((int)piVar5,0x146);
        field_setter((int)piVar5,0x1e,uVar2);
        uVar2 = settings_getter((int)piVar5,0x147);
        field_setter((int)piVar5,0x1f,uVar2);
        uVar2 = settings_getter((int)piVar5,0x148);
        field_setter((int)piVar5,0x20,uVar2);
        uVar2 = settings_getter((int)piVar5,0x149);
        field_setter((int)piVar5,0x21,uVar2);
        uVar2 = settings_getter((int)piVar5,0x14a);
        field_setter((int)piVar5,0x22,uVar2);
        uVar2 = settings_getter((int)piVar5,0x14b);
        field_setter((int)piVar5,0x23,uVar2);
        uVar2 = settings_getter((int)piVar5,0x14c);
        field_setter((int)piVar5,0x24,uVar2);
        uVar2 = settings_getter((int)piVar5,0x14d);
        field_setter((int)piVar5,0x25,uVar2);
        uVar2 = settings_getter((int)piVar5,0x14e);
        field_setter((int)piVar5,0x26,uVar2);
        uVar2 = settings_getter((int)piVar5,0x14f);
        field_setter((int)piVar5,0x27,uVar2);
        uVar2 = settings_getter((int)piVar5,0x150);
        field_setter((int)piVar5,0x28,uVar2);
        uVar2 = settings_getter((int)piVar5,0x151);
        field_setter((int)piVar5,0x29,uVar2);
        uVar2 = settings_getter((int)piVar5,0x152);
        field_setter((int)piVar5,0x2a,uVar2);
        uVar2 = settings_getter((int)piVar5,0x154);
        field_setter((int)piVar5,0x2c,uVar2);
        uVar2 = settings_getter((int)piVar5,0x155);
        field_setter((int)piVar5,0x2d,uVar2);
        uVar2 = settings_getter((int)piVar5,0x157);
        field_setter((int)piVar5,0x2f,uVar2);
        uVar2 = settings_getter((int)piVar5,0x158);
        field_setter((int)piVar5,0x30,uVar2);
        uVar2 = settings_getter((int)piVar5,0x153);
        field_setter((int)piVar5,0x2b,uVar2);
        uVar2 = settings_getter((int)piVar5,0x156);
        field_setter((int)piVar5,0x2e,uVar2);
        uVar2 = settings_getter((int)piVar5,0x159);
        field_setter((int)piVar5,0x31,uVar2);
        uVar1 = read_structured_field((int)piVar5,0,0,0);
        write_two_byte_field((int)piVar5,0,0,uVar1);
        uVar1 = read_structured_field((int)piVar5,0,2,0);
        write_two_byte_field((int)piVar5,0,2,uVar1);
        uVar1 = read_structured_field((int)piVar5,0,3,0);
        write_two_byte_field((int)piVar5,0,3,uVar1);
        uVar1 = read_structured_field((int)piVar5,0,1,0);
        write_two_byte_field((int)piVar5,0,1,uVar1);
      }
      cVar3 = settings_getter((int)piVar5,0xbb);
      if (cVar3 == '\0') {
        field_setter((int)piVar5,0x11,7);
        field_setter((int)piVar5,0x12,7);
      }
      if (*(char *)(param_1 + 4) != '\0') {
        field_setter((int)piVar5,0x51,2);
        field_setter((int)piVar5,0x5b,0);
      }
      cVar3 = settings_getter((int)piVar5,0x60);
      if (cVar3 != '\0') {
        field_setter((int)piVar5,0x5b,0);
      }
      iVar4 = get_or_create_singleton_object_104fb12e();
      iVar4 = call_two_helpers_in_sequence_104f1b02(*(uint32_t *)(iVar4 + 0x74));
      if (iVar4 == 10) {
        field_setter((int)piVar5,0x5b,0);
      }
      cVar3 = settings_getter((int)piVar5,0x51);
      if (cVar3 != '\0') {
        field_setter((int)piVar5,0x5b,0);
      }
      iVar4 = (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0x10);
      if ((iVar4 != 1) ||
         (iVar4 = (((vtbl_entry*)(*param_2))[2].fn)
                            ((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0x14), iVar4 == 0)) {
        field_setter((int)piVar5,0x60,0);
      }
      iVar4 = (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0xf);
      if (iVar4 == 1) {
        iVar4 = (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0x12)
        ;
        param_2[0x140] = iVar4;
        iVar4 = (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0x13)
        ;
        param_2[0x141] = iVar4 + 1;
      }
      if ((param_3 == 2) || (param_3 == 3)) {
        field_setter((int)piVar5,0x51,0);
        field_setter((int)piVar5,0x5b,0);
        field_setter((int)piVar5,0x60,0);
      }
      if (param_3 == 4) {
        field_setter((int)piVar5,0x51,0);
        field_setter((int)piVar5,0x5b,0);
      }
      if (param_3 != 6) {
        return;
      }
      field_setter((int)piVar5,0x51,2);
      field_setter((int)piVar5,0x52,0);
      field_setter((int)piVar5,0x5b,0);
      iVar4 = 0x60;
      uVar2 = 0;
    }
  }
  field_setter((int)piVar5,iVar4,uVar2);
  return;
}
