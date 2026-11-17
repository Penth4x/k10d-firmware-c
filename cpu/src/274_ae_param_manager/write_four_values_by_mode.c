/* @k10d write_four_values_by_mode @ 0x1051a3c0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_four_values_by_mode(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  sVar1 = *(short *)(param_2 + 2);
  if (sVar1 == 3) {
    write_word_to_dynamic_array(param_2,0,*(uint16_t *)(*(int *)(param_1 + 100) + 0x4dc));
    write_word_to_dynamic_array(param_2,1,*(uint16_t *)(*(int *)(param_1 + 100) + 0x4de));
    write_word_to_dynamic_array(param_2,2,*(uint16_t *)(*(int *)(param_1 + 100) + 0x4e0));
    write_word_to_dynamic_array(param_2,3,*(uint16_t *)(*(int *)(param_1 + 100) + 0x4e2));
  }
  else {
    if (sVar1 == 4) {
      write_to_dynamic_array(param_2,0,(uint)*(ushort *)(*(int *)(param_1 + 100) + 0x4dc));
      write_to_dynamic_array(param_2,1,(uint)*(ushort *)(*(int *)(param_1 + 100) + 0x4de));
      write_to_dynamic_array(param_2,2,(uint)*(ushort *)(*(int *)(param_1 + 100) + 0x4e0));
      uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 100) + 0x4e2);
      iVar2 = 3;
    }
    else {
      if (sVar1 != 5) {
        return;
      }
      write_to_dynamic_array(param_2,0,(uint)*(ushort *)(*(int *)(param_1 + 100) + 0x4dc));
      write_to_dynamic_array(param_2,1,1);
      write_to_dynamic_array(param_2,2,(uint)*(ushort *)(*(int *)(param_1 + 100) + 0x4de));
      write_to_dynamic_array(param_2,3,1);
      write_to_dynamic_array(param_2,4,(uint)*(ushort *)(*(int *)(param_1 + 100) + 0x4e0));
      write_to_dynamic_array(param_2,5,1);
      write_to_dynamic_array(param_2,6,(uint)*(ushort *)(*(int *)(param_1 + 100) + 0x4e2));
      iVar2 = 7;
      uVar3 = 1;
    }
    write_to_dynamic_array(param_2,iVar2,uVar3);
  }
  return;
}
