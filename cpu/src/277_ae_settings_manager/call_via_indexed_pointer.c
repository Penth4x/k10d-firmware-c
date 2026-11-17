/* @k10d call_via_indexed_pointer @ 0x1051e550
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_via_indexed_pointer(int param_1,int param_2,int param_3)

{
  read_byte_at_offset_1051ed64(*(void **)(param_1 + 0xc + param_2 * 4),param_3);
  return;
}
