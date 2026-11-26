/* @k10d alloc_and_init_event_node @ 0x1042f6e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 113_screen_element_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int alloc_and_init_event_node(int param_1,uint32_t *param_2)

{
  int iVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  uint32_t *puVar4;
  
  iVar1 = twai_sem_obj((uint32_t *)(param_1 + 0x20),(int)(_DAT_105a2bf4/*ROM*/));
  if (iVar1 != 0) {
    puVar2 = (uint32_t *)heap_alloc((void *)0x34);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puVar3 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puVar3 = (uint32_t *)heap_alloc((void *)0x34), puVar3 != (uint32_t *)0x0)) {
        puVar4 = puVar3;
        if ((puVar3 != (uint32_t *)0x0) ||
           (puVar4 = (uint32_t *)heap_alloc((void *)0x14), puVar4 != (uint32_t *)0x0)) {
          puVar4[4] = 0x1059ef9c/*ROM*/;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *(uint8_t *)(puVar4 + 3) = 0;
        }
        puVar3[9] = 0x1059ef9c/*ROM*/;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        *(uint8_t *)(puVar3 + 8) = 0;
        puVar3[10] = 0;
        *(uint8_t *)(puVar3 + 0xb) = 0;
        puVar3[0xc] = 0;
      }
    }
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    *(uint8_t *)(puVar2 + 3) = *(uint8_t *)(param_2 + 3);
    puVar2[5] = param_2[5];
    puVar2[6] = param_2[6];
    puVar2[7] = param_2[7];
    *(uint8_t *)(puVar2 + 8) = *(uint8_t *)(param_2 + 8);
    puVar2[10] = param_2[10];
    *(uint8_t *)(puVar2 + 0xb) = *(uint8_t *)(param_2 + 0xb);
    puVar2[0xc] = param_2[0xc];
    reg_framework_send(param_1 + 4, (void *)puVar2, 0x2);
  }
  return iVar1;
}
