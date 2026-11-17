/* @k10d process_object_list_and_dispatch @ 0x10494018
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_object_list_and_dispatch(int param_1,uint32_t param_2,void *param_3,void *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint64_t uVar4;
  
  uVar4 = (uint64_t)find_matching_list_entry(__frv_reg_unset(4));
  piVar2 = (int *)((ulonglong)uVar4 >> 0x20);
  *(int **)(param_1 + 0x60) = piVar2;
  if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) {
    console_printf((void *)0x105b48b4/*ROM*/,(void *)uVar4,param_3,param_4);
  }
  piVar2 = *(int **)(param_1 + 0x48);
  if (piVar2 != *(int **)(param_1 + 0x4c)) {
    do {
      iVar3 = *piVar2;
      iVar1 = read_byte_at_offset_8(iVar3);
      if ((iVar1 != 0) && (*(int **)(param_1 + 0x60) != piVar2)) {
        (**(code **)(*(int *)(iVar3 + 0xc) + 0x44))
                  (*(short *)(*(int *)(iVar3 + 0xc) + 0x40) + iVar3);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(param_1 + 0x4c));
  }
  iVar1 = *(int *)(**(int **)(param_1 + 0x60) + 0xc);
  (**(code **)(iVar1 + 0x44))(**(int **)(param_1 + 0x60) + (int)*(short *)(iVar1 + 0x40));
  invoke_virtual_destroy_on_range(param_1);
  return;
}
