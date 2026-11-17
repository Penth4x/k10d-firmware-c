/* @k10d cls_105aaf18_new @ 0x1047e68c
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105aaf18; returns param_1)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aaf18 (vtable 0x105aaf18, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105aaf18; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105aaf18_new(uint32_t *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x34), param_1 != (uint32_t *)0x0)) {
    param_1[0xc] = 0x105aaf18/*ROM*/;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(uint16_t *)(param_1 + 4) = 0;
    *(uint16_t *)((int)param_1 + 0x12) = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(uint8_t *)(param_1 + 7) = 0;
    *(uint8_t *)((int)param_1 + 0x1d) = 0;
    *(uint16_t *)((int)param_1 + 0x1e) = 0;
    *(uint8_t *)(param_1 + 8) = 0;
    *(uint16_t *)((int)param_1 + 0x22) = 0;
    param_1[9] = 0;
    *(uint16_t *)(param_1 + 10) = 0;
    param_1[0xb] = 0;
    uVar1 = get_or_init_global_buffer();
    param_1[2] = uVar1;
  }
  return param_1;
}
