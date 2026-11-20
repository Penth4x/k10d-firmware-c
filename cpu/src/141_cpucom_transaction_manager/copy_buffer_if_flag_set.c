/* @k10d copy_buffer_if_flag_set @ 0x10464472
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 141_cpucom_transaction_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_buffer_if_flag_set(int *param_1,int param_2)

{
  uint uVar1;
  bool bVar3;
  int iVar2;
  
  bVar3 = set_pointer_and_clear_flag(param_1 + 7,param_1 + 1);
  if (bVar3) {
    iVar2 = (((vtbl_entry*)(*param_1))[13].fn)((int)((vtbl_entry*)(*param_1))[13].adj + (int)param_1);
    uVar1 = (uint)DAT_105a78c1/*ROM*/;
    while (uVar1 != 0) {
      uVar1 = uVar1 - 1;
      *(uint8_t *)(uVar1 + param_2) = *(uint8_t *)(uVar1 + iVar2);
    }
    delete_signal_semaphore(param_1 + 7);
  }
  return;
}
