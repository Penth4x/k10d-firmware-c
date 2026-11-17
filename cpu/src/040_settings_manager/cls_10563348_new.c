/* @k10d cls_10563348_new @ 0x10397faa
 * name: verified (structural evidence: heap_alloc(0x68) when NULL; stores vtable 0x10563348; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10563348 (vtable 0x10563348, 0x68 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x68) when NULL; stores vtable 0x10563348; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10563348_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x68), param_1 != (uint32_t *)0x0)) {
    cls_10563dd8_new(param_1);
    *param_1 = (uint32_t)&DAT_10563348/*ROM*/;
    param_1[1] = (uint32_t)&DAT_105633b8/*ROM*/;
    param_1[2] = (uint32_t)&DAT_105633e0/*ROM*/;
    param_1[9] = 0;
    initialize_lens_update_object(param_1 + 10,0x10);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *(uint16_t *)(param_1 + 0x17) = 0;
    *(uint16_t *)((int)param_1 + 0x5e) = 0;
    *(uint16_t *)(param_1 + 0x18) = 1;
    *(uint16_t *)((int)param_1 + 0x62) = 0;
    *(uint8_t *)(param_1 + 0x19) = 0;
    init_struct_fields_5c_64(param_1);
  }
  return param_1;
}
