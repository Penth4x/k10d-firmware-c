/* @k10d cls_105d8b38_new @ 0x1052216e
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x105d8b38; returns param_1)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d8b38 (vtable 0x105d8b38, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x105d8b38; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d8b38_new(uint32_t *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x2c), param_1 != (uint32_t *)0x0)) {
    cls_1059e478_new(param_1);
    cls_10621c28_new(param_1 + 1);
    *param_1 = 0x105d8b38/*ROM*/;
    param_1[1] = 0x105d8b58/*ROM*/;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    iVar1 = extract_bitfield_with_offset(0xb,4,0);
    uVar2 = heap_alloc_2(iVar1 << 2);
    param_1[6] = uVar2;
    uVar2 = extract_bitfield_with_offset(0xb,4,0);
    param_1[7] = uVar2;
    *(uint8_t *)(param_1 + 8) = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    clear_flag_and_call_two_helpers_1052226c(param_1);
  }
  return param_1;
}
