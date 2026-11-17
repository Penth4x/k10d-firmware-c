/* @k10d retry_call_with_timeout @ 0x10370dd2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 031_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Retries a call to dispatch_event_with_payload_1036b92c up to 5 times if it returns 3,
 *   passing a constructed 20-byte stack buffer.
 * summary:
 *   The function initializes a local 20-byte buffer with values from param_5, param_6, and
 *   DAT_800043a0. It calls invoke_virtual_slot_two_on_four_objects_1036b766 and then
 *   dispatch_event_with_payload_1036b92c in a loop, repeating up to 5 times if
 *   dispatch_event_with_payload_1036b92c returns 3. If the loop completes with a return
 *   value of 3, it returns 0; otherwise, it returns the last result from
 *   dispatch_event_with_payload_1036b92c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int retry_call_with_timeout(int param_1,uint32_t param_2,void *param_3,uint32_t param_4,uint32_t param_5,
                uint32_t param_6)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t auStack_40 [20];
  
  puVar3 = (uint32_t *)auStack_40;
  iVar2 = 0;
  do {
    invoke_virtual_slot_two_on_four_objects_1036b766();
    *puVar3 = param_5;
    puVar3[3] = 3;
    puVar3[1] = param_6;
    puVar3[2] = 0xffffffff;
    *(uint8_t *)((int)puVar3 + 0x13) = DAT_800043a0/*SDRAM*/;
    iVar1 = dispatch_event_with_payload_1036b92c((void *)param_1,param_2,param_3,param_4,*puVar3,puVar3[1],puVar3[2],
                         puVar3[3],*(uint8_t *)((int)puVar3 + 0x13));
    if (iVar1 != 3) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  if (iVar1 == 3) {
    iVar1 = 0;
  }
  return iVar1;
}
