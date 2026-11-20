/* @k10d cls_105b4104_delete @ 0x1049159e
 * name: verified (structural evidence: stores vtable 0x105b4104 to *this; heap_free(this) under (param_2 & 1))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b4104 (vtable 0x105b4104): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b4104 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b4104_delete(cls_105b4104 *param_1,uint param_2)

{
  void *pvVar1;
  
  if (param_1 != (cls_105b4104 *)0x0) {
    param_1->field_0x18 = (uintptr_t)(&DAT_105b4104/*ROM*/);
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,(char*)(param_1) ->field_0x0);
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,(char*)(param_1) ->field_0x4);
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,(char*)(param_1) ->field_0x8);
    free_heap_if_flagged_1045c402(&param_1->field_0x10,2);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
