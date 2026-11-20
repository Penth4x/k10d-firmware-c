/* @k10d app_screen_factory_by_mode @ 0x104e725e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed lazy_create_screen_by_mode)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves or lazily creates a screen object for a given mode index, caching it in the
 *   manager struct.
 * summary:
 *   The function checks a pointer array at param_1+4 indexed by param_2. If the slot is
 *   empty, it dispatches to one of four factory functions based on the mode (0-3) to create
 *   a new object. It then initializes the object, stores the pointer in the cache, and
 *   optionally calls an activation routine if param_3 is non-zero. It uses lock/unlock
 *   primitives (call_kernel_with_short_id/88) around the operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void * app_screen_factory_by_mode(int param_1,int param_2,int param_3)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  void *pvVar4;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x2c));
  pvVar1 = *(void **)(param_1 + 4 + param_2 * 4);
  if (pvVar1 == 0) {
    if (*(char *)(param_1 + 0x3d) == '\0') {
      *(uint8_t *)(param_1 + 0x3d) = 1;
      uVar2 = get_or_create_singleton_104ce316();
      invoke_three_virtual_methods((uint32_t)(param_1),(int *)(uVar2));
      uVar2 = get_or_create_singleton_object_104b43d6();
      invoke_three_virtual_methods((uint32_t)(param_1),(int *)(uVar2));
    }
    if (param_2 == 2) {
      iVar3 = get_or_create_singleton_104e7b68();
    }
    else if (param_2 == 0) {
      iVar3 = get_or_create_singleton_object_103b9478();
    }
    else if (param_2 == 1) {
      iVar3 = get_or_create_singleton_object_10390eea();
    }
    else {
      if (param_2 != 3) {
        pvVar1 = (void *)0x0;
        goto LAB_104e7336;
      }
      iVar3 = menumgr_singleton_get();
    }
    invoke_three_virtual_methods((uint32_t)(param_1),(int *)(iVar3));
    pvVar1 = *(void **)(iVar3 + 4);
    if (pvVar1 != 0) {
      if (*(int *)(param_1 + 0x28) == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = (void *)(*(int *)(param_1 + 0x28) + 4);
      }
      set_pointer_if_null(pvVar1,pvVar4);
      *(void **)(param_1 + 4 + param_2 * 4) = pvVar1;
      if (param_3 != 0) {
        release_up_to_nine_pointers(param_1,0,pvVar1);
      }
    }
  }
LAB_104e7336:
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x2c));
  return pvVar1;
}
