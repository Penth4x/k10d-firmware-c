/* @k10d forward_params_to_unnamed_callee @ 0x104b0446
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves an integer from get_or_init_sram_buffer_104af136 and forwards it with the
 *   caller's arguments to build_pointer_array_from_sources.
 * summary:
 *   This function acts as a thin wrapper. It calls get_or_init_sram_buffer_104af136 to
 *   obtain an integer value, then passes that value along with param_2, param_3, and
 *   param_4 to build_pointer_array_from_sources. No other side effects or memory operations
 *   are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_params_to_unnamed_callee(uint32_t param_1,void *param_2,void *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = get_or_init_sram_buffer_104af136();
  build_pointer_array_from_sources(iVar1,(int)param_2,(int)param_3,param_4);
  return;
}
