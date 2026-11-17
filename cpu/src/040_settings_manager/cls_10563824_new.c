/* @k10d cls_10563824_new @ 0x1039a532
 * name: verified (structural evidence: heap_alloc(0x6c) when NULL; stores vtable 0x10563824; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10563824 (vtable 0x10563824, 0x6c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x6c) when NULL; stores vtable 0x10563824; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10563824_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x6c), param_1 != (uint32_t *)0x0)) {
    cls_10563dd8_new(param_1);
    *param_1 = (uint32_t)&DAT_10563824/*ROM*/;
    param_1[1] = (uint32_t)&DAT_10563894/*ROM*/;
    param_1[2] = (uint32_t)&DAT_105638bc/*ROM*/;
    param_1[9] = 0;
    initialize_lens_update_object(param_1 + 10,0xc);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    init_two_byte_pairs_to_one(param_1);
  }
  return param_1;
}
