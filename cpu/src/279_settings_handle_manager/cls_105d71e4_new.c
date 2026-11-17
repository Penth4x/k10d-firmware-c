/* @k10d cls_105d71e4_new @ 0x10520b4a
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105d71e4; returns param_1)
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d71e4 (vtable 0x105d71e4, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105d71e4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t * cls_105d71e4_new(uint16_t *param_1)

{
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x34), param_1 != (uint16_t *)0x0)) {
    cls_105b3d34_new(param_1);
    *(void **)(param_1 + 0x10) = &DAT_105d71e4/*ROM*/;
    param_1[0x14] = 0x120;
    param_1[0x15] = 0x78;
  }
  return param_1;
}
