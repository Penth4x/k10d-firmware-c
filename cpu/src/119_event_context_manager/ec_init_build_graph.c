/* @k10d ec_init_build_graph @ 0x104331b2
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed init_app_mode_object_graph)
 * unit: 119_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an application mode object by allocating and linking a hierarchy of UI,
 *   input, and controller sub-objects.
 * summary:
 *   Allocates a 0xa8-byte object and stores it at param_1+4. Creates multiple instances of
 *   cls_1059ef7c and cls_1059ef8c (likely UI elements or state holders) and stores them in
 *   the object's fields. Registers an input sink with the screen manager and links the
 *   object to a screen manager instance. Allocates and initializes several larger objects
 *   (cls_105c1344, cls_1059efac, cls_105b55d4, cls_105b979c, cls_1059f3b4) and wires them
 *   together via virtual calls and pointer assignments, establishing the object graph for a
 *   specific camera mode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void ec_init_build_graph(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  
  iVar1 = heap_alloc((void *)0xa8);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_1059f088_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 4) = iVar1;
  iVar1 = get_or_create_singleton_104e7b68();
  pvVar6 = *(void **)(iVar1 + 4);
  if (*(int *)((int)param_1 + 4) == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = (void *)(*(int *)((int)param_1 + 4) + 4);
  }
  set_pointer_if_null(pvVar6,pvVar4);
  uVar2 = (uint32_t)cls_1059ef7c_new(0,2,(int)pvVar6);
  *(uint32_t *)((int)param_1 + 0x10) = uVar2;
  uVar2 = (uint32_t)cls_1059ef7c_new(0,0,0);
  *(uint32_t *)((int)param_1 + 8) = uVar2;
  uVar2 = (uint32_t)cls_1059ef7c_new(0,1,0);
  *(uint32_t *)((int)param_1 + 0xc) = uVar2;
  uVar2 = (uint32_t)cls_1059ef7c_new(0,3,0);
  *(uint32_t *)((int)param_1 + 0x14) = uVar2;
  uVar2 = (uint32_t)cls_1059ef7c_new(0,4,0);
  *(uint32_t *)((int)param_1 + 0x18) = uVar2;
  iVar1 = cls_1059ef8c_new((uint32_t *)0x0,2,0);
  *(int *)((int)param_1 + 0x24) = iVar1;
  iVar1 = cls_1059ef8c_new((uint32_t *)0x0,0,0);
  *(int *)((int)param_1 + 0x1c) = iVar1;
  iVar1 = cls_1059ef8c_new((uint32_t *)0x0,1,0);
  *(int *)((int)param_1 + 0x20) = iVar1;
  iVar1 = cls_1059ef8c_new((uint32_t *)0x0,3,0);
  *(int *)((int)param_1 + 0x28) = iVar1;
  iVar1 = get_or_create_singleton_object_1046be62();
  if (*(int *)((int)param_1 + 4) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)param_1 + 4) + 0x1c;
  }
  screen_mgr_add_input_sink(*(void **)(iVar1 + 4),iVar5);
  iVar1 = get_cls_105a7db4_singleton();
  if (*(int *)((int)param_1 + 4) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)param_1 + 4) + 4;
  }
  *(int *)(*(int *)(iVar1 + 4) + 0x134) = iVar5;
  iVar1 = heap_alloc((void *)0x40);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105c1344_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x3c) = iVar1;
  *(uint32_t *)(iVar1 + 0x28) = *(uint32_t *)((int)param_1 + 4);
  iVar1 = **(int **)((int)param_1 + 0x3c);
  (**(code **)(iVar1 + 0x14))((int)*(int **)((int)param_1 + 0x3c) + (int)*(short *)(iVar1 + 0x10),0)
  ;
  iVar1 = heap_alloc((void *)0xd0);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_1059efac_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x2c) = iVar1;
  *(uint32_t *)(iVar1 + 0xcc) = *(uint32_t *)((int)param_1 + 0x3c);
  iVar1 = **(int **)((int)param_1 + 0x2c);
  (**(code **)(iVar1 + 0x14))((int)*(int **)((int)param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x10),0)
  ;
  link_first_entry_in_list(*(void **)((int)param_1 + 0x2c),*(int **)((int)param_1 + 8));
  link_first_entry_in_list(*(void **)((int)param_1 + 0x2c),*(int **)((int)param_1 + 0xc));
  link_first_entry_in_list(*(void **)((int)param_1 + 0x2c),*(int **)((int)param_1 + 0x10));
  link_first_entry_in_list(*(void **)((int)param_1 + 0x2c),*(int **)((int)param_1 + 0x14));
  link_first_entry_in_list(*(void **)((int)param_1 + 0x2c),*(int **)((int)param_1 + 0x18));
  register_first_entry_in_slot(*(void **)((int)param_1 + 0x2c),*(int **)((int)param_1 + 0x1c));
  register_first_entry_in_slot(*(void **)((int)param_1 + 0x2c),*(int **)((int)param_1 + 0x20));
  register_first_entry_in_slot(*(void **)((int)param_1 + 0x2c),*(int **)((int)param_1 + 0x24));
  register_first_entry_in_slot(*(void **)((int)param_1 + 0x2c),*(int **)((int)param_1 + 0x28));
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x38) = *(uint32_t *)((int)param_1 + 0x2c);
  iVar1 = get_or_init_singleton_104aa272();
  pvVar6 = *(void **)(iVar1 + 4);
  if (*(int *)((int)param_1 + 4) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)param_1 + 4) + 4;
  }
  write_field_at_offset_104a9fbe(pvVar6,0,iVar5);
  if (*(int *)((int)param_1 + 4) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)param_1 + 4) + 4;
  }
  write_field_at_offset_104a9fbe(pvVar6,1,iVar5);
  if (*(int *)((int)param_1 + 4) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)param_1 + 4) + 4;
  }
  write_field_at_offset_104a9fbe(pvVar6,3,iVar5);
  *(void **)(*(int *)((int)param_1 + 4) + 0x34) = pvVar6;
  if (*(int *)((int)param_1 + 4) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)param_1 + 4) + 4;
  }
  set_field_at_offset_0x14_104aa6e2(*(void **)(iVar1 + 8),iVar5);
  uVar2 = (uint32_t)cls_105b55d4_new(0,1);
  *(uint32_t *)((int)param_1 + 0x34) = uVar2;
  piVar3 = (int *)heap_alloc((void *)0x40);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    cls_105b979c_new(piVar3);
  }
  *(int **)((int)param_1 + 0x38) = piVar3;
  (**(code **)(*piVar3 + 0x14))((int)*(short *)(*piVar3 + 0x10) + (int)piVar3,0);
  iVar1 = heap_alloc((void *)100);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_1059f3b4_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 0x30) = iVar1;
  *(uint32_t *)(iVar1 + 0x5c) = *(uint32_t *)((int)param_1 + 0x34);
  *(uint32_t *)(*(int *)((int)param_1 + 0x30) + 0x60) = *(uint32_t *)((int)param_1 + 0x38);
  iVar1 = **(int **)((int)param_1 + 0x30);
  (**(code **)(iVar1 + 0x14))((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x10),0)
  ;
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x30) = *(uint32_t *)((int)param_1 + 0x30);
  iVar1 = **(int **)((int)param_1 + 4);
  (**(code **)(iVar1 + 0x14))((int)*(int **)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x10),0);
  return;
}
