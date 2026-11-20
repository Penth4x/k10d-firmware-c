/* @k10d compute_exposure_time_value @ 0x104a4b68
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_exposure_time_value(int param_1,int param_2)

{
  uint32_t uVar1;
  char cVar5;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar6;
  int iVar7;
  uintptr_t sp;
  int *piVar8;
  uint8_t auStack_34 [12];
  ushort uStack_c;
  ushort uStack_a;
  
  piVar8 = (int *)auStack_34;
  uVar6 = 0;
  iVar7 = **(int **)(param_1 + 0x10);
  cVar5 = (((vtbl_entry*)(iVar7))[2].fn)
                    ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar7))[2].adj,0);
  if ((cVar5 == '\t') || (cVar5 == '\f')) {
    uVar6 = *(int *)(*(int *)(param_1 + 0x58) + 0x508) * 100;
    if (0xa7c4 < uVar6) {
      uVar6 = 0xffffffff;
    }
  }
  else if ((cVar5 == '\x10') || (cVar5 == '\x11')) {
    uVar6 = 0x22b;
  }
  else {
    uStack_c = 0;
    uStack_a = 0;
    uVar1 = *(uint32_t *)(param_1 + 0x50);
    iVar7 = **(int **)(param_1 + 0x14);
    uVar2 = (((vtbl_entry*)(iVar7))[2].fn)
                      ((int)*(int **)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar7))[2].adj,0);
    uVar3 = query_object_slot_three_104a6a48(param_1);
    iVar7 = **(int **)(param_1 + 0x14);
    uVar4 = (((vtbl_entry*)(iVar7))[2].fn)
                      ((int)*(int **)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar7))[2].adj,5);
    iVar7 = *(int *)(param_1 + 0x1c);
    *piVar8 = (int)&uStack_c;
    piVar8[1] = (int)&uStack_a;
    piVar8[2] = iVar7;
    validate_and_lookup_pair(uVar1,uVar2 & 0xff,uVar3,uVar4 & 0xff,(uint16_t *)*piVar8,(uint16_t *)piVar8[1]
                 ,(int *)piVar8[2]);
    if (uStack_a != 0) {
      uVar6 = (int)((uint)uStack_c * 100000) / (int)(uint)uStack_a;
    }
  }
  write_to_dynamic_array(param_2,0,uVar6);
  return;
}
