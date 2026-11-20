/* @k10d poll_flag_and_dispatch_1036eda4 @ 0x1036eda4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 026_sr_mode_control (unit names are model-proposed)
 * purpose:
 *   Loops setting a flag on an object, polling a status bit, and calling a handler when the
 *   bit is set.
 * summary:
 *   The function enters an infinite loop that operates on a structure at param_1 + 0xbc. It
 *   calls set_flg_obj to set a flag, then calls eventflag_wai_flg with a local variable to
 *   check a status (bit 0). If the status bit is not set, it calls eventflag_clr_flg and
 *   retries. Once the bit is set, it calls init_three_buffer_slots with the base object
 *   pointer and repeats the cycle. The specific camera subsystem is not identifiable from
 *   the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_flag_and_dispatch_1036eda4(cls_10557f3c *param_1)

{
  uint32_t *puVar1;
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  do {
    do {
      puVar1 = &param_1->field_0xbc;
      set_flg_obj(puVar1);
      eventflag_wai_flg(puVar1,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar1,uStack_c);
    } while ((uStack_c & 1) == 0);
    init_three_buffer_slots((int)(param_1));
  } while( true );
}
