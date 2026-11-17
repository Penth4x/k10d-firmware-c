/* @k10d save_all_settings_blocks @ 0x104835c8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Saves both settings blocks to flash and returns the maximum of the three save results.
 * summary:
 *   Calls settings_save_block0 and settings_save_block1 to write the master and secondary
 *   settings blocks to flash. Also calls invoke_virtual_methods_on_object_array, whose role
 *   is unknown. The function computes the maximum of the three return values and returns
 *   it, likely indicating the worst-case status or the largest number of bytes/units
 *   written.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int save_all_settings_blocks(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = settings_save_block0((int)param_1);
  iVar2 = invoke_virtual_methods_on_object_array(param_1);
  iVar3 = settings_save_block1((int)param_1);
  if (iVar2 < iVar3) {
    iVar2 = iVar3;
  }
  if (iVar1 <= iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}
