/* @k10d cls_105a7640_new @ 0x10462b3a
 * name: verified (structural evidence: heap_alloc(0x48) when NULL; stores vtable 0x105a7640; returns param_1)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a7640 (vtable 0x105a7640, 0x48 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x48) when NULL; stores vtable 0x105a7640; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10462b54) overlaps instruction at (ram,0x10462b52)
    */

uint32_t * cls_105a7640_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x48), param_1 != (uint32_t *)0x0)) {
    allocate_cpucom_transaction_context(param_1,0x100,0x100);
    *param_1 = 0x105a7640/*ROM*/;
    param_1[1] = 0x105a76d0/*ROM*/;
  }
  return param_1;
}
