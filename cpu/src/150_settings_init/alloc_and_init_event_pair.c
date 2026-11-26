/* @k10d alloc_and_init_event_pair @ 0x1046c17e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 150_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t alloc_and_init_event_pair(int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  uint32_t uVar4;
  
  iVar1 = twai_sem_obj((void *)(param_1 + 0xb8),_DAT_105a2bf4/*ROM*/);
  if (iVar1 == 0) {
    uVar4 = 0x82;
  }
  else {
    puVar2 = (uint32_t *)heap_alloc((void *)0x14);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puVar3 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puVar3 = (uint32_t *)heap_alloc((void *)0x14), puVar3 != (uint32_t *)0x0)) {
        puVar3[4] = (uint32_t)&DAT_1059e4d0/*ROM*/;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
      }
    }
    *puVar2 = param_2;
    puVar2[1] = param_3;
    reg_framework_send(param_1 + 4, (void *)puVar2, 0x2);
    uVar4 = 1;
  }
  return uVar4;
}
