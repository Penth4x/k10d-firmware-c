/* @k10d FUN_000d5d6a @ 0x000d5d6a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_000d5d6a(void)

{
  uint uVar1;
  uint8_t uVar2;
  uint uVar3;
  
  uVar1 = _DAT_0003c280 - 1;
  (*(code *)(&PTR_LAB_000fb50c)[DAT_0003c320])();
  uVar3 = 0;
  if (_DAT_0003c280 != 0) {
    do {
      DAT_0000000a = DAT_0000000a | 0x40;
      if (uVar3 < _DAT_0003c314) {
        uVar2 = (&DAT_0003c2ca)[uVar3];
      }
      else {
        uVar2 = 0;
      }
      dispatch_pending_event_000d5e64();
      if (DAT_0003c319 == '\0') {
        _DAT_000000c1 = CONCAT13(uVar2,_DAT_000000c2);
        DAT_0000000a = DAT_0000000a & 0xbf;
        wait_flag_and_call_helper();
        DAT_000000d0 = DAT_000000d0 & 0xfe;
        if (DAT_0003c319 != '\0') {
          return DAT_0003c319;
        }
        if (uVar3 < _DAT_0003c310) {
          (&DAT_0003c284)[uVar3] = (char)_DAT_000000c1;
        }
        if (uVar3 < uVar1) {
          dispatch_pending_event_000d5ec0();
        }
      }
      else {
        DAT_000000d0 = DAT_000000d0 & 0xfe;
        DAT_0000000a = DAT_0000000a & 0xbf;
      }
      if (DAT_0003c319 != '\0') {
        return DAT_0003c319;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < _DAT_0003c280);
  }
  if (DAT_0003c319 == '\0') {
    (*(code *)(&PTR_FUN_000fb90c)[DAT_0003c31a])();
  }
  return DAT_0003c319;
}
