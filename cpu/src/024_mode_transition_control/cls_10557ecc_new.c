/* @k10d cls_10557ecc_new @ 0x1036dee4
 * name: verified (structural evidence: heap_alloc(0x2b8) when NULL; stores vtable 0x10557ecc; returns param_1)
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10557ecc (vtable 0x10557ecc, 0x2b8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2b8) when NULL; stores vtable 0x10557ecc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10557ecc_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x2b8), param_1 != (uint32_t *)0x0)) {
    cls_10557c88_new(param_1);
    *param_1 = (uint32_t)&DAT_10557ecc/*ROM*/;
    param_1[5] = 0;
    cls_10559dac_new(param_1 + 6);
    alloc_and_zero_struct_104bb416(param_1 + 0x10);
    cls_105b9458_new(param_1 + 0x27);
    param_1[0xac] = 1;
    *(uint8_t *)(param_1 + 0xad) = 0;
  }
  return param_1;
}
