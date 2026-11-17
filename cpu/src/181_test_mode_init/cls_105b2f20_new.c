/* @k10d cls_105b2f20_new @ 0x10486cfe
 * name: verified (structural evidence: heap_alloc(0x5c) when NULL; stores vtable 0x105b2f20; returns param_1)
 * unit: 181_test_mode_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b2f20 (vtable 0x105b2f20, 0x5c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x5c) when NULL; stores vtable 0x105b2f20; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b2f20_new(uint32_t *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x5c), param_1 != (uint32_t *)0x0)) {
    cls_105b2e98_new(param_1);
    cls_105a2a8c_new(param_1 + 0x13);
    param_1[0x12] = (uint32_t)&DAT_105b2f20/*ROM*/;
    param_1[0x14] = (uint32_t)&DAT_105b2f50/*ROM*/;
    *(uint8_t *)(param_1 + 0x16) = 0;
    uVar1 = get_or_init_singleton_104895da();
    param_1[0x15] = uVar1;
    create_kernel_object(param_1 + 0x13);
  }
  return (int)param_1;
}
