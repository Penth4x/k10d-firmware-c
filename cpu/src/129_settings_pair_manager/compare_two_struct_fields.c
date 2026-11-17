/* @k10d compare_two_struct_fields @ 0x1045bedc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compare_two_struct_fields(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = compare_first_integers((int *)param_1,(int *)param_2);
  if ((iVar1 != 0) && (iVar1 = compare_two_int_pairs((int *)(param_1 + 8),(int *)(param_2 + 8)), iVar1 != 0)) {
    return 1;
  }
  return 0;
}
