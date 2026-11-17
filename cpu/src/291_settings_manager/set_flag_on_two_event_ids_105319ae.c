/* @k10d set_flag_on_two_event_ids_105319ae @ 0x105319ae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a flag in an object field when the event ID matches one of two specific values.
 * summary:
 *   Checks if param_2 equals 0x1040007 or 0x1040015. If so, calls set_flg_obj on the field
 *   at offset 0xc of the object pointed to by param_1. Returns 0 unconditionally. The
 *   specific meaning of the event IDs and the flag is not determinable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_on_two_event_ids_105319ae(int param_1,int param_2)

{
  if ((param_2 == 0x1040007) || (param_2 == 0x1040015)) {
    set_flg_obj((uint32_t *)(param_1 + 0xc));
  }
  return 0;
}
