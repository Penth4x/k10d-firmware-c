/* @k10d initialize_sensor_object_from_config @ 0x1050c472
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a sensor/AFE object by copying configuration data from a source struct and
 *   setting up memory pools.
 * summary:
 *   The function acquires a sensor object via alloc_first_ring_entry and copies a large
 *   block of configuration data (approx 0x600 bytes) from param_5 into the object's fields.
 *   It initializes memory pools using mempool_get_block and sets up virtual method tables.
 *   The behavior branches based on param_2, likely configuring different sensor modes or
 *   states. It returns a boolean indicating success or failure of the initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1050c4ae) overlaps instruction at (ram,0x1050c4ac)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool initialize_sensor_object_from_config(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint32_t *puVar1;
  uint8_t uVar3;
  char cVar4;
  void *pvVar2;
  uint32_t *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uintptr_t sp;
  bool bVar10;
  uint8_t uStack_9;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x60));
  puVar1 = (uint32_t *)alloc_first_ring_entry(*(uint32_t *)(param_1 + 0x2c),param_1 + 4);
  if (puVar1 == (uint32_t *)0x0) {
    bVar10 = false;
    goto LAB_1050d02a;
  }
  (((vtbl_entry*)(puVar1[0x235]))[2].fn)((int)((vtbl_entry*)(puVar1[0x235]))[2].adj + (int)puVar1,param_3);
  piVar6 = puVar1 + 0x52;
  test_mode_state_reset(piVar6);
  if (param_5 != 0) {
    iVar7 = 0x344;
    do {
      iVar7 = iVar7 + -4;
      *(uint32_t *)(iVar7 + (int)(puVar1 + 0xab)) = *(uint32_t *)(iVar7 + param_5 + 0x164);
    } while (iVar7 != 0);
    field_setter((int)(puVar1 + 0xab),0x51,0);
    empty_noop_stub_1050d3b0((uint32_t)(piVar6),param_5);
    iVar7 = 0x17;
    do {
      iVar8 = iVar7 + -1;
      *(uint8_t *)((int)puVar1 + iVar7 + 0x14b) = *(uint8_t *)(iVar8 + param_5 + 4);
      iVar7 = iVar8;
    } while (iVar8 != 0);
    empty_noop_stub_1050d3b0((uint32_t)(puVar1 + 0x59),param_5 + 0x1c);
    iVar7 = 0x10;
    do {
      iVar8 = iVar7 + -1;
      *(uint8_t *)((int)puVar1 + iVar7 + 0x167) = *(uint8_t *)(iVar8 + param_5 + 0x20);
      iVar7 = iVar8;
    } while (iVar8 != 0);
    empty_noop_stub_1050d3b0((uint32_t)(puVar1 + 0x5e),param_5 + 0x30);
    iVar7 = 0x45;
    do {
      iVar8 = iVar7 + -1;
      *(uint8_t *)((int)puVar1 + iVar7 + 0x17b) = *(uint8_t *)(iVar8 + param_5 + 0x34);
      iVar7 = iVar8;
    } while (iVar8 != 0);
    empty_noop_stub_1050d3b0((uint32_t)(puVar1 + 0x71),param_5 + 0x7c);
    iVar7 = 0x1b;
    do {
      iVar8 = iVar7 + -1;
      *(uint8_t *)((int)puVar1 + iVar7 + 0x1c7) = *(uint8_t *)(iVar8 + param_5 + 0x80);
      iVar7 = iVar8;
    } while (iVar8 != 0);
    empty_noop_stub_1050d3b0((uint32_t)(puVar1 + 0x79),param_5 + 0x9c);
    *(uint8_t *)(puVar1 + 0x7a) = *(uint8_t *)(param_5 + 0xa0);
    empty_noop_stub_1050d3b0((uint32_t)(puVar1 + 0x7b),param_5 + 0xa4);
    iVar7 = 8;
    do {
      iVar8 = iVar7 + -1;
      *(uint8_t *)((int)puVar1 + iVar7 + 0x1ef) = *(uint8_t *)(iVar8 + param_5 + 0xa8);
      iVar7 = iVar8;
    } while (iVar8 != 0);
    empty_noop_stub_1050d3b0((uint32_t)(puVar1 + 0x7e),param_5 + 0xb0);
    iVar7 = 0x10;
    do {
      iVar8 = iVar7 + -1;
      *(uint8_t *)((int)puVar1 + iVar7 + 0x1fb) = *(uint8_t *)(iVar8 + param_5 + 0xb4);
      iVar7 = iVar8;
    } while (iVar8 != 0);
    empty_noop_stub_1050d3b0((uint32_t)(puVar1 + 0x83),param_5 + 0xc4);
    iVar7 = 0x10;
    do {
      iVar8 = iVar7 + -1;
      *(uint8_t *)((int)puVar1 + iVar7 + 0x20f) = *(uint8_t *)(iVar8 + param_5 + 200);
      iVar7 = iVar8;
    } while (iVar8 != 0);
    empty_noop_stub_1050d3b0((uint32_t)(puVar1 + 0x88),param_5 + 0xd8);
    iVar7 = 0x10;
    do {
      iVar8 = iVar7 + -1;
      *(uint8_t *)((int)puVar1 + iVar7 + 0x223) = *(uint8_t *)(iVar8 + param_5 + 0xdc);
      iVar7 = iVar8;
    } while (iVar8 != 0);
    empty_noop_stub_1050d3b0((uint32_t)(puVar1 + 0x8d),param_5 + 0xec);
    iVar7 = 0xc;
    do {
      iVar8 = iVar7 + -1;
      *(uint8_t *)((int)puVar1 + iVar7 + 0x237) = *(uint8_t *)(iVar8 + param_5 + 0xf0);
      iVar7 = iVar8;
    } while (iVar8 != 0);
    empty_noop_stub_1050d3b0((uint32_t)(puVar1 + 0x95),param_5 + 0x10c);
    iVar7 = 4;
    do {
      iVar8 = iVar7 + -1;
      *(uint8_t *)((int)puVar1 + iVar7 + 599) = *(uint8_t *)(iVar8 + param_5 + 0x110);
      iVar7 = iVar8;
    } while (iVar8 != 0);
    empty_noop_stub_1050d3b0((uint32_t)(puVar1 + 0x17e),param_5 + 0x4b0);
    iVar7 = 6;
    do {
      iVar8 = iVar7 + -1;
      *(uint8_t *)((int)puVar1 + iVar7 + 0x5fb) = *(uint8_t *)(iVar8 + param_5 + 0x4b4);
      iVar7 = iVar8;
    } while (iVar8 != 0);
    empty_noop_stub_1050d3b0((uint32_t)(puVar1 + 0x181),param_5 + 0x4bc);
    iVar7 = 4;
    do {
      iVar8 = iVar7 + -1;
      *(uint8_t *)((int)puVar1 + iVar7 + 0x607) = *(uint8_t *)(iVar8 + param_5 + 0x4c0);
      iVar7 = iVar8;
    } while (iVar8 != 0);
    copy_eight_bytes_1045c584((uint16_t *)(puVar1 + 0x17c),(uint16_t *)(param_5 + 0x4a8));
    iVar8 = puVar1[0x186];
    iVar7 = *(int *)(param_5 + 0x4d0);
    iVar9 = 0x40;
    do {
      iVar9 = iVar9 + -4;
      *(uint32_t *)(iVar9 + iVar8) = *(uint32_t *)(iVar9 + iVar7);
    } while (iVar9 != 0);
    empty_noop_stub_1050d3b0((uint32_t)(puVar1 + 0x97),param_5 + 0x114);
    iVar7 = 4;
    do {
      iVar8 = iVar7 + -1;
      *(uint8_t *)((int)puVar1 + iVar7 + 0x25f) = *(uint8_t *)(iVar8 + param_5 + 0x118);
      iVar7 = iVar8;
    } while (iVar8 != 0);
    empty_noop_stub_1050d3b0((uint32_t)(puVar1 + 0x99),param_5 + 0x11c);
    iVar7 = 0x20;
    do {
      iVar8 = iVar7 + -1;
      *(uint8_t *)((int)puVar1 + iVar7 + 0x267) = *(uint8_t *)(iVar8 + param_5 + 0x120);
      iVar7 = iVar8;
    } while (iVar8 != 0);
    empty_noop_stub_1050d3b0((uint32_t)(puVar1 + 0xa2),param_5 + 0x140);
    iVar7 = 0x20;
    do {
      iVar8 = iVar7 + -1;
      *(uint8_t *)((int)puVar1 + iVar7 + 0x28b) = *(uint8_t *)(iVar8 + param_5 + 0x144);
      iVar7 = iVar8;
    } while (iVar8 != 0);
    empty_noop_stub_1050d3b0((uint32_t)(puVar1 + 0x91),param_5 + 0xfc);
    iVar7 = 9;
    do {
      iVar8 = iVar7 + -1;
      *(uint8_t *)((int)puVar1 + iVar7 + 0x247) = *(uint8_t *)(iVar8 + param_5 + 0x100);
      iVar7 = iVar8;
    } while (iVar8 != 0);
    iVar7 = puVar1[0x183];
    iVar8 = *(int *)(param_5 + 0x4c4);
    *(uint16_t *)(iVar7 + 8) = *(uint16_t *)(iVar8 + 8);
    *(uint16_t *)(iVar7 + 10) = *(uint16_t *)(iVar8 + 10);
    *(uint16_t *)(iVar7 + 0xc) = *(uint16_t *)(iVar8 + 0xc);
    *(uint16_t *)(iVar7 + 0xe) = *(uint16_t *)(iVar8 + 0xe);
    *(uint16_t *)(iVar7 + 0x12) = *(uint16_t *)(iVar8 + 0x12);
    *(uint16_t *)(iVar7 + 0x14) = *(uint16_t *)(iVar8 + 0x14);
    *(uint16_t *)(iVar7 + 0x16) = *(uint16_t *)(iVar8 + 0x16);
    *(uint16_t *)(iVar7 + 0x18) = *(uint16_t *)(iVar8 + 0x18);
    *(uint16_t *)(iVar7 + 0x1a) = *(uint16_t *)(iVar8 + 0x1a);
    *(uint16_t *)(iVar7 + 0x1c) = *(uint16_t *)(iVar8 + 0x1c);
    *(uint16_t *)(iVar7 + 0x1e) = *(uint16_t *)(iVar8 + 0x1e);
    *(uint16_t *)(iVar7 + 0x20) = *(uint16_t *)(iVar8 + 0x20);
    *(uint16_t *)(iVar7 + 0x22) = *(uint16_t *)(iVar8 + 0x22);
    iVar7 = 0;
    do {
      *(uint32_t *)((int)puVar1 + iVar7 + 0x658) = *(uint32_t *)(iVar7 + param_5 + 0x510);
      iVar7 = iVar7 + 4;
    } while (iVar7 < 0x20);
    puVar1[0x187] = *(uint32_t *)(param_5 + 0x4d4);
    *(uint16_t *)(puVar1 + 0x188) = *(uint16_t *)(param_5 + 0x4d8);
    *(uint16_t *)((int)puVar1 + 0x622) = *(uint16_t *)(param_5 + 0x4da);
    *(uint16_t *)(puVar1 + 0x189) = *(uint16_t *)(param_5 + 0x4dc);
    *(uint16_t *)((int)puVar1 + 0x626) = *(uint16_t *)(param_5 + 0x4de);
    *(uint16_t *)(puVar1 + 0x18a) = *(uint16_t *)(param_5 + 0x4e0);
    *(uint16_t *)((int)puVar1 + 0x62a) = *(uint16_t *)(param_5 + 0x4e2);
    *(uint8_t *)((int)puVar1 + 0x62e) = *(uint8_t *)(param_5 + 0x4e6);
    *(uint16_t *)(puVar1 + 0x18b) = *(uint16_t *)(param_5 + 0x4e4);
    puVar1[0x194] = *(uint32_t *)(param_5 + 0x508);
    if (*(ushort **)(param_5 + 0x4f8) != (ushort *)0x0) {
      copy_structured_buffer_blocks(&uStack_9,*(ushort **)(param_5 + 0x4f8),(ushort *)puVar1[0x184]);
    }
    if (*(uint16_t **)(param_5 + 0x4e8) != (uint16_t *)0x0) {
      copy_0x32_byte_struct(&uStack_9,*(uint16_t **)(param_5 + 0x4e8),(uint16_t *)puVar1[0x185]);
    }
    iVar7 = param_5 + 0x164;
    puVar5 = puVar1 + 0xab;
    uVar3 = settings_getter(iVar7,0xd);
    field_setter((int)puVar5,0xd,uVar3);
    uVar3 = settings_getter(iVar7,0xe);
    field_setter((int)puVar5,0xe,uVar3);
    uVar3 = settings_getter(iVar7,0xf);
    field_setter((int)puVar5,0xf,uVar3);
    uVar3 = settings_getter(iVar7,0x10);
    field_setter((int)puVar5,0x10,uVar3);
    uVar3 = settings_getter(iVar7,0x11);
    field_setter((int)puVar5,0x11,uVar3);
    uVar3 = settings_getter(iVar7,0x12);
    field_setter((int)puVar5,0x12,uVar3);
    uVar3 = settings_getter(iVar7,0x13);
    field_setter((int)puVar5,0x13,uVar3);
    uVar3 = settings_getter(iVar7,0x14);
    field_setter((int)puVar5,0x14,uVar3);
    uVar3 = settings_getter(iVar7,0x15);
    field_setter((int)puVar5,0x15,uVar3);
    uVar3 = settings_getter(iVar7,0x16);
    field_setter((int)puVar5,0x16,uVar3);
    uVar3 = settings_getter(iVar7,0x17);
    field_setter((int)puVar5,0x17,uVar3);
    uVar3 = settings_getter(iVar7,0x18);
    field_setter((int)puVar5,0x18,uVar3);
    uVar3 = settings_getter(iVar7,0x19);
    field_setter((int)puVar5,0x19,uVar3);
    uVar3 = settings_getter(iVar7,0x1a);
    field_setter((int)puVar5,0x1a,uVar3);
    uVar3 = settings_getter(iVar7,0x1b);
    field_setter((int)puVar5,0x1b,uVar3);
    uVar3 = settings_getter(iVar7,0x1c);
    field_setter((int)puVar5,0x1c,uVar3);
    uVar3 = settings_getter(iVar7,0x1d);
    field_setter((int)puVar5,0x1d,uVar3);
    uVar3 = settings_getter(iVar7,0x1e);
    field_setter((int)puVar5,0x1e,uVar3);
    uVar3 = settings_getter(iVar7,0x1f);
    field_setter((int)puVar5,0x1f,uVar3);
    uVar3 = settings_getter(iVar7,0x20);
    field_setter((int)puVar5,0x20,uVar3);
    uVar3 = settings_getter(iVar7,0x21);
    field_setter((int)puVar5,0x21,uVar3);
    uVar3 = settings_getter(iVar7,0x22);
    field_setter((int)puVar5,0x22,uVar3);
    uVar3 = settings_getter(iVar7,0x23);
    field_setter((int)puVar5,0x23,uVar3);
    uVar3 = settings_getter(iVar7,0x24);
    field_setter((int)puVar5,0x24,uVar3);
    uVar3 = settings_getter(iVar7,0x25);
    field_setter((int)puVar5,0x25,uVar3);
    uVar3 = settings_getter(iVar7,0x26);
    field_setter((int)puVar5,0x26,uVar3);
    uVar3 = settings_getter(iVar7,0x27);
    field_setter((int)puVar5,0x27,uVar3);
    uVar3 = settings_getter(iVar7,0x28);
    field_setter((int)puVar5,0x28,uVar3);
    uVar3 = settings_getter(iVar7,0x29);
    field_setter((int)puVar5,0x29,uVar3);
    uVar3 = settings_getter(iVar7,0x2a);
    field_setter((int)puVar5,0x2a,uVar3);
    uVar3 = settings_getter(iVar7,0x2c);
    field_setter((int)puVar5,0x2c,uVar3);
    uVar3 = settings_getter(iVar7,0x2d);
    field_setter((int)puVar5,0x2d,uVar3);
    uVar3 = settings_getter(iVar7,0x2f);
    field_setter((int)puVar5,0x2f,uVar3);
    uVar3 = settings_getter(iVar7,0x30);
    field_setter((int)puVar5,0x30,uVar3);
    uVar3 = settings_getter(iVar7,0x2b);
    field_setter((int)puVar5,0x2b,uVar3);
    uVar3 = settings_getter(iVar7,0x2e);
    field_setter((int)puVar5,0x2e,uVar3);
    uVar3 = settings_getter(iVar7,0x31);
    field_setter((int)puVar5,0x31,uVar3);
  }
  (((vtbl_entry*)(puVar1[0x235]))[14].fn)((int)((vtbl_entry*)(puVar1[0x235]))[14].adj + (int)puVar1,4);
  cVar4 = settings_getter((int)(puVar1 + 0xab),0xd);
  if (((cVar4 == '\t') || (cVar4 == '\n')) || (cVar4 == '\v')) {
    *(uint16_t *)puVar1[0x183] = *(uint16_t *)(*(int *)(param_5 + 0x4c4) + 8);
    *(uint16_t *)(puVar1[0x183] + 2) = *(uint16_t *)(*(int *)(param_5 + 0x4c4) + 10);
    *(uint16_t *)(puVar1[0x183] + 4) = *(uint16_t *)(*(int *)(param_5 + 0x4c4) + 0xc);
    *(uint16_t *)(puVar1[0x183] + 6) = *(uint16_t *)(*(int *)(param_5 + 0x4c4) + 0xe);
  }
  iVar7 = (((vtbl_entry*)(*piVar6))[3].fn)((int)((vtbl_entry*)(*piVar6))[3].adj + (int)piVar6,0x10);
  if (iVar7 == 0) {
    write_two_words_to_struct_10513bca(*(void **)(param_1 + 0x7c),1,8,6);
    write_two_words_to_struct_10513bca(*(void **)(param_1 + 0x74),1,8,6);
    write_two_words_to_struct_10513bca(*(void **)(param_1 + 0x78),4,8,6);
    write_two_words_to_struct_10513bca(*(void **)(param_1 + 0x70),4,8,6);
  }
  else {
    write_two_words_to_struct_10513bca(*(void **)(param_1 + 0x7c),1,8,4);
    write_two_words_to_struct_10513bca(*(void **)(param_1 + 0x74),1,8,4);
    write_two_words_to_struct_10513bca(*(void **)(param_1 + 0x78),4,8,4);
    write_two_words_to_struct_10513bca(*(void **)(param_1 + 0x70),4,8,4);
    *(uint16_t *)(puVar1[0x1fe] + 0x2170) = *(uint16_t *)(puVar1[0x1fe] + 0x128);
    *(uint16_t *)(puVar1[0x1fe] + 0x2172) = *(uint16_t *)(puVar1[0x1fe] + 0x12a);
    *(uint16_t *)(puVar1[0x1fe] + 0x2174) = *(uint16_t *)(puVar1[0x1fe] + 300);
    *(uint16_t *)(puVar1[0x1fe] + 0x2176) = *(uint16_t *)(puVar1[0x1fe] + 0x12e);
  }
  bVar10 = false;
  if (param_2 == 0) {
    (((vtbl_entry*)(puVar1[0x235]))[2].fn)((int)((vtbl_entry*)(puVar1[0x235]))[2].adj + (int)puVar1,param_3)
    ;
    iVar7 = 0x70;
LAB_1050cf78:
    set_object_field_0x20((int)puVar1,*(void **)(iVar7 + param_1));
  }
  else {
    if (param_2 == 1) {
      (((vtbl_entry*)(puVar1[0x235]))[2].fn)
                ((int)((vtbl_entry*)(puVar1[0x235]))[2].adj + (int)puVar1,param_3);
      pvVar2 = (void *)get_system_heap();
      iVar7 = mempool_get_block(pvVar2,(void *)puVar1[0x1c],0);
      bVar10 = iVar7 == 0;
      if (!bVar10) {
        (((vtbl_entry*)(puVar1[0x235]))[10].fn)((int)((vtbl_entry*)(puVar1[0x235]))[10].adj + (int)puVar1);
      }
      iVar7 = 0x78;
      goto LAB_1050cf78;
    }
    if ((param_2 == 4) || (param_2 == 2)) {
      (((vtbl_entry*)(puVar1[0x235]))[2].fn)((int)((vtbl_entry*)(puVar1[0x235]))[2].adj + (int)puVar1,0);
      (((vtbl_entry*)(puVar1[0x235]))[4].fn)
                ((int)((vtbl_entry*)(puVar1[0x235]))[4].adj + (int)puVar1,param_3 + -0x600);
      iVar7 = 0x74;
      goto LAB_1050cf78;
    }
    if ((param_2 == 5) || (param_2 == 3)) {
      (((vtbl_entry*)(puVar1[0x235]))[2].fn)((int)((vtbl_entry*)(puVar1[0x235]))[2].adj + (int)puVar1,0);
      (((vtbl_entry*)(puVar1[0x235]))[4].fn)
                ((int)((vtbl_entry*)(puVar1[0x235]))[4].adj + (int)puVar1,param_3 + -0x600);
      pvVar2 = (void *)get_system_heap();
      iVar7 = mempool_get_block(pvVar2,(void *)puVar1[0x1c],0);
      if (iVar7 == 0) {
        bVar10 = true;
        iVar7 = 0x7c;
      }
      else {
        (((vtbl_entry*)(puVar1[0x235]))[10].fn)
                  ((int)((vtbl_entry*)(puVar1[0x235]))[10].adj + (int)puVar1,iVar7);
        iVar7 = 0x7c;
      }
      goto LAB_1050cf78;
    }
  }
  if (bVar10) {
    remove_node_from_list(*(int *)(param_1 + 0x2c),puVar1);
    bVar10 = false;
  }
  else {
    puVar1 = (uint32_t *)(param_1 + 0x68);
    *(uint8_t *)(param_1 + 0x80) = 0;
    eventflag_clr_flg(puVar1,0x200000);
    call_two_helpers_on_object_10514cfa(*(int *)(param_1 + 0x28));
    eventflag_wai_flg(puVar1,0x200000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar1,0x200000);
    if (param_4 != 0) {
      dispatch_event_via_virtual_slot_1050d12e(param_1,(void *)param_4,0);
    }
    bVar10 = *(char *)(param_1 + 0x80) == '\0';
    *(uint8_t *)(*(int *)(param_1 + 0x28) + 0x354) = 1;
    set_flag_at_offset_0x34c(*(uint32_t *)(param_1 + 0x28));
  }
LAB_1050d02a:
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x60));
  return bVar10;
}
