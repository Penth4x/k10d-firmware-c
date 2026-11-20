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
  cls_105b7588 *pcVar6;
  uint32_t uVar7;
  uintptr_t sp;
  int *piVar8;
  uint8_t auStack_30 [4];
  
  piVar8 = (int *)auStack_30;
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
  iVar4 = (uintptr_t)(cls_105b76e8_new((cls_105b76e8 *)0x0));
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar4 + 0x20;
  }
  *piVar8 = iVar2;
  store_value_and_byte(param_1,0,3,iVar4,*piVar8);
  **(int **)(param_1 + 8) = iVar4;
  iVar2 = (uintptr_t)(cls_105b7698_new((cls_105b7698 *)0x0));
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *(int *)(iVar2 + 0x1c) = iVar3;
  *(int *)(param_1 + 0xc) = iVar2;
  iVar2 = (uintptr_t)(cls_105b76c0_new((cls_105b76c0 *)0x0));
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *(int *)(iVar2 + 0x1c) = iVar3;
  *(int *)(param_1 + 0x10) = iVar2;
  iVar2 = (uintptr_t)(cls_105b7798_new((cls_105b7798 *)0x0));
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar8 = iVar3;
  store_value_and_byte(param_1,1,0,iVar2,*piVar8);
  *(int *)(*(int *)(param_1 + 8) + 4) = iVar2;
  iVar2 = (uintptr_t)(cls_105b7670_new((cls_105b7670 *)0x0));
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar8 = iVar3;
  store_value_and_byte(param_1,2,0x28,iVar2,*piVar8);
  *(int *)(*(int *)(param_1 + 8) + 8) = iVar2;
  iVar2 = (uintptr_t)(cls_105b77e8_new((cls_105b77e8 *)0x0));
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar8 = iVar3;
  store_value_and_byte(param_1,3,0x2a,iVar2,*piVar8);
  *(int *)(*(int *)(param_1 + 8) + 0xc) = iVar2;
  pcVar6 = (cls_105b7588 *)heap_alloc((void *)0x24);
  if (pcVar6 == (cls_105b7588 *)0x0) {
    pcVar6 = (cls_105b7588 *)0x0;
  }
  else {
    cls_105b7588_new(pcVar6);
  }
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar4 + 0x20;
  }
  *piVar8 = iVar2;
  store_value_and_byte(param_1,4,0x12,(int)pcVar6,*piVar8);
  pack_and_write_byte((int)(pcVar6),(char)(0),(byte)(0));
  write_byte_to_object_field_104ad87a((int)(pcVar6));
  uVar5 = read_field_at_offset_four_104ae400(*(uint32_t *)(*(int *)(param_2 + 4) + 4));
  uVar7 = read_first_byte_104ae3fc((uint8_t *)(*(uint32_t *)(*(int *)(param_2 + 4) + 4)));
  clamp_and_call_helper((int)(pcVar6),(uint32_t)(uVar5),(int)(uVar7));
  uVar5 = read_field_at_offset_four_104ae400(*(uint32_t *)(*(int *)(param_2 + 4) + 0xc));
  uVar7 = read_first_byte_104ae3fc((uint8_t *)(*(uint32_t *)(*(int *)(param_2 + 4) + 0xc)));
  clamp_and_call_subroutine((int)(pcVar6),(uint32_t)(uVar5),(int)(uVar7));
  format_version_string_104ad8da((int)(pcVar6),(uint)(*(uint16_t *)(param_2 + 2)));
  *(cls_105b7588 **)(*(int *)(param_1 + 8) + 0x10) = pcVar6;
  iVar2 = (uintptr_t)(cls_105b7648_new((cls_105b7648 *)0x0));
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar8 = iVar3;
  store_value_and_byte(param_1,5,0x23,iVar2,*piVar8);
  *(int *)(*(int *)(param_1 + 8) + 0x14) = iVar2;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar8 = iVar3;
  store_value_and_byte(param_1,6,0x25,iVar2,*piVar8);
  *(int *)(*(int *)(param_1 + 8) + 0x18) = iVar2;
  iVar2 = (uintptr_t)(cls_105b75f8_new((cls_105b75f8 *)0x0,0));
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar8 = iVar3;
  store_value_and_byte(param_1,7,0x1a,iVar2,*piVar8);
  *(int *)(*(int *)(param_1 + 8) + 0x1c) = iVar2;
  iVar2 = (uintptr_t)(cls_105b75f8_new((cls_105b75f8 *)0x0,1));
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar8 = iVar3;
  store_value_and_byte(param_1,8,0x5a,iVar2,*piVar8);
  *(int *)(*(int *)(param_1 + 8) + 0x20) = iVar2;
  iVar2 = (uintptr_t)(cls_105b7620_new((cls_105b7620 *)0x0));
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar8 = iVar3;
  store_value_and_byte(param_1,9,0x1e,iVar2,*piVar8);
  *(int *)(*(int *)(param_1 + 8) + 0x24) = iVar2;
  iVar2 = (uintptr_t)(cls_105b7770_new((cls_105b7770 *)0x0));
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar8 = iVar3;
  store_value_and_byte(param_1,10,0x1b,iVar2,*piVar8);
  *(int *)(*(int *)(param_1 + 8) + 0x28) = iVar2;
  iVar2 = (uintptr_t)(cls_105b77c0_new((cls_105b77c0 *)0x0));
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + 0x20;
  }
  *piVar8 = iVar3;
  store_value_and_byte(param_1,0xb,0x2f,iVar2,*piVar8);
  *(int *)(*(int *)(param_1 + 8) + 0x2c) = iVar2;
  iVar2 = (uintptr_t)(cls_105d8bc8_new((cls_105d8bc8 *)0x0,(uint32_t *)0x7d0));
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + 0x20;
  }
  *piVar8 = iVar4;
  store_value_and_byte(param_1,0xc,0xf0,iVar2,*piVar8);
  *(int *)(*(int *)(param_1 + 8) + 0x30) = iVar2;
  return;
}
