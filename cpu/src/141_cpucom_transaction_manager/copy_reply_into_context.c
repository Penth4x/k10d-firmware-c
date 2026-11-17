/* @k10d copy_reply_into_context @ 0x104646f4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 141_cpucom_transaction_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_reply_into_context(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  free_cpucom_context(param_1);
  iVar1 = *(int *)((int)param_1 + 0x10);
  if (iVar1 != 0) {
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      *(uint8_t *)(param_3 + iVar1) = *(uint8_t *)(param_3 + param_2);
    }
    *(uint8_t *)((int)param_1 + 0x60) = 1;
  }
  free_cpucom_context_ref(param_1);
  return;
}
