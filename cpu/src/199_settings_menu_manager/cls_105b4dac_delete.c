/* @k10d cls_105b4dac_delete @ 0x10494cd2
 * name: verified (structural evidence: stores vtable 0x105b4dac to *this; heap_free(this) under (param_2 & 1))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b4dac (vtable 0x105b4dac): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b4dac to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b4dac_delete(cls_105b4dac *param_1,uint param_2)

{
  if (param_1 != (cls_105b4dac *)0x0) {
    param_1->field_0xc = (uint)(uint32_t *)&DAT_105b4dac/*ROM*/;
    free_heap_block_if_flagged_1045bc54(&param_1->field_0xa4,2);
    destroy_text_widget(&param_1->field_0x90,2);
    destroy_text_widget(&param_1->field_0x80,2);
    cls_105b44b4_delete((cls_105b44b4 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
