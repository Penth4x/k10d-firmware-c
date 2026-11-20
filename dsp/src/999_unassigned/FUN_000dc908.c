/* @k10d FUN_000dc908 @ 0x000dc908
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dc908(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  
  uVar1 = abs_uint_via_helper(_DAT_0003c828);
  uVar1 = multiply_two_floats_000f7a44((int)((ulonglong)uVar1 >> 0x20),(int)uVar1,0x40f00000,0);
  uVar2 = abs_uint_via_helper(_DAT_0003c860);
  multiply_two_floats_000f76e4((int)((ulonglong)uVar1 >> 0x20),(int)uVar1,(int)((ulonglong)uVar2 >> 0x20),(int)uVar2
              );
  _DAT_0003c894 = normalize_fixed_point_value(__frv_reg_unset(4), __frv_reg_unset(5));
  uVar1 = abs_uint_via_helper(_DAT_0003c82c);
  uVar1 = multiply_two_floats_000f7a44((int)((ulonglong)uVar1 >> 0x20),(int)uVar1,0x40f00000,0);
  uVar2 = abs_uint_via_helper(_DAT_0003c864);
  multiply_two_floats_000f76e4((int)((ulonglong)uVar1 >> 0x20),(int)uVar1,(int)((ulonglong)uVar2 >> 0x20),(int)uVar2
              );
  _DAT_0003c898 = normalize_fixed_point_value(__frv_reg_unset(4), __frv_reg_unset(5));
  return;
}
