/* @k10d check_index_less_than_count @ 0x104bcbfa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_index_less_than_count(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[0x12];
  iVar1 = return_first_word_1045c514(param_1);
  return iVar2 < iVar1 + -1;
}
