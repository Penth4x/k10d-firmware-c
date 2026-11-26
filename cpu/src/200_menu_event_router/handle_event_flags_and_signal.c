/* @k10d handle_event_flags_and_signal @ 0x10498702
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Sets a flag at offset 8 of the object and signals a semaphore at offset 0x10 for
 *   specific event codes.
 * summary:
 *   Dispatches on param_2 (four distinct event codes) and raises a DIFFERENT event-flag
 *   bit for each. The decompiler had MERGED 0x10032/0x10033 (and 0x10036/0x1000f) into
 *   two branches and kept only one arm's constant, so 0x10032 wrongly raised bit 0x2
 *   (should be 0x1) and 0x10036 wrongly raised 0x10 (should be 0x4). Recovered from the
 *   original disasm (0x10498702): BEQ cascade on 0x10032/0x10033/0x10036/0x1000f ->
 *   set_flg_obj patterns 0x1/0x2/0x4/(*param_3?0x10:0x8); 0x10032 & 0x10033 also sig_sem.
 *   param_3 (r6) is a dropped pointer arg, dereferenced only on 0x1000f. This is the
 *   first divergence in the boot signal cascade: the 0x34 flag waiter waits for bit 0x1,
 *   so the bit-0x2 misfire left it asleep and deadlocked the menu bring-up (black screen).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t handle_event_flags_and_signal(cls_105b55bc *param_1,int param_2,int *param_3)

{
  if (param_2 == 0x10032) {
    set_flg_obj(&((uint32_t *)&(param_1->field_0x8))[0], 0x1);
    sig_sem_obj(&param_1->field_0x10);
  }
  else if (param_2 == 0x10033) {
    set_flg_obj(&((uint32_t *)&(param_1->field_0x8))[0], 0x2);
    sig_sem_obj(&param_1->field_0x10);
  }
  else if (param_2 == 0x10036) {
    set_flg_obj(&((uint32_t *)&(param_1->field_0x8))[0], 0x4);
  }
  else if (param_2 == 0x1000f) {
    set_flg_obj(&((uint32_t *)&(param_1->field_0x8))[0], (*param_3 != 0) ? 0x10 : 0x8);
  }
  return 0;
}
