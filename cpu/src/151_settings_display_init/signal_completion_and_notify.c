/* @k10d signal_completion_and_notify @ 0x1046c378
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 151_settings_display_init (unit names are model-proposed)
 * purpose:
 *   Signals a semaphore and invokes virtual callbacks on two object pointers to report
 *   completion status.
 * summary:
 *   The function first calls forward_byte_at_offset_0x858 with the first argument and a
 *   derived offset. If the result is 1, it initializes a local variable and calls
 *   eventflag_wai_flg and eventflag_clr_flg on a sub-structure at offset 0xc0, then calls
 *   map_mode_bit_to_code_1046c480. It then signals a semaphore object at offset 0xb8 of the
 *   first argument (sig_sem_obj). Finally, it performs two virtual calls: one on the object
 *   pointed to by param_2[4] (slot 1) with argument 3, and another on the object pointed to
 *   by *param_2 (slot 2) with arguments 0x1000000 and the result of the initial check.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void signal_completion_and_notify(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uintptr_t sp;
  uint32_t uStack_c;
  
  piVar2 = (int *)*param_2;
  iVar1 = forward_byte_at_offset_0x858(param_1,param_1 + 0x20,param_2[1]);
  if (iVar1 == 1) {
    uStack_c = 0;
    eventflag_wai_flg((uint32_t *)(param_1 + 0xc0),0x3f,&uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg((uint32_t *)(param_1 + 0xc0),uStack_c);
    iVar1 = map_mode_bit_to_code_1046c480(param_1,uStack_c);
  }
  if (param_2 != (int *)0x0) {
    (((vtbl_entry*)(param_2[4]))[1].fn)((int)*(short *)(param_2[4] + 8) + (int)param_2,3);
  }
  sig_sem_obj((uint32_t *)(param_1 + 0xb8));
  iVar3 = *piVar2;
  (((vtbl_entry*)(iVar3))[2].fn)((int)((vtbl_entry*)(iVar3))[2].adj + (int)piVar2,0x1000000,iVar1);
  return;
}
