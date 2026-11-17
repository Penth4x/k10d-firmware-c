/* @k10d cls_105aadf4_new @ 0x1047dc5e
 * name: verified (structural evidence: heap_alloc(0x130) when NULL; stores vtable 0x105aadf4; returns param_1)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aadf4 (vtable 0x105aadf4, 0x130 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x130) when NULL; stores vtable 0x105aadf4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int cls_105aadf4_new(void *param_1)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t *puVar2;
  uint8_t auStack_18 [16];
  
  puVar1 = auStack_18;
  puVar2 = auStack_18;
  if ((param_1 != (void *)0x0) ||
     (param_1 = (void *)heap_alloc((void *)0x130), puVar2 = puVar1, param_1 != (void *)0x0)) {
    cls_105aae34_new(param_1);
    *(uint32_t *)((int)param_1 + 0x11c) = 0x105aadf4/*ROM*/;
    *(uint32_t *)((int)param_1 + 0x120) = 0;
    puVar2[3] = 0;
    puVar2[7] = 0;
    puVar2[0xb] = 0;
    puVar2[0xf] = 0;
    alloc_and_init_small_struct_1045c524((uint16_t *)((int)param_1 + 0x124),(uint)_DAT_105a5c18/*ROM*/,1,1,puVar2[3],puVar2[7],
                 puVar2[0xb],puVar2[0xf]);
    *(uint16_t *)((int)param_1 + 300) = 0;
    *(uint16_t *)((int)param_1 + 0x12e) = 0;
  }
  return (int)param_1;
}
