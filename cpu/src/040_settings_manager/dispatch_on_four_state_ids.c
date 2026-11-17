/* @k10d dispatch_on_four_state_ids @ 0x1039319a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper then invokes a function pointer if a state field matches one of four
 *   specific IDs.
 * summary:
 *   The function first calls map_status_code_to_event. It then reads an integer from offset
 *   0xf4 of the object passed in param_1. If this value is 0x5060003, 0x5060013, 0x5060022,
 *   or 0x5060031, it calls the function at 0x10398cf0 with param_1 + 8 as an argument. The
 *   specific subsystem is not identifiable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_four_state_ids(int param_1)

{
  int iVar1;
  
  map_status_code_to_event(__frv_reg_unset(4));
  iVar1 = *(int *)(param_1 + 0xf4);
  if ((((iVar1 == 0x5060003) || (iVar1 == 0x5060013)) || (iVar1 == 0x5060022)) ||
     (iVar1 == 0x5060031)) {
    (*(code *)0x10398cf0/*ROM*/)(param_1 + 8);
  }
  return;
}
