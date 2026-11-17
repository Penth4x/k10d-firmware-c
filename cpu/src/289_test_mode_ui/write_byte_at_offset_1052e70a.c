/* @k10d write_byte_at_offset_1052e70a @ 0x1052e70a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_at_offset_1052e70a(int param_1,int param_2,uint8_t param_3)

{
  *(uint8_t *)(param_1 + 4 + param_2) = param_3;
  return;
}
