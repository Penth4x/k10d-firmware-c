/* @k10d store_result_and_check_zero_1047fff8 @ 0x1047fff8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 172_key_entry_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with two args, stores the result at offset 4 of the first struct, and
 *   returns whether it was zero.
 * summary:
 *   Invokes get_lens_info_string(param_2, param_3) and writes the returned integer into
 *   *(param_1 + 4). Returns true if the helper returned 0, false otherwise. The role of
 *   get_lens_info_string is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool store_result_and_check_zero_1047fff8(int param_1,void *param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = get_lens_info_string(param_2,param_3);
  *(int *)(param_1 + 4) = iVar1;
  return iVar1 == 0;
}
