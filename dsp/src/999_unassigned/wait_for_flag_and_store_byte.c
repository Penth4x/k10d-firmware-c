/* @k10d wait_for_flag_and_store_byte @ 0x000e1014
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Spins on two status flags in DAT_00000060/DAT_00000057, sets DAT_0003c122 to 3 on
 *   timeout, and stores param_1 into DAT_00000061.
 * summary:
 *   The function first copies DAT_00000061 to DAT_0003c215, then busy-waits until bit 3 of
 *   DAT_00000060 is set or bit 2 of DAT_00000057 is set. If the second condition triggers
 *   first, it sets DAT_0003c122 to 3. It then stores param_1 into DAT_00000061 and performs
 *   a second busy-wait on bit 4 of DAT_00000060 or bit 2 of DAT_00000057, again setting
 *   DAT_0003c122 to 3 on the latter condition. Finally, it returns param_1. The specific
 *   hardware or protocol context of these flags is not determinable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t wait_for_flag_and_store_byte(uint8_t param_1)

{
  DAT_0003c215 = DAT_00000061;
  do {
    if ((DAT_00000060 & 8) != 0) goto LAB_000e103e;
  } while ((DAT_00000057 & 4) == 0);
  DAT_0003c122 = 3;
LAB_000e103e:
  DAT_00000061 = param_1;
  do {
    if ((DAT_00000060 & 0x10) != 0) {
      return param_1;
    }
  } while ((DAT_00000057 & 4) == 0);
  DAT_0003c122 = 3;
  return param_1;
}
