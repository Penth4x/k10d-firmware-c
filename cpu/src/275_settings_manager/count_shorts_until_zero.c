/* @k10d count_shorts_until_zero @ 0x1051c078
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 275_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char count_shorts_until_zero(short *param_1)

{
  short sVar1;
  char cVar2;
  
  cVar2 = '\0';
  sVar1 = *param_1;
  while (sVar1 != 0) {
    cVar2 = cVar2 + '\x01';
    param_1 = param_1 + 1;
    sVar1 = *param_1;
  }
  return cVar2;
}
