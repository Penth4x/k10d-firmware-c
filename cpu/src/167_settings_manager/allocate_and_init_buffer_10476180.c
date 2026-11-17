/* @k10d allocate_and_init_buffer_10476180 @ 0x10476180
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a buffer via helper, writes a 0x2e marker at offset 8, and copies data to
 *   offset 9.
 * summary:
 *   Normalizes param_3 to 0 if it is 1. Calls get_or_create_sram_object_1047dd7a to get a
 *   context, then find_entry_in_pointer_list to allocate a pointer. If successful, writes
 *   0x2e to *(param_2 + 8) and calls copy_null_terminated_string to copy data from the
 *   allocated pointer to param_2 + 9. Returns true if allocation succeeded.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool allocate_and_init_buffer_10476180(uint32_t param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  void *pvVar2;
  
  if (param_3 == 1) {
    param_3 = 0;
  }
  uVar1 = get_or_create_sram_object_1047dd7a();
  pvVar2 = (void *)find_entry_in_pointer_list(uVar1,param_3);
  if (pvVar2 != (void *)0x0) {
    *(uint8_t *)(param_2 + 8) = 0x2e;
    copy_null_terminated_string((void *)(param_2 + 9),pvVar2);
  }
  return pvVar2 != (void *)0x0;
}
