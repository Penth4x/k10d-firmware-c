/* @k10d FUN_000d1cf8 @ 0x000d1cf8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t FUN_000d1cf8(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  iVar1 = unsigned_divide(0x8000, __frv_reg_unset(5));
  iVar2 = unsigned_divide(0x8000,param_3);
  uVar3 = clamp_product_to_16bit_000ce692(param_1,iVar1 + iVar2);
  return uVar3;
}
