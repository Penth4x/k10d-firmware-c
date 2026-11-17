/* @k10d prepare_and_dispatch_event_104be6aa @ 0x104be6aa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a flag, computes a buffer offset, and dispatches parameters to a handler.
 * summary:
 *   The function sets the byte at offset 0xfd98 in the object pointed to by param_1 to 1.
 *   It calls select_and_activate_entry to obtain a pointer, then calculates an integer
 *   value stored at offset 0xfd94 based on that pointer's third element and a value at
 *   offset 0x8d0. Finally, it calls update_active_object_state with the object, param_2,
 *   the pointer from the first call, param_3, and param_4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void prepare_and_dispatch_event_104be6aa(int param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5,
                 uint32_t param_6)

{
  uint32_t *puVar1;
  uintptr_t sp;
  uint32_t *puVar2;
  uint8_t auStack_20 [8];
  
  puVar2 = (uint32_t *)auStack_20;
  *(uint8_t *)(param_1 + 0xfd98) = 1;
  puVar1 = (uint32_t *)select_and_activate_entry(param_1,param_6);
  *(int *)(param_1 + 0xfd94) = param_1 + 0xebac + (puVar1[2] + *(int *)(param_1 + 0x8d0)) * 0x2fc;
  *puVar2 = param_4;
  puVar2[1] = param_5;
  update_active_object_state(param_1,param_2,puVar1,param_3,*puVar2);
  return;
}
