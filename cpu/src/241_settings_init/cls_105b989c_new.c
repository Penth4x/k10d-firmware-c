/* @k10d cls_105b989c_new @ 0x104cf6e4
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105b989c; returns param_1)
 * unit: 241_settings_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b989c (vtable 0x105b989c, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105b989c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b989c_new(int param_1)

{
  if ((param_1 != 0) || (param_1 = heap_alloc((void *)0x10), param_1 != 0)) {
    cls_105b4bbc_new(param_1);
    *(void **)(param_1 + 0xc) = &DAT_105b989c/*ROM*/;
  }
  return param_1;
}
