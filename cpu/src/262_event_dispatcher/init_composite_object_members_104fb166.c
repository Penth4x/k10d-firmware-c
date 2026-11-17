/* @k10d init_composite_object_members_104fb166 @ 0x104fb166
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes approximately 30 member objects within a composite structure,
 *   linking them via pointers.
 * summary:
 *   The function acts as a complex initializer for a large object (likely cls_105d436c). It
 *   repeatedly calls heap_alloc to create numerous sub-objects of varying sizes (from 4 to
 *   0x330 bytes), initializes them with specific class constructors (e.g.,
 *   cls_105d4190_new, cls_105d4ce8_new), and stores their pointers into the parent object's
 *   memory layout. It also establishes cross-references between these sub-objects and
 *   copies values from helper functions like get_cls_105a7db4_singleton and
 *   get_or_create_sram_object_104ecffc into specific member fields.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_composite_object_members_104fb166(void *param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)heap_alloc((void *)0x120);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105d4190_new(piVar1);
  }
  *(int **)((int)param_1 + 0x14) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  iVar2 = (int)heap_alloc((void *)8);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d4ce8_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x28) = iVar2;
  iVar3 = get_cls_105a7db4_singleton();
  *(uint32_t *)(iVar2 + 4) = *(uint32_t *)(iVar3 + 8);
  iVar2 = **(int **)((int)param_1 + 0x28);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x28) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  iVar2 = (int)heap_alloc((void *)0x24);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d5104_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x48) = iVar2;
  iVar3 = get_cls_105a7db4_singleton();
  *(uint32_t *)(iVar2 + 0x18) = *(uint32_t *)(iVar3 + 8);
  iVar3 = *(int *)((int)param_1 + 0x48);
  iVar2 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)(iVar3 + 0x14) = *(uint32_t *)(iVar2 + 0x1c);
  iVar2 = **(int **)((int)param_1 + 0x48);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x48) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  piVar1 = (int *)heap_alloc((void *)0x4c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105c2e90_new(piVar1);
  }
  *(int **)((int)param_1 + 0x74) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  piVar1 = (int *)get_or_create_sram_object_104ecffc();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),param_2);
  iVar2 = (int)heap_alloc((void *)0x2c);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105c2e20_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 8) = iVar2;
  *(uint32_t *)(iVar2 + 0xc) = *(uint32_t *)((int)param_1 + 0x14);
  iVar2 = **(int **)((int)param_1 + 8);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 8) + (int)*(short *)(iVar2 + 0x10),0);
  iVar2 = (int)heap_alloc((void *)0x30);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105c3a34_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x10) = iVar2;
  *(uint32_t *)(iVar2 + 0x14) = *(uint32_t *)((int)param_1 + 0x14);
  iVar2 = **(int **)((int)param_1 + 0x10);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x10) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  iVar2 = (int)heap_alloc((void *)0x90);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d48e4_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x1c) = iVar2;
  *(uint32_t *)(iVar2 + 0x18) = *(uint32_t *)((int)param_1 + 0x14);
  iVar2 = **(int **)((int)param_1 + 0x1c);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x1c) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  iVar2 = (int)heap_alloc((void *)0x44);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d4c70_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x24) = iVar2;
  *(uint32_t *)(iVar2 + 0x18) = *(uint32_t *)((int)param_1 + 0x14);
  iVar2 = **(int **)((int)param_1 + 0x24);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x24) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  iVar2 = (int)heap_alloc((void *)0x2c);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d4d10_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x2c) = iVar2;
  *(uint32_t *)(iVar2 + 0x10) = *(uint32_t *)((int)param_1 + 0x14);
  iVar2 = **(int **)((int)param_1 + 0x2c);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x2c) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  iVar2 = (int)heap_alloc((void *)0x44);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d4d68_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x30) = iVar2;
  *(uint32_t *)(iVar2 + 0x10) = *(uint32_t *)((int)param_1 + 0x14);
  iVar2 = **(int **)((int)param_1 + 0x30);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  piVar1 = (int *)heap_alloc((void *)0x1c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105d5370_new(piVar1);
  }
  *(int **)((int)param_1 + 0x58) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  iVar2 = (int)heap_alloc((void *)0xc0);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_1059d9d0_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x70) = iVar2;
  iVar2 = (int)heap_alloc((void *)0xf8);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_1059d1d8_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x6c) = iVar2;
  *(uint32_t *)(iVar2 + 0x24) = *(uint32_t *)((int)param_1 + 0x14);
  *(uint32_t *)(*(int *)((int)param_1 + 0x6c) + 0x30) = *(uint32_t *)((int)param_1 + 0x70);
  *(uint32_t *)(*(int *)((int)param_1 + 0x6c) + 0x28) = *(uint32_t *)((int)param_1 + 0x30);
  *(uint32_t *)(*(int *)((int)param_1 + 0x6c) + 0x38) = *(uint32_t *)((int)param_1 + 0x28);
  *(uint32_t *)(*(int *)((int)param_1 + 0x6c) + 0x3c) = *(uint32_t *)((int)param_1 + 0x48);
  iVar3 = *(int *)((int)param_1 + 0x6c);
  iVar2 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)(iVar3 + 0x34) = *(uint32_t *)(iVar2 + 8);
  *(uint32_t *)(*(int *)((int)param_1 + 0x6c) + 0x40) = *(uint32_t *)((int)param_1 + 0x58);
  iVar2 = **(int **)((int)param_1 + 0x6c);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x6c) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  iVar2 = (int)heap_alloc((void *)0x2c);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d4e80_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x38) = iVar2;
  *(uint32_t *)(iVar2 + 0x10) = *(uint32_t *)((int)param_1 + 0x14);
  iVar2 = **(int **)((int)param_1 + 0x38);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x38) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  iVar2 = (int)heap_alloc((void *)0x50);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d4f74_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x40) = iVar2;
  *(uint32_t *)(iVar2 + 0x1c) = *(uint32_t *)((int)param_1 + 0x14);
  iVar2 = **(int **)((int)param_1 + 0x40);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x40) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  piVar1 = (int *)heap_alloc((void *)4);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105d5398_new(piVar1);
  }
  *(int **)((int)param_1 + 0x5c) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  iVar2 = (int)heap_alloc((void *)0x2c);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d518c_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x60) = iVar2;
  *(uint32_t *)(iVar2 + 0x10) = *(uint32_t *)((int)param_1 + 0x14);
  iVar2 = **(int **)((int)param_1 + 0x60);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x60) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  piVar1 = (int *)heap_alloc((void *)0x60);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105f9a64_new(piVar1);
  }
  *(int **)((int)param_1 + 0x78) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  iVar2 = (int)heap_alloc((void *)0x24);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_1061e0fc_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x7c) = iVar2;
  *(uint32_t *)(iVar2 + 0x20) = *(uint32_t *)((int)param_1 + 0x78);
  iVar2 = **(int **)((int)param_1 + 0x7c);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x7c) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  iVar2 = (int)heap_alloc((void *)0x34);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_1059df50_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 4) = iVar2;
  *(uint32_t *)(iVar2 + 0x24) = *(uint32_t *)((int)param_1 + 8);
  iVar2 = **(int **)((int)param_1 + 4);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 4) + (int)*(short *)(iVar2 + 0x10),0);
  iVar2 = (int)heap_alloc((void *)0x40);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105c39a4_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0xc) = iVar2;
  *(uint32_t *)(iVar2 + 0x24) = *(uint32_t *)((int)param_1 + 0x10);
  iVar3 = *(int *)((int)param_1 + 0xc);
  iVar2 = get_or_create_sram_object_104ecffc();
  *(uint32_t *)(iVar3 + 0x28) = *(uint32_t *)(iVar2 + 4);
  iVar3 = *(int *)((int)param_1 + 0xc);
  iVar2 = get_or_create_sram_object_104ecffc();
  *(uint32_t *)(iVar3 + 0x2c) = *(uint32_t *)(iVar2 + 8);
  *(uint32_t *)(*(int *)((int)param_1 + 0xc) + 0x30) = *(uint32_t *)((int)param_1 + 0x5c);
  iVar2 = **(int **)((int)param_1 + 0xc);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0xc) + (int)*(short *)(iVar2 + 0x10),0);
  iVar2 = (int)heap_alloc((void *)0x34);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d4ed8_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x3c) = iVar2;
  *(uint32_t *)(iVar2 + 0x24) = *(uint32_t *)((int)param_1 + 0x40);
  *(uint32_t *)(*(int *)((int)param_1 + 0x3c) + 0x28) = *(uint32_t *)((int)param_1 + 0x1c);
  iVar2 = **(int **)((int)param_1 + 0x3c);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x3c) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  iVar2 = (int)heap_alloc((void *)0x44);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d49dc_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x20) = iVar2;
  *(uint32_t *)(iVar2 + 0x30) = *(uint32_t *)((int)param_1 + 0x24);
  iVar2 = **(int **)((int)param_1 + 0x20);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x20) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  iVar2 = (int)heap_alloc((void *)0x330);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d51fc_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x4c) = iVar2;
  iVar3 = get_or_create_camera_object();
  *(uint32_t *)(iVar2 + 0x300) = *(uint32_t *)(iVar3 + 0xc);
  iVar3 = *(int *)((int)param_1 + 0x4c);
  iVar2 = get_or_create_camera_object();
  *(uint32_t *)(iVar3 + 0x2fc) = *(uint32_t *)(iVar2 + 4);
  iVar3 = *(int *)((int)param_1 + 0x4c);
  iVar2 = get_or_create_camera_object();
  *(uint32_t *)(iVar3 + 0x304) = *(uint32_t *)(iVar2 + 8);
  iVar2 = **(int **)((int)param_1 + 0x4c);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x4c) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  iVar2 = (int)heap_alloc((void *)0x34);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d47d4_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x18) = iVar2;
  *(uint32_t *)(iVar2 + 0x24) = *(uint32_t *)((int)param_1 + 0x1c);
  *(uint32_t *)(*(int *)((int)param_1 + 0x18) + 0x28) = *(uint32_t *)((int)param_1 + 0x40);
  iVar2 = **(int **)((int)param_1 + 0x18);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x18) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  iVar2 = (int)heap_alloc((void *)0x34);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d4108_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 100) = iVar2;
  *(uint32_t *)(iVar2 + 0x24) = *(uint32_t *)((int)param_1 + 0x40);
  *(uint32_t *)(*(int *)((int)param_1 + 100) + 0x28) = *(uint32_t *)((int)param_1 + 0x60);
  iVar2 = **(int **)((int)param_1 + 100);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 100) + (int)*(short *)(iVar2 + 0x10),0);
  iVar2 = (int)heap_alloc((void *)0x30);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d4e10_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x34) = iVar2;
  *(uint32_t *)(iVar2 + 0x24) = *(uint32_t *)((int)param_1 + 0x38);
  iVar2 = **(int **)((int)param_1 + 0x34);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x34) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  iVar2 = (int)heap_alloc((void *)0x30);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d5094_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x44) = iVar2;
  *(uint32_t *)(iVar2 + 0x24) = *(uint32_t *)((int)param_1 + 0x1c);
  iVar2 = **(int **)((int)param_1 + 0x44);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x44) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  iVar2 = (int)heap_alloc((void *)0x34);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d5300_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x50) = iVar2;
  *(uint32_t *)(iVar2 + 0x24) = *(uint32_t *)((int)param_1 + 0x1c);
  *(uint32_t *)(*(int *)((int)param_1 + 0x50) + 0x28) = *(uint32_t *)((int)param_1 + 0x40);
  iVar2 = **(int **)((int)param_1 + 0x50);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x50) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  iVar2 = (int)heap_alloc((void *)0x30);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d5470_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x54) = iVar2;
  *(uint32_t *)(iVar2 + 0x24) = *(uint32_t *)((int)param_1 + 0x40);
  iVar2 = **(int **)((int)param_1 + 0x54);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x54) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  iVar2 = (int)heap_alloc((void *)0x40);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d3f20_new((void *)iVar2);
  }
  *(int *)((int)param_1 + 0x68) = iVar2;
  *(uint32_t *)(iVar2 + 0x24) = *(uint32_t *)((int)param_1 + 0x1c);
  *(uint32_t *)(*(int *)((int)param_1 + 0x68) + 0x28) = *(uint32_t *)((int)param_1 + 0x40);
  *(uint32_t *)(*(int *)((int)param_1 + 0x68) + 0x2c) = *(uint32_t *)((int)param_1 + 0x60);
  *(uint32_t *)(*(int *)((int)param_1 + 0x68) + 0x30) = *(uint32_t *)((int)param_1 + 0x54);
  *(uint32_t *)(*(int *)((int)param_1 + 0x68) + 0x34) = *(uint32_t *)((int)param_1 + 0x50);
  iVar2 = **(int **)((int)param_1 + 0x68);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0x68) + (int)*(short *)(iVar2 + 0x10),0)
  ;
  return;
}
