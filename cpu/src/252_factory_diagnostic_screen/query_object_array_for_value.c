/* @k10d query_object_array_for_value @ 0x104e4d58
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Iterates an object array to find the first non-zero result from a virtual method call.
 * summary:
 *   The function checks if param_3 is zero or if param_5 is non-zero (delegating to
 *   iterate_vtable_entries_104e506e). Otherwise, it iterates through an array of object
 *   pointers stored at param_1+0x40. For each object, it calls virtual slot 11 (offset
 *   0x4c) to check a condition, and if true, calls virtual slot 12 (offset 0x54) to
 *   retrieve a value. The first non-zero value is stored in param_2 and the function
 *   returns 1. If no value is found, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_object_array_for_value(int param_1,int param_2,uint param_3,uint32_t *param_4,int param_5)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint32_t uStack_c;
  
  iVar6 = 0;
  *param_4 = 0;
  uStack_c = 1;
  if (param_3 == 0) {
    uStack_c = 1;
  }
  else if (param_5 == 0) {
    if (param_3 < (uint)((*(int *)(param_1 + 0xc) + -1) * 4)) {
      uStack_c = 0;
    }
    else {
      *param_4 = 1;
      iVar5 = 1;
      if (1 < *(int *)(param_1 + 0x1c)) {
        iVar3 = 4;
        iVar4 = 0;
        do {
          iVar1 = *(int *)(*(int *)(param_1 + 0x40) + iVar3);
          if ((iVar1 != 0) &&
             (iVar1 = (((vtbl_entry*)(*(int *)(iVar1 + 0x18)))[9].fn)
                                (((vtbl_entry*)(*(int *)(iVar1 + 0x18)))[9].adj + iVar1), iVar1 != 0)) {
            iVar1 = *(int *)(*(int *)(param_1 + 0x40) + iVar3);
            iVar7 = *(int *)(iVar1 + 0x18);
            uVar2 = (((vtbl_entry*)(iVar7))[10].fn)(iVar1 + ((vtbl_entry*)(iVar7))[10].adj);
            iVar6 = iVar6 + 1;
            *(uint32_t *)(param_2 + iVar4) = uVar2;
            iVar4 = iVar4 + 4;
            if (*(int *)(param_1 + 0xc) <= iVar6) {
              return 1;
            }
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar5 < *(int *)(param_1 + 0x1c));
      }
    }
  }
  else {
    uStack_c = iterate_vtable_entries_104e506e(param_1,param_2,param_3,param_5);
  }
  return uStack_c;
}
