/* @k10d cls_1059f088_new @ 0x104301ec
 * name: verified (structural evidence: heap_alloc(0xa8) when NULL; stores vtable 0x1059f088; returns param_1)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059f088 (vtable 0x1059f088, 0xa8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xa8) when NULL; stores vtable 0x1059f088; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059f088_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xa8), param_1 != (uint32_t *)0x0)) {
    cls_1059e100_new(param_1);
    cls_1059e458_new(param_1 + 1);
    cls_105a2c1c_new(param_1 + 2);
    cls_1059e490_new(param_1 + 7);
    cls_1059e478_new(param_1 + 8);
    cls_105a2a8c_new(param_1 + 9);
    *param_1 = 0x1059f088/*ROM*/;
    param_1[1] = 0x1059f0e8/*ROM*/;
    param_1[6] = 0x1059f108/*ROM*/;
    param_1[7] = 0x1059f120/*ROM*/;
    param_1[8] = 0x1059f140/*ROM*/;
    param_1[10] = 0x1059f158/*ROM*/;
    *(uint8_t *)(param_1 + 0xb) = 0;
    *(uint8_t *)((int)param_1 + 0x2d) = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(uint8_t *)(param_1 + 0x10) = 0;
    *(uint8_t *)((int)param_1 + 0x41) = 1;
    cls_1059e298_new(param_1 + 0x11);
    cls_105a2b30_new(param_1 + 0x19);
    cls_105a2bf8_new(param_1 + 0x1b);
    cls_105a2bf8_new(param_1 + 0x1d);
    cls_105a2af8_new(param_1 + 0x1f);
    cls_105a2af8_new(param_1 + 0x21);
    *(uint8_t *)(param_1 + 0x23) = 0;
    cls_105a2bf8_new(param_1 + 0x24);
    param_1[0x26] = 0;
    *(uint8_t *)(param_1 + 0x27) = 0;
    *(uint8_t *)((int)param_1 + 0x9d) = 0;
    *(uint8_t *)((int)param_1 + 0x9e) = 0;
    param_1[0x28] = 0;
    *(uint8_t *)(param_1 + 0x29) = 0;
  }
  return param_1;
}
