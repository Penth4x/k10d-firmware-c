/* @k10d expand_font_planes_and_alpha @ 0x1040ba2e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 095_ae_telemetry_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void expand_font_planes_and_alpha(int param_1,int param_2,uint param_3,uint param_4,ushort param_5,
                 uint32_t param_6,uint32_t param_7,uint32_t param_8,uint32_t param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  uintptr_t sp;
  uint32_t *puVar8;
  uint8_t auStack_20 [4];
  
  puVar8 = (uint32_t *)auStack_20;
  uVar7 = (uint)param_5;
  uVar6 = (param_3 & 0xffff) * (param_4 & 0xffff) & 0xffff;
  pvVar4 = (void *)get_system_heap();
  pvVar4 = (void *)mempool_get_block(pvVar4,(void *)(((int)uVar6 >> 2) * uVar7),0);
  iVar1 = ((int)uVar6 >> 4) * uVar7;
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 4;
      *(uint32_t *)(iVar2 + (int)pvVar4) = *(uint32_t *)(iVar2 + param_2);
      iVar2 = iVar3;
    } while (iVar3 < iVar1 * 4);
  }
  *puVar8 = param_6;
  font_expand_plane(param_1,pvVar4,uVar6,uVar7,*puVar8);
  *puVar8 = param_8;
  dispatch_two_virtual_commands_1040bdfe(param_1,uVar6,param_5,param_7,*puVar8);
  *puVar8 = param_9;
  font_expand_alpha(param_1,pvVar4,uVar6,uVar7,*puVar8);
  pvVar5 = (void *)get_system_heap();
  mempool_release_block(pvVar5,pvVar4);
  return;
}
