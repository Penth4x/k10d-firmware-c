/* @k10d cls_105a0828_new @ 0x1043d4cc
 * name: verified (structural evidence: heap_alloc(0x12c) when NULL; stores vtable 0x105a0828; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0828 (vtable 0x105a0828, 0x12c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x12c) when NULL; stores vtable 0x105a0828; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105a0828_new(uint32_t *param_1,uint32_t *param_2)

{
  int iVar1;
  uint8_t uVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)300), param_1 != (uint32_t *)0x0)) {
    cls_1059e330_new(param_1);
    param_1[1] = 0x105a0828/*ROM*/;
    param_1[2] = 0x105a08b8/*ROM*/;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    *(uint16_t *)(param_1 + 0x49) = 0;
    *(uint8_t *)((int)param_1 + 0x126) = 0;
    *(uint8_t *)((int)param_1 + 0x127) = 0;
    param_1[0x4a] = 0;
    iVar1 = param_2[4];
    param_1[0x47] = iVar1;
    param_1[0x48] = iVar1 << 1;
    *(short *)(param_1 + 0x49) = (short)(3 << ((byte)(iVar1 << 1) & 0xf));
    uVar2 = (uint8_t)(1 << ((byte)iVar1 & 0xf));
    *(uint8_t *)((int)param_1 + 0x126) = uVar2;
    *(uint8_t *)((int)param_1 + 0x127) = uVar2;
    param_1[0x44] = param_2[1];
    param_1[0x45] = param_2[2];
    param_1[0x46] = param_2[3];
    param_1[0x43] = *param_2;
    set_value_if_valid(param_1,param_2[5]);
    call_helper_with_offset_arg_1042778a((int)param_1,param_2[6]);
    param_1[0x4a] = param_2[7];
  }
  return (int)param_1;
}
