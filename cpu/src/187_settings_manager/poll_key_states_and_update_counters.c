/* @k10d poll_key_states_and_update_counters @ 0x1048ace6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 187_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void poll_key_states_and_update_counters(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uintptr_t sp;
  cls_105a6cfc acStack_54 [19];
  
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0);
  if (iVar2 != 0) {
    piVar3 = (int *)(param_1 + 0x50);
    if (5 < *piVar3) {
      *piVar3 = 0;
      iVar2 = *param_2;
      goto LAB_1048ad20;
    }
    *piVar3 = *piVar3 + 1;
  }
  iVar2 = *param_2;
LAB_1048ad20:
  iVar2 = (((vtbl_entry*)(iVar2))[6].fn)((int)((vtbl_entry*)(iVar2))[6].adj + (int)param_2,1);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x54) < 6) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x54) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,2);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x58) < 6) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x58) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,3);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x5c) < 6) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x5c) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,5);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 100) < 6) {
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 100) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,7);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x6c) < 6) {
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x6c) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,8);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x70) < 6) {
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x70) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,9);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x74) < 6) {
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x74) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,10);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x78) < 6) {
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x78) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0xb);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x7c) < 6) {
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x7c) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0xc);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x80) < 6) {
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x80) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0xd);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x84) < 6) {
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x84) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0xe);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x88) < 6) {
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x88) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0xf);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x8c) < 6) {
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x8c) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x17);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xac) < 6) {
      *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xac) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x11);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x94) < 6) {
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x94) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x12);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x98) < 6) {
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x98) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x13);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x9c) < 6) {
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x9c) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x14);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xa0) < 6) {
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xa0) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x15);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xa4) < 6) {
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xa4) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x16);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xa8) < 6) {
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xa8) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x10);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x90) < 6) {
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x90) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x18);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xb0) < 6) {
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xb0) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x19);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xb4) < 6) {
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xb4) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x1a);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xb8) < 6) {
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xb8) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x1b);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xbc) < 6) {
      *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xbc) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x1c);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xc0) < 6) {
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xc0) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x1d);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xc4) < 6) {
      *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xc4) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x1e);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 200) < 6) {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 200) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x1f);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xcc) < 6) {
      *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xcc) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x20);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xd0) < 6) {
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xd0) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x21);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xd4) < 6) {
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xd4) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x22);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xd8) < 6) {
      *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xd8) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x23);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xdc) < 6) {
      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xdc) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x24);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xe0) < 6) {
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xe0) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x25);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xe4) < 6) {
      *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xe4) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x29);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xf4) < 6) {
      *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xf4) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x2a);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xf8) < 6) {
      *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xf8) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x2b);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xfc) < 6) {
      *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0xfc) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x2c);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x100) < 6) {
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x100) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x2d);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x104) < 6) {
      *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x104) = 0;
    }
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x2e);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x108) < 6) {
      *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x108) = 0;
    }
  }
  cls_105a6cfc_new(acStack_54);
  copy_0x45_byte_block(*(int *)(param_1 + 0x4c),acStack_54);
  bVar1 = *(byte *)(param_1 + 0x11c);
  uVar4 = extract_field_from_struct_1045fc62(acStack_54,9);
  if (bVar1 == uVar4) {
    *(uint8_t *)(param_1 + 0x11e) = 0;
  }
  else {
    *(uint8_t *)(param_1 + 0x11e) = 1;
    iVar2 = extract_field_from_struct_1045fc62(acStack_54,9);
    *(char *)(param_1 + 0x11c) = (char)iVar2;
  }
  empty_stub_function_103b76f0();
  register_visible_ui_items(param_1,param_2,*(char *)(param_1 + 0x11d) == '\0',(char *)__frv_reg_unset(7));
  empty_noop_stub_103b76f2();
  *(uint8_t *)(param_1 + 0x11d) = 1;
  cls_105a6cfc_delete(acStack_54,2);
  return;
}
