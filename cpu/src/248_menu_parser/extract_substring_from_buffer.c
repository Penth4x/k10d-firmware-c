/* @k10d extract_substring_from_buffer @ 0x104de682
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Extracts a substring from a source buffer into a destination structure based on two
 *   delimiter positions.
 * summary:
 *   The function checks a flag at offset 4 of param_1. If clear, it calls
 *   search_byte_in_buffer twice to find positions of characters 0x3c and 0x3e in param_1.
 *   If a valid range is found, it sets param_2 to point to the start of the substring and
 *   its length, then calls drain_byte_queue and trim_buffer_by_byte_value. If the flag is
 *   set, it copies pre-computed pointer and length from param_1 to param_2 and clears the
 *   flag. The specific characters 0x3c and 0x3e suggest parsing a structured format, but
 *   the exact subsystem is not determinable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t extract_substring_from_buffer(int *param_1,int *param_2)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  int iStack_10;
  int iStack_c;
  
  if (*(char *)(param_1 + 4) == '\0') {
    zero_struct_seven_words(param_2);
    iStack_10 = 0;
    iStack_c = 0;
    iVar2 = search_byte_in_buffer(param_1,0x3c,&iStack_10);
    if (((iVar2 != 0) && (iVar2 = search_byte_in_buffer(param_1,0x3e,&iStack_c), iVar2 != 0)) &&
       (2 < iStack_c - iStack_10)) {
      *param_2 = *param_1 + iStack_10 + 1;
      param_2[1] = iStack_c - iStack_10;
      drain_byte_queue(param_2);
      iVar2 = trim_buffer_by_byte_value(param_2,0x2f,0);
      if (iVar2 != 0) {
        return 1;
      }
      return 0;
    }
    uVar1 = 0;
  }
  else {
    *param_2 = param_1[5];
    param_2[1] = param_1[6];
    *(uint8_t *)(param_1 + 4) = 0;
    uVar1 = 1;
  }
  return uVar1;
}
