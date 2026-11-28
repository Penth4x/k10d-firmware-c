/* @k10d cls_1059e4e0_new @ 0x10428244
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x1059e4e0; returns param_1)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e4e0 (vtable 0x1059e4e0, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x1059e4e0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059e4e0_new(uint32_t *this_ptr)

{
  /* If this_ptr is already valid, skip allocation; otherwise heap_alloc(4) and
   * re-check.  In either case, stamp the vtable word into the object. */
  if ((this_ptr != (uint32_t *)0x0) ||
     (this_ptr = (uint32_t *)heap_alloc((void *)4), this_ptr != (uint32_t *)0x0)) {
    *this_ptr = (uint32_t)&DAT_1059e4e0/*ROM*/;
  }
  return;
}
