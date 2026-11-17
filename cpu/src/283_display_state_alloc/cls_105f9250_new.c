/* @k10d cls_105f9250_new @ 0x10527b78
 * name: verified (structural evidence: heap_alloc(0x254) when NULL; stores vtable 0x105f9250; returns param_1)
 * unit: 283_display_state_alloc (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105f9250 (vtable 0x105f9250, 0x254 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x254) when NULL; stores vtable 0x105f9250; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105f9250_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  uint32_t *puVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x254), param_1 != (uint32_t *)0x0)) {
    puVar3 = param_1;
    if ((param_1 != (uint32_t *)0x0) ||
       (puVar3 = (uint32_t *)heap_alloc((void *)0x20c), puVar3 != (uint32_t *)0x0)) {
      puVar3[0x82] = (uint32_t)&DAT_105f91c0/*ROM*/;
      *puVar3 = 0;
      puVar3[1] = 0;
      get_lens_fw_update_status();
      get_lens_fw_update_status();
    }
    param_1[0x82] = (uint32_t)&DAT_105f9250/*ROM*/;
    param_1[0x83] = 0;
    param_1[0x84] = 0x100;
    iVar2 = 3;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 0x214) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x218) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x21c) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x220) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
  }
  return param_1;
}
