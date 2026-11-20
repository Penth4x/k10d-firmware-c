/* @k10d iterate_object_array_virtual @ 0x104e4ac4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Iterates an array of object pointers, invoking virtual slots 2 and 3 on each, and
 *   returns a value from slot 6 of the first successful match.
 * summary:
 *   The function loops through an array of pointers stored at offset 0x40 of the object in
 *   param_1, up to the count at offset 0x1c. For each non-null object, it calls virtual
 *   slot 2 (offset 0x1c) and then virtual slot 3 (offset 0x14) with param_2 and param_3. If
 *   slot 3 returns non-zero, it calls virtual slot 6 (offset 0x54) on the same object and
 *   returns that result, optionally storing the iteration count in param_4. The role of the
 *   specific objects and the meaning of the virtual calls are not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t iterate_object_array_virtual(int param_1,uint32_t param_2,uint32_t param_3,int *param_4)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar3 = 0;
    do {
      if ((*(int *)(*(int *)(param_1 + 0x40) + iVar3) != 0) &&
         (iVar1 = (*(code *)0x104e3858/*ROM*/)(), iVar1 != 0)) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x40) + iVar3);
        iVar6 = *(int *)(iVar1 + 0x18);
        iVar1 = (((vtbl_entry*)(iVar6))[3].fn)(iVar1 + ((vtbl_entry*)(iVar6))[3].adj);
        if (iVar1 != 0) {
          iVar5 = iVar5 + 1;
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0x40) + iVar3);
        iVar6 = *(int *)(iVar1 + 0x18);
        iVar1 = (((vtbl_entry*)(iVar6))[2].fn)(iVar1 + ((vtbl_entry*)(iVar6))[2].adj,param_2,param_3);
        if (iVar1 != 0) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x40) + iVar4 * 4);
          iVar3 = *(int *)(iVar4 + 0x18);
          uVar2 = (((vtbl_entry*)(iVar3))[10].fn)(iVar4 + ((vtbl_entry*)(iVar3))[10].adj);
          if (param_4 == (int *)0x0) {
            return uVar2;
          }
          *param_4 = iVar5;
          return uVar2;
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x1c));
  }
  return 0;
}
