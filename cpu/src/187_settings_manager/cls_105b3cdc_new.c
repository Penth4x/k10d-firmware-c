/* @k10d cls_105b3cdc_new @ 0x1048c43a
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x105b3cdc; returns param_1)
 * unit: 187_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3cdc (vtable 0x105b3cdc, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x105b3cdc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b3cdc_new(cls_105b3cdc *self)

{
  /* If self is already non-NULL use it; otherwise heap-allocate 0x24 bytes.
     Proceed with init only if the pointer is non-NULL after that. */
  if ((self != (cls_105b3cdc *)0x0) ||
     (self = (cls_105b3cdc *)heap_alloc((void *)0x24), self != (cls_105b3cdc *)0x0)) {
    /* vtable pointer at offset 0x20 (word store) */
    self->field_0x20 = (uint32_t)&DAT_105b3cdc/*ROM*/;
    /* halfword zero at offset 0x0 */
    self->field_0x0 = 0;
    /* halfword zero at offset 0x2 */
    self->field_0x2 = 0;
    /* byte 1 at offset 0x18 */
    self->field_0x18 = 1;
    /* byte 0 at offset 0x19 */
    self->field_0x19 = 0;
    /* word zero at offset 0x1c */
    self->field_0x1c = 0;
    /* word zero at offset 0x10 */
    self->field_0x10 = 0;
    /* word zero at offset 0x8 */
    self->field_0x8 = 0;
    /* word zero at offset 0xc */
    self->field_0xc = 0;
    /* word zero at offset 0x4 */
    self->field_0x4 = 0;
    /* halfword zero at offset 0x14 */
    self->field_0x14 = 0;
    /* halfword zero at offset 0x16 */
    self->field_0x16 = 0;
  }
  return;
}
