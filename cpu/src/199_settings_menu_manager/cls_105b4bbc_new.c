/* @k10d cls_105b4bbc_new @ 0x10494b04
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105b4bbc; returns param_1)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b4bbc (vtable 0x105b4bbc, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105b4bbc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b4bbc_new(int param_1)

{
  if ((param_1 != 0) || (param_1 = heap_alloc((void *)0x10), (uint32_t *)param_1 != (uint32_t *)0x0)) {
    cls_105b49ec_new((uint32_t *)param_1);
    *(void **)(param_1 + 0xc) = &DAT_105b4bbc/*ROM*/;
  }
  return (int)(uint32_t *)param_1;
}
