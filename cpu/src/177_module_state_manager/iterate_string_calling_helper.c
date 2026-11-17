/* @k10d iterate_string_calling_helper @ 0x10485dfc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_string_calling_helper(char *param_1,uint32_t param_2,void *param_3)

{
  char cVar1;
  
  if (*param_1 != '\0') {
    cVar1 = *param_1;
    do {
      call_single_helper_10485dd8(cVar1,param_2,(uint32_t)param_3);
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    } while (cVar1 != '\0');
  }
  return;
}
