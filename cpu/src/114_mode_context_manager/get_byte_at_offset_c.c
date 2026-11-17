/* @k10d get_byte_at_offset_c @ 0x1042ff58
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t get_byte_at_offset_c(int param_1,int param_2)

{
  int iVar1;
  uint8_t uVar2;
  
  iVar1 = read_struct_field_by_index_1042fea4(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint8_t *)(iVar1 + 0xc);
  }
  return uVar2;
}
