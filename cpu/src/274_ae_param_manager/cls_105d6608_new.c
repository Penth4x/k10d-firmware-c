/* @k10d cls_105d6608_new @ 0x10519e5a
 * name: verified (structural evidence: heap_alloc(0x74) when NULL; stores vtable 0x105d6608; returns param_1)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6608 (vtable 0x105d6608, 0x74 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x74) when NULL; stores vtable 0x105d6608; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d6608_new(uint32_t *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x74), param_1 != (uint32_t *)0x0)) {
    cls_105d6c2c_new(param_1);
    param_1[1] = 0x105d6608/*ROM*/;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    uVar1 = get_or_init_sram_buffer_1052c5b8();
    param_1[0x1b] = uVar1;
  }
  return param_1;
}
