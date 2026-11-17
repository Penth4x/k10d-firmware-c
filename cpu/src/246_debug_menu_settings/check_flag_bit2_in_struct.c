/* @k10d check_flag_bit2_in_struct @ 0x104d870e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Reads a value from a struct offset and returns true if bit 2 is clear.
 * summary:
 *   Calls eventflag_wai_flg to read a value into a local variable from param_1+0x2b60, then
 *   calls eventflag_clr_flg with that value. Returns true if bit 2 (value 4) of the read
 *   value is not set. The specific subsystem is unknown as the callees are unnamed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_flag_bit2_in_struct(int param_1)

{
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  eventflag_wai_flg((uint32_t *)(param_1 + 0x2b60),5,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)(param_1 + 0x2b60),uStack_c);
  return (uStack_c & 4) == 0;
}
