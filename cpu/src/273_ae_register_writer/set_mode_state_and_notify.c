/* @k10d set_mode_state_and_notify @ 0x10514d40
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_mode_state_and_notify(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else if (param_3 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = 2;
  }
  issue_sequential_channel_commands(*(void **)(param_1 + 0x34),iVar1);
  *(char *)(param_1 + 0x29d) = (char)param_2;
  return;
}
