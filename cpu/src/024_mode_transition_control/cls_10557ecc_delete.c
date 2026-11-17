/* @k10d cls_10557ecc_delete @ 0x1036df52
 * name: verified (structural evidence: stores vtable 0x10557ecc to *this; heap_free(this) under (param_2 & 1))
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10557ecc (vtable 0x10557ecc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10557ecc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10557ecc_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *(uint32_t **)param_1 = &DAT_10557ecc/*ROM*/;
    cls_105b9458_delete(param_1 + 0x27,2);
    destroy_five_member_objects(param_1 + 0x10,2);
    cls_10559dac_delete(param_1 + 6,2);
    cls_10557c88_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
