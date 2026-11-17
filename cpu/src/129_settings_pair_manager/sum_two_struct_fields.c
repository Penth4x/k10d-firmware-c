/* @k10d sum_two_struct_fields @ 0x1045c142
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sum_two_struct_fields(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = read_first_word_1045bd4c(param_1);
  iVar2 = return_first_word_1045c514(param_1 + 2);
  return iVar1 + iVar2;
}
