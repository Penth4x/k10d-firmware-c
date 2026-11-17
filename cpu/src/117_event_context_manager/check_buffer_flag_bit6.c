/* @k10d check_buffer_flag_bit6 @ 0x10431f58
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 117_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Queries a 0x60-byte buffer at offset 0x7c of param_1 and returns false if bit 6 of the
 *   result is set.
 * summary:
 *   The function sets a local variable to 0 or 1000 based on param_2. It calls
 *   eventflag_wai_flg with the buffer address, size 0x60, the local variable pointer, and
 *   the timeout value. It then calls eventflag_clr_flg with the same buffer address and
 *   size. Finally, it checks if bit 6 (0x40) of the local variable is set; if so, it
 *   returns false, otherwise it returns the result of the first call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_buffer_flag_bit6(void *param_1,int param_2)

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
    iVar2 = 1000;
  }
  bVar1 = eventflag_wai_flg((uint32_t *)((int)param_1 + 0x7c),0x60,&uStack_c,iVar2);
  eventflag_clr_flg((uint32_t *)((int)param_1 + 0x7c),0x60);
  if ((uStack_c & 0x40) != 0) {
    bVar1 = false;
  }
  return bVar1;
}
