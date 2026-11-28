/* @k10d init_object_with_two_ids_1052b824 @ 0x1052b824
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Initializes an 8-byte object by copying data from two source buffers into local
 *   temporaries and then into the target.
 * summary:
 *   The function takes a target pointer (param_1) and a source pointer (param_2). It calls
 *   build_mode_config_block and initialize_mode_dependent_context to populate local stack
 *   buffers, copies 16 bytes between them, and then calls
 *   check_call_result_is_zero_1045bf0e, destroy_text_widget, and copy_struct_via_stack to
 *   process the data. Finally, it copies 8 bytes from the processed local buffer to the
 *   target object pointed to by param_1. The callers are constructors for two small classes
 *   (0x1c bytes), suggesting this function initializes the core 8-byte payload of these
 *   objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

void init_object_with_two_ids_1052b824(void *dst_base, uint32_t *src_id_ptr)

{
  uint32_t *puVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_5c [12];
  uint32_t auStack_50 [5];
  uint8_t local_3c [20];
  uint32_t auStack_28 [7];

  build_mode_config_block(auStack_5c, (void *)*src_id_ptr);
  initialize_mode_dependent_context(auStack_28 + 1, (void *)*src_id_ptr);
  iVar3 = 0x10;
  do {
    iVar2 = iVar3 + -4;
    *(uint32_t *)((int)auStack_50 + iVar3) = *(uint32_t *)((int)auStack_28 + iVar3);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  puVar1 = auStack_50 + 1;
  check_call_result_is_zero_1045bf0e(auStack_5c, puVar1);
  destroy_text_widget(puVar1, 2);
  destroy_text_widget(auStack_5c, 2);
  build_mode_config_block(auStack_50 + 1, (void *)*src_id_ptr);
  copy_struct_via_stack(local_3c, puVar1);
  destroy_text_widget(puVar1, 2);
  iVar3 = 8;
  do {
    iVar2 = iVar3 + -4;
    *(uint32_t *)(iVar2 + (int)dst_base) = *(uint32_t *)((int)auStack_50 + iVar3 + 0x10U);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  return;
}
