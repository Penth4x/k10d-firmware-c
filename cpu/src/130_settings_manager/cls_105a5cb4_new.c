/* @k10d cls_105a5cb4_new @ 0x1045ce6e
 * name: verified (structural evidence: heap_alloc(0x6c) when NULL; stores vtable 0x105a5cb4; returns param_1)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a5cb4 (vtable 0x105a5cb4, 0x6c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x6c) when NULL; stores vtable 0x105a5cb4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1045ce88) overlaps instruction at (ram,0x1045ce86)
    */

uint32_t * cls_105a5cb4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x6c), param_1 != (uint32_t *)0x0)) {
    allocate_cpucom_transaction_context(param_1,6,1);
    *param_1 = 0x105a5cb4/*ROM*/;
    param_1[1] = 0x105a5d44/*ROM*/;
    cls_105a5d5c_new((void *)(param_1 + 0x12));
    cls_105a2be0_new((void *)(param_1 + 0x15));
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  return param_1;
}
