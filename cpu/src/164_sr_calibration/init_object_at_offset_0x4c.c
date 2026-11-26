/* @k10d init_object_at_offset_0x4c @ 0x1047129c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 164_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-object located at offset 0x4c of the input structure by setting a
 *   flag and calling two setup routines.
 * summary:
 *   The function takes a pointer to a structure, calculates the address of a member at
 *   offset 0x4c, and passes it to three helper functions. It first calls set_flg_obj to set
 *   a flag, then calls eventflag_clr_flg with an argument of 2, and finally calls
 *   eventflag_wai_flg with arguments 2, NULL, and a global data pointer. The specific
 *   subsystem is not identifiable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_object_at_offset_0x4c(void *param_1)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)((int)param_1 + 0x4c);
  set_flg_obj(puVar1, 0x1);
  eventflag_clr_flg(puVar1,2);
  eventflag_wai_flg(puVar1,2,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  return;
}
