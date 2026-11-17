/* @k10d init_cpucom_command_table @ 0x1045de58
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 131_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_cpucom_command_table(void *param_1)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  int iVar3;
  int iVar4;
  
  init_object_with_buffer(param_1);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0xa4),1,0x1f);
  iVar4 = 4;
  iVar3 = 0;
  do {
    cpucom_register_cmd(param_1,(uint)*(byte *)(iVar3 + 0x105a5e06/*ROM*/));
    cpucom_register_cmd(param_1,(uint)*(byte *)(iVar3 + 0x105a5e08/*ROM*/));
    cpucom_register_cmd(param_1,(uint)*(byte *)(iVar3 + 0x105a5e0a/*ROM*/));
    cpucom_register_cmd(param_1,(uint)*(byte *)(iVar3 + 0x105a5e0c/*ROM*/));
    uVar1 = cpucom_register_cmd(param_1,(uint)*(byte *)(iVar3 + 0x105a5e0e/*ROM*/));
    iVar4 = iVar4 + -1;
    iVar3 = iVar3 + 10;
  } while (-1 < iVar4);
  iVar3 = heap_alloc((void *)0x14);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6abc_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x48) = iVar3;
  iVar3 = heap_alloc((void *)0x10);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6b04_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x4c) = iVar3;
  iVar3 = heap_alloc((void *)8);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6b4c_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x50) = iVar3;
  iVar3 = heap_alloc((void *)0x24);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6b94_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x54) = iVar3;
  iVar3 = heap_alloc((void *)0x24);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6bdc_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x58) = iVar3;
  iVar3 = heap_alloc((void *)0x24);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6c24_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x5c) = iVar3;
  iVar3 = heap_alloc((void *)0x24);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6c6c_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x60) = iVar3;
  iVar3 = heap_alloc((void *)8);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6cb4_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 100) = iVar3;
  iVar3 = heap_alloc((void *)0x4c);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6cfc_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x68) = iVar3;
  iVar3 = heap_alloc((void *)0x14);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6d44_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x6c) = iVar3;
  puVar2 = (uint32_t *)heap_alloc((void *)0x1c);
  if (puVar2 == (uint32_t *)0x0) {
    puVar2 = (uint32_t *)0x0;
  }
  else {
    cls_105a6d8c_new(puVar2);
  }
  *(uint32_t **)((int)param_1 + 0x70) = puVar2;
  iVar3 = heap_alloc((void *)0x14);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6dd4_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x74) = iVar3;
  iVar3 = heap_alloc((void *)0x14);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6e1c_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x78) = iVar3;
  iVar3 = heap_alloc((void *)8);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6e64_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x7c) = iVar3;
  iVar3 = heap_alloc((void *)8);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6eac_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x80) = iVar3;
  iVar3 = heap_alloc((void *)0x20);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6ef4_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x84) = iVar3;
  iVar3 = heap_alloc((void *)8);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6f3c_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x88) = iVar3;
  iVar3 = heap_alloc((void *)0xc);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6f84_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x8c) = iVar3;
  iVar3 = heap_alloc((void *)8);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a6fcc_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x90) = iVar3;
  iVar3 = heap_alloc((void *)0xc);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a7014_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x94) = iVar3;
  iVar3 = heap_alloc((void *)0x10);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a705c_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x98) = iVar3;
  iVar3 = heap_alloc((void *)8);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a70a4_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x9c) = iVar3;
  iVar3 = heap_alloc((void *)0xc);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105a70ec_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0xa0) = iVar3;
  return uVar1;
}
