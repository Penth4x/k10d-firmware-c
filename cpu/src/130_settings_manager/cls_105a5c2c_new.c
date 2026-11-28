/* @k10d cls_105a5c2c_new @ 0x1045c936
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105a5c2c; returns param_1)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a5c2c (vtable 0x105a5c2c, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105a5c2c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105a5c2c * cls_105a5c2c_new(cls_105a5c2c *this,int event_id)

{
  /* If this is already non-NULL, skip allocation; otherwise heap-alloc 24 bytes.
   * If allocation succeeds (or this was already valid), initialise the slot. */
  if ((this != (cls_105a5c2c *)0x0) ||
     (this = (cls_105a5c2c *)heap_alloc((void *)0x18), this != (cls_105a5c2c *)0x0)) {
    this->field_0x14 = (uint32_t)&DAT_105a5c2c/*ROM*/;  /* vtable pointer */
    this->field_0x0 = 0;
    this->field_0x4 = 0;
    this->field_0x8 = 0;
    this->field_0xc = event_id;
    this->field_0x10 = 0;  /* original: stb (1-byte) at offset 0x10 */
    init_object_with_optional_heap_field((void *)this);
  }
  return this;
}
