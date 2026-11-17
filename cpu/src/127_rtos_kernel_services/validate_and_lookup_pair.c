/* @k10d validate_and_lookup_pair @ 0x1045a58c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Validates input parameters and retrieves a 32-bit pair from a lookup table based on the
 *   validated indices.
 * summary:
 *   The function checks if param_2 is within the range 0x1b to 0xa4 and param_3 is 0 or 1.
 *   It performs virtual calls on param_7 to query state flags (slots 2) with arguments 7
 *   and 9. If valid, it calculates an index into a table at DAT_105a39ec using param_2 and
 *   param_3, and stores two 16-bit values into param_5 and param_6. It returns 1 on success
 *   and 0 on failure, overriding the output values with 0x01b4 in specific edge cases.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
validate_and_lookup_pair(uint32_t param_1,int param_2,uint param_3,int param_4,uint16_t *param_5,
            uint16_t *param_6,int *param_7)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint32_t uVar4;
  
  uVar4 = 1;
  cVar2 = (**(code **)(*param_7 + 0x14))((int)*(short *)(*param_7 + 0x10) + (int)param_7,7);
  cVar3 = (**(code **)(*param_7 + 0x14))((int)param_7 + (int)*(short *)(*param_7 + 0x10),9);
  iVar1 = (param_2 + -0x1b) * 4 + (param_3 & 0xffff) * 0x228;
  *param_5 = *(uint16_t *)(&DAT_105a39ec/*ROM*/ + iVar1);
  *param_6 = *(uint16_t *)(&DAT_105a39ee/*ROM*/ + iVar1);
  if ((param_2 == param_4) && (param_4 == 0x80)) {
    *param_5 = 1;
    *param_6 = 0xb4;
  }
  if (((cVar2 != '\n') && (cVar2 != '\x0f')) && (0x7f < param_2)) {
    *param_5 = 1;
    *param_6 = 0xb4;
  }
  if (((cVar3 != '\x06') && (cVar3 != '\r')) &&
     ((cVar3 != '\x16' && ((cVar3 != '?' && (0x7f < param_2)))))) {
    *param_5 = 1;
    *param_6 = 0xb4;
  }
  if ((param_3 != 0) && (param_3 != 1)) {
    *param_5 = 0;
    *param_6 = 0;
    uVar4 = 0;
  }
  if ((param_2 < 0x1b) || (0xa4 < param_2)) {
    *param_5 = 0;
    *param_6 = 0;
    uVar4 = 0;
  }
  return uVar4;
}
