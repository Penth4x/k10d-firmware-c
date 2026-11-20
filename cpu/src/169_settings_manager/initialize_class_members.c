/* @k10d initialize_class_members @ 0x1047d8c2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes object members by invoking virtual slot 2 on five singleton objects and
 *   setting up internal pointers.
 * summary:
 *   The function retrieves five objects via accessor functions
 *   (get_or_create_sram_object_1047dd7a, get_or_create_sram_object_10478100,
 *   get_or_create_singleton_object_1047a73e, get_or_create_singleton_object_1047c910,
 *   get_or_create_singleton_object_1047d00a) and calls their virtual method at offset 0x14
 *   (slot 2) with argument 0. It then allocates a new object of class cls_105aac00, stores
 *   it at offset 4 of the this pointer, and copies data from the singletons returned by
 *   get_or_create_singleton_object_1047c910 and get_or_create_singleton_object_1047d00a
 *   into the new object's fields. The specific subsystem is not identifiable from the
 *   provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_class_members(cls_105aadb0 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)get_or_create_sram_object_1047dd7a();
  (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  piVar1 = (int *)get_or_create_sram_object_10478100();
  (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_1047a73e();
  (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_1047c910();
  (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_1047d00a();
  (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  iVar2 = get_or_create_singleton_object_1047d00a();
  param_1->field_0x8 = (uintptr_t)(*(void **)(iVar2 + 4));
  piVar1 = (int *)cls_105aac00_new((cls_105aac00 *)0x0);
  param_1->field_0x4 = (uintptr_t)((void *)piVar1);
  iVar2 = get_or_create_singleton_object_1047c910();
  piVar1[2] = *(int *)(iVar2 + 4);
  iVar2 = get_or_create_singleton_object_1047d00a();
  if (*(int *)(iVar2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 4) + 4;
  }
  piVar1[3] = iVar2;
  (((vtbl_entry*)(*piVar1))[2].fn)((void *)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1),0);
  return;
}
