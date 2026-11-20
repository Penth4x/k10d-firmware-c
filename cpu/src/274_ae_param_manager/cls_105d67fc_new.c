/* @k10d cls_105d67fc_new @ 0x1051b908
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105d67fc; returns param_1)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d67fc (vtable 0x105d67fc, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105d67fc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105d67fc * cls_105d67fc_new(cls_105d67fc *param_1)

{
  void *pvVar1;
  
  if ((param_1 != (cls_105d67fc *)0x0) ||
     (param_1 = (cls_105d67fc *)heap_alloc((void *)0x10), param_1 != (cls_105d67fc *)0x0)) {
    cls_105b4bbc_new((cls_105b4bbc *)param_1);
    *(uint32_t *)(param_1 + 0xc) = (uint32_t)&DAT_105d67fc/*ROM*/;
    pvVar1 = (void *)cls_105d6afc_new(0);
    *(uint32_t *)(param_1 + 0x0) = (uint32_t)pvVar1;
  }
  return param_1;
}
