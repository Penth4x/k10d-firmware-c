/* @k10d init_twelve_subobjects @ 0x1039d936
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 041_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_twelve_subobjects(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = get_or_create_singleton_object_104fb12e();
  *(uint32_t *)((int)param_1 + 0xbc) = *(uint32_t *)(iVar2 + 0x74);
  iVar2 = heap_alloc((void *)0x40);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_10564e90_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x60) = iVar2;
  iVar1 = (int)param_1 + 0xa0;
  *(uint32_t *)(iVar2 + 0x38) = *(uint32_t *)((int)param_1 + 0x9c);
  *(int *)(iVar2 + 0x3c) = iVar1;
  *(uint32_t *)(*(int *)((int)param_1 + 0x60) + 0x28) = *(uint32_t *)((int)param_1 + 0xbc);
  iVar3 = (int)param_1 + 0x1c;
  *(int *)(*(int *)((int)param_1 + 0x60) + 0x2c) = iVar3;
  iVar2 = **(int **)((int)param_1 + 0x60);
  (**(code **)(iVar2 + 0x4c))((int)*(int **)((int)param_1 + 0x60) + (int)*(short *)(iVar2 + 0x48));
  iVar2 = heap_alloc((void *)0x44);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_10565468_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x68) = iVar2;
  *(uint32_t *)(iVar2 + 0x38) = *(uint32_t *)((int)param_1 + 0x9c);
  *(int *)(iVar2 + 0x3c) = iVar1;
  *(uint32_t *)(*(int *)((int)param_1 + 0x68) + 0x28) = *(uint32_t *)((int)param_1 + 0xbc);
  *(int *)(*(int *)((int)param_1 + 0x68) + 0x2c) = iVar3;
  iVar2 = **(int **)((int)param_1 + 0x68);
  (**(code **)(iVar2 + 0x4c))((int)*(int **)((int)param_1 + 0x68) + (int)*(short *)(iVar2 + 0x48));
  iVar2 = heap_alloc((void *)0x48);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_1056482c_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x70) = iVar2;
  *(uint32_t *)(iVar2 + 0x38) = *(uint32_t *)((int)param_1 + 0x9c);
  *(int *)(iVar2 + 0x3c) = iVar1;
  *(uint32_t *)(*(int *)((int)param_1 + 0x70) + 0x28) = *(uint32_t *)((int)param_1 + 0xbc);
  *(int *)(*(int *)((int)param_1 + 0x70) + 0x2c) = iVar3;
  iVar2 = **(int **)((int)param_1 + 0x70);
  (**(code **)(iVar2 + 0x4c))((int)*(int **)((int)param_1 + 0x70) + (int)*(short *)(iVar2 + 0x48));
  iVar2 = heap_alloc((void *)0x6c);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_10566478_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x7c) = iVar2;
  *(uint32_t *)(iVar2 + 0x38) = *(uint32_t *)((int)param_1 + 0x9c);
  *(int *)(iVar2 + 0x3c) = iVar1;
  *(uint32_t *)(*(int *)((int)param_1 + 0x7c) + 0x28) = *(uint32_t *)((int)param_1 + 0xbc);
  *(int *)(*(int *)((int)param_1 + 0x7c) + 0x2c) = iVar3;
  iVar2 = **(int **)((int)param_1 + 0x7c);
  (**(code **)(iVar2 + 0x4c))((int)*(int **)((int)param_1 + 0x7c) + (int)*(short *)(iVar2 + 0x48));
  iVar2 = heap_alloc((void *)0xa0);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_10564530_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x88) = iVar2;
  *(uint32_t *)(iVar2 + 0x38) = *(uint32_t *)((int)param_1 + 0x9c);
  *(int *)(iVar2 + 0x3c) = iVar1;
  *(uint32_t *)(*(int *)((int)param_1 + 0x88) + 0x28) = *(uint32_t *)((int)param_1 + 0xbc);
  *(int *)(*(int *)((int)param_1 + 0x88) + 0x2c) = iVar3;
  iVar2 = **(int **)((int)param_1 + 0x88);
  (**(code **)(iVar2 + 0x4c))((int)*(int **)((int)param_1 + 0x88) + (int)*(short *)(iVar2 + 0x48));
  iVar2 = heap_alloc((void *)0x11c);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105649cc_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x6c) = iVar2;
  *(uint32_t *)(iVar2 + 0x38) = *(uint32_t *)((int)param_1 + 0x9c);
  *(int *)(iVar2 + 0x3c) = iVar1;
  *(uint32_t *)(*(int *)((int)param_1 + 0x6c) + 0x28) = *(uint32_t *)((int)param_1 + 0xbc);
  *(int *)(*(int *)((int)param_1 + 0x6c) + 0x2c) = iVar3;
  iVar2 = **(int **)((int)param_1 + 0x6c);
  (**(code **)(iVar2 + 0x4c))((int)*(int **)((int)param_1 + 0x6c) + (int)*(short *)(iVar2 + 0x48));
  iVar2 = heap_alloc((void *)0x60);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_10566724_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x74) = iVar2;
  iVar1 = (int)param_1 + 0xa0;
  *(uint32_t *)(iVar2 + 0x38) = *(uint32_t *)((int)param_1 + 0x9c);
  *(int *)(iVar2 + 0x3c) = iVar1;
  *(uint32_t *)(*(int *)((int)param_1 + 0x74) + 0x28) = *(uint32_t *)((int)param_1 + 0xbc);
  iVar2 = (int)param_1 + 0x1c;
  *(int *)(*(int *)((int)param_1 + 0x74) + 0x2c) = iVar2;
  iVar3 = **(int **)((int)param_1 + 0x74);
  (**(code **)(iVar3 + 0x4c))((int)*(int **)((int)param_1 + 0x74) + (int)*(short *)(iVar3 + 0x48));
  iVar3 = heap_alloc((void *)0x13c);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_10565040_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 100) = iVar3;
  *(uint32_t *)(iVar3 + 0x38) = *(uint32_t *)((int)param_1 + 0x9c);
  *(int *)(iVar3 + 0x3c) = iVar1;
  *(uint32_t *)(*(int *)((int)param_1 + 100) + 0x28) = *(uint32_t *)((int)param_1 + 0xbc);
  *(int *)(*(int *)((int)param_1 + 100) + 0x2c) = iVar2;
  iVar3 = **(int **)((int)param_1 + 100);
  (**(code **)(iVar3 + 0x4c))((int)*(int **)((int)param_1 + 100) + (int)*(short *)(iVar3 + 0x48));
  iVar3 = heap_alloc((void *)0x68);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_10564c80_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x78) = iVar3;
  *(uint32_t *)(iVar3 + 0x38) = *(uint32_t *)((int)param_1 + 0x9c);
  *(int *)(iVar3 + 0x3c) = iVar1;
  *(uint32_t *)(*(int *)((int)param_1 + 0x78) + 0x28) = *(uint32_t *)((int)param_1 + 0xbc);
  *(int *)(*(int *)((int)param_1 + 0x78) + 0x2c) = iVar2;
  iVar3 = **(int **)((int)param_1 + 0x78);
  (**(code **)(iVar3 + 0x4c))((int)*(int **)((int)param_1 + 0x78) + (int)*(short *)(iVar3 + 0x48));
  iVar3 = heap_alloc((void *)0xc0);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105992d4_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x90) = iVar3;
  *(uint32_t *)(iVar3 + 0x38) = *(uint32_t *)((int)param_1 + 0x9c);
  *(int *)(iVar3 + 0x3c) = iVar1;
  *(uint32_t *)(*(int *)((int)param_1 + 0x90) + 0x28) = *(uint32_t *)((int)param_1 + 0xbc);
  *(int *)(*(int *)((int)param_1 + 0x90) + 0x2c) = iVar2;
  iVar3 = **(int **)((int)param_1 + 0x90);
  (**(code **)(iVar3 + 0x4c))((int)*(int **)((int)param_1 + 0x90) + (int)*(short *)(iVar3 + 0x48));
  iVar3 = heap_alloc((void *)0x58);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_10565d08_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x80) = iVar3;
  *(uint32_t *)(iVar3 + 0x38) = *(uint32_t *)((int)param_1 + 0x9c);
  *(int *)(iVar3 + 0x3c) = iVar1;
  *(uint32_t *)(*(int *)((int)param_1 + 0x80) + 0x28) = *(uint32_t *)((int)param_1 + 0xbc);
  *(int *)(*(int *)((int)param_1 + 0x80) + 0x2c) = iVar2;
  iVar3 = **(int **)((int)param_1 + 0x80);
  (**(code **)(iVar3 + 0x4c))((int)*(int **)((int)param_1 + 0x80) + (int)*(short *)(iVar3 + 0x48));
  iVar3 = heap_alloc((void *)0x50);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_10565770_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 0x84) = iVar3;
  *(uint32_t *)(iVar3 + 0x38) = *(uint32_t *)((int)param_1 + 0x9c);
  *(int *)(iVar3 + 0x3c) = iVar1;
  *(uint32_t *)(*(int *)((int)param_1 + 0x84) + 0x28) = *(uint32_t *)((int)param_1 + 0xbc);
  *(int *)(*(int *)((int)param_1 + 0x84) + 0x2c) = iVar2;
  iVar2 = **(int **)((int)param_1 + 0x84);
  (**(code **)(iVar2 + 0x4c))((int)*(int **)((int)param_1 + 0x84) + (int)*(short *)(iVar2 + 0x48));
  iVar2 = heap_alloc((void *)0x48);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_1056ac8c_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x8c) = iVar2;
  *(uint32_t *)(iVar2 + 0x38) = *(uint32_t *)((int)param_1 + 0x9c);
  *(int *)(iVar2 + 0x3c) = (int)param_1 + 0xa0;
  *(uint32_t *)(*(int *)((int)param_1 + 0x8c) + 0x28) = *(uint32_t *)((int)param_1 + 0xbc);
  *(int *)(*(int *)((int)param_1 + 0x8c) + 0x2c) = (int)param_1 + 0x1c;
  iVar2 = **(int **)((int)param_1 + 0x8c);
  (**(code **)(iVar2 + 0x4c))((int)*(int **)((int)param_1 + 0x8c) + (int)*(short *)(iVar2 + 0x48));
  iVar2 = heap_alloc((void *)0x638);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    init_large_struct_with_subobjects((void *)iVar2,__frv_reg_unset(5),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  }
  *(int *)((int)param_1 + 0x94) = iVar2;
  *(uint32_t *)(iVar2 + 0x38) = *(uint32_t *)((int)param_1 + 0x9c);
  *(int *)(iVar2 + 0x3c) = (int)param_1 + 0xa0;
  *(uint32_t *)(*(int *)((int)param_1 + 0x94) + 0x28) = *(uint32_t *)((int)param_1 + 0xbc);
  *(int *)(*(int *)((int)param_1 + 0x94) + 0x2c) = (int)param_1 + 0x1c;
  iVar2 = **(int **)((int)param_1 + 0x94);
  (**(code **)(iVar2 + 0x4c))((int)*(int **)((int)param_1 + 0x94) + (int)*(short *)(iVar2 + 0x48));
  return 1;
}
