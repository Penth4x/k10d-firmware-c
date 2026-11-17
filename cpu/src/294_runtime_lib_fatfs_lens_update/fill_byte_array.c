/* @k10d fill_byte_array @ 0x10545132
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void fill_byte_array(void *param_1,uint8_t param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  if (0 < param_3) {
    do {
      iVar2 = param_3 + -1;
      bVar1 = 0 < param_3;
      *(uint8_t *)(iVar2 + (int)param_1) = param_2;
      param_3 = iVar2;
    } while (bVar1 && iVar2 != 0);
  }
  return;
}
