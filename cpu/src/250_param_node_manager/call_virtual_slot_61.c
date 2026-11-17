/* @k10d call_virtual_slot_61 @ 0x104df3f4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 250_param_node_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_61(int *param_1)

{
  (*(code *)0x1052bdd2/*ROM*/)(param_1 + 0x27,1);
  (**(code **)(*param_1 + 0xf4))((int)*(short *)(*param_1 + 0xf0) + (int)param_1);
  return;
}
