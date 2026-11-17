/* @k10d cls_105d4c70_new @ 0x104fffee
 * name: verified (structural evidence: heap_alloc(0x44) when NULL; stores vtable 0x105d4c70; returns param_1)
 * unit: 264_settings_entry_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d4c70 (vtable 0x105d4c70, 0x44 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x44) when NULL; stores vtable 0x105d4c70; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d4c70_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x44), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e408_new(param_1 + 1);
    cls_105a2a8c_new(param_1 + 3);
    *param_1 = (uint32_t)&DAT_105d4c70/*ROM*/;
    param_1[1] = (uint32_t)&DAT_105d4ca8/*ROM*/;
    param_1[4] = (uint32_t)&DAT_105d4cd0/*ROM*/;
    param_1[5] = 0;
    param_1[6] = 0;
    cls_1059e288_new(param_1 + 7);
    *(uint16_t *)(param_1 + 0xd) = 0;
    *(uint16_t *)((int)param_1 + 0x36) = 0;
    param_1[0xe] = 2;
    param_1[0xf] = 0;
    *(uint8_t *)(param_1 + 0x10) = 0;
    *(uint8_t *)((int)param_1 + 0x41) = 0;
    *(uint8_t *)((int)param_1 + 0x42) = 0;
  }
  return param_1;
}
