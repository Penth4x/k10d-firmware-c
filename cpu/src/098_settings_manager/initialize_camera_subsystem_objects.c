/* @k10d initialize_camera_subsystem_objects @ 0x104218d4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 098_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a fixed set of 20 subsystem objects into the caller's
 *   structure.
 * summary:
 *   The function acts as a constructor or initializer for a large camera state structure
 *   (param_1). It sequentially allocates memory for 20 distinct classes (sizes ranging from
 *   0x10 to 0x288 bytes), calls their respective constructors, and stores the pointers in
 *   param_1 at offsets 0x4 through 0x4c. It also calls store_value_if_valid with unique
 *   identifiers (0xb8-0xc9) for each object and invokes a virtual method (slot 2) on each,
 *   likely to trigger their internal initialization. Two specific objects are pre-
 *   configured with MMIO addresses 0x40020000 and 0x400f0000 before initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_camera_subsystem_objects(void *param_1)

{
  int iVar1;
  
  iVar1 = heap_alloc((void *)0x14);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a1f0c_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 4) = iVar1;
  store_value_if_valid((void *)iVar1,0xb9);
  iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x14);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a2010_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 8) = iVar1;
  store_value_if_valid((void *)iVar1,0xba);
  iVar1 = *(int *)(*(int *)((int)param_1 + 8) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 8) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a20cc_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0xc) = iVar1;
  store_value_if_valid((void *)iVar1,0xbc);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0xc) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 0xc) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a2260_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x10) = iVar1;
  store_value_if_valid((void *)iVar1,200);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x10) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 0x10) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a22e4_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x14) = iVar1;
  store_value_if_valid((void *)iVar1,0xbf);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 0x14) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a2388_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x18) = iVar1;
  store_value_if_valid((void *)iVar1,0xbb);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x18) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 0x18) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x14);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a2450_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x1c) = iVar1;
  store_value_if_valid((void *)iVar1,0xc0);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x1c) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 0x1c) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a2524_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x20) = iVar1;
  store_value_if_valid((void *)iVar1,0xc9);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x20) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 0x20) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a1e3c_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x24) = iVar1;
  store_value_if_valid((void *)iVar1,0xc2);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x24) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 0x24) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x84);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a2728_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x28) = iVar1;
  store_value_if_valid((void *)iVar1,0xc1);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x28) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 0x28) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a27a8_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x2c) = iVar1;
  store_value_if_valid((void *)iVar1,0xca);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x2c) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x14);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a2820_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x30) = iVar1;
  *(uint32_t *)(iVar1 + 0x10) = 0x40020000;
  store_value_if_valid((void *)*(uint32_t *)((int)param_1 + 0x30),0xc3);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x30) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x14);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a28b4_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x34) = iVar1;
  *(uint32_t *)(iVar1 + 0x10) = 0x40020000;
  store_value_if_valid((void *)*(uint32_t *)((int)param_1 + 0x34),0xc4);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x34) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 0x34) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x14);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a2820_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x38) = iVar1;
  *(uint32_t *)(iVar1 + 0x10) = 0x400f0000;
  store_value_if_valid((void *)*(uint32_t *)((int)param_1 + 0x38),0xc5);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x38) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 0x38) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x14);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a28b4_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x3c) = iVar1;
  *(uint32_t *)(iVar1 + 0x10) = 0x400f0000;
  store_value_if_valid((void *)*(uint32_t *)((int)param_1 + 0x3c),0xc6);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x3c) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 0x3c) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a2928_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x40) = iVar1;
  store_value_if_valid((void *)iVar1,0xbe);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x40) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 0x40) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a29b4_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x44) = iVar1;
  store_value_if_valid((void *)iVar1,199);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x44) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 0x44) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a2a34_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x48) = iVar1;
  store_value_if_valid((void *)iVar1,0xbd);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x48) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 0x48) + (int)*(short *)(iVar1 + 0x10),0);
  iVar1 = heap_alloc((void *)0x288);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_1059be70_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x4c) = iVar1;
  store_value_if_valid((void *)iVar1,0xb8);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x4c) + 4);
  (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 0x4c) + (int)*(short *)(iVar1 + 0x10),0);
  return;
}
