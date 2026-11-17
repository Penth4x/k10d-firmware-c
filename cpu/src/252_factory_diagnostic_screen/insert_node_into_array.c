/* @k10d insert_node_into_array @ 0x104e5250
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * insert_node_into_array(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)advance_buffer_read_pointer_104e44ae(*(uint32_t *)(param_1 + 0x74));
  *piVar1 = param_3 + 100;
  *(int **)(*(int *)(param_1 + 0x40) + param_3 * 4) = piVar1;
  if (param_2 == -1) {
    (**(code **)(piVar1[6] + 0x3c))((int)*(short *)(piVar1[6] + 0x38) + (int)piVar1,0);
  }
  else {
    (**(code **)(piVar1[6] + 0x3c))
              ((int)*(short *)(piVar1[6] + 0x38) + (int)piVar1,
               *(uint32_t *)(*(int *)(param_1 + 0x40) + (param_2 + -100) * 4));
  }
  increment_field_at_offset_0x14(param_1);
  return piVar1;
}
