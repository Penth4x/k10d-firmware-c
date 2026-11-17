/* @k10d FUN_000e8afe @ 0x000e8afe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t FUN_000e8afe(void)

{
  uint32_t uVar1;
  uintptr_t sp;
  ushort uStack_1a;
  short sStack_18;
  ushort uStack_16;
  
  uVar1 = 1;
  uStack_1a = 0;
  sStack_18 = 0;
  uStack_16 = 0;
  do {
    sStack_18 = sStack_18 + uStack_16;
    poll_until_transfer_complete(1,&uStack_1a,&sStack_18,0xd7);
    uStack_16 = 0;
    poll_until_transfer_complete(0,&uStack_1a,&uStack_16,0xd7);
    if (0xd7 < uStack_1a) break;
  } while (uStack_16 < 0x23);
  if (((0x54 < uStack_1a) && (uStack_1a < 0xd8)) && (uStack_16 < 0x42)) {
    if (uStack_1a < 0x96) {
      DAT_0003c040 = DAT_0003c040 << 1 | 0x40;
    }
    else {
      DAT_0003c040 = DAT_0003c040 << 1 | 0x41;
    }
    uVar1 = 0;
  }
  return uVar1;
}
