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

int cls_105a0828_new(cls_105a0828 *param_1,uint32_t *param_2)

{
  int iVar1;
  uint8_t uVar2;
  
  if ((param_1 != (cls_105a0828 *)0x0) || (param_1 = (cls_105a0828 *)heap_alloc((void *)300), param_1 != (cls_105a0828 *)0x0)) {
    cls_1059e330_new((cls_1059e330 *)param_1);
    param_1->field_0x4 = 0x105a0828/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[0] = (uint32_t)((void *)0x105a08b8/*ROM*/);
    param_1->field_0x10c = 0;
    param_1->field_0x110 = 0;
    param_1->field_0x114 = 0;
    param_1->field_0x118 = 0;
    param_1->field_0x11c = 0;
    param_1->field_0x120 = 0;
    param_1->field_0x124 = 0;
    param_1->field_0x126 = 0;
    param_1->field_0x127 = 0;
    param_1->field_0x128 = 0;
    iVar1 = param_2[4];
    param_1->field_0x11c = iVar1;
    param_1->field_0x120 = iVar1 << 1;
    param_1->field_0x124 = (short)(3 << ((byte)(iVar1 << 1) & 0xf));
    uVar2 = (uint8_t)(1 << ((byte)iVar1 & 0xf));
    param_1->field_0x126 = uVar2;
    param_1->field_0x127 = uVar2;
    param_1->field_0x110 = param_2[1];
    param_1->field_0x114 = param_2[2];
    param_1->field_0x118 = param_2[3];
    param_1->field_0x10c = *param_2;
    set_value_if_valid(param_1,param_2[5]);
    call_helper_with_offset_arg_1042778a((int)param_1,param_2[6]);
    param_1->field_0x128 = param_2[7];
  }
  return (int)param_1;
}
