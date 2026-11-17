/* @k10d allocate_two_object_pair @ 0x104917a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * allocate_two_object_pair(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) || (param_1 = (int *)heap_alloc((void *)8), param_1 != (int *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    iVar1 = heap_alloc((void *)0x1c);
    if (iVar1 == 0) {
      *param_1 = 0;
    }
    else {
      cls_105b4160_new((void *)iVar1);
      *param_1 = iVar1;
    }
    iVar1 = heap_alloc((void *)0x1c);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      cls_105b4130_new((void *)iVar1);
    }
    param_1[1] = iVar1;
  }
  return param_1;
}
