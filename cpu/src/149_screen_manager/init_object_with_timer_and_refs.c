/* @k10d init_object_with_timer_and_refs @ 0x1046b60e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 149_screen_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting up a timer, clearing fields, and storing three
 *   references from a global object.
 * summary:
 *   The function calls alloc_pool_and_init_task to initialize a sub-structure at offset 8,
 *   then calls forward_three_args_to_helper_10459d64 and wait_flg_obj to configure fields
 *   at offsets 0x1ac and 0x1b4. It retrieves a global object via
 *   get_or_init_sram_buffer_104277bc and extracts three values (indices 0x4c, 0x4e, 0x4d)
 *   using read_table_entry_field, storing them at offsets 0x68, 0x6c, and 0x70. Finally, it
 *   calls allocate_free_slot_in_table_1045e7f2 with a pointer from offset 0xb8 and returns
 *   1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_timer_and_refs(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  alloc_pool_and_init_task((int *)((int)param_1 + 8),0xc,0x1000,4);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x1ac),1,0x1f);
  wait_flg_obj((void *)((int)param_1 + 0x1b4),0);
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0x4c);
  *(uint32_t *)((int)param_1 + 0x68) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0x4e);
  *(uint32_t *)((int)param_1 + 0x6c) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0x4d);
  *(uint32_t *)((int)param_1 + 0x70) = uVar2;
  allocate_free_slot_in_table_1045e7f2(*(void **)((int)param_1 + 0xb8),0x16,(int)param_1 + 4);
  return 1;
}
