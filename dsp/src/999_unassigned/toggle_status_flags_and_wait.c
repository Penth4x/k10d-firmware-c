/* @k10d toggle_status_flags_and_wait @ 0x000e84da
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Modifies multiple status flag bytes and waits for a condition bit to clear before
 *   calling helper functions.
 * summary:
 *   The function sets bit 2 of DAT_00000501 and clears bit 2 of DAT_00000401, then clears
 *   specific bits in several DAT_0003cxxx globals. It conditionally calls FUN_000d60cc and
 *   check_and_clear_state_flags_000e6ca2 based on flag states. It then enters a wait loop
 *   polling DAT_0003c066 and DAT_0003c068, eventually calling call_d5678_with_0x14 and
 *   clear_status_flag_bits_000e63c2 before restoring the initial flag values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x000e8574) */
/* WARNING: Removing unreachable block (ram,0x000e8578) */
/* WARNING: Removing unreachable block (ram,0x000e857e) */
/* WARNING: Removing unreachable block (ram,0x000e8582) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_status_flags_and_wait(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = DAT_00000501;
  bVar1 = DAT_00000401;
  DAT_00000501 = DAT_00000501 | 4;
  DAT_00000401 = DAT_00000401 & 0xfb;
  DAT_0003c067 = DAT_0003c067 & 0xef;
  DAT_0003c1ed = DAT_0003c1ed & 0xfe;
  DAT_0003c393 = DAT_0003c393 & 0xfe;
  DAT_0003c068 = 0xff;
  if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) {
    FUN_000d60cc();
    iVar3 = check_and_clear_state_flags_000e6ca2();
    if (iVar3 == 1) {
      FUN_000d5fbe();
    }
  }
  do {
    if ((DAT_0003c066 & 1) == 0) break;
  } while ((DAT_0003c393 & 1) == 0);
  DAT_0003c068 = 0;
  DAT_0000048c = 6;
  call_d5678_with_0x14();
  DAT_0000048c = 2;
  do {
    if ((DAT_0003c066 & 1) == 0) {
LAB_000e85ee:
      DAT_0003c1ed = DAT_0003c1ed & 0xfe;
      if ((_DAT_00000001 & 7) >> 2 == 0) {
        DAT_0003c030 = DAT_0003c030 & 0xfb;
      }
      else {
        DAT_0003c030 = DAT_0003c030 | 4;
      }
      DAT_00000401 = bVar1;
      DAT_00000501 = bVar2;
      clear_status_flag_bits_000e63c2();
      return;
    }
    if ((_DAT_00000001 & 0x4000000) == 0) {
      if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0))
      {
        FUN_000d60d6();
      }
      DAT_0003c067 = DAT_0003c067 | 0x10;
      goto LAB_000e85ee;
    }
    if ((((DAT_0000048c & 0x80) != 0) &&
        (DAT_0000048c = DAT_0000048c & 0x7f, (DAT_0003c066 & 2) == 0)) &&
       (((DAT_0003c066 & 1) != 0 &&
        (((DAT_0003c395 & 0x20) == 0 && (iVar3 = check_and_clear_state_flags_000e6ca2(), iVar3 == 1)))))) {
      DAT_0003c1ed = DAT_0003c1ed | 1;
      FUN_000d5fbe();
    }
  } while( true );
}
