/* @k10d cls_10557d80_new @ 0x1036d01c
 * name: verified (structural evidence: heap_alloc(0x254) when NULL; stores vtable 0x10557d80; returns param_1)
 * unit: 022_capture_settings_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10557d80 (vtable 0x10557d80, 0x254 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x254) when NULL; stores vtable 0x10557d80; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10557d80_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x254), param_1 != (uint32_t *)0x0)) {
    cls_10557c88_new(param_1);
    *param_1 = (uint32_t)&DAT_10557d80/*ROM*/;
    *(uint8_t *)(param_1 + 5) = 0;
    *(uint8_t *)((int)param_1 + 0x15) = 0;
    param_1[6] = 0;
    init_0x50_byte_object_1051e422((void *)(param_1 + 7));
    *(uint8_t *)(param_1 + 0x1b) = 0;
    param_1[0x1c] = 0;
    cls_105592e8_new(param_1 + 0x1d);
    cls_10559448_new(param_1 + 0x39);
    cls_105590b8_new(param_1 + 0x5c);
    cls_1056b154_new(param_1 + 0x87);
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    *(uint16_t *)(param_1 + 0x94) = 0;
    *(uint16_t *)((int)param_1 + 0x252) = 0;
  }
  return param_1;
}
