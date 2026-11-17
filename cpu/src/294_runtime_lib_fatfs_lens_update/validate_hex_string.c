/* @k10d validate_hex_string @ 0x1053eb4a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_hex_string(byte *param_1)

{
  bool bVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  
  iVar4 = 0;
  bVar1 = false;
  do {
    iVar4 = iVar4 + 1;
    if (0xff < iVar4) {
      return 0xffffffb2;
    }
    iVar2 = validate_ascii_char(*param_1);
    if (iVar2 == 0) {
      if ((((*param_1 == 0x3a) || (*param_1 == 0x2a)) || (*param_1 == 0x3f)) ||
         (((*param_1 == 0x22 || (*param_1 == 0x3c)) || ((*param_1 == 0x3e || (*param_1 == 0x7c))))))
      {
        return 0xfffffdf8;
      }
      if (0x7f < *param_1) {
        bVar1 = true;
      }
    }
    else {
      iVar2 = validate_lens_fw_params(*param_1,param_1[1]);
      if (iVar2 != 0) {
        return 0xfffffdf8;
      }
      param_1 = param_1 + 1;
      if (*param_1 == 0) {
        return 0xfffffdf8;
      }
      bVar1 = true;
    }
    param_1 = param_1 + 1;
    if (*param_1 == 0) {
      uVar3 = 8;
      if (!bVar1) {
        uVar3 = 0;
      }
      return uVar3;
    }
  } while( true );
}
