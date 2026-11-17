/* @k10d store_byte_at_index @ 0x104d617a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool store_byte_at_index(int param_1,uint32_t param_2,uint8_t param_3)

{
  int iVar1;
  uintptr_t sp;
  int iStack_c;
  
  iStack_c = 0;
  iVar1 = find_index_in_array_104d6454(param_1,param_2,&iStack_c);
  if (iVar1 != 0) {
    *(uint8_t *)(param_1 + 0x88 + iStack_c) = param_3;
  }
  return iVar1 != 0;
}
