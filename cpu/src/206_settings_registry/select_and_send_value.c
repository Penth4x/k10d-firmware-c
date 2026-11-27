/* @k10d select_and_send_value @ 0x104a4db8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Selects a 16-bit value based on a status check and passes it to a send function.
 * summary:
 *   Calls check_mode_status_flags to get a status. If the status is zero, it retrieves a
 *   value from map_iso_code_to_index using param_1; otherwise, it retrieves a value from
 *   map_status_code_to_enum. Finally, it calls write_word_to_dynamic_array with param_2, 0,
 *   and the selected value. The specific subsystem is not identifiable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_and_send_value(uint32_t param_1,int param_2)

{
  int iVar1;
  uint16_t uVar2;
  
  iVar1 = check_mode_status_flags((uint32_t)param_1);
  if (iVar1 == 0) {
    uVar2 = map_iso_code_to_index(param_1);
  }
  else {
    uVar2 = map_status_code_to_enum((uint32_t)param_1);
  }
  write_word_to_dynamic_array(param_2,0,uVar2);
  return;
}
