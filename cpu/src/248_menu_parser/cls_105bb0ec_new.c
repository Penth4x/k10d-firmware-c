/* @k10d cls_105bb0ec_new @ 0x104dea28
 * name: verified (structural evidence: heap_alloc(0x98) when NULL; stores vtable 0x105bb0ec; returns param_1)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bb0ec (vtable 0x105bb0ec, 0x98 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x98) when NULL; stores vtable 0x105bb0ec; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105bb0ec_new(uint32_t *param_1)

{
  uint uVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x98), param_1 != (uint32_t *)0x0)) {
    cls_1059e128_new(param_1);
    cls_105b8234_new(param_1 + 0x10);
    *param_1 = 0x105bb0ec/*ROM*/;
    param_1[1] = 0x105bb1d4/*ROM*/;
    param_1[6] = 0x105bb1f4/*ROM*/;
    param_1[0xb] = 0x105bb224/*ROM*/;
    param_1[0xc] = 0x105bb23c/*ROM*/;
    param_1[0xd] = 0x105bb25c/*ROM*/;
    param_1[0x10] = 0x105bb29c/*ROM*/;
    param_1[0x11] = 0x20;
    param_1[0x12] = 0;
    uVar1 = find_first_free_bit(param_1);
    param_1[0x13] = uVar1;
    uVar1 = find_first_free_bit(param_1);
    param_1[0x14] = uVar1;
    uVar1 = find_first_free_bit(param_1);
    param_1[0x15] = uVar1;
    uVar1 = find_first_free_bit(param_1);
    param_1[0x16] = uVar1;
    uVar1 = find_first_free_bit(param_1);
    param_1[0x17] = uVar1;
    uVar1 = find_first_free_bit(param_1);
    param_1[0x18] = uVar1;
    uVar1 = find_first_free_bit(param_1);
    param_1[0x19] = uVar1;
    uVar1 = find_first_free_bit(param_1);
    param_1[0x1a] = uVar1;
    param_1[0x1b] = param_1[0x12];
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    *(uint8_t *)(param_1 + 0x25) = 0;
  }
  return param_1;
}
