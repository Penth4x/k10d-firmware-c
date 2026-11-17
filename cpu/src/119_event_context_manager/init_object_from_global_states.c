/* @k10d init_object_from_global_states @ 0x10433ae2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 119_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Populates a 0x64-byte object structure by copying fields from three global state
 *   pointers and initializing two sub-structures.
 * summary:
 *   The function retrieves pointers from three global accessor functions
 *   (initialize_singleton_object_1045d6a0, get_or_create_singleton_object_10485138,
 *   get_or_create_singleton_object_104bb22a) and copies specific 32-bit fields into the
 *   object at param_1. It also calls find_free_slot_in_array with a pointer field and an
 *   offset, and initializes sub-objects at offsets 0x38 and 0x48 using wait_flg_obj and
 *   forward_three_args_to_helper_10459d64. The return value is passed through from
 *   find_free_slot_in_array.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_from_global_states(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  void *pvVar3;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)((int)param_1 + 0x1c) = *(uint32_t *)(iVar1 + 8);
  *(uint32_t *)((int)param_1 + 0x20) = *(uint32_t *)(iVar1 + 0x10);
  *(uint32_t *)((int)param_1 + 0x24) = *(uint32_t *)(iVar1 + 0x20);
  pvVar3 = *(void **)(iVar1 + 0x18);
  *(void **)((int)param_1 + 0x2c) = pvVar3;
  *(uint32_t *)((int)param_1 + 0x30) = *(uint32_t *)(iVar1 + 0x1c);
  uVar2 = find_free_slot_in_array(pvVar3,0,(int)param_1 + 8);
  iVar1 = get_or_create_singleton_object_10485138();
  *(uint32_t *)((int)param_1 + 0xc) = *(uint32_t *)(iVar1 + 4);
  *(uint32_t *)((int)param_1 + 0x10) = *(uint32_t *)(iVar1 + 0x24);
  iVar1 = get_or_create_singleton_object_104bb22a();
  *(uint32_t *)((int)param_1 + 0x28) = *(uint32_t *)(iVar1 + 4);
  *(uint32_t *)((int)param_1 + 0x34) = *(uint32_t *)(iVar1 + 8);
  wait_flg_obj((void *)((int)param_1 + 0x38),0);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x48),1,0x1f);
  return uVar2;
}
