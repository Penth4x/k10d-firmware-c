/* @k10d cls_105a9ac8_new @ 0x10470edc
 * name: verified (structural evidence: heap_alloc(0x64) when NULL; stores vtable 0x105a9ac8; returns param_1)
 * unit: 163_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a9ac8 (vtable 0x105a9ac8, 0x64 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x64) when NULL; stores vtable 0x105a9ac8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a9ac8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)100), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    cls_105a2c1c_new(param_1 + 2);
    *param_1 = 0x105a9ac8/*ROM*/;
    param_1[1] = 0x105a9b00/*ROM*/;
    param_1[6] = 0x105a9b18/*ROM*/;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    *(uint8_t *)(param_1 + 0x11) = 0xff;
    *(uint8_t *)((int)param_1 + 0x45) = 0;
    param_1[0x12] = 0;
    cls_105a2af8_new(param_1 + 0x13);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  return param_1;
}
