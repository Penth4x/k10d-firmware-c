/* @k10d init_object_with_thirteen_members @ 0x104ae43e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_thirteen_members(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uintptr_t sp;
  int *piVar7;
  uint8_t auStack_30 [4];
  
  piVar7 = (int *)auStack_30;
  uVar5 = heap_alloc_2(0xd);
  *(uint32_t *)(param_1 + 4) = uVar5;
  uVar5 = heap_alloc_2(0x34);
  *(uint32_t *)(param_1 + 8) = uVar5;
  uVar1 = 0;
  do {
    iVar4 = uVar1 * 4;
    uVar1 = uVar1 + 1 & 0xff;
    *(uint32_t *)(*(int *)(param_1 + 8) + iVar4) = 0;
  } while (uVar1 < 0xd);
  iVar4 = cls_105b76e8_new(0);
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar4 + 0x20;
  }
  *piVar7 = iVar2;
  store_value_and_byte(param_1,0,3,iVar4,*piVar7);
  **(int **)(param_1 + 8) = iVar4;
  iVar2 = cls_105b7698_new(0);
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *(int *)(iVar2 + 0x1c) = iVar3;
  *(int *)(param_1 + 0xc) = iVar2;
  iVar2 = cls_105b76c0_new(0);
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *(int *)(iVar2 + 0x1c) = iVar3;
  *(int *)(param_1 + 0x10) = iVar2;
  iVar2 = cls_105b7798_new(0);
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar7 = iVar3;
  store_value_and_byte(param_1,1,0,iVar2,*piVar7);
  *(int *)(*(int *)(param_1 + 8) + 4) = iVar2;
  iVar2 = cls_105b7670_new(0);
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar7 = iVar3;
  store_value_and_byte(param_1,2,0x28,iVar2,*piVar7);
  *(int *)(*(int *)(param_1 + 8) + 8) = iVar2;
  iVar2 = cls_105b77e8_new(0);
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar7 = iVar3;
  store_value_and_byte(param_1,3,0x2a,iVar2,*piVar7);
  *(int *)(*(int *)(param_1 + 8) + 0xc) = iVar2;
  iVar2 = heap_alloc((void *)0x24);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105b7588_new(iVar2);
  }
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar7 = iVar3;
  store_value_and_byte(param_1,4,0x12,iVar2,*piVar7);
  pack_and_write_byte(iVar2,0,0);
  write_byte_to_object_field_104ad87a(iVar2);
  uVar5 = read_field_at_offset_four_104ae400(*(uint32_t *)(*(int *)(param_2 + 4) + 4));
  uVar6 = read_first_byte_104ae3fc(*(uint32_t *)(*(int *)(param_2 + 4) + 4));
  clamp_and_call_helper(iVar2,uVar5,uVar6);
  uVar5 = read_field_at_offset_four_104ae400(*(uint32_t *)(*(int *)(param_2 + 4) + 0xc));
  uVar6 = read_first_byte_104ae3fc(*(uint32_t *)(*(int *)(param_2 + 4) + 0xc));
  clamp_and_call_subroutine(iVar2,uVar5,uVar6);
  format_version_string_104ad8da(iVar2,*(uint16_t *)(param_2 + 2));
  *(int *)(*(int *)(param_1 + 8) + 0x10) = iVar2;
  iVar2 = cls_105b7648_new(0);
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar7 = iVar3;
  store_value_and_byte(param_1,5,0x23,iVar2,*piVar7);
  *(int *)(*(int *)(param_1 + 8) + 0x14) = iVar2;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar7 = iVar3;
  store_value_and_byte(param_1,6,0x25,iVar2,*piVar7);
  *(int *)(*(int *)(param_1 + 8) + 0x18) = iVar2;
  iVar2 = cls_105b75f8_new(0,0);
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar7 = iVar3;
  store_value_and_byte(param_1,7,0x1a,iVar2,*piVar7);
  *(int *)(*(int *)(param_1 + 8) + 0x1c) = iVar2;
  iVar2 = cls_105b75f8_new(0,1);
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar7 = iVar3;
  store_value_and_byte(param_1,8,0x5a,iVar2,*piVar7);
  *(int *)(*(int *)(param_1 + 8) + 0x20) = iVar2;
  iVar2 = cls_105b7620_new(0);
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar7 = iVar3;
  store_value_and_byte(param_1,9,0x1e,iVar2,*piVar7);
  *(int *)(*(int *)(param_1 + 8) + 0x24) = iVar2;
  iVar2 = cls_105b7770_new(0);
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar7 = iVar3;
  store_value_and_byte(param_1,10,0x1b,iVar2,*piVar7);
  *(int *)(*(int *)(param_1 + 8) + 0x28) = iVar2;
  iVar2 = cls_105b77c0_new(0);
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar7 = iVar3;
  store_value_and_byte(param_1,0xb,0x2f,iVar2,*piVar7);
  *(int *)(*(int *)(param_1 + 8) + 0x2c) = iVar2;
  iVar2 = cls_105d8bc8_new(0,2000);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + 0x20;
  }
  *piVar7 = iVar4;
  store_value_and_byte(param_1,0xc,0xf0,iVar2,*piVar7);
  *(int *)(*(int *)(param_1 + 8) + 0x30) = iVar2;
  return;
}
