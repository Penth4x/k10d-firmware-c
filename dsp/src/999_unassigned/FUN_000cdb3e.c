/* @k10d FUN_000cdb3e @ 0x000cdb3e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_000cdb3e(void)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  
  uVar3 = 8;
  iVar1 = process_status_update(1);
  if (iVar1 == 0) {
    _DAT_0003ce2c = (_DAT_0003cc6a - (short)_DAT_0000005a) + _DAT_0003ce2c;
    clamp_product_to_16bit_000d1ef8();
    adjust_gain_parameter();
    _DAT_0003ce1e = _DAT_0003cc6a;
    if ((-1 < (int)((uint)_DAT_0003ce1c - _DAT_0000005a)) && ((DAT_0000005f & 4) == 0)) {
      uVar2 = (uint)_DAT_0003cc6a - ((uint)_DAT_0003ce1c - _DAT_0000005a);
      if (((DAT_0003ce03 & 0x80) != 0) && ((int)uVar2 < 1)) {
        uVar2 = 1;
      }
      if (0 < (int)uVar2) {
        if ((((DAT_0003ce03 & 0x80) == 0) || (uVar2 < DAT_0003ce20)) || ((DAT_0003f280 & 8) == 0)) {
          if ((((DAT_0003f285 & 0x20) == 0) || ((DAT_0003cf0f & 0xf) < 2)) ||
             (_DAT_0003cc6a < _DAT_0003ce1c)) {
            _DAT_0003ce5e = _DAT_0003cc6a;
            _DAT_0003cc6a = (ushort)uVar2;
            update_state_flags_and_offset(__frv_reg_unset(4));
            uVar3 = 6;
          }
          else {
            uVar3 = 6;
          }
        }
        else {
          clear_bit1_of_dat_0003ce01();
          uVar3 = 5;
          _DAT_0003cc6a = (ushort)uVar2;
        }
      }
    }
  }
  else {
    uVar3 = 6;
  }
  return uVar3;
}
