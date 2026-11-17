/* @k10d cls_105d67cc_new @ 0x1051b7ae
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x105d67cc; returns param_1)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d67cc (vtable 0x105d67cc, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x105d67cc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1051b7c8) overlaps instruction at (ram,0x1051b7c6)
    */

int cls_105d67cc_new(void *param_1)

{
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x30), param_1 != (void *)0x0)) {
    cls_105b9664_new(param_1,1);
    *(uint32_t *)((int)param_1 + 0x28) = 0x105d67cc/*ROM*/;
    *(uint32_t *)((int)param_1 + 0x2c) = 0;
  }
  return (int)param_1;
}
