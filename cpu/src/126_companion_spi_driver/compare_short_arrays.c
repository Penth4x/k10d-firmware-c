/* @k10d compare_short_arrays @ 0x10444680
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compare_short_arrays(uint32_t param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_4 != 0) {
    iVar1 = 0;
    do {
      if (*(short *)(iVar1 + param_2) != *(short *)(iVar1 + param_3)) {
        return 3;
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 2;
    } while (uVar2 < param_4);
  }
  return 0;
}
