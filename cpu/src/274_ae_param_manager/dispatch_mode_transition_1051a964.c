/* @k10d dispatch_mode_transition_1051a964 @ 0x1051a964
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_mode_transition_1051a964(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  
  param_1[1] = param_2;
  iVar1 = (*(code *)0x1049a528/*ROM*/)();
  uVar4 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1[1] + 4);
    param_1[0x15] = iVar1;
    switch(iVar1) {
    case 0:
    case 1:
      cVar2 = read_byte_from_struct_array(param_1[1],iVar1);
      if (cVar2 != '\0') {
        uVar4 = dispatch_two_virtual_operations((int)param_1,param_1[0x15]);
      }
      break;
    case 2:
    case 3:
      cVar2 = read_byte_from_struct_array(param_1[1],iVar1);
      if (cVar2 != '\0') {
        bVar3 = transfer_data_in_chunks_1049a44e(param_1,param_1[0x15]);
        uVar4 = (uint)bVar3;
      }
      break;
    case -2:
    case -1:
      iVar1 = cls_105b9724_new((uint32_t *)0x0);
      uVar4 = initialize_object_from_source_1051ac4e((int)param_1,iVar1);
      (**(code **)(param_1[4] + 0x3c))((int)*(short *)(param_1[4] + 0x38) + (int)param_1,iVar1);
    }
  }
  return uVar4;
}
