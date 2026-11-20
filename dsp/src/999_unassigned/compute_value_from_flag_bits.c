/* @k10d compute_value_from_flag_bits @ 0x000c1a3c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Computes a short value from flag bits in DAT_0003c126/127 and lookup tables, storing it
 *   in DAT_0003c594.
 * summary:
 *   The function checks multiple bit flags in DAT_0003c126 and DAT_0003c127 to determine a
 *   code path. It uses indices from DAT_0003c12b and DAT_0003c12a to access lookup tables
 *   at 0x000f9230, 0x000f9130, and 0x000f911f. Depending on the values found, it calls
 *   map_index_to_byte_pair or FUN_000c1b44 to obtain a result, or performs a bit-shift
 *   calculation on DAT_0003c3a4. The final result is stored in DAT_0003c594 and returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int compute_value_from_flag_bits(void)

{
  uint uVar1;
  int iVar2;
  
  if (((((DAT_0003c127 & 1) == 0) && ((DAT_0003c127 & 2) == 0)) && ((DAT_0003c127 & 4) == 0)) &&
     (((DAT_0003c126 & 2) == 0 && ((DAT_0003c126 & 4) == 0)))) {
    compute_signed_fixed_point_value();
    iVar2 = (int)_DAT_0003c592;
    if ((DAT_0003c126 & 0x10) == 0) {
      if (((DAT_0003c127 & 0x40) == 0) && (((DAT_0003c127 & 0x20) == 0 || (DAT_0003c12a == 0)))) {
        if ((DAT_0003c127 & 0x20) == 0) {
          if ((DAT_0003c127 & 0x10) == 0) {
            if ((((DAT_0003c127 & 8) != 0) && (DAT_0003c12b < 0x35)) &&
               ((&DAT_000f9230)[DAT_0003c12b] != '0')) {
              if ((&DAT_000f9230)[DAT_0003c12b] == '\x03') {
                iVar2 = map_index_to_byte_pair(3);
              }
              else {
                iVar2 = FUN_000c1b44(__frv_reg_unset(4));
              }
            }
          }
          else {
            uVar1 = (uint)(byte)(&DAT_000f9130)[DAT_0003c113];
            if (uVar1 != 0x30) {
              if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 == 2)) {
                iVar2 = map_index_to_byte_pair(uVar1);
              }
              else {
                iVar2 = FUN_000c1b44(__frv_reg_unset(4));
              }
            }
          }
        }
        else if ((DAT_0003c12b < 0x11) && ((&DAT_000f911f)[DAT_0003c12b] != '0')) {
          iVar2 = FUN_000c1b44(__frv_reg_unset(4));
        }
      }
      else if ((DAT_0003c12a < 0xf) && (s_00000_000f9110[DAT_0003c12a] != '0')) {
        iVar2 = FUN_000c1b44(__frv_reg_unset(4));
      }
    }
  }
  else {
    iVar2 = (uint)(DAT_0003c3a4 >> 2) * 5 << ((DAT_0003c3a4 & 3) << 1);
  }
  _DAT_0003c594 = (short)iVar2;
  return iVar2;
}
