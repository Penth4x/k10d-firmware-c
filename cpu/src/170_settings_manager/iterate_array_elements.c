/* @k10d iterate_array_elements @ 0x1047e332
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Loops over param_1[1] elements, calling write_if_check_passes_1047e296 with the array,
 *   index, and param_2.
 * summary:
 *   Reads a count from param_1[1] and, if positive, iterates from 0 to count-1. Each
 *   iteration calls write_if_check_passes_1047e296 with the array pointer, the current
 *   index, and the second argument. The role of the array and the callee is not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_array_elements(int *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    do {
      write_if_check_passes_1047e296(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[1]);
  }
  return;
}
