/* @k10d dispatch_event_with_payload_104cea58 @ 0x104cea58
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 238_settings_framework (unit names are model-proposed)
 * purpose:
 *   Checks a status flag and, if set, builds a payload from object fields and calls a
 *   dispatch routine.
 * summary:
 *   The function reads a pointer at offset 0x34 of the input object and calls an unknown
 *   function at 0x104ce65e to check a condition. If the condition is true, it initializes a
 *   local structure (via alloc_and_init_seven_word_struct), populates it with several
 *   fields from the object (offsets 0x04, 0x14, 0x18, 0x1c, 0x20) and the object's offset
 *   0x4c, then calls allocate_and_enqueue_event with the object's offset 0x30 and the local
 *   structure. It finally calls query_flag_with_timeout and cleans up the local structure
 *   via free_if_heap_flag_set_104df672. The specific camera subsystem is not identifiable
 *   from the available callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_with_payload_104cea58(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t uStack_24;
  int iStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  iVar1 = (*(code *)0x104ce65e/*ROM*/)(*(uint32_t *)(param_1 + 0x34));
  uVar2 = 1;
  if (iVar1 != 0) {
    alloc_and_init_seven_word_struct(&uStack_24);
    iStack_20 = *(int *)(*(int *)(param_1 + 0x34) + 8);
    if (iStack_20 == 0) {
      iStack_20 = *(int *)(*(int *)(param_1 + 0x34) + 4);
    }
    uStack_24 = *(uint32_t *)(iStack_20 + 4);
    uStack_18 = *(uint32_t *)(*(int *)(param_1 + 0x34) + 0x14);
    uStack_14 = *(uint32_t *)(*(int *)(param_1 + 0x34) + 0x18);
    uStack_10 = *(uint32_t *)(*(int *)(param_1 + 0x34) + 0x1c);
    uStack_c = *(uint32_t *)(*(int *)(param_1 + 0x34) + 0x20);
    uStack_1c = *(uint32_t *)(param_1 + 0x4c);
    allocate_and_enqueue_event(*(int *)(param_1 + 0x30),param_1 + 4,&uStack_24);
    uVar2 = query_flag_with_timeout(param_1,8);
    free_if_heap_flag_set_104df672(&uStack_24,2);
  }
  return uVar2;
}
