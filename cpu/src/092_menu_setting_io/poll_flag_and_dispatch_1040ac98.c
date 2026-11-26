/* @k10d poll_flag_and_dispatch_1040ac98 @ 0x1040ac98
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Loops setting a flag on an object, polling a status via helper calls, and invoking a
 *   callback when the flag is set.
 * summary:
 *   The function operates on an object at offset 0x60. It calls set_flg_obj to set a flag,
 *   then calls eventflag_wai_flg and eventflag_clr_flg to check a status. It repeats this
 *   inner loop until a bit in the status is set. Once set, it calls
 *   init_three_stage_sequence on the parent object and continues the outer loop
 *   indefinitely. The specific camera subsystem is not identifiable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_flag_and_dispatch_1040ac98(cls_10599b14 *param_1)

{
  uint32_t *puVar1;
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  do {
    do {
      puVar1 = &param_1->field_0x60;
      set_flg_obj(puVar1, 0x2);
      eventflag_wai_flg(puVar1,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar1,uStack_c);
    } while ((uStack_c & 1) == 0);
    init_three_stage_sequence(param_1);
  } while( true );
}
