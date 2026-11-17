/* @k10d find_colon_in_string @ 0x1053eb0e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char * find_colon_in_string(char *param_1)

{
  int iVar1;
  
  do {
    iVar1 = validate_ascii_char(*param_1);
    if (iVar1 == 0) {
      if (*param_1 == ':') {
        return param_1;
      }
    }
    else {
      param_1 = param_1 + 1;
      if (*param_1 == '\0') {
        return (char *)0x0;
      }
    }
    param_1 = param_1 + 1;
  } while (*param_1 != '\0');
  return (char *)0x0;
}
