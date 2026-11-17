/* @k10d cls_10562400_new @ 0x10391074
 * name: verified (structural evidence: heap_alloc(0x2c68) when NULL; stores vtable 0x10562400; returns param_1)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10562400 (vtable 0x10562400, 0x2c68 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c68) when NULL; stores vtable 0x10562400; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10562400_new(uint32_t *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x2c68), param_1 != (uint32_t *)0x0)) {
    cls_105bb314_new(param_1);
    cls_1059e478_new(param_1 + 0xb07);
    cls_105a2a8c_new(param_1 + 0xb08);
    *param_1 = 0x10562400/*ROM*/;
    param_1[1] = 0x10562540/*ROM*/;
    param_1[6] = 0x10562560/*ROM*/;
    param_1[0xb] = 0x10562590/*ROM*/;
    param_1[0xc] = 0x105625a8/*ROM*/;
    param_1[0xd] = 0x105625c8/*ROM*/;
    param_1[0x10] = 0x10562608/*ROM*/;
    param_1[0x26] = 0x10562650/*ROM*/;
    param_1[0xb07] = 0x10562698/*ROM*/;
    param_1[0xb09] = 0x105626b0/*ROM*/;
    uVar1 = call_single_helper_and_return();
    param_1[0xb0a] = uVar1;
    uVar1 = call_single_helper_and_return();
    param_1[0xb0b] = uVar1;
    uVar1 = call_single_helper_and_return();
    param_1[0xb0c] = uVar1;
    uVar1 = call_single_helper_and_return();
    param_1[0xb0d] = uVar1;
    *(uint8_t *)(param_1 + 0xb0e) = 0;
    param_1[0xb0f] = 0;
    param_1[0xb10] = 0;
    *(uint8_t *)(param_1 + 0xb11) = 0;
    param_1[0xb12] = 0;
    *(uint8_t *)(param_1 + 0xb13) = 0;
    *(uint8_t *)((int)param_1 + 0x2c4d) = 0;
    *(uint8_t *)((int)param_1 + 0x2c4e) = 0;
    *(uint8_t *)((int)param_1 + 0x2c4f) = 1;
    cls_105626c8_new(param_1 + 0xb14);
  }
  return param_1;
}
