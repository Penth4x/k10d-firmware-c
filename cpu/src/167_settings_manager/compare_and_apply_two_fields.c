/* @k10d compare_and_apply_two_fields @ 0x10475d3e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Compares two field descriptors and, if they match, writes their values into a target
 *   buffer.
 * summary:
 *   The function first checks if param_3 is non-null and calls
 *   get_or_init_sram_object_10483206 and check_setting_0xa3_not_two to determine an initial
 *   offset or mode (iVar1). It then checks if the first character of param_2 is an
 *   underscore. If so, it compares three properties of param_3 and param_4 using
 *   read_first_word_1045c66c, read_byte_at_offset_two, and read_byte_at_offset_three. If
 *   all match, it calls compare_two_digit_ascii_value and check_two_digit_ascii_value to
 *   write data from param_4 into the buffer at param_2, using the previously determined
 *   offsets. It returns 1 if both writes succeed, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compare_and_apply_two_fields(uint32_t param_1,char *param_2,uint16_t *param_3,uint16_t *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  uint8_t uVar6;
  int iVar7;
  uint32_t uStack_18;
  
  uStack_18 = 0;
  if (param_3 != (uint16_t *)0x0) {
    get_or_init_sram_object_10483206();
    iVar1 = check_setting_0xa3_not_two((uint32_t)param_1);
    iVar7 = 1;
    if (iVar1 == 0) {
      iVar7 = 3;
      iVar1 = 1;
    }
    else {
      iVar1 = 3;
    }
    if (*param_2 == '_') {
      iVar2 = read_first_word_1045c66c(param_3);
      iVar3 = read_first_word_1045c66c(param_4);
      if (iVar2 == iVar3) {
        cVar4 = read_byte_at_offset_two(param_3);
        cVar5 = read_byte_at_offset_two(param_4);
        if (cVar4 == cVar5) {
          cVar4 = read_byte_at_offset_three(param_3);
          cVar5 = read_byte_at_offset_three(param_4);
          if (cVar4 == cVar5) {
            uVar6 = read_byte_at_offset_two(param_4);
            iVar7 = compare_two_digit_ascii_value(param_1,param_2 + iVar7,uVar6);
            if (iVar7 != 0) {
              uVar6 = read_byte_at_offset_three(param_4);
              iVar1 = check_two_digit_ascii_value(param_1,param_2 + iVar1,uVar6);
              if (iVar1 != 0) {
                uStack_18 = 1;
              }
            }
          }
        }
      }
    }
  }
  return uStack_18;
}
