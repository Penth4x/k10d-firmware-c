/* @k10d init_object_and_dispatch_mode @ 0x10501252
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object's sub-structure and flag, then invokes a series of methods on a
 *   sub-object and dispatches a mode value based on input parameters.
 * summary:
 *   The function calls set_pointer_and_clear_flag to initialize a sub-structure at offset
 *   0x1c, sets a flag at offset 0x3c to 1, and then invokes six functions at fixed
 *   addresses using the pointer at offset 0x14 as the first argument. It evaluates fields
 *   at offsets 0x20 and 0x18 of param_3 to determine a mode value (0, 1, or 2) which is
 *   passed to a function at 0x10452bc4. Finally, it calls
 *   configure_and_start_sensor_readout with the original parameters. The pattern suggests a
 *   state machine or object initialization sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_and_dispatch_mode(int param_1,int param_2,void *param_3)

{
  uint32_t uVar1;
  
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),(void *)param_2);
  *(uint32_t *)(param_1 + 0x3c) = 1;
  (*(code *)0x10452b14/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10452ce6/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10452f4a/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10452e22/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10452d86/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10452eae/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  if (*(int *)((int)param_3 + 0x20) == 1) {
    if (*(int *)((int)param_3 + 0x18) == 1) {
      (*(code *)0x10452c52/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
      uVar1 = 1;
    }
    else {
      if (*(int *)((int)param_3 + 0x18) != 2) goto LAB_1050132a;
      (*(code *)0x10452c52/*ROM*/)(*(uint32_t *)(param_1 + 0x14),3);
      uVar1 = 1;
    }
  }
  else {
    if ((*(int *)((int)param_3 + 0x20) != 2) || (*(int *)((int)param_3 + 0x18) != 2)) {
LAB_1050132a:
      toggle_pointer_field_flags(param_1);
      return 0;
    }
    (*(code *)0x10452c52/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
    uVar1 = 2;
  }
  (*(code *)0x10452bc4/*ROM*/)(*(uint32_t *)(param_1 + 0x14),uVar1);
  configure_and_start_sensor_readout(param_1,param_3);
  return 0;
}
