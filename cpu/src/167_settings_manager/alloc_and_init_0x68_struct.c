/* @k10d alloc_and_init_0x68_struct @ 0x1047a44c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint16_t * alloc_and_init_0x68_struct(uint16_t *param_1)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t *puVar2;
  uint8_t auStack_1c [16];
  
  puVar1 = auStack_1c;
  puVar2 = auStack_1c;
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x68), puVar2 = puVar1, param_1 != (uint16_t *)0x0)) {
    *param_1 = 0;
    *(uint8_t *)(param_1 + 1) = 0;
    *(uint8_t *)((int)param_1 + 3) = 0;
    *(uint32_t *)(param_1 + 0x2a) = 0xffffffff;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    puVar2[3] = 0;
    puVar2[7] = 0;
    puVar2[0xb] = 0;
    puVar2[0xf] = 0;
    alloc_and_init_small_struct_1045c524(param_1 + 0x2f,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar2[3],puVar2[7],puVar2[0xb],puVar2[0xf])
    ;
    *(uint8_t *)(param_1 + 2) = 0;
  }
  return param_1;
}
