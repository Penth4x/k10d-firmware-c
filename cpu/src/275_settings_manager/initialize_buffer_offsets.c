/* @k10d initialize_buffer_offsets @ 0x1051c512
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 275_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets up a series of pointer offsets within a structure based on an initial value.
 * summary:
 *   The function reads an integer from the second field of the structure pointed to by
 *   param_1. It then populates fields 2 through 5 of the structure with this value and
 *   calculated offsets (0x4a8 and 0x164). It returns 1, likely indicating success. No
 *   callees are used.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_buffer_offsets(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 4);
  param_1[2] = iVar1;
  param_1[3] = iVar1 + 0x4a8;
  param_1[4] = param_1[2];
  param_1[5] = param_1[2] + 0x164;
  return 1;
}
