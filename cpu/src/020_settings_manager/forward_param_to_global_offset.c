/* @k10d forward_param_to_global_offset @ 0x1036c4e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 020_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_to_global_offset(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = get_or_create_singleton_object_10390eea();
  forward_two_params_to_helper_10390990(*(uint32_t *)(iVar1 + 4),param_2);
  return;
}
