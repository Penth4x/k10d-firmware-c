/* @k10d check_and_set_struct_flag @ 0x1051abfa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t check_and_set_struct_flag(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)compute_struct_array_offset(*(int *)(param_1 + 4),3);
  if ((((*piVar1 != 0) && (piVar1[1] != 0)) && (piVar1[0xc] != 0)) &&
     (((piVar1[6] != 0 && (piVar1[7] == 0)) && ((piVar1[8] == 3 && (piVar1[10] == 1)))))) {
    *(uint8_t *)(piVar1 + 0xd) = 1;
  }
  return *(uint8_t *)(piVar1 + 0xd);
}
