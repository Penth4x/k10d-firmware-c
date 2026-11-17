/* @k10d extract_substring_between_markers @ 0x104de978
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 248_menu_parser (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t extract_substring_between_markers(int *param_1,int *param_2)

{
  int iVar1;
  uintptr_t sp;
  int iStack_10;
  int iStack_c;
  
  zero_struct_seven_words(param_2);
  *(uint8_t *)(param_1 + 4) = 0;
  iStack_10 = 0;
  iStack_c = 0;
  iVar1 = search_byte_in_buffer(param_1,0x3c,&iStack_10);
  if (((iVar1 != 0) && (iVar1 = search_byte_in_buffer(param_1,0x3e,&iStack_c), iVar1 != 0)) &&
     (1 < iStack_c - iStack_10)) {
    *param_2 = *param_1 + iStack_10 + 1;
    param_2[1] = iStack_c - iStack_10;
    drain_byte_queue(param_2);
    iVar1 = trim_buffer_by_byte_value(param_2,0x2f,0);
    if (iVar1 == 0) {
      iVar1 = trim_buffer_by_byte_value(param_2,0x2f,1);
      if (iVar1 == 0) {
        *(uint8_t *)(param_1 + 4) = 0;
        param_1[5] = 0;
        param_1[6] = 0;
      }
      else {
        *(uint8_t *)(param_1 + 4) = 1;
        param_1[5] = *param_2;
        param_1[6] = param_2[1];
      }
      return 1;
    }
  }
  return 0;
}
