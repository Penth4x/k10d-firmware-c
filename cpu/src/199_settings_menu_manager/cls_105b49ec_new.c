/* @k10d cls_105b49ec_new @ 0x104946ea
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105b49ec; returns param_1)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b49ec (vtable 0x105b49ec, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105b49ec; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b49ec_new(cls_105b49ec *this_ptr)

{
  /* If this_ptr is already valid, skip allocation; otherwise heap-alloc 0x10 bytes.
   * On successful allocation (or pre-existing pointer), run the base-class init
   * and stamp the vtable pointer at offset 0xc. */
  if ((this_ptr != (cls_105b49ec *)0x0) ||
     (this_ptr = (cls_105b49ec *)heap_alloc((void *)0x10), this_ptr != (cls_105b49ec *)0x0)) {
    cls_105b45e4_new((cls_105b45e4 *)this_ptr);
    this_ptr->field_0xc = (uint32_t)&DAT_105b49ec/*ROM*/;
  }
  return (int)this_ptr;
}
