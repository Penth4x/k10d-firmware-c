/* @k10d cls_1059a294_delete @ 0x1040c47a
 * name: verified (structural evidence: stores vtable 0x1059a294 to *this; heap_free(this) under (param_2 & 1))
 * unit: 096_sr_debug_menu (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059a294 (vtable 0x1059a294): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059a294 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059a294_delete(uint32_t *param_1,uint param_2)

{
  void *pvVar1;
  
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x1059a294/*ROM*/;
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,(void *)param_1[1]);
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,(void *)param_1[2]);
    cls_105a2af8_delete(param_1 + 5,2);
    reset_vtable_and_free_if_flagged_10428182(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
