/* @k10d send_two_byte_payload @ 0x10464826
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 141_cpucom_transaction_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t send_two_byte_payload(int *param_1,void *param_2,uint8_t param_3,uint8_t param_4)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  uStack_a = param_3;
  uStack_9 = param_4;
  uVar1 = cpucom_send_transaction(param_1,(int)param_2,1,&uStack_a,0);
  return uVar1;
}
