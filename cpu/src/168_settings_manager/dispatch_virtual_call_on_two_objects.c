/* @k10d dispatch_virtual_call_on_two_objects @ 0x1047d46e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_on_two_objects(cls_105aac00 *param_1,uint32_t param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)get_next_node_pointer(param_1,param_3);
  (((vtbl_entry*)(*piVar1))[17].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[17].adj,param_2,param_3);
  piVar1 = (int *)read_field_at_offset_0xc(param_1);
  (((vtbl_entry*)(*piVar1))[16].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[16].adj,param_2,param_3);
  return;
}
