/* @k10d write_words_via_virtual_slot @ 0x104cfbe0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 241_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_words_via_virtual_slot(cls_105b9aac *param_1,int param_2,uint param_3,int param_4)

{
  struct {
    uint8_t uStack_c;
    uint8_t uStack_b;
    uint8_t uStack_a;
    uint8_t uStack_9;
  } _cfg_c;
  uint32_t uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  iVar3 = *(int *)param_1->field_0x8;
  iVar3 = (((vtbl_entry*)(iVar3))[6].fn)
                    ((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar3))[6].adj,param_1->field_0xc,
                     param_1->field_0x10 + param_4,0);
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar2 = 0;
    if (param_1->field_0x4 == '\0') {
      iVar3 = 0;
      if (param_3 != 0) {
        do {
          _cfg_c.uStack_c = (uint8_t)*(uint32_t *)(iVar3 + param_2);
          _cfg_c.uStack_b = (uint8_t)((uint)*(uint32_t *)(iVar3 + param_2) >> 8);
          _cfg_c.uStack_a = (uint8_t)((uint)*(uint32_t *)(iVar3 + param_2) >> 0x10);
          _cfg_c.uStack_9 = (uint8_t)((uint)*(uint32_t *)(iVar3 + param_2) >> 0x18);
          iVar4 = *(int *)param_1->field_0x8;
          iVar4 = (((vtbl_entry*)(iVar4))[5].fn)
                            ((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar4))[5].adj,
                             param_1->field_0xc,&_cfg_c.uStack_c,4);
          if (iVar4 == 0) break;
          uVar2 = uVar2 + 1;
          iVar3 = iVar3 + 4;
        } while (uVar2 < param_3);
      }
    }
    else {
      iVar3 = 0;
      if (param_3 != 0) {
        while( true ) {
          _cfg_c.uStack_c = (uint8_t)((uint)*(uint32_t *)(iVar3 + param_2) >> 0x18);
          _cfg_c.uStack_b = (uint8_t)((uint)*(uint32_t *)(iVar3 + param_2) >> 0x10);
          _cfg_c.uStack_a = (uint8_t)((uint)*(uint32_t *)(iVar3 + param_2) >> 8);
          _cfg_c.uStack_9 = (uint8_t)*(uint32_t *)(iVar3 + param_2);
          iVar4 = *(int *)param_1->field_0x8;
          iVar4 = (((vtbl_entry*)(iVar4))[5].fn)
                            ((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar4))[5].adj,
                             param_1->field_0xc,&_cfg_c.uStack_c,4);
          if (iVar4 == 0) break;
          uVar2 = uVar2 + 1;
          iVar3 = iVar3 + 4;
          if (param_3 <= uVar2) {
            return 1;
          }
        }
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}
