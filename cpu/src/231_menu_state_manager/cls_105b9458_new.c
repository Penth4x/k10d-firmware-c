/* @k10d cls_105b9458_new @ 0x104c3d32
 * name: verified (structural evidence: heap_alloc(0x214) when NULL; stores vtable 0x105b9458; returns param_1)
 * unit: 231_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9458 (vtable 0x105b9458, 0x214 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x214) when NULL; stores vtable 0x105b9458; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b9458 * cls_105b9458_new(cls_105b9458 *self)

{
  if ((self != (cls_105b9458 *)0x0) ||
     (self = (cls_105b9458 *)heap_alloc((void *)0x214), self != (cls_105b9458 *)0x0)) {
    cls_105b934c_new((cls_105b934c *)self);
    self->field_0x14 = (uint32_t)&DAT_105b9458/*ROM*/;
    self->field_0x18 = 0;
    self->field_0x1c = 2;
    self->field_0x20 = 0;
    self->field_0x24 = 0;
    self->field_0x28 = 0;
    alloc_two_word_pair_1045c3dc(&self->field_0x2c,0,0);
    cls_105b9400_new((cls_105b9400 *)&self->field_0x34);
    self->field_0x210 = 0;
  }
  return self;
}
