/* @k10d FUN_000f7094 @ 0x000f7094
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f7094(void)

{
  uint uVar1;
  uint32_t uVar2;
  uint uVar3;
  bool bVar4;
  
  if ((DAT_0003c128 & 0x40) != 0) {
    bVar4 = (_DAT_0003ce24 & 0x8000) == 0x8000;
    if (bVar4) {
      _DAT_0003ce24 = _DAT_0003ce24 & 0x7fff;
    }
    if ((DAT_0003ce01 & 1) == 0) {
      uVar1 = compute_clamped_delta_value(_DAT_0003ce30,_DAT_0003ce18);
      uVar1 = uVar1 & 0xffff;
      uVar2 = FUN_000d1cf8((uint)_DAT_0003ce18,(uint)_DAT_0003ce30,uVar1);
      _DAT_0003cc6a = _DAT_0003ce2c + (short)uVar2 + _DAT_0003cc6a;
      uVar3 = clamp_shifted_value_to_16_bits((uint)_DAT_0003cc6a);
      _DAT_0003cc30 = (short)uVar3;
    }
    else {
      uVar1 = (uint)_DAT_0003ce24;
    }
    clamp_product_to_16bit_000ce692(_DAT_0003ce0e,uVar1);
    uVar1 = clamp_shifted_value_to_16_bits(0x400);
    _DAT_0003c13c = (ushort)uVar1;
    if (bVar4) {
      _DAT_0003c13c = (ushort)uVar1 | 0x8000;
    }
    send_two_byte_command_with_payload(0x89,0x14,&DAT_0003c13c,2);
  }
  return;
}
