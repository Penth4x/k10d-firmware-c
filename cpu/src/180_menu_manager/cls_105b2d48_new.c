/* @k10d cls_105b2d48_new @ 0x1048665e
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105b2d48; returns param_1)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b2d48 (vtable 0x105b2d48, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105b2d48; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Object factory: if param nonzero OR setting[8]!=0, allocate menu-manager object with vtable
   0x105b2d48 */

uint32_t * cls_105b2d48_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    cls_1059e380_new(param_1);
    *param_1 = (uint32_t)&DAT_105b2d48/*ROM*/;
    param_1[1] = 0;
  }
  return param_1;
}
