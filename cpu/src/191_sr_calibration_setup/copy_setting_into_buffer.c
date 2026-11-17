/* @k10d copy_setting_into_buffer @ 0x1048ef34
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Copies a 28-byte block from a local buffer into a structure at param_1 and passes it to
 *   a helper.
 * summary:
 *   The function calls get_or_create_singleton_object_10485138 and setting_get with ID
 *   0xa9, likely to initialize or validate a setting context. It then copies 28 bytes (7
 *   words) from a local stack buffer (auStack_24) into a region starting at param_1+0x24,
 *   overwriting two 16-bit fields at offsets 0x24 and 0x2c. Finally, it calls
 *   process_event_queue_entry_103fe55a with a value from get_or_init_static_buffer_103fe528
 *   and the local buffer as arguments. The specific camera subsystem is not identifiable
 *   from the available callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_setting_into_buffer(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uintptr_t sp;
  uint32_t auStack_40 [6];
  uint16_t uStack_28;
  uint16_t uStack_26;
  uint32_t auStack_24 [7];
  
  iVar1 = get_or_create_singleton_object_10485138();
  setting_get(*(int *)(iVar1 + 0x10),0xa9);
  uVar2 = get_or_init_static_buffer_103fe528();
  uStack_28 = *(uint16_t *)(param_1 + 0x2c);
  uStack_26 = *(uint16_t *)(param_1 + 0x24);
  iVar1 = 0x1c;
  do {
    iVar3 = iVar1 + -4;
    *(uint32_t *)((int)&uStack_28 + iVar1) = *(uint32_t *)((int)auStack_24 + iVar1 + -0x20);
    iVar1 = iVar3;
  } while (iVar3 != 0);
  process_event_queue_entry_103fe55a((void *)uVar2,auStack_24);
  return;
}
