/* @k10d dispatch_four_substeps @ 0x1049be2c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls four sequential helper functions, passing the two input parameters to the last
 *   three.
 * summary:
 *   The function acts as a simple dispatcher or sequence wrapper. It first calls
 *   store_mapped_status_byte with no arguments, then calls
 *   store_mapped_status_code_1049be82, store_mapped_status_code_1049bebe, and
 *   store_mapped_status_code_1049bf02 in order, each receiving param_1 and param_2. It is
 *   invoked as virtual method slot 4 of class cls_105b5834. No specific camera subsystem
 *   behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_four_substeps(uint32_t param_1,uint32_t param_2)

{
  store_mapped_status_byte((uint32_t)param_1, (uint32_t)param_2);
  store_mapped_status_code_1049be82(param_1,param_2);
  store_mapped_status_code_1049bebe(param_1,param_2);
  store_mapped_status_code_1049bf02(param_1,param_2);
  return;
}
