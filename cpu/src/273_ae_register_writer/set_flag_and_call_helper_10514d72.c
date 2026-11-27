/* @k10d set_flag_and_call_helper_10514d72 @ 0x10514d72
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Sets a boolean flag at offset 0x29e and conditionally calls a helper or sets another
 *   flag.
 * summary:
 *   The function takes an object pointer and a boolean-like parameter. If the parameter is
 *   zero, it calls set_flg_obj on a field at offset 0x34c. Otherwise, it calls
 *   eventflag_clr_flg. In both cases, it stores the non-zero status of the parameter into a
 *   boolean field at offset 0x29e. The specific subsystem is not identifiable from the
 *   provided code and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_call_helper_10514d72(int param_1,int param_2)

{
  if (param_2 == 0) {
    set_flg_obj((uint32_t *)(param_1 + 0x34c), 0x8);
  }
  else {
    eventflag_clr_flg((uint32_t *)(uint32_t)param_1,(uint32_t)param_2);
  }
  *(bool *)(param_1 + 0x29e) = param_2 != 0;
  return;
}
