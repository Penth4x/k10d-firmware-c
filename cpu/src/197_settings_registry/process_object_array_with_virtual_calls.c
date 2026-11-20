/* @k10d process_object_array_with_virtual_calls @ 0x10493164
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 197_settings_registry (unit names are model-proposed)
 * purpose:
 *   Iterates over an array of object pointers, invoking virtual methods and accumulating a
 *   computed sum.
 * summary:
 *   The function iterates through a range of pointers defined by fields at offsets 0x18 and
 *   0x1c of param_1. In the first pass, it calls a virtual method (slot at offset 0x2c) on
 *   each object's sub-object, copies the result, and accumulates a value returned by
 *   return_first_word_1045c514. It then calculates a derived value (uStack_50) based on a
 *   mode field at offset 0x38. In the second pass, it performs similar virtual calls,
 *   including methods at offsets 0x14, 0xdc, and 0xe4, while managing local stack
 *   structures and calling alloc_two_word_pair_1045bc2e and
 *   free_heap_block_if_flagged_1045bc54.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_object_array_with_virtual_calls(cls_105b43cc *param_1,uint32_t param_2)

{
  short sVar1;
  uint32_t uVar2;
  uint32_t **ppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uintptr_t sp;
  int *piStack_6c;
  int iStack_64;
  uint uStack_50;
  uint32_t *apuStack_44 [3];
  uint8_t auStack_38 [4];
  uint32_t uStack_34;
  uint8_t auStack_30 [4];
  uint32_t uStack_2c;
  uint8_t auStack_28 [8];
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint8_t auStack_18 [4];
  uint32_t auStack_14 [3];
  
  apuStack_44[0] = (uint32_t *)&param_1->field_0x18;
  piStack_6c = (int *)*apuStack_44[0];
  iVar5 = 0;
  if ((uint32_t)(piStack_6c) != param_1->field_0x1c) {
    ppuVar3 = apuStack_44 + 1;
    do {
      iVar4 = *piStack_6c;
      (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[5].fn)
                (auStack_38,((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[5].adj + iVar4);
      iVar6 = 8;
      do {
        iVar6 = iVar6 + -4;
        *(uint32_t *)(iVar6 + (int)ppuVar3) = *(uint32_t *)(auStack_38 + iVar6);
      } while (iVar6 != 0);
      iVar6 = return_first_word_1045c514(ppuVar3);
      iVar5 = iVar6 + iVar5;
      free_heap_if_flagged_1045c402(ppuVar3,2);
      dispatch_event_with_flag((int *)(iVar4),(void *)(param_1->field_0x3c & 0xffff),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
      piStack_6c = piStack_6c + 1;
    } while ((uint32_t)(piStack_6c) != param_1->field_0x1c);
  }
  uStack_50 = 0;
  if (param_1->field_0x38 == 1) {
    uStack_50 = (uint)(ushort)param_1->field_0x34 - iVar5 >> 1;
  }
  else if (param_1->field_0x38 == 2) {
    uStack_50 = (uint)(ushort)param_1->field_0x34 - iVar5;
  }
  if (uStack_50 != (uStack_50 & 0xfffffffe)) {
    uStack_50 = uStack_50 - 1;
  }
  iStack_64 = 0;
  piStack_6c = (int *)*apuStack_44[0];
  if (piStack_6c != (int *)apuStack_44[0][1]) {
    do {
      iVar6 = *piStack_6c;
      iVar4 = *(int *)(iVar6 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar2 = (uintptr_t)(alloc_two_word_pair_1045bc2e(&uStack_20,uStack_50 + iStack_64,0));
      (*(code *)0x1045bc90/*ROM*/)(auStack_18,&param_1->field_0x10,uVar2);
      iVar5 = 8;
      do {
        iVar7 = iVar5 + -4;
        *(uint32_t *)((int)&uStack_2c + iVar5) = *(uint32_t *)(auStack_18 + iVar7);
        iVar5 = iVar7;
      } while (iVar7 != 0);
      iVar5 = 8;
      do {
        iVar7 = iVar5 + -4;
        *(uint32_t *)((int)&uStack_34 + iVar5) = *(uint32_t *)((int)&uStack_2c + iVar5);
        iVar5 = iVar7;
      } while (iVar7 != 0);
      (((vtbl_entry*)(iVar4))[2].fn)(sVar1 + iVar6,auStack_30);
      free_heap_block_if_flagged_1045bc54(auStack_30,2);
      free_heap_block_if_flagged_1045bc54(auStack_28,2);
      free_heap_block_if_flagged_1045bc54(&uStack_20,2);
      (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[27].fn)
                (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[27].adj + iVar6,param_1->field_0x30);
      (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[28].fn)
                (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[28].adj + iVar6,param_2);
      (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[5].fn)
                (auStack_38,((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[5].adj + iVar6);
      iVar5 = 8;
      do {
        iVar4 = iVar5 + -4;
        *(uint32_t *)((int)auStack_14 + iVar5) = *(uint32_t *)((int)apuStack_44 + iVar5 + 8);
        iVar5 = iVar4;
      } while (iVar4 != 0);
      iVar5 = return_first_word_1045c514(auStack_14 + 1);
      iStack_64 = iVar5 + iStack_64;
      free_heap_if_flagged_1045c402(auStack_14 + 1,2);
      piStack_6c = piStack_6c + 1;
    } while ((uint32_t)(piStack_6c) != param_1->field_0x1c);
  }
  return;
}
