/* @k10d cls_105b3cfc_new_2 @ 0x1048ccda
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x105b3cfc; returns param_1)
 * unit: 187_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3cfc (vtable 0x105b3cfc, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x105b3cfc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b3cfc_new_2(int param_1,void *param_2,uint32_t param_3,uint32_t param_4,
                      uint32_t param_5,uint32_t param_6,uint16_t param_7,uint32_t param_8,
                      byte param_9,byte param_10)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t *puVar2;
  uint8_t auStack_2c [20];
  
  puVar1 = auStack_2c;
  puVar2 = auStack_2c;
  if ((param_1 != 0) || (param_1 = heap_alloc((void *)0x30), puVar2 = puVar1, param_1 != 0)) {
    *(ushort *)(puVar2 + 2) = (ushort)param_9;
    *(ushort *)(puVar2 + 6) = (ushort)param_10;
    *(uint16_t *)(puVar2 + 10) = 7;
    puVar2[0xf] = 1;
    puVar2[0x13] = 0;
    cls_105b3d9c_new_2(param_1,param_2,param_3,param_4,*(uint16_t *)(puVar2 + 2),
                       *(uint16_t *)(puVar2 + 6),*(uint16_t *)(puVar2 + 10),puVar2[0xf],
                       puVar2[0x13]);
    *(void **)(param_1 + 0x20) = &DAT_105b3cfc/*ROM*/;
    *(uint16_t *)(param_1 + 0x2c) = param_7;
  }
  return param_1;
}
