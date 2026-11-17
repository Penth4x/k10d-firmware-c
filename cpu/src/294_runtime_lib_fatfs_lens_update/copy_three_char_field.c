/* @k10d copy_three_char_field @ 0x1053f222
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_three_char_field(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    if (*(char *)(iVar1 + param_1 + 8) == ' ') break;
    iVar2 = iVar1 + 1;
    *(uint8_t *)(iVar1 + param_2) = *(uint8_t *)(iVar1 + param_1 + 8);
    iVar1 = iVar2;
  } while (iVar2 < 3);
  *(uint8_t *)(iVar2 + param_2) = 0;
  return;
}
