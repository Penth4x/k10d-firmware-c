/* @k10d dispatch_parameterized_request @ 0x104b861c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Validates a request, maps a mode index to two parameters, and invokes a handler with
 *   those parameters.
 * summary:
 *   The function first calls set_pointer_and_clear_flag to check a condition based on
 *   fields at offsets 0x2c and 4 of the input structure. If valid, it uses a switch
 *   statement on param_2 to set two local variables (uStack_9 and uVar2) to specific
 *   values. It then calls eventflag_clr_flg, followed by forward_with_mode_three which
 *   passes the mapped parameters. If forward_with_mode_three returns non-zero, it calls
 *   twai_flg_obj. Finally, it calls delete_signal_semaphore and returns the result of
 *   forward_with_mode_three.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_parameterized_request(int param_1,uint32_t param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t uStack_9;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar3 = 0;
  if (bVar1) {
    uStack_9 = 0;
    uVar2 = 9;
    switch(param_2) {
    case 0:
      uStack_9 = 0;
      uVar2 = 9;
      break;
    case 1:
      uStack_9 = 1;
      uVar2 = 9;
      break;
    case 2:
      uStack_9 = 1;
      uVar2 = 10;
      break;
    case 3:
      uStack_9 = 2;
      uVar2 = 10;
      break;
    case 4:
      uStack_9 = 2;
      uVar2 = 0xb;
      break;
    case 5:
      uStack_9 = 1;
      uVar2 = 0xb;
    }
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar3 = forward_with_mode_three(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),uVar2,&uStack_9);
    if (iVar3 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar3;
}
