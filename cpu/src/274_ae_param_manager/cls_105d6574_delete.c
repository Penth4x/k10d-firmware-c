/* @k10d cls_105d6574_delete @ 0x10517e94
 * name: verified (structural evidence: stores vtable 0x105d6574 to *this; heap_free(this) under (param_2 & 1))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d6574 (vtable 0x105d6574): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d6574 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d6574_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 0x1c) = 0x105d6574/*ROM*/;
    lens_fw_update_teardown();
    cls_105b68e8_delete((void *)(param_1 + 0x24),2);
    cls_105b6358_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
