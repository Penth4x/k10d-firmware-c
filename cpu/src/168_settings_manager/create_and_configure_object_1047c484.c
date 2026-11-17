/* @k10d create_and_configure_object_1047c484 @ 0x1047c484
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Instantiates a cls_105aaebc object, configures it with parameters 2 and 10000, and
 *   conditionally passes it to a handler based on a field check.
 * summary:
 *   Allocates a stack instance of cls_105aaebc and calls its virtual slot 2 with arguments
 *   2 and 10000. It then calls virtual slot 4. It reads a pointer from param_1+0x50, checks
 *   it via call_helper_on_field_c, and if non-zero, calls
 *   call_helper_with_second_field_1047a6be with param_1+0x54, param_2, and the new object.
 *   Finally, it calls virtual slots 3 and 1 on the object, likely for cleanup or
 *   finalization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void create_and_configure_object_1047c484(int param_1,uint32_t param_2)

{
  int iVar1;
  uintptr_t sp;
  int aiStack_18 [4];
  
  cls_105aaebc_new(aiStack_18);
  allocate_pool_block_if_null(aiStack_18,2,(void *)10000);
  release_object_if_allocated_1047e45e(aiStack_18);
  iVar1 = call_helper_on_field_c(*(int *)(param_1 + 0x50));
  if (iVar1 != 0) {
    call_helper_with_second_field_1047a6be(*(uint32_t *)(param_1 + 0x54),param_2,(uint32_t)aiStack_18);
  }
  release_heap_block_if_set(aiStack_18);
  cls_105aaebc_delete(aiStack_18,2);
  return;
}
