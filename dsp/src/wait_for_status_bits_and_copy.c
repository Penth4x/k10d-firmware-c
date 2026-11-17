/* @k10d wait_for_status_bits_and_copy @ 0x000d0690
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears bit 1 of DAT_00000002, waits for bits 3 and 4 of DAT_00000070, copies 4 bytes
 *   from DAT_00000071 to DAT_0003cf00, and sets bit 3 of DAT_00000002.
 * summary:
 *   The function manipulates the global DAT_00000002 (clears bit 1, sets bit 3) and
 *   DAT_00000070 (checks bits 3 and 4 in a loop). It calls busy_wait_on_mode_flag with
 *   arguments 2 and 8, likely to trigger or wait for hardware events. It copies 4 bytes
 *   from the DAT_00000071 region into the DAT_0003cf00 buffer and returns a pointer to that
 *   buffer. The role of DAT_00000002 and DAT_00000070 is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t wait_for_status_bits_and_copy(void)

{
  int iVar1;
  int iVar2;
  
  DAT_00000002 = DAT_00000002 & 0xf7;
  busy_wait_on_mode_flag(2);
  _DAT_00000072 = CONCAT12(0x13,CONCAT11(0xb2,DAT_0003f490));
  DAT_00000070 = 4;
  DAT_00000077 = 2;
  _DAT_00000071 = CONCAT13(0xff,_DAT_00000072);
  iVar1 = 0;
  do {
    if (iVar1 < 3) {
      do {
      } while ((DAT_00000070 & 8) == 0);
      _DAT_00000071 = CONCAT13(0xff,_DAT_00000072);
    }
    do {
    } while ((DAT_00000070 & 0x10) == 0);
    iVar2 = iVar1 + 1;
    (&DAT_0003cf00)[iVar1] = (char)_DAT_00000071;
    iVar1 = iVar2;
  } while (iVar2 < 4);
  busy_wait_on_mode_flag(8);
  DAT_00000002 = DAT_00000002 | 8;
  return _DAT_0003cf00;
}
