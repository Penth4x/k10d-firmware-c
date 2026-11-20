/* @k10d search_string_in_object_list @ 0x104e49dc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t search_string_in_object_list(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uintptr_t sp;
  int iStack_118;
  uint8_t auStack_108 [256];
  
  iVar1 = count_string_bytes(param_2);
  iStack_118 = 0;
  if (iVar1 < 0x100) {
    fill_byte_array(auStack_108,0,0x100);
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      iVar4 = 0;
      do {
        if ((*(int *)(*(int *)(param_1 + 0x40) + iVar4) != 0) &&
           (iVar2 = (*(code *)0x104e3858/*ROM*/)(), iVar2 != 0)) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x40) + iVar4);
          iVar6 = *(int *)(iVar2 + 0x18);
          iStack_118 = (((vtbl_entry*)(iVar6))[11].fn)(iVar2 + ((vtbl_entry*)(iVar6))[11].adj,auStack_108);
          if ((iStack_118 == iVar1) && (iVar2 = compare_null_terminated_strings(param_2,auStack_108), iVar2 == 0)) {
            iVar1 = *(int *)(*(int *)(param_1 + 0x40) + iVar5 * 4);
            iVar5 = *(int *)(iVar1 + 0x18);
            uVar3 = (((vtbl_entry*)(iVar5))[10].fn)(iVar1 + ((vtbl_entry*)(iVar5))[10].adj);
            return uVar3;
          }
        }
        fill_byte_array(auStack_108,0,iStack_118);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar5 < *(int *)(param_1 + 0x1c));
    }
  }
  return 0;
}
