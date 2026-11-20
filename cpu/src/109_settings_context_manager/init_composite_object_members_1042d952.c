/* @k10d init_composite_object_members_1042d952 @ 0x1042d952
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 109_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes 12 sub-objects within a composite structure and registers
 *   them with a central manager.
 * summary:
 *   The function allocates 12 distinct heap objects of varying sizes (0x10 to 0x7c bytes),
 *   initializes each via specific constructors, and stores their pointers in the parameter
 *   structure at offsets 0x04 through 0x34. It then calls a common registration function
 *   (0x1046c236) for each object with unique ID pairs, and finally links several sub-object
 *   pointers into the largest object (0x7c bytes) before initializing it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_composite_object_members_1042d952(int param_1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  
  iVar1 = get_or_create_singleton_object_1046c502();
  uVar4 = *(uint32_t *)(iVar1 + 4);
  iVar1 = heap_alloc((void *)0x18);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_1059e680_new((uint32_t *)(iVar1));
  }
  *(int *)(param_1 + 8) = iVar1;
  initialize_object_from_globals(iVar1,0);
  (*(code *)0x1046c236/*ROM*/)(uVar4,0x23,*(uint32_t *)(param_1 + 8));
  iVar1 = heap_alloc((void *)0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105b5524_new((uint32_t *)(iVar1));
  }
  *(int *)(param_1 + 0xc) = iVar1;
  copy_two_fields_from_global(iVar1,0);
  (*(code *)0x1046c236/*ROM*/)(uVar4,0x1d,*(uint32_t *)(param_1 + 0xc));
  iVar1 = heap_alloc((void *)0x34);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_1059e9b4_new((uint32_t *)(iVar1));
  }
  *(int *)(param_1 + 0x10) = iVar1;
  populate_struct_from_three_sources(iVar1,0);
  (*(code *)0x1046c236/*ROM*/)(uVar4,0x10,*(uint32_t *)(param_1 + 0x10));
  (*(code *)0x1046c236/*ROM*/)(uVar4,0x11,*(uint32_t *)(param_1 + 0x10));
  iVar1 = heap_alloc((void *)0x14);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_1059e728_new((uint32_t *)(iVar1));
  }
  *(int *)(param_1 + 0x14) = iVar1;
  copy_three_fields_from_source_1042a8ba(iVar1,0);
  (*(code *)0x1046c236/*ROM*/)(uVar4,0x16,*(uint32_t *)(param_1 + 0x14));
  (*(code *)0x1046c236/*ROM*/)(uVar4,0x17,*(uint32_t *)(param_1 + 0x14));
  iVar1 = heap_alloc((void *)0x14);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_1059e7c8_new((uint32_t *)(iVar1));
  }
  *(int *)(param_1 + 0x18) = iVar1;
  copy_three_fields_from_source_1042b4aa(iVar1,0);
  (*(code *)0x1046c236/*ROM*/)(uVar4,0x14,*(uint32_t *)(param_1 + 0x18));
  (*(code *)0x1046c236/*ROM*/)(uVar4,0x15,*(uint32_t *)(param_1 + 0x18));
  iVar1 = heap_alloc((void *)0x20);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_1059e5b8_new((uint32_t *)(iVar1));
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  copy_state_fields_from_source(iVar1,0);
  (*(code *)0x1046c236/*ROM*/)(uVar4,0x1a,*(uint32_t *)(param_1 + 0x1c));
  (*(code *)0x1046c236/*ROM*/)(uVar4,0x1b,*(uint32_t *)(param_1 + 0x1c));
  iVar1 = heap_alloc((void *)0x14);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_1059ed0c_new((uint32_t *)(iVar1));
  }
  *(int *)(param_1 + 0x20) = iVar1;
  copy_three_fields_from_struct(iVar1,0);
  (*(code *)0x1046c236/*ROM*/)(uVar4,0x13,*(uint32_t *)(param_1 + 0x20));
  iVar1 = heap_alloc((void *)0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_1059ed94_new((uint32_t *)(iVar1));
  }
  *(int *)(param_1 + 0x24) = iVar1;
  iVar2 = get_or_create_camera_object();
  *(uint32_t *)(iVar1 + 8) = *(uint32_t *)(iVar2 + 0x10);
  copy_word_from_global_1042e68a(*(uint32_t *)(param_1 + 0x24),0);
  (*(code *)0x1046c236/*ROM*/)(uVar4,4,*(uint32_t *)(param_1 + 0x24));
  (*(code *)0x1046c236/*ROM*/)(uVar4,5,*(uint32_t *)(param_1 + 0x24));
  iVar1 = heap_alloc((void *)0x38);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_1059ec78_new((uint32_t *)(iVar1));
  }
  *(int *)(param_1 + 0x28) = iVar1;
  initialize_object_fields_1042e1f4(iVar1,0);
  (*(code *)0x1046c236/*ROM*/)(uVar4,9,*(uint32_t *)(param_1 + 0x28));
  iVar1 = heap_alloc((void *)0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105bb69c_new((uint32_t *)(iVar1));
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  iVar2 = get_or_create_singleton_104e7b68();
  if (*(int *)(iVar2 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 8) + 0xc;
  }
  *(int *)(iVar1 + 8) = iVar2;
  copy_word_from_global_104df702(*(uint32_t *)(param_1 + 0x2c),0);
  (*(code *)0x1046c236/*ROM*/)(uVar4,2,*(uint32_t *)(param_1 + 0x2c));
  (*(code *)0x1046c236/*ROM*/)(uVar4,3,*(uint32_t *)(param_1 + 0x2c));
  iVar1 = heap_alloc((void *)0x18);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105b9e6c_new((uint32_t *)(iVar1));
  }
  *(int *)(param_1 + 0x30) = iVar1;
  populate_struct_from_three_getters(iVar1,0);
  (*(code *)0x1046c236/*ROM*/)(uVar4,0x18,*(uint32_t *)(param_1 + 0x30));
  (*(code *)0x1046c236/*ROM*/)(uVar4,0x19,*(uint32_t *)(param_1 + 0x30));
  iVar1 = heap_alloc((void *)0x20);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105b9bd0_new((uint32_t *)(iVar1));
  }
  *(int *)(param_1 + 0x34) = iVar1;
  initialize_status_struct(iVar1,0);
  (*(code *)0x1046c236/*ROM*/)(uVar4,0x20,*(uint32_t *)(param_1 + 0x34));
  (*(code *)0x1046c236/*ROM*/)(uVar4,0x21,*(uint32_t *)(param_1 + 0x34));
  iVar1 = heap_alloc((void *)0x7c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_1059eec4_new((uint32_t *)(iVar1));
  }
  *(int *)(param_1 + 4) = iVar1;
  *(uint32_t *)(iVar1 + 0x4c) = *(uint32_t *)(param_1 + 0x14);
  *(uint32_t *)(*(int *)(param_1 + 4) + 0x50) = *(uint32_t *)(param_1 + 0x18);
  *(uint32_t *)(*(int *)(param_1 + 4) + 0x54) = *(uint32_t *)(param_1 + 0x1c);
  *(uint32_t *)(*(int *)(param_1 + 4) + 0x5c) = *(uint32_t *)(param_1 + 0x10);
  *(uint32_t *)(*(int *)(param_1 + 4) + 0x58) = *(uint32_t *)(param_1 + 0x30);
  uVar3 = copy_state_from_source(*(uint32_t *)(param_1 + 4),0);
  (*(code *)0x1046c236/*ROM*/)(uVar4,0,*(uint32_t *)(param_1 + 4));
  (*(code *)0x1046c236/*ROM*/)(uVar4,1,*(uint32_t *)(param_1 + 4));
  return uVar3;
}
