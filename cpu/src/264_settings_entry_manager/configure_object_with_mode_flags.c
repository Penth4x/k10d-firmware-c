/* @k10d configure_object_with_mode_flags @ 0x10500502
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 264_settings_entry_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object's sub-structure and applies a series of configuration calls based
 *   on flags in a parameter struct.
 * summary:
 *   The function calls set_pointer_and_clear_flag to initialize a sub-structure at offset
 *   0x1c, clears a field at 0x3c, and invokes a series of functions at 0x10452xxx that take
 *   the pointer at offset 0x14 as an argument. It interprets flags at offsets 0x24-0x28 of
 *   param_3 to determine specific configuration values (0-3) passed to 0x10452ce6. Finally,
 *   it branches based on the value at param_3+0x28 to call either
 *   configure_sensor_readout_params_10500602 or toggle_pointer_field_flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t configure_object_with_mode_flags(int param_1,int param_2,void *param_3)

{
  char cVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),(void *)param_2);
  *(uint32_t *)(param_1 + 0x3c) = 0;
  (*(code *)0x10452b14/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  if (*(char *)((int)param_3 + 0x24) == '\0') {
    (*(code *)0x10452ce6/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
    uVar2 = 0;
  }
  else {
    cVar1 = *(char *)((int)param_3 + 0x25);
    if (cVar1 == '\x02') {
      uVar2 = *(uint32_t *)(param_1 + 0x14);
      uVar3 = 1;
    }
    else if (cVar1 == '\x04') {
      uVar2 = *(uint32_t *)(param_1 + 0x14);
      uVar3 = 2;
    }
    else {
      uVar2 = *(uint32_t *)(param_1 + 0x14);
      if (cVar1 == '\b') {
        uVar3 = 3;
      }
      else {
        uVar3 = 0;
      }
    }
    (*(code *)0x10452ce6/*ROM*/)(uVar2,uVar3);
    uVar2 = 1;
  }
  (*(code *)0x10452f4a/*ROM*/)(*(uint32_t *)(param_1 + 0x14),uVar2);
  (*(code *)0x10452e22/*ROM*/)(*(uint32_t *)(param_1 + 0x14),1);
  (*(code *)0x10452d86/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10452eae/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10452c52/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  if (*(int *)((int)param_3 + 0x28) == 1) {
    (*(code *)0x10452bc4/*ROM*/)(*(uint32_t *)(param_1 + 0x14),1);
    configure_sensor_readout_params_10500602(param_1,param_3);
  }
  else if (*(int *)((int)param_3 + 0x28) == 2) {
    (*(code *)0x10452bc4/*ROM*/)(*(uint32_t *)(param_1 + 0x14),2);
    configure_sensor_readout_params_10500602(param_1,param_3);
  }
  else {
    toggle_pointer_field_flags(param_1);
  }
  return 0;
}
