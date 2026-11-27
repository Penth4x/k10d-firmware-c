/* @k10d initialize_sensor_readout_state @ 0x10479e20
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a sensor readout state structure by copying parameters and calling setup
 *   routines.
 * summary:
 *   The function calls find_matching_entry_in_table to obtain a state pointer. If valid, it
 *   sets a flag at param_1+0xea48 and populates the state structure with values from
 *   param_2. It calls build_default_path_string, set_status_byte_from_flags, and
 *   insert_node_into_sorted_list to configure the state, and conditionally calls
 *   format_ordered_numeric_fields if a specific byte in param_2 is non-zero. The role is
 *   inferred from the context of sensor/AFE readout initialization in a DSLR firmware, but
 *   the specific subsystem is not explicitly confirmed by the callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool initialize_sensor_readout_state(int param_1,uint16_t *param_2)

{
  char cVar1;
  uint16_t *puVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  uint8_t auStack_18 [8];
  
  puVar3 = auStack_18;
  puVar2 = (uint16_t *)find_matching_entry_in_table((uint32_t)param_1, (uint32_t)param_2);
  if (puVar2 != (uint16_t *)0x0) {
    *(uint8_t *)(param_1 + 0xea48) = 1;
    if (puVar2[1] == 0) {
      *puVar2 = param_2[0x2c];
      puVar2[1] = param_2[0x2d];
      build_default_path_string(param_1,puVar2,param_2);
      set_status_byte_from_flags(param_1,puVar2,param_2);
      insert_node_into_sorted_list(param_1,puVar2);
    }
    puVar2[2] = *param_2;
    cVar1 = *(char *)(param_2 + 1);
    *(char *)(puVar2 + 3) = cVar1;
    if (cVar1 != '\0') {
      puVar3[3] = *(uint8_t *)((int)param_2 + 3);
      puVar3[7] = 0x2f;
      format_ordered_numeric_fields(param_1,(char *)((int)puVar2 + 0x27),param_2 + 0x2f,1,puVar3[3],puVar3[7]);
    }
  }
  return puVar2 != (uint16_t *)0x0;
}
