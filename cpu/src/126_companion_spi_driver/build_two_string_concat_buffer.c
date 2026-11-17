/* @k10d build_two_string_concat_buffer @ 0x1044bf30
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Concatenates two null-terminated strings into a buffer with a length prefix and a
 *   computed checksum byte.
 * summary:
 *   The function writes the length of the first string into param_1[0], copies the first
 *   string starting at offset 1, and appends the second string immediately after. It stores
 *   a value derived from the lengths of both strings plus 2 at offset 0x22, likely as a
 *   checksum or total-length field. The special case where param_2 is 8 sets the length to
 *   8 and the checksum to 1, bypassing the string copy logic. The callees
 *   read_first_byte_1044bf22 and increment_value appear to be string length and base-
 *   address helpers, respectively.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_two_string_concat_buffer(uint8_t *param_1,int param_2,uint8_t *param_3,uint8_t *param_4)

{
  char cVar4;
  char cVar5;
  int iVar1;
  int iVar2;
  int iVar3;
  
  cVar4 = read_first_byte_1044bf22(param_3);
  cVar5 = read_first_byte_1044bf22(param_4);
  param_1[0x22] = cVar4 + cVar5 + '\x02';
  if (param_2 == 8) {
    param_1[0x22] = 1;
    *param_1 = 8;
  }
  else {
    *param_1 = (char)param_2;
    cVar4 = read_first_byte_1044bf22(param_3);
    cVar5 = read_first_byte_1044bf22(param_4);
    param_1[1] = cVar4 + cVar5;
    iVar1 = increment_value((int)param_3);
    iVar2 = read_first_byte_1044bf22(param_3);
    while (iVar2 != 0) {
      param_1[iVar2 + 1] = *(uint8_t *)(iVar2 + -1 + iVar1);
      iVar2 = iVar2 + -1;
    }
    iVar1 = read_first_byte_1044bf22(param_3);
    iVar3 = increment_value((int)param_4);
    iVar2 = read_first_byte_1044bf22(param_4);
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      param_1[iVar2 + iVar1 + 2] = *(uint8_t *)(iVar2 + iVar3);
    }
  }
  return 1;
}
