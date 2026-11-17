/* @k10d cls_105aa498_new @ 0x10476236
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105aa498; returns param_1)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aa498 (vtable 0x105aa498, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105aa498; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t * cls_105aa498_new(uint32_t *param_1)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t *puVar2;
  uint8_t auStack_18 [16];
  
  puVar1 = auStack_18;
  puVar2 = auStack_18;
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x20), puVar2 = puVar1, param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    *param_1 = 0x105aa498/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(uint16_t *)(param_1 + 5) = 9999;
    puVar2[3] = 0;
    puVar2[7] = 0;
    puVar2[0xb] = 0;
    puVar2[0xf] = 0;
    alloc_and_init_small_struct_1045c524((uint16_t *)((int)param_1 + 0x16),(uint)_DAT_105a5c18/*ROM*/,1,1,puVar2[3],puVar2[7],
                 puVar2[0xb],puVar2[0xf]);
  }
  return param_1;
}
