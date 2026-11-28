/* @k10d cls_105a6f84_new @ 0x104606de
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105a6f84; returns param_1)
 * unit: 137_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6f84 (vtable 0x105a6f84, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105a6f84; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105a6f84 * cls_105a6f84_new(cls_105a6f84 *this_ptr)

{
  int byte_off;
  int remaining;

  /* If this_ptr is NULL, allocate a 0xc-byte object; otherwise use the given buffer. */
  if ((this_ptr != (cls_105a6f84 *)0x0) ||
     (this_ptr = (cls_105a6f84 *)heap_alloc((void *)0xc), this_ptr != (cls_105a6f84 *)0x0)) {
    /* Call the base-class constructor. */
    cls_105b5264_new((cls_105b5264 *)this_ptr);
    /* Install the vtable pointer. */
    this_ptr->field_0x0 = (uintptr_t)(&DAT_105a6f84/*ROM*/);
    /* Zero the 4 payload bytes (offsets 4..7). */
    byte_off = 0;
    remaining = 1;
    do {
      (&this_ptr->field_0x4)[byte_off] = 0;
      (&this_ptr->field_0x5)[byte_off] = 0;
      (&this_ptr->field_0x6)[byte_off] = 0;
      (&this_ptr->field_0x7)[byte_off] = 0;
      remaining = remaining + -1;
      byte_off = byte_off + 4;
    } while (-1 < remaining);
  }
  return this_ptr;
}
