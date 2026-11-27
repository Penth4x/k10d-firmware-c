/* @k10d process_object_list_and_dispatch @ 0x10494018
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_object_list_and_dispatch(cls_105b47b4 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  /* B-3: stock passes incoming r4 = param_1 (mov r4,r10 in delay slot); was (uint32_t)param_1=0.
     B-10 cleanup: result is the plain r4 return, no 64-bit intermediate. */
  piVar2 = find_matching_list_entry((int)(param_1));
  param_1->field_0x60 = (uintptr_t)(piVar2);
  if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) {
    console_printf((void *)0x105b48b4/*ROM*/,(void *)piVar2,param_3,param_4);
  }
  piVar2 = (int *)((uintptr_t)(param_1->field43_0x48));
  if ((uint32_t)(piVar2) != param_1->field_0x4c) {
    do {
      iVar3 = *piVar2;
      iVar1 = read_byte_at_offset_8(iVar3);
      if ((iVar1 != 0) && (param_1->field_0x60 != (uint32_t)(piVar2))) {
        (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[8].fn)
                  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[8].adj + iVar3);
      }
      piVar2 = piVar2 + 1;
    } while ((uint32_t)(piVar2) != param_1->field_0x4c);
  }
  iVar1 = *(int *)(*(uint32_t *)(param_1->field_0x60) + 0xc);
  (((vtbl_entry*)(iVar1))[8].fn)(*(uint32_t *)(param_1->field_0x60) + (int)((vtbl_entry*)(iVar1))[8].adj);
  invoke_virtual_destroy_on_range((cls_105b48dc *)param_1);
  return;
}
