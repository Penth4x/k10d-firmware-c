/* @k10d cls_1059ef7c_new @ 0x1042f35c
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x1059ef7c; returns param_1)
 * unit: 112_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059ef7c (vtable 0x1059ef7c, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x1059ef7c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059ef7c_new(uint32_t *param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t *puVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    puVar1 = param_1;
    if ((param_1 != (uint32_t *)0x0) ||
       (puVar1 = (uint32_t *)heap_alloc((void *)0x14), puVar1 != (uint32_t *)0x0)) {
      puVar1[4] = 0x1059ef6c/*ROM*/;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(uint8_t *)(puVar1 + 3) = 0;
    }
    param_1[4] = 0x1059ef7c/*ROM*/;
    param_1[5] = param_3;
    *param_1 = param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    *(uint8_t *)(param_1 + 3) = 0;
  }
  return param_1;
}
