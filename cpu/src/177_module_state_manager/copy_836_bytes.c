/* @k10d copy_836_bytes @ 0x10485094
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_836_bytes(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x344;
  do {
    iVar1 = iVar1 + -1;
    *(uint8_t *)(iVar1 + param_2) = *(uint8_t *)(iVar1 + param_1 + 0x14);
  } while (iVar1 != 0);
  return;
}
