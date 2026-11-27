/* @k10d compute_exposure_compensation_value_10473590 @ 0x10473590
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calculates a scaled exposure compensation value based on a percentage input and current
 *   camera state.
 * summary:
 *   The function reads a value from param_1+8 and validates it against ranges (100-999 and
 *   0x3e6). It uses helper functions to retrieve current settings and performs arithmetic
 *   involving the constant 9999, suggesting a fixed-point or scaled representation of
 *   exposure compensation (EV). The logic branches on specific values (999, 0x3e6) to
 *   adjust the final result based on additional state from param_2 and other globals.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_exposure_compensation_value_10473590(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = call_helper_with_offset8_param(*(int *)(param_1 + 8));
  get_or_init_sram_buffer_10478858();
  if (((iVar2 < 100) || (999 < iVar2)) || (0x3e6 < iVar2)) {
    iVar2 = increment_file_number_if_needed(param_1,param_2);
    uVar7 = (uint)*(ushort *)(*(int *)(param_1 + 8) + 0x14);
    cVar1 = param_2[8];
    iVar3 = get_or_init_sram_object_10483206();
    iVar3 = call_helper_with_second_field_1048325a(iVar3);
    get_or_init_sram_buffer_10478858();
    if ((iVar2 < 100) || (999 < iVar2)) {
      iVar2 = 0;
    }
    else if (iVar2 == 999) {
      iVar2 = call_helper_or_fallback(*(uint32_t *)(param_1 + 8), (uint32_t)param_2);
      iVar4 = call_with_offset_c_field_10476678(*(int *)(param_1 + 8));
      iVar4 = iVar4 + -1;
      uVar5 = return_max_of_two_104732e2(uVar7 - iVar2,0);
      if (cVar1 != '\0') {
        if (iVar3 == 9999) {
          iVar3 = 0;
        }
        iVar4 = return_max_of_two_104732e2(iVar3,iVar4);
      }
      iVar2 = clamp_lower_bound(9999 - iVar4,uVar5);
    }
    else if (iVar2 == 0x3e6) {
      iVar2 = call_helper_or_fallback(*(uint32_t *)(param_1 + 8), (uint32_t)param_2);
      iVar4 = call_with_offset_c_field_10476678(*(int *)(param_1 + 8));
      iVar4 = iVar4 + -1;
      return_max_of_two_104732e2(uVar7 - iVar2,0);
      if (cVar1 == '\0') {
        uVar5 = return_max_of_two_104732e2(9999 - iVar2,0);
        iVar2 = clamp_lower_bound(uVar5,9999 - iVar4);
        iVar2 = iVar2 + uVar7;
      }
      else {
        iVar2 = return_max_of_two_104732e2(9999 - iVar2,0);
        if (iVar3 == 9999) {
          iVar3 = 0;
        }
        iVar6 = return_max_of_two_104732e2(iVar3,iVar4);
        if (9999 - iVar6 < iVar2) {
          iVar2 = (9999 - iVar6) + uVar7;
        }
        else if (iVar2 == 0) {
          iVar2 = clamp_lower_bound(uVar7,9999 - iVar3);
        }
        else {
          iVar3 = return_max_of_two_104732e2(iVar3,iVar4);
          if (iVar3 + iVar2 != 9999) {
            uVar7 = clamp_lower_bound(9999 - (iVar3 + iVar2),uVar7);
          }
          iVar2 = iVar2 + uVar7;
        }
      }
    }
    else {
      iVar2 = (1000 - iVar2) * 9999;
    }
  }
  else {
    iVar2 = (1000 - iVar2) * 9999;
  }
  return iVar2;
}
