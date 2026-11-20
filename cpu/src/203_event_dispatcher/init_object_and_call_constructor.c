/* @k10d init_object_and_call_constructor @ 0x10499bb0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_object_and_call_constructor(cls_105b5694 *param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  
  param_1->field_0x54 = 0xfffffffe;
  param_1->field_0x4 = param_2;
  iVar2 = 0;
  iVar1 = (*(code *)0x1049a528/*ROM*/)();
  if (iVar1 != 0) {
    iVar2 = cls_105b9724_new((cls_105b9724 *)0x0);
    iVar1 = process_object_with_callback((int)param_1,iVar2);
    if (iVar1 == 0) {
      if (iVar2 != 0) {
        (((vtbl_entry*)(*(int *)(iVar2 + 4)))[1].fn)(*(short *)(*(int *)(iVar2 + 4) + 8) + iVar2,3);
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}
