/* @k10d af_config_loader @ 0x1050c8ec
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed copy_fields_and_dispatch_state)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Copies 36 indexed fields between two structures and dispatches a state-dependent
 *   operation.
 * summary:
 *   The function iterates through indices 0xd to 0x31, calling settings_getter to read
 *   values and field_setter to write them to a target structure. It then performs a virtual
 *   call and branches on a state variable (unaff_r14 + -0x30) to execute different logic,
 *   including memory allocation via mempool_get_block and calls to
 *   write_two_words_to_struct_10513bca. Finally, it calls set_object_field_0x20 and
 *   check_kernel_call_success_10459d88 before returning a boolean flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AF config loader region start: copies settings fields 0xd-0x31 (36 pairs) from [state+0x164] into
   AF module (EEPROM-backed AF tuning surface). */

bool af_config_loader(int param_1)

{
  short sVar1;
  int iVar2;
  uint8_t uVar4;
  char cVar5;
  void *pvVar3;
  int caller_r8;
  uint32_t *puVar6;
  int caller_r9;
  uint32_t *caller_r10;
  int *caller_r11;
  short *psVar7;
  int caller_r14;
  bool bVar8;
  
  uVar4 = settings_getter(param_1,0xd);
  field_setter(caller_r9,0xd,uVar4);
  uVar4 = settings_getter(caller_r8,0xe);
  field_setter(caller_r9,0xe,uVar4);
  uVar4 = settings_getter(caller_r8,0xf);
  field_setter(caller_r9,0xf,uVar4);
  uVar4 = settings_getter(caller_r8,0x10);
  field_setter(caller_r9,0x10,uVar4);
  uVar4 = settings_getter(caller_r8,0x11);
  field_setter(caller_r9,0x11,uVar4);
  uVar4 = settings_getter(caller_r8,0x12);
  field_setter(caller_r9,0x12,uVar4);
  uVar4 = settings_getter(caller_r8,0x13);
  field_setter(caller_r9,0x13,uVar4);
  uVar4 = settings_getter(caller_r8,0x14);
  field_setter(caller_r9,0x14,uVar4);
  uVar4 = settings_getter(caller_r8,0x15);
  field_setter(caller_r9,0x15,uVar4);
  uVar4 = settings_getter(caller_r8,0x16);
  field_setter(caller_r9,0x16,uVar4);
  uVar4 = settings_getter(caller_r8,0x17);
  field_setter(caller_r9,0x17,uVar4);
  uVar4 = settings_getter(caller_r8,0x18);
  field_setter(caller_r9,0x18,uVar4);
  uVar4 = settings_getter(caller_r8,0x19);
  field_setter(caller_r9,0x19,uVar4);
  uVar4 = settings_getter(caller_r8,0x1a);
  field_setter(caller_r9,0x1a,uVar4);
  uVar4 = settings_getter(caller_r8,0x1b);
  field_setter(caller_r9,0x1b,uVar4);
  uVar4 = settings_getter(caller_r8,0x1c);
  field_setter(caller_r9,0x1c,uVar4);
  uVar4 = settings_getter(caller_r8,0x1d);
  field_setter(caller_r9,0x1d,uVar4);
  uVar4 = settings_getter(caller_r8,0x1e);
  field_setter(caller_r9,0x1e,uVar4);
  uVar4 = settings_getter(caller_r8,0x1f);
  field_setter(caller_r9,0x1f,uVar4);
  uVar4 = settings_getter(caller_r8,0x20);
  field_setter(caller_r9,0x20,uVar4);
  uVar4 = settings_getter(caller_r8,0x21);
  field_setter(caller_r9,0x21,uVar4);
  uVar4 = settings_getter(caller_r8,0x22);
  field_setter(caller_r9,0x22,uVar4);
  uVar4 = settings_getter(caller_r8,0x23);
  field_setter(caller_r9,0x23,uVar4);
  uVar4 = settings_getter(caller_r8,0x24);
  field_setter(caller_r9,0x24,uVar4);
  uVar4 = settings_getter(caller_r8,0x25);
  field_setter(caller_r9,0x25,uVar4);
  uVar4 = settings_getter(caller_r8,0x26);
  field_setter(caller_r9,0x26,uVar4);
  uVar4 = settings_getter(caller_r8,0x27);
  field_setter(caller_r9,0x27,uVar4);
  uVar4 = settings_getter(caller_r8,0x28);
  field_setter(caller_r9,0x28,uVar4);
  uVar4 = settings_getter(caller_r8,0x29);
  field_setter(caller_r9,0x29,uVar4);
  uVar4 = settings_getter(caller_r8,0x2a);
  field_setter(caller_r9,0x2a,uVar4);
  uVar4 = settings_getter(caller_r8,0x2c);
  field_setter(caller_r9,0x2c,uVar4);
  uVar4 = settings_getter(caller_r8,0x2d);
  field_setter(caller_r9,0x2d,uVar4);
  uVar4 = settings_getter(caller_r8,0x2f);
  field_setter(caller_r9,0x2f,uVar4);
  uVar4 = settings_getter(caller_r8,0x30);
  field_setter(caller_r9,0x30,uVar4);
  uVar4 = settings_getter(caller_r8,0x2b);
  field_setter(caller_r9,0x2b,uVar4);
  uVar4 = settings_getter(caller_r8,0x2e);
  field_setter(caller_r9,0x2e,uVar4);
  uVar4 = settings_getter(caller_r8,0x31);
  field_setter(caller_r9,0x31,uVar4);
  iVar2 = caller_r10[0x235];
  sVar1 = *(short *)(iVar2 + 0x70);
  *(uint32_t *)(caller_r14 + -0x34) = 4;
  (((vtbl_entry*)(iVar2))[14].fn)((int)sVar1 + (int)caller_r10,4);
  cVar5 = settings_getter((int)(caller_r11 + 0x59),0xd);
  if (((cVar5 == '\t') || (cVar5 == '\n')) || (cVar5 == '\v')) {
    *(uint16_t *)caller_r11[0x131] =
         *(uint16_t *)(*(int *)(*(int *)(caller_r14 + -0x38) + 0x4c4) + 8);
    *(uint16_t *)(caller_r11[0x131] + 2) =
         *(uint16_t *)(*(int *)(*(int *)(caller_r14 + -0x38) + 0x4c4) + 10);
    *(uint16_t *)(caller_r11[0x131] + 4) =
         *(uint16_t *)(*(int *)(*(int *)(caller_r14 + -0x38) + 0x4c4) + 0xc);
    *(uint16_t *)(caller_r11[0x131] + 6) =
         *(uint16_t *)(*(int *)(*(int *)(caller_r14 + -0x38) + 0x4c4) + 0xe);
  }
  iVar2 = (((vtbl_entry*)(*caller_r11))[3].fn)((int)((vtbl_entry*)(*caller_r11))[3].adj + (int)caller_r11,0x10)
  ;
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
  bVar8 = false;
  if (*(int *)(caller_r14 + -0x30) == 0) {
    psVar7 = (short *)(caller_r10[0x235] + *(int *)(caller_r14 + -0x10));
    (**(code **)(psVar7 + 2))((int)*psVar7 + (int)caller_r10,*(uint32_t *)(caller_r14 + -0x2c));
    iVar2 = 0x70;
  }
  else if (*(int *)(caller_r14 + -0x30) == 1) {
    psVar7 = (short *)(caller_r10[0x235] + *(int *)(caller_r14 + -0x10));
    (**(code **)(psVar7 + 2))((int)*psVar7 + (int)caller_r10,*(uint32_t *)(caller_r14 + -0x2c));
    pvVar3 = (void *)get_system_heap();
    iVar2 = mempool_get_block(pvVar3,(void *)caller_r10[0x1c],0);
    bVar8 = iVar2 == 0;
    if (!bVar8) {
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
      bVar8 = true;
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
  if (bVar8) {
    remove_node_from_list(*(int *)(iVar2 + 0x2c),caller_r10);
    bVar8 = false;
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
    bVar8 = *(char *)(*(int *)(caller_r14 + -0x3c) + 0x80) == '\0';
    *(uint8_t *)(*(int *)(*(int *)(caller_r14 + -0x3c) + 0x28) + 0x354) = 1;
    set_flag_at_offset_0x34c(*(uint32_t *)(*(int *)(caller_r14 + -0x3c) + 0x28));
  }
  check_kernel_call_success_10459d88(*(uint32_t **)(caller_r14 + -8));
  return bVar8;
}
