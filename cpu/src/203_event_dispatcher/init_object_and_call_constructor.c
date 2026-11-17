/* @k10d init_object_and_call_constructor @ 0x10499bb0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_object_and_call_constructor(int param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  
  *(uint32_t *)(param_1 + 0x54) = 0xfffffffe;
  *(uint32_t *)(param_1 + 4) = param_2;
  iVar2 = 0;
  iVar1 = (*(code *)0x1049a528/*ROM*/)();
  if (iVar1 != 0) {
    iVar2 = cls_105b9724_new((uint32_t *)0x0);
    iVar1 = process_object_with_callback(param_1,iVar2);
    if (iVar1 == 0) {
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 4) + 0xc))(*(short *)(*(int *)(iVar2 + 4) + 8) + iVar2,3);
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}
