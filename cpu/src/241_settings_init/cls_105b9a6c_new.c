/* @k10d cls_105b9a6c_new @ 0x104cf820
 * name: verified (structural evidence: heap_alloc(0x38) when NULL; stores vtable 0x105b9a6c; returns param_1)
 * unit: 241_settings_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9a6c (vtable 0x105b9a6c, 0x38 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x38) when NULL; stores vtable 0x105b9a6c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104cf83a) overlaps instruction at (ram,0x104cf838)
    */

int cls_105b9a6c_new(void *param_1)

{
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x38), param_1 != (void *)0x0)) {
    cls_105b9664_new(param_1,2);
    *(uint32_t *)((int)param_1 + 0x28) = 0x105b9a6c/*ROM*/;
    *(uint32_t *)((int)param_1 + 0x2c) = 0xffffffff;
    *(uint32_t *)((int)param_1 + 0x30) = 0xffffffff;
    *(uint32_t *)((int)param_1 + 0x34) = 0;
  }
  return (int)param_1;
}
