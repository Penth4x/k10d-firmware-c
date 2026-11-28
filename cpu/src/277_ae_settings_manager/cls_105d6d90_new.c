/* @k10d cls_105d6d90_new @ 0x1051d6aa
 * name: verified (structural evidence: heap_alloc(0x70) when NULL; stores vtable 0x105d6d90; returns param_1)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6d90 (vtable 0x105d6d90, 0x70 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x70) when NULL; stores vtable 0x105d6d90; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d6d90_new(cls_105d6d90 *obj)

{
  int zero_count;
  int zero_off;

  if ((obj != (cls_105d6d90 *)0x0) ||
     (obj = (cls_105d6d90 *)heap_alloc((void *)0x70), obj != (cls_105d6d90 *)0x0)) {
    obj->field_0x6c = (uintptr_t)(&DAT_105d6d90/*ROM*/);
    obj->field_0x68 = 0xffff;
    obj->field_0x6a = 0xff;
    zero_count = 0xc;
    zero_off = 0;
    do {
      *(uint32_t *)((int)&obj->field_0x0 + zero_off) = 0;
      *(uint32_t *)((int)&obj->field_0x4 + zero_off) = 0;
      zero_count = zero_count + -1;
      zero_off = zero_off + 8;
    } while (-1 < zero_count);
    obj->field_0x64 = 0xfffffffe;
  }
  return;
}
