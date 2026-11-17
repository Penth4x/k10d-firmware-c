/* @k10d destroy_object_members_104eb792 @ 0x104eb792
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Releases all heap, mempool, and virtual sub-object members of a C++ object.
 * summary:
 *   The function systematically tears down an object by calling a helper on fields at 0x14
 *   and 0x18, releasing their associated mempool blocks, and then freeing or destroying the
 *   remaining member pointers. It invokes virtual methods (slot 1) on several sub-objects
 *   with an argument of 3, likely signaling a destruction or close state, before freeing
 *   the remaining heap allocations and calling heap_free_2 on the last two fields.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_object_members_104eb792(int param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  
  pvVar3 = (void *)get_system_heap();
  copy_field_and_clear_offset(*(uint32_t *)(param_1 + 0x14));
  mempool_release_block(pvVar3,*(void **)(*(int *)(param_1 + 0x14) + 8));
  copy_field_and_clear_offset(*(uint32_t *)(param_1 + 0x18));
  mempool_release_block(pvVar3,*(void **)(*(int *)(param_1 + 0x18) + 8));
  if (*(int *)(param_1 + 4) != 0) {
    heap_free(*(int *)(param_1 + 4));
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 8) + 0xc))(*(short *)(*(int *)(iVar1 + 8) + 8) + iVar1,3);
  }
  piVar2 = *(int **)(param_1 + 0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))((int)*(short *)(*piVar2 + 8) + (int)piVar2,3);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    heap_free(*(int *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    heap_free(*(int *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    heap_free(*(int *)(param_1 + 0x30));
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 8) + 0xc))(*(short *)(*(int *)(iVar1 + 8) + 8) + iVar1,3);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x40) + 0xc))(*(short *)(*(int *)(iVar1 + 0x40) + 8) + iVar1,3);
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x40) + 0xc))(*(short *)(*(int *)(iVar1 + 0x40) + 8) + iVar1,3);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    heap_free(*(int *)(param_1 + 0x1c));
  }
  heap_free_2(*(int *)(param_1 + 0x28));
  heap_free_2(*(int *)(param_1 + 0x2c));
  return;
}
