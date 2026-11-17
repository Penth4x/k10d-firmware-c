/* @k10d iterate_and_process_object_list @ 0x1049a02e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Iterates through a count of items, calling virtual methods on param_4 and param_5 to
 *   process each, with recursive handling for nested structures.
 * summary:
 *   The function first calls a virtual method on param_4 (slot at offset 0x1c) to retrieve
 *   a count into local_c. It then allocates a structure via cls_105b6a00_new (constructor
 *   for cls_105b6a00) and initializes its fields with param_2, param_3, and param_5. It
 *   loops local_c times, calling virtual methods on param_4 and param_5 to process each
 *   item. If a specific condition is met (iVar8 != 0 and subsequent checks), it may
 *   recursively call itself with a new count derived from param_4. Finally, it calls
 *   destroy_object_tree to finalize or commit the state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1049a076) overlaps instruction at (ram,0x1049a074)
    */

int iterate_and_process_object_list(char *param_1,int *param_2,int param_3,int *param_4,int *param_5)

{
  short sVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  uintptr_t sp;
  uint32_t *puVar9;
  uint8_t auStack_4c [4];
  int iStack_20;
  int *piStack_1c;
  int iStack_14;
  int iStack_10;
  ushort local_c;
  uint16_t uStack_a;
  
  puVar9 = (uint32_t *)auStack_4c;
  iStack_20 = 0;
  iStack_14 = 0;
  bVar2 = false;
  local_c = 0;
  (**(code **)(*param_4 + 0x1c))((int)*(short *)(*param_4 + 0x18) + (int)param_4,&local_c,1,param_3)
  ;
  iVar4 = validate_range_1_to_100(param_1,(uint)local_c);
  if (iVar4 == 0) {
    return iStack_14;
  }
  iVar6 = param_3 + 2;
  iStack_14 = cls_105b6a00_new((uint32_t *)0x0,(uint)local_c);
  piStack_1c = param_2;
  iVar4 = 8;
  do {
    iVar8 = iVar4 + -4;
    *(uint32_t *)(iVar8 + iStack_14 + 0x20) = *(uint32_t *)((int)&iStack_20 + iVar4);
    iVar4 = iVar8;
  } while (iVar8 != 0);
  *(int *)(iStack_14 + 0x28) = param_3;
  *(int **)(iStack_14 + 0x30) = param_5;
  uVar3 = 0;
  if (local_c != 0) {
    iVar4 = iVar6;
    do {
      uStack_a = 0;
      (**(code **)(*param_4 + 0x1c))
                ((int)*(short *)(*param_4 + 0x18) + (int)param_4,&uStack_a,1,iVar4);
      sVar1 = *(short *)(*param_5 + 0x18);
      pcVar7 = *(code **)(*param_5 + 0x1c);
      *puVar9 = 0;
      iVar8 = (*pcVar7)((int)sVar1 + (int)param_5,uStack_a,0,0);
      if (iVar8 != 0) {
        (**(code **)(*(int *)(iVar8 + 0x10) + 0x14))
                  (*(short *)(*(int *)(iVar8 + 0x10) + 0x10) + iVar8,param_4,iVar4);
        forward_two_params_to_helper_104a874a(iStack_14,iVar8);
        iVar6 = iVar4 + 0xc;
        iVar5 = (**(code **)(*param_5 + 0x2c))
                          ((int)*(short *)(*param_5 + 0x28) + (int)param_5,uStack_a);
        if ((iVar5 != 0) && (iVar8 = iterate_and_process_entries(param_1,iVar8,param_4,param_5), iVar8 == 0)) {
          bVar2 = true;
          break;
        }
      }
      iVar6 = iVar4 + 0xc;
      uVar3 = uVar3 + 1;
      iVar4 = iVar6;
    } while (uVar3 < local_c);
  }
  if (!bVar2) {
    iStack_10 = iStack_20;
    (**(code **)(*param_4 + 0x24))
              ((int)*(short *)(*param_4 + 0x20) + (int)param_4,&iStack_10,1,iVar6);
    if ((iStack_10 != 0) && (*param_1 == '\0')) {
      *puVar9 = param_5;
      iVar4 = iterate_and_process_object_list(param_1,(int *)0x0,iStack_10,param_4,(int *)*puVar9);
      if (iVar4 == 0) goto code_r0x1049a1b0;
      *(int *)(iStack_14 + 0x2c) = iVar4;
    }
  }
  if (!bVar2) {
    return iStack_14;
  }
code_r0x1049a1b0:
  destroy_object_tree(param_1,&iStack_14);
  return iStack_14;
}
