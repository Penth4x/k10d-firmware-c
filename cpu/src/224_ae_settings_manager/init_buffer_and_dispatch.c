/* @k10d init_buffer_and_dispatch @ 0x104be61e
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a flag, computes a buffer address, and calls a dispatch function with the computed
 *   address and parameters.
 * summary:
 *   The function sets a byte at offset 0xfd98 in the object pointed to by param_1 to 1. It
 *   calls select_and_activate_entry to get a pointer, then calculates an address based on
 *   that pointer's contents and another field in the object, storing it at offset 0xfd94.
 *   Finally, it calls update_active_object_state with the object, a zero, the pointer from
 *   the first call, and the remaining parameters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_buffer_and_dispatch(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  uint32_t *puVar1;
  uintptr_t sp;
  uint32_t *puVar2;
  uint8_t auStack_20 [8];
  
  puVar2 = (uint32_t *)auStack_20;
  *(uint8_t *)(param_1 + 0xfd98) = 1;
  puVar1 = (uint32_t *)select_and_activate_entry(param_1,param_5);
  *(int *)(param_1 + 0xfd94) = param_1 + 0xebac + (puVar1[2] + *(int *)(param_1 + 0x8d0)) * 0x2fc;
  *puVar2 = param_3;
  puVar2[1] = param_4;
  update_active_object_state(param_1,0,puVar1,param_2,*puVar2);
  return;
}
