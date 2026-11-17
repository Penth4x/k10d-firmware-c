/* @k10d dispatch_virtual_method_chain_10481c96 @ 0x10481c96
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_method_chain_10481c96(int param_1, uint32_t param_x1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  int iStack_18;
  int iStack_14;
  uint32_t uStack_10;
  uint16_t uStack_c;
  uint16_t uStack_a;
  
  iVar1 = lookup_table_entry_by_index_10482026(*(void **)(param_1 + 8));
  iVar2 = (**(code **)(*(int *)(iVar1 + 4) + 0x4c))(*(short *)(*(int *)(iVar1 + 4) + 0x48) + iVar1);
  if ((iVar2 == 0) ||
     (iVar2 = (**(code **)(*(int *)(iVar1 + 4) + 0x54))
                        (*(short *)(*(int *)(iVar1 + 4) + 0x50) + iVar1), iVar2 != 0)) {
    uVar3 = 0;
  }
  else {
    iVar2 = (**(code **)(*(int *)(iVar1 + 4) + 0x1c))
                      (*(short *)(*(int *)(iVar1 + 4) + 0x18) + iVar1,0);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uStack_10 = *(uint32_t *)(iVar1 + 0x14);
      uStack_c = *(uint16_t *)(iVar1 + 0x18);
      uStack_a = *(uint16_t *)(iVar1 + 0x1a);
      iStack_14 = param_1 + 4;
      iStack_18 = iVar1;
      uVar3 = read_struct_field_by_index_10481d78(param_1,*(uint32_t *)(iVar1 + 0x10));
      uVar3 = dispatch_virtual_then_table(uVar3,&iStack_18);
    }
  }
  return uVar3;
}
