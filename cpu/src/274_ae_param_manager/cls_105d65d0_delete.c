/* @k10d cls_105d65d0_delete @ 0x10518176
 * name: verified (structural evidence: stores vtable 0x105d65d0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d65d0 (vtable 0x105d65d0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d65d0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d65d0_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 8) = 0x105d65d0/*ROM*/;
    cls_105b6554_delete(param_1 + 0x1e4,2);
    cls_105b6174_delete(param_1 + 0x1b4,2);
    cls_105d6608_delete(param_1 + 0x140,2);
    destroy_cls_105b6a00_members((uint32_t *)(param_1 + 0xfc),2);
    cls_105b6aa0_delete((void *)(param_1 + 0xec),2);
    destroy_cls_105b6a00_members((uint32_t *)(param_1 + 0xb4),2);
    destroy_cls_105b6a00_members((uint32_t *)(param_1 + 0x7c),2);
    destroy_cls_105b6a00_members((uint32_t *)(param_1 + 0x44),2);
    destroy_cls_105b6a00_members((uint32_t *)(param_1 + 0xc),2);
    cls_105b68b0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
