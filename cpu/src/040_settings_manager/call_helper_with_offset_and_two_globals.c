/* @k10d call_helper_with_offset_and_two_globals @ 0x10392d18
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_and_two_globals(int param_1)

{
  store_two_words_and_call_helper_10398386((void *)(param_1 + 0xc),uRam8001a0b8,uRam8001a0ba);
  return;
}
