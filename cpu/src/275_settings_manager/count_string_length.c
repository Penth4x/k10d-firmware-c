/* @k10d count_string_length @ 0x1051c060
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 275_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char count_string_length(char *param_1)

{
  char cVar1;
  char cVar2;
  
  cVar2 = '\0';
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    cVar2 = cVar2 + '\x01';
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return cVar2;
}
