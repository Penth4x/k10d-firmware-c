/* @k10d read_field_at_offset_0x44 @ 0x1042fdea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_field_at_offset_0x44(int param_1)

{
  return *(uint32_t *)(param_1 + 0x44);
}
