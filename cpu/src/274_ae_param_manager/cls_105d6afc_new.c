/* @k10d cls_105d6afc_new @ 0x1051b994
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x105d6afc; returns param_1)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6afc (vtable 0x105d6afc, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x105d6afc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t * cls_105d6afc_new(uint16_t *param_1)

{
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x30), param_1 != (uint16_t *)0x0)) {
    cls_105b3d9c_new((void *)param_1);
    cls_1059e478_new((void *)(param_1 + 0x16));
    *(void **)(param_1 + 0x10) = &DAT_105d6afc/*ROM*/;
    *(void **)(param_1 + 0x16) = &DAT_105d6b3c/*ROM*/;
  }
  return param_1;
}
