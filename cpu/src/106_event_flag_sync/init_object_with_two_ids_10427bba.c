/* @k10d init_object_with_two_ids_10427bba @ 0x10427bba
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 106_event_flag_sync (unit names are model-proposed)
 * purpose:
 *   Initializes an object at param_1+8 by calling two setup helpers and a flag setter.
 * summary:
 *   The function takes a pointer param_1, offsets it by 8 bytes, and passes that sub-object
 *   pointer to three callees. It calls eventflag_clr_flg with size 0xc, then set_flg_obj,
 *   then eventflag_wai_flg with arguments 2, NULL, and a global pointer, and finally calls
 *   eventflag_clr_flg again with size 0x12. The specific roles of the callees are unknown,
 *   so the operation is described mechanically as object initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_object_with_two_ids_10427bba(void *param_1)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)((int)param_1 + 8);
  eventflag_clr_flg(puVar1,0xc);
  set_flg_obj(puVar1, 0x10);
  eventflag_wai_flg(puVar1,2,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x12);
  return;
}
