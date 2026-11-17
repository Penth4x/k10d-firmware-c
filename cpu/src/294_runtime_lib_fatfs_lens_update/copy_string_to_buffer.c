/* @k10d copy_string_to_buffer @ 0x105452c0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_string_to_buffer(char *param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    cVar1 = *param_1;
    param_1 = param_1 + (cVar1 != '\0');
  } while (cVar1 != '\0');
  do {
    cVar1 = *(char *)(iVar2 + (int)param_2);
    param_1[iVar2] = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  return;
}
