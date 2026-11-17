/* @k10d free_struct_member_pointers @ 0x104b0e12
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over a struct's pointer fields, calls a release helper on each, then nulls the
 *   field.
 * summary:
 *   The function walks through a fixed set of pointer fields in the object pointed to by
 *   param_1 (indices 7, 5, 6, 4, 3, 2, 1, 0). For each field, it calls
 *   destroy_object_members_10520720 with the pointer value and argument 3, then sets the
 *   field to 0. For the first five fields, it also calls heap_free_2 on the pointer before
 *   nulling it. This pattern is consistent with a destructor or cleanup routine that
 *   releases resources held by the object's members.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_struct_member_pointers(uint32_t *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 4;
  do {
    iVar2 = (uVar1 - 1) * 4;
    destroy_object_members_10520720((void *)(*(uint32_t *)(param_1[7] + iVar2)),3);
    uVar1 = uVar1 - 1 & 0xff;
    *(uint32_t *)(param_1[7] + iVar2) = 0;
  } while (uVar1 != 0);
  heap_free_2(param_1[7]);
  param_1[7] = 0;
  uVar1 = 4;
  do {
    iVar2 = (uVar1 - 1) * 4;
    destroy_object_members_10520720((void *)(*(uint32_t *)(param_1[5] + iVar2)),3);
    uVar1 = uVar1 - 1 & 0xff;
    *(uint32_t *)(param_1[5] + iVar2) = 0;
  } while (uVar1 != 0);
  heap_free_2(param_1[5]);
  param_1[5] = 0;
  uVar1 = 4;
  do {
    iVar2 = (uVar1 - 1) * 4;
    destroy_object_members_10520720((void *)(*(uint32_t *)(param_1[6] + iVar2)),3);
    uVar1 = uVar1 - 1 & 0xff;
    *(uint32_t *)(param_1[6] + iVar2) = 0;
  } while (uVar1 != 0);
  heap_free_2(param_1[6]);
  param_1[6] = 0;
  uVar1 = 4;
  do {
    iVar2 = (uVar1 - 1) * 4;
    destroy_object_members_10520720((void *)(*(uint32_t *)(param_1[4] + iVar2)),3);
    uVar1 = uVar1 - 1 & 0xff;
    *(uint32_t *)(param_1[4] + iVar2) = 0;
  } while (uVar1 != 0);
  heap_free_2(param_1[4]);
  param_1[4] = 0;
  uVar1 = 2;
  do {
    iVar2 = (uVar1 - 1) * 4;
    destroy_object_members_10520720((void *)(*(uint32_t *)(param_1[3] + iVar2)),3);
    uVar1 = uVar1 - 1 & 0xff;
    *(uint32_t *)(param_1[3] + iVar2) = 0;
  } while (uVar1 != 0);
  heap_free_2(param_1[3]);
  param_1[3] = 0;
  destroy_object_members_10520720((void *)(param_1[2]),3);
  param_1[2] = 0;
  destroy_object_members_10520720((void *)(param_1[1]),3);
  param_1[1] = 0;
  destroy_object_members_10520720((void *)(*param_1),3);
  *param_1 = 0;
  return;
}
