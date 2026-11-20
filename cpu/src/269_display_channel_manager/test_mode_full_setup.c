/* @k10d test_mode_full_setup @ 0x1050c4c0
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed copy_source_struct_into_object)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Copies a large source struct into an object at many offsets and dispatches virtual
 *   calls based on a mode field.
 * summary:
 *   The function copies a large block of data from a source pointer (unaff_r14 + 8) into a
 *   destination object (unaff_r10) at numerous specific offsets, using byte, word, and
 *   dword-sized loops. It calls empty_noop_stub_1050d3b0 repeatedly to set up pointers or
 *   parameters within the destination structure. It then dispatches virtual calls based on
 *   a mode field (unaff_r14 + -0x30) and manages memory allocation via mempool_get_block,
 *   suggesting it initializes or updates a complex object state from a source template.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1050c4e8) overlaps instruction at (ram,0x1050c4e6)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_mode_full_setup(short param_1)

{
  short sVar1;
  int iVar2;
  uint8_t uVar4;
  char cVar5;
  void *pvVar3;
  uint32_t *puVar6;
  uint32_t *caller_r10;
  int *piVar7;
  int r12_in;
  short *psVar8;
  int r13_in;
  int iVar9;
  int iVar10;
  int iVar11;
  int caller_r14;
  bool bVar12;
  
  (**(code **)(r13_in + r12_in))((int)param_1 + (int)caller_r10,*(uint32_t *)(caller_r14 + -0x2c));
  piVar7 = caller_r10 + 0x52;
  test_mode_state_reset(piVar7);
  if (*(int *)(caller_r14 + 8) == 0) {
    *(uint32_t *)(caller_r14 + -0x38) = 0;
  }
  else {
    *(int *)(caller_r14 + -0x38) = *(int *)(caller_r14 + 8);
    iVar2 = *(int *)(caller_r14 + -0x38);
    iVar9 = 0x344;
    do {
      iVar9 = iVar9 + -4;
      *(uint32_t *)(iVar9 + (int)(caller_r10 + 0xab)) = *(uint32_t *)(iVar9 + iVar2 + 0x164);
    } while (iVar9 != 0);
    field_setter((int)(caller_r10 + 0xab),0x51,0);
    empty_noop_stub_1050d3b0((uint32_t)(piVar7),*(uint32_t *)(caller_r14 + -0x38));
    iVar9 = *(int *)(caller_r14 + -0x38);
    iVar2 = 0x17;
    do {
      iVar10 = iVar2 + -1;
      *(uint8_t *)((int)caller_r10 + iVar2 + 0x14b) = *(uint8_t *)(iVar10 + iVar9 + 4);
      iVar2 = iVar10;
    } while (iVar10 != 0);
    iVar9 = *(int *)(caller_r14 + -0x38);
    empty_noop_stub_1050d3b0((uint32_t)(caller_r10 + 0x59),iVar9 + 0x1c);
    iVar2 = 0x10;
    do {
      iVar10 = iVar2 + -1;
      *(uint8_t *)((int)caller_r10 + iVar2 + 0x167) = *(uint8_t *)(iVar10 + iVar9 + 0x20);
      iVar2 = iVar10;
    } while (iVar10 != 0);
    iVar9 = *(int *)(caller_r14 + -0x38);
    empty_noop_stub_1050d3b0((uint32_t)(caller_r10 + 0x5e),iVar9 + 0x30);
    iVar2 = 0x45;
    do {
      iVar10 = iVar2 + -1;
      *(uint8_t *)((int)caller_r10 + iVar2 + 0x17b) = *(uint8_t *)(iVar10 + iVar9 + 0x34);
      iVar2 = iVar10;
    } while (iVar10 != 0);
    iVar9 = *(int *)(caller_r14 + -0x38);
    empty_noop_stub_1050d3b0((uint32_t)(caller_r10 + 0x71),iVar9 + 0x7c);
    iVar2 = 0x1b;
    do {
      iVar10 = iVar2 + -1;
      *(uint8_t *)((int)caller_r10 + iVar2 + 0x1c7) = *(uint8_t *)(iVar10 + iVar9 + 0x80);
      iVar2 = iVar10;
    } while (iVar10 != 0);
    iVar2 = *(int *)(caller_r14 + 8);
    *(int *)(caller_r14 + -0x34) = iVar2;
    empty_noop_stub_1050d3b0((uint32_t)(caller_r10 + 0x79),iVar2 + 0x9c);
    *(uint8_t *)(caller_r10 + 0x7a) = *(uint8_t *)(iVar2 + 0xa0);
    iVar9 = *(int *)(caller_r14 + -0x34);
    empty_noop_stub_1050d3b0((uint32_t)(caller_r10 + 0x7b),iVar9 + 0xa4);
    iVar2 = 8;
    do {
      iVar10 = iVar2 + -1;
      *(uint8_t *)((int)caller_r10 + iVar2 + 0x1ef) = *(uint8_t *)(iVar10 + iVar9 + 0xa8);
      iVar2 = iVar10;
    } while (iVar10 != 0);
    iVar9 = *(int *)(caller_r14 + -0x34);
    empty_noop_stub_1050d3b0((uint32_t)(caller_r10 + 0x7e),iVar9 + 0xb0);
    iVar2 = 0x10;
    do {
      iVar10 = iVar2 + -1;
      *(uint8_t *)((int)caller_r10 + iVar2 + 0x1fb) = *(uint8_t *)(iVar10 + iVar9 + 0xb4);
      iVar2 = iVar10;
    } while (iVar10 != 0);
    iVar9 = *(int *)(caller_r14 + -0x34);
    empty_noop_stub_1050d3b0((uint32_t)(caller_r10 + 0x83),iVar9 + 0xc4);
    iVar2 = 0x10;
    do {
      iVar10 = iVar2 + -1;
      *(uint8_t *)((int)caller_r10 + iVar2 + 0x20f) = *(uint8_t *)(iVar10 + iVar9 + 200);
      iVar2 = iVar10;
    } while (iVar10 != 0);
    iVar9 = *(int *)(caller_r14 + -0x34);
    empty_noop_stub_1050d3b0((uint32_t)(caller_r10 + 0x88),iVar9 + 0xd8);
    iVar2 = 0x10;
    do {
      iVar10 = iVar2 + -1;
      *(uint8_t *)((int)caller_r10 + iVar2 + 0x223) = *(uint8_t *)(iVar10 + iVar9 + 0xdc);
      iVar2 = iVar10;
    } while (iVar10 != 0);
    iVar9 = *(int *)(caller_r14 + -0x34);
    empty_noop_stub_1050d3b0((uint32_t)(caller_r10 + 0x8d),iVar9 + 0xec);
    iVar2 = 0xc;
    do {
      iVar10 = iVar2 + -1;
      *(uint8_t *)((int)caller_r10 + iVar2 + 0x237) = *(uint8_t *)(iVar10 + iVar9 + 0xf0);
      iVar2 = iVar10;
    } while (iVar10 != 0);
    iVar9 = *(int *)(caller_r14 + -0x34);
    empty_noop_stub_1050d3b0((uint32_t)(caller_r10 + 0x95),iVar9 + 0x10c);
    iVar2 = 4;
    do {
      iVar10 = iVar2 + -1;
      *(uint8_t *)((int)caller_r10 + iVar2 + 599) = *(uint8_t *)(iVar10 + iVar9 + 0x110);
      iVar2 = iVar10;
    } while (iVar10 != 0);
    iVar9 = *(int *)(caller_r14 + 8);
    *(uint32_t **)(caller_r14 + -0x14) = caller_r10 + 0x17e;
    empty_noop_stub_1050d3b0((uint32_t)(caller_r10 + 0x17e),iVar9 + 0x4b0);
    iVar2 = *(int *)(caller_r14 + -0x14) + 4;
    *(int *)(caller_r14 + -0x14) = iVar2;
    iVar10 = 6;
    do {
      iVar10 = iVar10 + -1;
      *(uint8_t *)(iVar10 + iVar2) = *(uint8_t *)(iVar10 + iVar9 + 0x4b4);
    } while (iVar10 != 0);
    *(uint32_t **)(caller_r14 + -0x18) = caller_r10 + 0x181;
    empty_noop_stub_1050d3b0((uint32_t)(caller_r10 + 0x181),iVar9 + 0x4bc);
    iVar2 = *(int *)(caller_r14 + -0x18) + 4;
    *(int *)(caller_r14 + -0x18) = iVar2;
    iVar10 = 4;
    do {
      iVar10 = iVar10 + -1;
      *(uint8_t *)(iVar10 + iVar2) = *(uint8_t *)(iVar10 + iVar9 + 0x4c0);
    } while (iVar10 != 0);
    copy_eight_bytes_1045c584((uint16_t *)(caller_r10 + 0x17c),(uint16_t *)(iVar9 + 0x4a8));
    iVar10 = caller_r10[0x186];
    iVar2 = *(int *)(iVar9 + 0x4d0);
    iVar11 = 0x40;
    do {
      iVar11 = iVar11 + -4;
      *(uint32_t *)(iVar11 + iVar10) = *(uint32_t *)(iVar11 + iVar2);
    } while (iVar11 != 0);
    *(uint32_t **)(caller_r14 + -0x1c) = caller_r10 + 0x97;
    empty_noop_stub_1050d3b0((uint32_t)(caller_r10 + 0x97),iVar9 + 0x114);
    iVar2 = *(int *)(caller_r14 + -0x1c) + 4;
    *(int *)(caller_r14 + -0x1c) = iVar2;
    iVar10 = 4;
    do {
      iVar10 = iVar10 + -1;
      *(uint8_t *)(iVar10 + iVar2) = *(uint8_t *)(iVar10 + iVar9 + 0x118);
    } while (iVar10 != 0);
    *(uint32_t **)(caller_r14 + -0x20) = caller_r10 + 0x99;
    empty_noop_stub_1050d3b0((uint32_t)(caller_r10 + 0x99),iVar9 + 0x11c);
    iVar2 = *(int *)(caller_r14 + -0x20) + 4;
    *(int *)(caller_r14 + -0x20) = iVar2;
    iVar10 = 0x20;
    do {
      iVar10 = iVar10 + -1;
      *(uint8_t *)(iVar10 + iVar2) = *(uint8_t *)(iVar10 + iVar9 + 0x120);
    } while (iVar10 != 0);
    *(uint32_t **)(caller_r14 + -0x24) = caller_r10 + 0xa2;
    empty_noop_stub_1050d3b0((uint32_t)(caller_r10 + 0xa2),iVar9 + 0x140);
    iVar2 = *(int *)(caller_r14 + -0x24) + 4;
    *(int *)(caller_r14 + -0x24) = iVar2;
    iVar10 = 0x20;
    do {
      iVar10 = iVar10 + -1;
      *(uint8_t *)(iVar10 + iVar2) = *(uint8_t *)(iVar10 + iVar9 + 0x144);
    } while (iVar10 != 0);
    iVar9 = *(int *)(caller_r14 + 8);
    *(uint32_t **)(caller_r14 + -0x28) = caller_r10 + 0x91;
    empty_noop_stub_1050d3b0((uint32_t)(caller_r10 + 0x91),iVar9 + 0xfc);
    iVar2 = *(int *)(caller_r14 + -0x28) + 4;
    *(int *)(caller_r14 + -0x28) = iVar2;
    iVar10 = 9;
    do {
      iVar10 = iVar10 + -1;
      *(uint8_t *)(iVar10 + iVar2) = *(uint8_t *)(iVar10 + iVar9 + 0x100);
    } while (iVar10 != 0);
    iVar2 = caller_r10[0x183];
    iVar10 = *(int *)(iVar9 + 0x4c4);
    *(uint16_t *)(iVar2 + 8) = *(uint16_t *)(iVar10 + 8);
    *(uint16_t *)(iVar2 + 10) = *(uint16_t *)(iVar10 + 10);
    *(uint16_t *)(iVar2 + 0xc) = *(uint16_t *)(iVar10 + 0xc);
    *(uint16_t *)(iVar2 + 0xe) = *(uint16_t *)(iVar10 + 0xe);
    *(uint16_t *)(iVar2 + 0x12) = *(uint16_t *)(iVar10 + 0x12);
    *(uint16_t *)(iVar2 + 0x14) = *(uint16_t *)(iVar10 + 0x14);
    *(uint16_t *)(iVar2 + 0x16) = *(uint16_t *)(iVar10 + 0x16);
    *(uint16_t *)(iVar2 + 0x18) = *(uint16_t *)(iVar10 + 0x18);
    *(uint16_t *)(iVar2 + 0x1a) = *(uint16_t *)(iVar10 + 0x1a);
    *(uint16_t *)(iVar2 + 0x1c) = *(uint16_t *)(iVar10 + 0x1c);
    *(uint16_t *)(iVar2 + 0x1e) = *(uint16_t *)(iVar10 + 0x1e);
    *(uint16_t *)(iVar2 + 0x20) = *(uint16_t *)(iVar10 + 0x20);
    *(uint16_t *)(iVar2 + 0x22) = *(uint16_t *)(iVar10 + 0x22);
    iVar2 = 0;
    do {
      *(uint32_t *)((int)caller_r10 + iVar2 + 0x658) = *(uint32_t *)(iVar2 + iVar9 + 0x510);
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x20);
    caller_r10[0x187] = *(uint32_t *)(iVar9 + 0x4d4);
    *(uint16_t *)(caller_r10 + 0x188) = *(uint16_t *)(iVar9 + 0x4d8);
    *(uint16_t *)((int)caller_r10 + 0x622) = *(uint16_t *)(iVar9 + 0x4da);
    *(uint16_t *)(caller_r10 + 0x189) = *(uint16_t *)(iVar9 + 0x4dc);
    *(uint16_t *)((int)caller_r10 + 0x626) = *(uint16_t *)(iVar9 + 0x4de);
    *(uint16_t *)(caller_r10 + 0x18a) = *(uint16_t *)(iVar9 + 0x4e0);
    *(uint16_t *)((int)caller_r10 + 0x62a) = *(uint16_t *)(iVar9 + 0x4e2);
    *(uint8_t *)((int)caller_r10 + 0x62e) = *(uint8_t *)(iVar9 + 0x4e6);
    *(uint16_t *)(caller_r10 + 0x18b) = *(uint16_t *)(iVar9 + 0x4e4);
    caller_r10[0x194] = *(uint32_t *)(iVar9 + 0x508);
    if (*(ushort **)(iVar9 + 0x4f8) != (ushort *)0x0) {
      copy_structured_buffer_blocks((void *)(caller_r14 + -1),*(ushort **)(iVar9 + 0x4f8),(ushort *)caller_r10[0x184]);
    }
    if (*(uint16_t **)(iVar9 + 0x4e8) != (uint16_t *)0x0) {
      copy_0x32_byte_struct((void *)(caller_r14 + -1),*(uint16_t **)(iVar9 + 0x4e8),
                   (uint16_t *)caller_r10[0x185]);
    }
    iVar2 = *(int *)(caller_r14 + 8) + 0x164;
    puVar6 = caller_r10 + 0xab;
    uVar4 = settings_getter(iVar2,0xd);
    field_setter((int)puVar6,0xd,uVar4);
    uVar4 = settings_getter(iVar2,0xe);
    field_setter((int)puVar6,0xe,uVar4);
    uVar4 = settings_getter(iVar2,0xf);
    field_setter((int)puVar6,0xf,uVar4);
    uVar4 = settings_getter(iVar2,0x10);
    field_setter((int)puVar6,0x10,uVar4);
    uVar4 = settings_getter(iVar2,0x11);
    field_setter((int)puVar6,0x11,uVar4);
    uVar4 = settings_getter(iVar2,0x12);
    field_setter((int)puVar6,0x12,uVar4);
    uVar4 = settings_getter(iVar2,0x13);
    field_setter((int)puVar6,0x13,uVar4);
    uVar4 = settings_getter(iVar2,0x14);
    field_setter((int)puVar6,0x14,uVar4);
    uVar4 = settings_getter(iVar2,0x15);
    field_setter((int)puVar6,0x15,uVar4);
    uVar4 = settings_getter(iVar2,0x16);
    field_setter((int)puVar6,0x16,uVar4);
    uVar4 = settings_getter(iVar2,0x17);
    field_setter((int)puVar6,0x17,uVar4);
    uVar4 = settings_getter(iVar2,0x18);
    field_setter((int)puVar6,0x18,uVar4);
    uVar4 = settings_getter(iVar2,0x19);
    field_setter((int)puVar6,0x19,uVar4);
    uVar4 = settings_getter(iVar2,0x1a);
    field_setter((int)puVar6,0x1a,uVar4);
    uVar4 = settings_getter(iVar2,0x1b);
    field_setter((int)puVar6,0x1b,uVar4);
    uVar4 = settings_getter(iVar2,0x1c);
    field_setter((int)puVar6,0x1c,uVar4);
    uVar4 = settings_getter(iVar2,0x1d);
    field_setter((int)puVar6,0x1d,uVar4);
    uVar4 = settings_getter(iVar2,0x1e);
    field_setter((int)puVar6,0x1e,uVar4);
    uVar4 = settings_getter(iVar2,0x1f);
    field_setter((int)puVar6,0x1f,uVar4);
    uVar4 = settings_getter(iVar2,0x20);
    field_setter((int)puVar6,0x20,uVar4);
    uVar4 = settings_getter(iVar2,0x21);
    field_setter((int)puVar6,0x21,uVar4);
    uVar4 = settings_getter(iVar2,0x22);
    field_setter((int)puVar6,0x22,uVar4);
    uVar4 = settings_getter(iVar2,0x23);
    field_setter((int)puVar6,0x23,uVar4);
    uVar4 = settings_getter(iVar2,0x24);
    field_setter((int)puVar6,0x24,uVar4);
    uVar4 = settings_getter(iVar2,0x25);
    field_setter((int)puVar6,0x25,uVar4);
    uVar4 = settings_getter(iVar2,0x26);
    field_setter((int)puVar6,0x26,uVar4);
    uVar4 = settings_getter(iVar2,0x27);
    field_setter((int)puVar6,0x27,uVar4);
    uVar4 = settings_getter(iVar2,0x28);
    field_setter((int)puVar6,0x28,uVar4);
    uVar4 = settings_getter(iVar2,0x29);
    field_setter((int)puVar6,0x29,uVar4);
    uVar4 = settings_getter(iVar2,0x2a);
    field_setter((int)puVar6,0x2a,uVar4);
    uVar4 = settings_getter(iVar2,0x2c);
    field_setter((int)puVar6,0x2c,uVar4);
    uVar4 = settings_getter(iVar2,0x2d);
    field_setter((int)puVar6,0x2d,uVar4);
    uVar4 = settings_getter(iVar2,0x2f);
    field_setter((int)puVar6,0x2f,uVar4);
    uVar4 = settings_getter(iVar2,0x30);
    field_setter((int)puVar6,0x30,uVar4);
    uVar4 = settings_getter(iVar2,0x2b);
    field_setter((int)puVar6,0x2b,uVar4);
    uVar4 = settings_getter(iVar2,0x2e);
    field_setter((int)puVar6,0x2e,uVar4);
    uVar4 = settings_getter(iVar2,0x31);
    field_setter((int)puVar6,0x31,uVar4);
  }
  iVar2 = caller_r10[0x235];
  sVar1 = *(short *)(iVar2 + 0x70);
  *(uint32_t *)(caller_r14 + -0x34) = 4;
  (((vtbl_entry*)(iVar2))[14].fn)((int)sVar1 + (int)caller_r10,4);
  cVar5 = settings_getter((int)(caller_r10 + 0xab),0xd);
  if (((cVar5 == '\t') || (cVar5 == '\n')) || (cVar5 == '\v')) {
    *(uint16_t *)caller_r10[0x183] =
         *(uint16_t *)(*(int *)(*(int *)(caller_r14 + -0x38) + 0x4c4) + 8);
    *(uint16_t *)(caller_r10[0x183] + 2) =
         *(uint16_t *)(*(int *)(*(int *)(caller_r14 + -0x38) + 0x4c4) + 10);
    *(uint16_t *)(caller_r10[0x183] + 4) =
         *(uint16_t *)(*(int *)(*(int *)(caller_r14 + -0x38) + 0x4c4) + 0xc);
    *(uint16_t *)(caller_r10[0x183] + 6) =
         *(uint16_t *)(*(int *)(*(int *)(caller_r14 + -0x38) + 0x4c4) + 0xe);
  }
  iVar2 = (((vtbl_entry*)(*piVar7))[3].fn)((int)((vtbl_entry*)(*piVar7))[3].adj + (int)piVar7,0x10);
  pvVar3 = *(void **)(*(int *)(caller_r14 + -0x3c) + 0x7c);
  if (iVar2 == 0) {
    write_two_words_to_struct_10513bca(pvVar3,1,8,6);
    write_two_words_to_struct_10513bca(*(void **)(*(int *)(caller_r14 + -0x3c) + 0x74),1,8,6);
    write_two_words_to_struct_10513bca(*(void **)(*(int *)(caller_r14 + -0x3c) + 0x78),4,8,6);
    write_two_words_to_struct_10513bca(*(void **)(*(int *)(caller_r14 + -0x3c) + 0x70),4,8,6);
  }
  else {
    write_two_words_to_struct_10513bca(pvVar3,1,8,4);
    write_two_words_to_struct_10513bca(*(void **)(*(int *)(caller_r14 + -0x3c) + 0x74),1,8,4);
    write_two_words_to_struct_10513bca(*(void **)(*(int *)(caller_r14 + -0x3c) + 0x78),4,8,4);
    write_two_words_to_struct_10513bca(*(void **)(*(int *)(caller_r14 + -0x3c) + 0x70),4,8,4);
    *(uint16_t *)(caller_r10[0x1fe] + 0x2170) = *(uint16_t *)(caller_r10[0x1fe] + 0x128);
    *(uint16_t *)(caller_r10[0x1fe] + 0x2172) = *(uint16_t *)(caller_r10[0x1fe] + 0x12a);
    *(uint16_t *)(caller_r10[0x1fe] + 0x2174) = *(uint16_t *)(caller_r10[0x1fe] + 300);
    *(uint16_t *)(caller_r10[0x1fe] + 0x2176) = *(uint16_t *)(caller_r10[0x1fe] + 0x12e);
  }
  bVar12 = false;
  if (*(int *)(caller_r14 + -0x30) == 0) {
    psVar8 = (short *)(caller_r10[0x235] + *(int *)(caller_r14 + -0x10));
    (**(code **)(psVar8 + 2))((int)*psVar8 + (int)caller_r10,*(uint32_t *)(caller_r14 + -0x2c));
    iVar2 = 0x70;
  }
  else if (*(int *)(caller_r14 + -0x30) == 1) {
    psVar8 = (short *)(caller_r10[0x235] + *(int *)(caller_r14 + -0x10));
    (**(code **)(psVar8 + 2))((int)*psVar8 + (int)caller_r10,*(uint32_t *)(caller_r14 + -0x2c));
    pvVar3 = (void *)get_system_heap();
    iVar2 = mempool_get_block(pvVar3,(void *)caller_r10[0x1c],0);
    bVar12 = iVar2 == 0;
    if (!bVar12) {
      (((vtbl_entry*)(caller_r10[0x235]))[10].fn)
                ((int)((vtbl_entry*)(caller_r10[0x235]))[10].adj + (int)caller_r10);
    }
    iVar2 = 0x78;
  }
  else if ((*(int *)(caller_r14 + -0x30) == 4) || (*(int *)(caller_r14 + -0x30) == 2)) {
    (((vtbl_entry*)(caller_r10[0x235]))[2].fn)
              ((int)((vtbl_entry*)(caller_r10[0x235]))[2].adj + (int)caller_r10,0);
    (((vtbl_entry*)(caller_r10[0x235]))[4].fn)
              ((int)((vtbl_entry*)(caller_r10[0x235]))[4].adj + (int)caller_r10,
               *(int *)(caller_r14 + -0x2c) + -0x600);
    iVar2 = 0x74;
  }
  else {
    if ((*(int *)(caller_r14 + -0x30) != 5) && (*(int *)(caller_r14 + -0x30) != 3)) goto LAB_1050cf86;
    (((vtbl_entry*)(caller_r10[0x235]))[2].fn)
              ((int)((vtbl_entry*)(caller_r10[0x235]))[2].adj + (int)caller_r10,0);
    (((vtbl_entry*)(caller_r10[0x235]))[4].fn)
              ((int)((vtbl_entry*)(caller_r10[0x235]))[4].adj + (int)caller_r10,
               *(int *)(caller_r14 + -0x2c) + -0x600);
    pvVar3 = (void *)get_system_heap();
    iVar2 = mempool_get_block(pvVar3,(void *)caller_r10[0x1c],0);
    if (iVar2 == 0) {
      bVar12 = true;
      iVar2 = 0x7c;
    }
    else {
      (((vtbl_entry*)(caller_r10[0x235]))[10].fn)
                ((int)((vtbl_entry*)(caller_r10[0x235]))[10].adj + (int)caller_r10,iVar2);
      iVar2 = 0x7c;
    }
  }
  set_object_field_0x20((int)caller_r10,*(void **)(iVar2 + *(int *)(caller_r14 + -0x3c)));
LAB_1050cf86:
  iVar2 = *(int *)(caller_r14 + -0x3c);
  if (bVar12) {
    remove_node_from_list(*(int *)(iVar2 + 0x2c),caller_r10);
    bVar12 = false;
  }
  else {
    puVar6 = (uint32_t *)(iVar2 + 0x68);
    *(uint8_t *)(iVar2 + 0x80) = 0;
    eventflag_clr_flg(puVar6,0x200000);
    call_two_helpers_on_object_10514cfa(*(int *)(*(int *)(caller_r14 + -0x3c) + 0x28));
    eventflag_wai_flg(puVar6,0x200000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar6,0x200000);
    if (*(int *)(caller_r14 + -0xc) != 0) {
      dispatch_event_via_virtual_slot_1050d12e(*(int *)(caller_r14 + -0x3c),*(void **)(caller_r14 + -0xc),0);
    }
    bVar12 = *(char *)(*(int *)(caller_r14 + -0x3c) + 0x80) == '\0';
    *(uint8_t *)(*(int *)(*(int *)(caller_r14 + -0x3c) + 0x28) + 0x354) = 1;
    set_flag_at_offset_0x34c(*(uint32_t *)(*(int *)(caller_r14 + -0x3c) + 0x28));
  }
  check_kernel_call_success_10459d88(*(uint32_t **)(caller_r14 + -8));
  return bVar12;
}
