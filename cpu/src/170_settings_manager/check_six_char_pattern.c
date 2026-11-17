/* @k10d check_six_char_pattern @ 0x1047e5ea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_six_char_pattern(char *param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((((*param_1 != '\0') && (uVar1 = 0, param_1[1] != '\0')) && (param_1[3] != '\0')) &&
     ((param_1[2] == '\0' && (param_1[5] == '\0')))) {
    uVar1 = 1;
  }
  return uVar1;
}
