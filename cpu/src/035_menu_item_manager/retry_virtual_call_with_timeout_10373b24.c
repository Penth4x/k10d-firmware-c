/* @k10d retry_virtual_call_with_timeout_10373b24 @ 0x10373b24
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Retries a virtual call on an object up to 5 times if it returns status 3.
 * summary:
 *   The function invokes a virtual method (slot 3) on the object in param_4, and
 *   conditionally on param_5 and param_6. It then calls
 *   dispatch_event_with_payload_1036b92c with these objects and a small stack-allocated
 *   structure containing their pointers and constants (-1, 3). If
 *   dispatch_event_with_payload_1036b92c returns 3, the loop repeats up to 5 times. If the
 *   final return value is 3, it is converted to 0 before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int retry_virtual_call_with_timeout_10373b24(int param_1,uint32_t param_2,void *param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  int *piVar3;
  uint8_t auStack_44 [20];
  
  piVar3 = (int *)auStack_44;
  iVar2 = 0;
  do {
    (**(code **)(*(int *)(param_4 + 0x14) + 0x14))
              (*(short *)(*(int *)(param_4 + 0x14) + 0x10) + param_4);
    if (param_5 != 0) {
      (**(code **)(*(int *)(param_5 + 0x14) + 0x14))
                (param_5 + *(short *)(*(int *)(param_5 + 0x14) + 0x10));
    }
    if (param_6 != 0) {
      (**(code **)(*(int *)(param_6 + 0x14) + 0x14))
                (param_6 + *(short *)(*(int *)(param_6 + 0x14) + 0x10));
    }
    *piVar3 = param_5;
    piVar3[1] = param_6;
    piVar3[2] = -1;
    piVar3[3] = 3;
    *(uint8_t *)((int)piVar3 + 0x13) = DAT_800043a0/*SDRAM*/;
    iVar1 = dispatch_event_with_payload_1036b92c((void *)param_1,param_2,param_3,param_4,*piVar3,piVar3[1],piVar3[2],
                         piVar3[3],*(uint8_t *)((int)piVar3 + 0x13));
  } while ((iVar1 == 3) && (iVar2 = iVar2 + 1, iVar2 < 5));
  if (iVar1 == 3) {
    iVar1 = 0;
  }
  return iVar1;
}
