/* @k10d call_with_field_at_offset_0x70 @ 0x10519f60
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_with_field_at_offset_0x70(int param_1)

{
  heap_free_2(*(int *)(param_1 + 0x70));
  return;
}
