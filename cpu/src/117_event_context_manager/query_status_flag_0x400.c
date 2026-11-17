/* @k10d query_status_flag_0x400 @ 0x10432046
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 117_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Queries a status word at offset 0x7c of param_1 and returns false if bit 10 (0x400) is
 *   set.
 * summary:
 *   The function calls eventflag_wai_flg with a pointer to param_1 + 0x7c, a constant
 *   0x600, a local stack variable, and a timeout of 0 or 500 based on param_2. It then
 *   checks if bit 10 (0x400) of the returned value in the stack variable is set. If the bit
 *   is set, it returns false; otherwise, it returns the result of the callee. The role of
 *   eventflag_wai_flg and the specific status register at offset 0x7c are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool query_status_flag_0x400(void *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 500;
  }
  bVar1 = eventflag_wai_flg((uint32_t *)((int)param_1 + 0x7c),0x600,&uStack_c,iVar2);
  if ((uStack_c & 0x400) != 0) {
    bVar1 = false;
  }
  return bVar1;
}
