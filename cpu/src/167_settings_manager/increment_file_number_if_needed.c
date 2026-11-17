/* @k10d increment_file_number_if_needed @ 0x10473894
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint increment_file_number_if_needed(int param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = call_function_at_offset_8_104767f8(*(int *)(param_1 + 8));
  if (uVar1 == 0) {
    uVar1 = call_helper_with_offset8_param(*(int *)(param_1 + 8));
    if (*(short *)(param_2 + 10) == 0) {
      return uVar1;
    }
    if (*(short *)(param_2 + 0xc) != 1) {
      return uVar1;
    }
    if (param_2[8] == '\0') {
      return uVar1;
    }
    iVar2 = get_or_init_sram_object_10483206();
    iVar2 = call_helper_with_second_field_1048325a(iVar2);
    if ((uint)*(ushort *)(param_2 + 10) <= (9999U - iVar2 & 0xffff)) {
      return uVar1;
    }
code_r0x10473a32:
    uVar3 = get_or_init_sram_object_10483206();
    call_subroutine_with_offset_field_10483248(uVar3,0);
  }
  else {
    iVar2 = call_helper_with_field_at_offset_8_10476864(*(int *)(param_1 + 8));
    uVar3 = *(uint32_t *)(param_1 + 0xc);
    uVar4 = call_helper_with_offset_0x16(*(uint32_t *)(param_1 + 8),uVar1);
    iVar2 = dispatch_on_flag_check(uVar3,(char *)(iVar2 + 7),uVar4,*(uint32_t *)(param_2 + 4));
    if (iVar2 == 2) {
      if ((*(short *)(param_2 + 10) != 0) && (*(short *)(param_2 + 0xc) != 1)) {
        return uVar1;
      }
    }
    else if (*(short *)(param_2 + 10) == 0) {
      if (((iVar2 != 0) || (*param_2 == '\0')) && ((iVar2 != 1 || (*param_2 != '\0')))) {
        invoke_virtual_slot_two_and_store_result(*(uint32_t *)(param_1 + 8),uVar1,param_1 + 0x14);
        iVar2 = call_with_offset_c_field_10476678(*(int *)(param_1 + 8));
        if ((iVar2 != 0) &&
           (uVar6 = call_helper_or_fallback(*(uint32_t *)(param_1 + 8),uVar1),
           uVar6 < *(ushort *)(*(int *)(param_1 + 8) + 0x14))) {
          return uVar1;
        }
      }
    }
    else {
      if (*(short *)(param_2 + 0xc) != 1) {
        return uVar1;
      }
      invoke_virtual_slot_two_and_store_result(*(uint32_t *)(param_1 + 8),uVar1,param_1 + 0x14);
      iVar5 = call_with_offset_c_field_10476678(*(int *)(param_1 + 8));
      if (iVar5 != 0) {
        uVar6 = call_helper_or_fallback(*(uint32_t *)(param_1 + 8),uVar1);
        if (((uVar6 < *(ushort *)(*(int *)(param_1 + 8) + 0x14)) &&
            ((iVar2 != 0 || (*param_2 == '\0')))) && ((iVar2 != 1 || (*param_2 != '\0')))) {
          iVar2 = call_with_offset_c_field_10476678(*(int *)(param_1 + 8));
          if ((uint)*(ushort *)(param_2 + 10) <= (10000U - iVar2 & 0xffff)) {
            return uVar1;
          }
          if (uVar1 == 999) {
            return 999;
          }
          uVar1 = uVar1 + 1 & 0xffff;
          get_or_init_sram_buffer_10478858();
          if (uVar1 < 100) {
            return uVar1;
          }
          if (999 < uVar1) {
            return uVar1;
          }
          goto code_r0x10473a32;
        }
      }
    }
    uVar1 = uVar1 + 1 & 0xffff;
  }
  return uVar1;
}
