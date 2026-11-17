/* @k10d cls_105aa5ec_new @ 0x10478a70
 * name: verified (structural evidence: heap_alloc(0xea54) when NULL; stores vtable 0x105aa5ec; returns param_1)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aa5ec (vtable 0x105aa5ec, 0xea54 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xea54) when NULL; stores vtable 0x105aa5ec; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105aa5ec_new(uint32_t *param_1)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint8_t uStack_9;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xea54), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    *param_1 = 0x105aa5ec/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0x3a91] = 0;
    *(uint8_t *)(param_1 + 0x3a92) = 1;
    param_1[0x3a93] = 0;
    param_1[0x3a94] = 0;
    heap_alloc_one_byte_1045926e((int)&uStack_9);
    uVar1 = return_pentax_k10d_string_10459378(&uStack_9);
    param_1[4] = uVar1;
    fill_byte_array(param_1 + 8,0,0xea24);
    uVar1 = get_or_init_singleton_10530978();
    param_1[0x3a94] = uVar1;
    heap_free_if_flagged(&uStack_9,2);
  }
  return param_1;
}
