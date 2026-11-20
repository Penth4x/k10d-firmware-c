/* @k10d cls_105d51fc_new @ 0x10507150
 * name: verified (structural evidence: heap_alloc(0x330) when NULL; stores vtable 0x105d51fc; returns param_1)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d51fc (vtable 0x105d51fc, 0x330 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x330) when NULL; stores vtable 0x105d51fc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d51fc_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x330), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    cls_105a2b50_new(param_1 + 2);
    *param_1 = 0x105d51fc/*ROM*/;
    param_1[1] = 0x105d5234/*ROM*/;
    param_1[6] = 0x105d524c/*ROM*/;
    get_lens_fw_update_status((int)param_1 + 0x24, 2, 0x34, (code *)alloc_and_zero_struct_10508a50);
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    cls_105aadf4_new(param_1 + 0x25);
    cls_105aae7c_new(param_1 + 0x71);
    alloc_and_init_0x18_object(param_1 + 0xb9);
    param_1[0xbf] = 0;
    param_1[0xc0] = 0;
    param_1[0xc1] = 0;
    cls_105a2be0_new(param_1 + 0xc2);
    param_1[0xc4] = 0;
    param_1[0xc5] = 0;
    param_1[0xc6] = 0;
    *(uint8_t *)(param_1 + 199) = 0;
    *(uint8_t *)((int)param_1 + 0x31d) = 0;
    param_1[200] = 0;
    param_1[0xc9] = 0;
    cls_105a2af8_new(param_1 + 0xca);
  }
  return param_1;
}
