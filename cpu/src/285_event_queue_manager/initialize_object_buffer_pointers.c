/* @k10d initialize_object_buffer_pointers @ 0x10529d58
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Populates an object with pointers to a shared buffer and conditionally initializes sub-
 *   components based on status checks.
 * summary:
 *   The function retrieves a context via sr_driver_singleton and allocates or queries a
 *   buffer using module_array_getter. It writes a base pointer and four offsets (0x40,
 *   0x2b40, 0x5640, 0x8140) into the object at param_1. It then performs two conditional
 *   blocks: if check_magic_value_104382e4 returns true, it calls
 *   store_clamped_value_at_offset; if check_magic_sentinel_104384a6 returns true, it calls
 *   clamp_and_store_two_fields and copy_eight_words_and_set_flag. The specific subsystem
 *   (display, sensor, etc.) is not identifiable from the provided pseudocode or unverified
 *   callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_buffer_pointers(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  int *piVar3;
  bool bVar4;
  void *pvVar5;
  
  iVar1 = sr_driver_singleton();
  pvVar5 = *(void **)(iVar1 + 4);
  uVar2 = module_array_getter(pvVar5,0x1c);
  module_array_getter(pvVar5,0x1d);
  iVar1 = return_sram_address_10438862();
  iVar1 = add_offset_to_pointer_1043860c(iVar1);
  *(int *)((int)param_1 + 0x28) = iVar1;
  *(int *)((int)param_1 + 0x24) = iVar1;
  *(int *)((int)param_1 + 0x2c) = iVar1;
  *(int *)((int)param_1 + 0x30) = iVar1 + 0x40;
  *(int *)((int)param_1 + 0x34) = iVar1 + 0x2b40;
  *(int *)((int)param_1 + 0x38) = iVar1 + 0x5640;
  *(int *)((int)param_1 + 0x3c) = iVar1 + 0x8140;
  piVar3 = (int *)return_sram_base_address(uVar2);
  bVar4 = check_magic_value_104382e4(piVar3);
  if (bVar4) {
    return_sram_base_address(uVar2);
    iVar1 = read_offset_four_10438328(__frv_reg_unset(4));
    return_sram_base_address(uVar2);
    uVar2 = (*(code *)0x10438446/*ROM*/)();
    store_clamped_value_at_offset(param_1,iVar1,uVar2);
  }
  piVar3 = (int *)return_sram_address_10438862();
  bVar4 = check_magic_sentinel_104384a6(piVar3);
  if (bVar4) {
    return_sram_address_10438862();
    iVar1 = read_offset_four_104384ea(__frv_reg_unset(4));
    return_sram_address_10438862();
    uVar2 = (*(code *)0x10438608/*ROM*/)();
    clamp_and_store_two_fields(param_1,iVar1,uVar2);
    copy_eight_words_and_set_flag(param_1);
  }
  return 1;
}
