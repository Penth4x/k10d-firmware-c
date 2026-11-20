/* @k10d check_and_set_flag_bit2_000cbd12 @ 0x000cbd12
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates multiple status bits and conditionally sets bit 2 of DAT_0003ce06.
 * summary:
 *   The function calls clear_bits_and_shift_global, then checks if bit 4 of DAT_0003ce01 is
 *   clear. If a value from DAT_0003cc6a or DAT_0003ce2c is non-zero, it calls
 *   update_state_flags_and_offset and FUN_000cc4cc. It then performs a complex bitwise
 *   check on DAT_0003ce01, DAT_0003ce62, DAT_0003ce09, DAT_0003f281, and DAT_0003cf0f to
 *   decide whether to set bit 2 (value 4) in DAT_0003ce06. Returns 6 if the non-zero check
 *   passed, otherwise 8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_and_set_flag_bit2_000cbd12(void)

{
  short sVar1;
  bool bVar2;
  uint32_t uVar3;
  
  uVar3 = 8;
  clear_bits_and_shift_global();
  _DAT_0003ce32 = _DAT_0003cc6a;
  sVar1 = _DAT_0003ce2c;
  if ((DAT_0003ce01 & 0x10) == 0) {
    sVar1 = _DAT_0003cc6a;
  }
  if (sVar1 != 0) {
    uVar3 = 6;
    update_state_flags_and_offset(sVar1);
    FUN_000cc4cc();
    if ((DAT_0003ce01 & 0x10) == 0) {
      bVar2 = false;
      if (((DAT_0003ce01 & 0x20) != 0) || ((DAT_0003ce62 & 8) != 0)) {
        bVar2 = true;
      }
      if (((!bVar2) && ((DAT_0003ce09 & 0x40) == 0)) &&
         (((DAT_0003f281 & 0x80) != 0 || ((DAT_0003cf0f & 0xf) == 0)))) {
        DAT_0003ce06 = DAT_0003ce06 | 4;
      }
    }
  }
  return uVar3;
}
