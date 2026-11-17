/* @k10d dispatch_event_or_fallback @ 0x10515e4e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_or_fallback(int param_1,int *param_2)

{
  int iVar1;
  
  if (((*(char *)((int)param_2 + 0x2d) == '\0') ||
      (*(short *)(param_2 + 0x1a4) == *(short *)((int)param_2 + 0x692))) ||
     (iVar1 = find_index_in_ushort_array(param_2,0x15), iVar1 == 0)) {
    call_two_helpers_on_object_10514cfa(param_1);
  }
  else {
    iVar1 = *(int *)*param_2;
    (**(code **)(iVar1 + 0x14))(*param_2 + (int)*(short *)(iVar1 + 0x10),0xf00005,param_2);
  }
  return;
}
