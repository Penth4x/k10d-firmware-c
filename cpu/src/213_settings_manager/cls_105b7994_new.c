/* @k10d cls_105b7994_new @ 0x104af9d0
 * name: verified (structural evidence: heap_alloc(0x6c) when NULL; stores vtable 0x105b7994; returns param_1)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7994 (vtable 0x105b7994, 0x6c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x6c) when NULL; stores vtable 0x105b7994; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b7994_new(uint32_t *param_1,uint8_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x6c), param_1 != (uint32_t *)0x0)) {
    cls_105a2c1c_new(param_1);
    cls_1059e4e0_new(param_1 + 5);
    cls_105b827c_new(param_1 + 6);
    cls_105d8ae4_new(param_1 + 7);
    param_1[4] = 0x105b7994/*ROM*/;
    param_1[5] = 0x105b7a3c/*ROM*/;
    param_1[6] = 0x105b7a64/*ROM*/;
    param_1[7] = 0x105b7ae4/*ROM*/;
    param_1[8] = 0;
    param_1[9] = 0;
    *(uint8_t *)(param_1 + 10) = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(uint8_t *)(param_1 + 0xe) = param_2;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *(uint8_t *)(param_1 + 0x15) = 0;
    param_1[0x16] = 0;
    iVar1 = extract_bitfield_with_offset(0x200,4,1);
    uVar2 = heap_alloc_2(iVar1 << 2);
    param_1[0x17] = uVar2;
    param_1[0x18] = 0;
    iVar1 = extract_bitfield_with_offset(0x200,4,1);
    uVar2 = heap_alloc_2(iVar1 << 2);
    param_1[0x19] = uVar2;
    param_1[0x1a] = 0;
  }
  return (int)param_1;
}
