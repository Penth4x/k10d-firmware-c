/* @k10d dispatch_virtual_call_on_two_objects @ 0x1047d46e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_on_two_objects(void *param_1,uint32_t param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)get_next_node_pointer(param_1,param_3);
  (**(code **)(*piVar1 + 0x8c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x88),param_2,param_3);
  piVar1 = (int *)read_field_at_offset_0xc(param_1);
  (**(code **)(*piVar1 + 0x84))((int)piVar1 + (int)*(short *)(*piVar1 + 0x80),param_2,param_3);
  return;
}
