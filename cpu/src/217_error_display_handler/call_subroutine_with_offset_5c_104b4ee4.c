/* @k10d call_subroutine_with_offset_5c_104b4ee4 @ 0x104b4ee4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 217_error_display_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_offset_5c_104b4ee4(int param_1,void *param_2)

{
  iterate_three_step_range(*(int *)(param_1 + 0x5c),param_2);
  return 1;
}
