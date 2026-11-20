/* @k10d cls_105b572c_delete @ 0x1049a640
 * name: verified (structural evidence: stores vtable 0x105b572c to *this; heap_free(this) under (param_2 & 1))
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b572c (vtable 0x105b572c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b572c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b572c_delete(cls_105b572c *param_1,uint param_2)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t auStack_14 [8];
  
  puVar1 = (uint32_t *)auStack_14;
  if (param_1 != (cls_105b572c *)0x0) {
    param_1->field_0x1b4 = 0x105b572c/*ROM*/;
    free_object_if_flag_set_1049b220((int)&param_1->field_0xf4,2);
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
