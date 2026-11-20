/* @k10d dispatch_event_with_status @ 0x103b69d6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Checks a status via a helper and dispatches a virtual call with a success/failure flag.
 * summary:
 *   The function initializes a local stack structure and calls
 *   configure_pipeline_with_settings to check a status. Based on the return value, it
 *   either calls a virtual method with 0 (failure) or copies three fields from a pointer at
 *   param_1+0x3c into param_1+0x44..0x4c and calls the virtual method with 1 (success). It
 *   also manipulates an object at param_1+8 via request_ui_sync_code_4 and
 *   dispatch_object_state_update_10491fb2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_with_status(int param_1,uint8_t param_2)

{
  uint32_t *puVar1;
  int iVar2;
  void *pvVar3;
  uintptr_t sp;
  uint8_t uStack_1c;
  uint8_t uStack_1b;
  uint32_t uStack_18;
  uint8_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_1c = 0;
  uStack_18 = *(uint32_t *)(param_1 + 0x3c);
  pvVar3 = (void *)(param_1 + 8);
  uStack_1b = param_2;
  puVar1 = (uint32_t *)menu_item_register((int)pvVar3);
  request_ui_sync_code_4(pvVar3);
  dispatch_object_state_update_10491fb2((int)pvVar3,1);
  iVar2 = configure_pipeline_with_settings(*(uint32_t *)(param_1 + 0x38),&uStack_1c);
  if (iVar2 == 0) {
    dispatch_object_state_update_10491fb2((int)pvVar3,0);
    (((vtbl_entry*)(puVar1[3]))[1].fn)((int)*(short *)(puVar1[3] + 8) + (int)puVar1,0);
  }
  else {
    *(uint32_t *)(param_1 + 0x44) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 4);
    *(uint32_t *)(param_1 + 0x48) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 8);
    *(uint32_t *)(param_1 + 0x4c) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 0xc);
    dispatch_object_state_update_10491fb2((int)pvVar3,0);
    request_ui_sync_code_4(pvVar3);
    call_helper_and_set_flag_10494b88(puVar1);
    (((vtbl_entry*)(puVar1[3]))[1].fn)((int)*(short *)(puVar1[3] + 8) + (int)puVar1,1);
  }
  return;
}
