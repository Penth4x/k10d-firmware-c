/* @k10d select_entry_by_threshold_000db89a @ 0x000db89a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Selects one of eight data pairs based on comparing a threshold against six byte values.
 * summary:
 *   The function uses the value in DAT_0003c19e as an index into a series of byte arrays
 *   starting at 0x000fc347. It performs a nested series of comparisons between param_1 and
 *   these indexed bytes. Depending on which comparison fails first, it writes a specific
 *   16-bit value from an array at 0x000fc308 (indexed by DAT_0003c19e * 0xe) to
 *   DAT_0000013a and a byte from an array at 0x000fc332 (indexed by DAT_0003c19e * 7) to
 *   DAT_0000013c. The logic effectively selects one of eight possible pairs of values based
 *   on the magnitude of param_1 relative to the indexed bytes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_entry_by_threshold_000db89a(int param_1)

{
  int iVar1;
  
  iVar1 = (uint)DAT_0003c19e * 6;
  if ((int)(uint)(byte)(&DAT_000fc347)[iVar1] < param_1) {
    if ((int)(uint)(byte)(&DAT_000fc348)[iVar1] < param_1) {
      if ((int)(uint)(byte)(&DAT_000fc349)[iVar1] < param_1) {
        if ((int)(uint)(byte)(&DAT_000fc34a)[iVar1] < param_1) {
          if ((int)(uint)(byte)(&DAT_000fc34b)[iVar1] < param_1) {
            if ((int)(uint)(byte)(&DAT_000fc34c)[iVar1] < param_1) {
              if ((int)(uint)(byte)(&DAT_000fc34c)[iVar1] < param_1) {
                DAT_0000013a = (uint8_t)*(uint16_t *)(&DAT_000fc314 + (uint)DAT_0003c19e * 0xe)
                ;
                DAT_0000013c = (&DAT_000fc338)[(uint)DAT_0003c19e * 7];
              }
            }
            else {
              DAT_0000013a = (uint8_t)*(uint16_t *)(&DAT_000fc312 + (uint)DAT_0003c19e * 0xe);
              DAT_0000013c = (&DAT_000fc337)[(uint)DAT_0003c19e * 7];
            }
          }
          else {
            DAT_0000013a = (uint8_t)*(uint16_t *)(&DAT_000fc310 + (uint)DAT_0003c19e * 0xe);
            DAT_0000013c = (&DAT_000fc336)[(uint)DAT_0003c19e * 7];
          }
        }
        else {
          DAT_0000013a = (uint8_t)*(uint16_t *)(&DAT_000fc30e + (uint)DAT_0003c19e * 0xe);
          DAT_0000013c = (&DAT_000fc335)[(uint)DAT_0003c19e * 7];
        }
      }
      else {
        DAT_0000013a = (uint8_t)*(uint16_t *)(&DAT_000fc30c + (uint)DAT_0003c19e * 0xe);
        DAT_0000013c = (&DAT_000fc334)[(uint)DAT_0003c19e * 7];
      }
    }
    else {
      DAT_0000013a = (uint8_t)*(uint16_t *)(&DAT_000fc30a + (uint)DAT_0003c19e * 0xe);
      DAT_0000013c = (&DAT_000fc333)[(uint)DAT_0003c19e * 7];
    }
  }
  else {
    DAT_0000013a = (uint8_t)*(uint16_t *)(&DAT_000fc308 + (uint)DAT_0003c19e * 0xe);
    DAT_0000013c = (&DAT_000fc332)[(uint)DAT_0003c19e * 7];
  }
  return;
}
