/* @k10d fill_byte_array_with_value @ 0x104d567a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void fill_byte_array_with_value(int param_1,uint8_t param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 9;
  do {
    iVar2 = param_1 + 0x7c;
    *(uint8_t *)(iVar1 + iVar2) = param_2;
    *(uint8_t *)(iVar1 + 1 + iVar2) = param_2;
    *(uint8_t *)(iVar2 + iVar1 + 2) = param_2;
    iVar3 = iVar3 + -1;
    iVar1 = iVar1 + 3;
  } while (-1 < iVar3);
  *(uint8_t *)(param_1 + 0x7c + iVar1) = param_2;
  return;
}
