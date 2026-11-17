/* @k10d check_whitespace_and_high_byte @ 0x103feec6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_whitespace_and_high_byte(int param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  uint32_t uVar3;
  
  cVar2 = *(char *)(param_1 + 0x58);
  uVar3 = 0;
  if (((((cVar2 == '\t') || (cVar2 == '\n')) || (cVar2 == '\v')) ||
      ((cVar2 == '\f' || (cVar2 == '\r')))) &&
     (((bVar1 = *param_2, 0x7f < bVar1 && (bVar1 < 0x9f)) || (0xdf < bVar1)))) {
    uVar3 = 1;
  }
  return uVar3;
}
