/* @k10d cls_105b9bd0_new @ 0x104d0770
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105b9bd0; returns param_1)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9bd0 (vtable 0x105b9bd0, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105b9bd0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104d078a) overlaps instruction at (ram,0x104d0788)
    */

uint32_t * cls_105b9bd0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x20), param_1 != (uint32_t *)0x0)) {
    cls_1059e87c_new(param_1,0x20,0x21);
    *param_1 = 0x105b9bd0/*ROM*/;
    param_1[2] = 0;
    param_1[3] = 0;
    cls_105a2af8_new((void *)(param_1 + 4));
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return param_1;
}
