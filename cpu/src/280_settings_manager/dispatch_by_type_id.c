/* @k10d dispatch_by_type_id @ 0x105223f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Routes a call to one of two handlers based on whether the second argument equals 6.
 * summary:
 *   The function checks if param_2 is 6. If true, it calls
 *   dispatch_mode_transition_10522484 with param_1 and param_3. Otherwise, it calls
 *   dispatch_event_to_object_10522406 with param_1, param_2 cast to char, and param_3 cast
 *   to char. It returns the result of the called function. The specific subsystem is not
 *   identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_by_type_id(int *param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  if (param_2 == 6) {
    uVar1 = dispatch_mode_transition_10522484(param_1,param_3);
  }
  else {
    uVar1 = dispatch_event_to_object_10522406(param_1,(char)param_2,(char)param_3);
  }
  return uVar1;
}
