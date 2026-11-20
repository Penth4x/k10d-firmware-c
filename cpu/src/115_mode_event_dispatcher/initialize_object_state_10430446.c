/* @k10d initialize_object_state_10430446 @ 0x10430446
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 115_mode_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Initializes fields of a 0xa8-byte object by calling helper functions on sub-objects and
 *   allocating a new heap object.
 * summary:
 *   The function takes a pointer to an object (param_1) and performs a series of
 *   initialization steps. It calls send_mailbox_message,
 *   forward_three_args_to_helper_10459edc, and wait_flg_obj on various offsets within the
 *   object, likely initializing sub-objects or flags. It allocates 0x40 bytes from the heap
 *   using heap_alloc, constructs a cls_105a8a1c object in that memory, and stores the
 *   pointer at offset 0x98. Finally, it retrieves a pointer from
 *   initialize_singleton_object_1045d6a0 and calls allocate_free_slot_in_table_1045e7f2
 *   twice with that pointer and the current object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_state_10430446(void *param_1)

{
  int iVar1;
  void *pvVar2;
  
  send_mailbox_message((int *)((int)param_1 + 100));
  forward_three_args_to_helper_10459edc((void *)((int)param_1 + 0x6c),2,2);
  forward_three_args_to_helper_10459edc((void *)((int)param_1 + 0x74),1,1);
  wait_flg_obj((void *)((int)param_1 + 0x7c),0);
  wait_flg_obj((void *)((int)param_1 + 0x84),0);
  alloc_pool_and_init_task((int *)((int)param_1 + 8),10,0x2000,4);
  forward_three_args_to_helper_10459edc((void *)((int)param_1 + 0x44),1,1);
  iVar1 = heap_alloc((void *)0x40);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a8a1c_new((cls_105a8a1c *)(iVar1));
  }
  *(int *)((int)param_1 + 0x98) = iVar1;
  forward_three_args_to_helper_10459edc((void *)((int)param_1 + 0x90),1,1);
  create_kernel_object((int *)((int)param_1 + 0x24));
  iVar1 = initialize_singleton_object_1045d6a0();
  pvVar2 = *(void **)(iVar1 + 0x1c);
  allocate_free_slot_in_table_1045e7f2(pvVar2,9,(int)param_1 + 4);
  allocate_free_slot_in_table_1045e7f2(pvVar2,0xb,(int)param_1 + 4);
  return;
}
