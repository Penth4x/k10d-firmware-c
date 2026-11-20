/* @k10d update_object_state_field @ 0x10473b22
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t update_object_state_field(int param_1,int param_2,void *param_3,uint32_t param_4)

{
  uint32_t uVar1;
  int iVar2;
  uint16_t uVar4;
  int *piVar3;
  
  if (*(short *)((int)param_3 + 2) == 0) {
    uVar1 = call_with_offset_c_field_10476678(*(int *)(param_1 + 8));
    iVar2 = get_or_init_sram_object_10483206();
    iVar2 = call_helper_with_second_field_1048325a(iVar2);
    if (*(char *)(param_2 + 8) == '\0') {
      *(short *)((int)param_3 + 2) = (short)uVar1;
    }
    else if (iVar2 == 9999) {
      *(short *)((int)param_3 + 2) = (short)uVar1;
    }
    else {
      uVar4 = (*(code *)0x104732da/*ROM*/)(uVar1,iVar2 + 1U & 0xffff);
      *(uint16_t *)((int)param_3 + 2) = uVar4;
    }
    uVar1 = 1;
    if (*(short *)((int)param_3 + 2) == 0) {
      uVar1 = 0;
    }
  }
  else {
    piVar3 = (int *)call_subroutine_with_offset_c_104766ae(*(int *)(param_1 + 8));
    if (piVar3 == (int *)0x0) {
      uVar1 = 1;
    }
    else {
      iVar2 = (((vtbl_entry*)(*piVar3))[3].fn)((int)((vtbl_entry*)(*piVar3))[3].adj + (int)piVar3,param_4);
      uVar1 = 1;
      if (iVar2 != 0) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}
