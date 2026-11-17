/* @k10d check_modset_parser_status @ 0x1048614e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 179_settings_module_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int check_modset_parser_status(uint32_t param_1,uint32_t *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  modset_parser_singleton();
  iVar1 = modset_file_exists_check(__frv_reg_unset(4));
  if (iVar1 != 0) {
    *param_2 = 1;
  }
  return iVar1;
}
