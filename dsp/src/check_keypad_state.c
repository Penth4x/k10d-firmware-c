/* @k10d check_keypad_state @ 0x000d480c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates a series of status flags and updates a bitmask based on a loop over 17 bytes.
 * summary:
 *   The function checks multiple bits in DAT_0003f259 and DAT_0003cb80. If specific
 *   conditions are met, it iterates through 17 bytes starting at DAT_0003cbb7, clearing or
 *   setting bit 0 of DAT_0003cb80 based on bit 4 of each byte. It calls
 *   clear_six_word_globals_000d41b0 if the final state of bit 0 is clear or if a specific
 *   flag (0x40) is set. Returns 0, 4, or -1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_keypad_state(void)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  if (((DAT_0003f259 & 0x10) != 0) && ((DAT_0003cb80 & 8) == 0)) {
    if (((DAT_0003f259 & 0x20) == 0) || ((DAT_0003cb85 & 1) == 0)) {
      if ((DAT_0003f259 & 0x40) == 0) {
        if (((DAT_0003f25a & 4) != 0) && ((DAT_0003cf10 & 0xf) == 0)) {
          DAT_0003cb80 = DAT_0003cb80 & 0xfe;
          iVar3 = 0x11;
          do {
            iVar2 = iVar3 + -1;
            if (((&DAT_0003cbb7)[iVar3] & 0x10) == 0) {
              DAT_0003cb80 = DAT_0003cb80 | 1;
            }
            else {
              (&DAT_0003cb80)[iVar3] = (&DAT_0003cb80)[iVar3] & 0xfe;
            }
            iVar3 = iVar2;
          } while (iVar2 != 0);
          uVar1 = 0;
          if ((DAT_0003cb80 & 1) == 0) {
            clear_six_word_globals_000d41b0();
            uVar1 = 0xffffffff;
          }
        }
      }
      else {
        clear_six_word_globals_000d41b0();
        uVar1 = 0xffffffff;
      }
    }
    else {
      uVar1 = 4;
    }
  }
  return uVar1;
}
