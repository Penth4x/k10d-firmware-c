/* @k10d cls_1059cbf0_new @ 0x1041ab6e
 * name: verified (structural evidence: heap_alloc(0x90) when NULL; stores vtable 0x1059cbf0; returns param_1)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059cbf0 (vtable 0x1059cbf0, 0x90 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x90) when NULL; stores vtable 0x1059cbf0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059cbf0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x90), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e458_new(param_1 + 1);
    cls_1059e408_new(param_1 + 2);
    cls_105a2c1c_new(param_1 + 4);
    *param_1 = 0x1059cbf0/*ROM*/;
    param_1[1] = 0x1059cce0/*ROM*/;
    param_1[2] = 0x1059cd00/*ROM*/;
    param_1[8] = 0x1059cd28/*ROM*/;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *(uint8_t *)(param_1 + 0x17) = 0;
    *(uint8_t *)((int)param_1 + 0x5d) = 0;
    *(uint8_t *)((int)param_1 + 0x5e) = 0;
    *(uint8_t *)((int)param_1 + 0x5f) = 1;
    *(uint8_t *)(param_1 + 0x18) = 0;
    param_1[0x19] = 0;
    *(uint8_t *)(param_1 + 0x1a) = 0;
    *(uint8_t *)((int)param_1 + 0x69) = 0;
    *(uint8_t *)((int)param_1 + 0x6a) = 0;
    *(uint8_t *)((int)param_1 + 0x6b) = 1;
    *(uint8_t *)(param_1 + 0x1b) = 0;
    param_1[0x1c] = 0;
    *(uint8_t *)(param_1 + 0x1e) = 0;
    cls_105a2af8_new(param_1 + 0x1f);
    cls_105a2af8_new(param_1 + 0x21);
    *(uint8_t *)(param_1 + 0x23) = 0;
    *(uint8_t *)((int)param_1 + 0x8d) = 0;
    *(uint8_t *)((int)param_1 + 0x8e) = 0;
  }
  return param_1;
}
