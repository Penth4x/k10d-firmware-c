/* @k10d set_flag_on_param_one @ 0x105040d0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Sets a flag at offset 0x2c of the object pointed to by param_1 if param_2 matches one
 *   of three specific values.
 * summary:
 *   Checks if param_2 is 0x300001, 0x300002, or 0x400001. If so, it calls set_flg_obj on
 *   the memory location at param_1 + 0x2c. Returns 0 unconditionally. The specific meaning
 *   of the flag or the object structure is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_on_param_one(int param_1,int param_2)

{
  if (((param_2 == 0x300001) || (param_2 == 0x300002)) || (param_2 == 0x400001)) {
    set_flg_obj((uint32_t *)(param_1 + 0x2c));
  }
  return 0;
}
