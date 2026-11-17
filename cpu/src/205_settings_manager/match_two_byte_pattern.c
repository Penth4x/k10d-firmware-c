/* @k10d match_two_byte_pattern @ 0x1049c5d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t match_two_byte_pattern(uint32_t param_1,void *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = compare_byte_arrays(param_2,&DAT_105b5ad6/*ROM*/,2);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = compare_byte_arrays(param_2,&DAT_105b5ad8/*ROM*/,2);
    uVar2 = 2;
    if (iVar1 != 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}
