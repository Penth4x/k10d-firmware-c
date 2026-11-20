/* @k10d FUN_000d1156 @ 0x000d1156
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_000d1156(uint32_t param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint32_t uVar4;
  
  if ((int)param_2 < 1) {
    param_2 = (uint)(100 < _DAT_0003cd5a);
  }
  iVar1 = clamp_index_and_return_table_byte(__frv_reg_unset(4));
  iVar2 = clamp_index_and_return_table_byte(param_2);
  iVar1 = iVar1 - iVar2;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  uVar3 = clamp_shifted_value_to_16_bits(iVar1);
  uVar4 = clamp_product_to_16bit_000ce692(_DAT_0003cd5a,_DAT_0003cd5a);
  uVar4 = clamp_product_to_16bit_000ce692(uVar3,uVar4);
  return uVar4;
}
