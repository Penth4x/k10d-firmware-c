/* @k10d cls_10565040_new @ 0x103a57ec
 * name: verified (structural evidence: heap_alloc(0x13c) when NULL; stores vtable 0x10565040; returns param_1)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10565040 (vtable 0x10565040, 0x13c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x13c) when NULL; stores vtable 0x10565040; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10565040_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x13c), param_1 != (uint32_t *)0x0)) {
    cls_105643d0_new(param_1);
    *param_1 = 0x10565040/*ROM*/;
    param_1[0x10] = 0;
    *(uint8_t *)(param_1 + 0x11) = 0;
    *(uint8_t *)((int)param_1 + 0x45) = 0;
    *(uint8_t *)((int)param_1 + 0x46) = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    initialize_lens_update_object(param_1 + 0x3c,0x10);
    initialize_lens_update_object(param_1 + 0x40,0x10);
    *(uint16_t *)(param_1 + 0x44) = 0;
    *(uint16_t *)((int)param_1 + 0x112) = 0;
    *(uint16_t *)(param_1 + 0x45) = 0x100;
    *(uint16_t *)((int)param_1 + 0x116) = 0;
    *(uint16_t *)(param_1 + 0x46) = 0;
    *(uint16_t *)((int)param_1 + 0x11a) = 0;
    param_1[0x47] = 1;
    param_1[0x48] = 1;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    *(uint16_t *)(param_1 + 0x4c) = 0;
    *(uint16_t *)((int)param_1 + 0x132) = 0;
    *(uint16_t *)(param_1 + 0x4d) = 0;
    *(uint16_t *)((int)param_1 + 0x136) = 0;
    *(uint16_t *)(param_1 + 0x4e) = 0;
  }
  return param_1;
}
