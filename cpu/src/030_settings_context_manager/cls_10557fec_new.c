/* @k10d cls_10557fec_new @ 0x10370720
 * name: verified (structural evidence: heap_alloc(0xd8) when NULL; stores vtable 0x10557fec; returns param_1)
 * unit: 030_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10557fec (vtable 0x10557fec, 0xd8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xd8) when NULL; stores vtable 0x10557fec; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10557fec_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xd8), param_1 != (uint32_t *)0x0)) {
    cls_10557c88_new(param_1);
    *param_1 = (uint32_t)&DAT_10557fec/*ROM*/;
    param_1[5] = 0;
    cls_1055a164_new(param_1 + 6);
    cls_1055a090_new(param_1 + 0x10);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0x2e;
    param_1[0x1c] = 0;
    *(uint8_t *)(param_1 + 0x1d) = 0;
    *(uint8_t *)((int)param_1 + 0x75) = 0;
    alloc_and_zero_struct_104bb416(param_1 + 0x1e);
    *(uint8_t *)(param_1 + 0x35) = 0;
  }
  return param_1;
}
