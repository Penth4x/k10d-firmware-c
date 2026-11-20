/* @k10d process_object_state_update @ 0x104e52f6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Validates and updates an object's state fields based on helper results and a virtual
 *   call.
 * summary:
 *   The function checks a pointer at offset 0x74 of the input object. If valid, it calls
 *   several helpers to update fields at 0x40 and 0x44. It then performs a virtual call on
 *   the object at 0x44 if non-null, passing a stack-allocated structure. Finally, it
 *   updates counters at offsets 4, 8, 0xc, and 0x1c based on the results of further helper
 *   calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_object_state_update(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  uintptr_t sp;
  uint8_t uStack_16;
  uint8_t uStack_15;
  uint8_t uStack_14;
  int iStack_10;
  int iStack_c;
  
  iVar1 = allocate_buffer_from_pool(*(uint32_t *)((int)param_1 + 0x74));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = check_two_struct_fields_nonzero((int)param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      init_fixed_size_queue(*(uint32_t *)((int)param_1 + 0x74));
      init_buffer_pool_context((int *)(*(uint32_t *)((int)param_1 + 0x74)));
      uVar2 = allocate_and_zero_buffer(*(int *)((int)param_1 + 0x74));
      *(uint32_t *)((int)param_1 + 0x40) = uVar2;
      uVar3 = allocate_queue_slot((int)param_1);
      uVar2 = (uintptr_t)(insert_node_into_array((int)(param_1),(int)(0xffffffff),(int)(uVar3)));
      *(uint32_t *)((int)param_1 + 0x44) = uVar2;
      copy_null_terminated_string((void *)(&uStack_16),(void *)(pvRam80010bb8));
      uStack_15 = 0x3a;
      uStack_14 = 0;
      iVar1 = *(int *)((int)param_1 + 0x44);
      if (iVar1 != 0) {
        (((vtbl_entry*)(*(int *)(iVar1 + 0x18)))[8].fn)
                  (((vtbl_entry*)(*(int *)(iVar1 + 0x18)))[8].adj + iVar1,&uStack_16);
        invoke_virtual_slot_14_104e6148(param_1,*(void **)((int)param_1 + 0x44));
      }
      iStack_10 = 1;
      increment_field_at_offset_0x10((int)param_1);
      iStack_c = 0;
      process_two_event_objects((int)param_1,&iStack_10,&iStack_c);
      iVar1 = process_file_path_entry((int)param_1);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iStack_10 = iStack_10 + 1;
        iVar1 = process_buffered_items(param_1,&iStack_10,&iStack_c);
      }
      *(int *)((int)param_1 + 4) = iStack_c;
      *(int *)((int)param_1 + 8) = iStack_10;
      *(int *)((int)param_1 + 0xc) = iStack_c + iStack_10;
      *(int *)((int)param_1 + 0x1c) = *(int *)((int)param_1 + 0x10) + *(int *)((int)param_1 + 0x14);
    }
  }
  return iVar1;
}
