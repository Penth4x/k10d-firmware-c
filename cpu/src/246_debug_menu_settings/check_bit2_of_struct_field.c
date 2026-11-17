/* @k10d check_bit2_of_struct_field @ 0x104d876e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Reads a field at offset 0x2b60 of a struct and returns true if bit 2 is clear.
 * summary:
 *   The function calls eventflag_wai_flg to read a value into a local variable from the
 *   memory location param_1 + 0x2b60, passing a constant pointer _DAT_105a2af0. It then
 *   calls eventflag_clr_flg with the same address and the read value, likely to update or
 *   acknowledge the state. Finally, it returns a boolean indicating whether bit 2 (value 4)
 *   of the read value is zero. The specific subsystem is not identifiable from the provided
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_bit2_of_struct_field(int param_1)

{
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  eventflag_wai_flg((uint32_t *)(param_1 + 0x2b60),6,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)(param_1 + 0x2b60),uStack_c);
  return (uStack_c & 4) == 0;
}
