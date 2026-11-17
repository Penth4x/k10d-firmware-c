/* @k10d fill_byte_array_at_offset @ 0x104d61aa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void fill_byte_array_at_offset(int param_1,uint8_t param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0x10;
  do {
    *(uint8_t *)(iVar1 + param_1 + 0x88) = param_2;
    *(uint8_t *)(param_1 + 0x88 + iVar1 + 1) = param_2;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 2;
  } while (-1 < iVar2);
  return;
}
