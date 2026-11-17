/* @k10d parse_and_validate_short_token @ 0x1053ef60
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t parse_and_validate_short_token(char *param_1,uint8_t *param_2,int *param_3)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    uVar1 = 0xffffffea;
  }
  else {
    *param_2 = 0;
    iVar2 = find_colon_in_string(param_1);
    *param_3 = iVar2;
    if (iVar2 == 0) {
      *param_3 = (int)param_1;
    }
    else {
      uVar3 = iVar2 - (int)param_1;
      if ((uVar3 == 0) || (8 < uVar3)) {
        return 0xffffffea;
      }
      memcpy_bytes(param_2,param_1,uVar3);
      param_2[uVar3] = 0;
      *param_3 = *param_3 + 1;
    }
    uVar3 = count_string_bytes((char *)*param_3);
    if (uVar3 < 0x207) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffb2;
    }
  }
  return uVar1;
}
