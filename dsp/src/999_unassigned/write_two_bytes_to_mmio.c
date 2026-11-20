/* @k10d write_two_bytes_to_mmio @ 0x000f2870
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Writes two bytes to an MMIO register via a busy-wait handshake on DAT_00000060.
 * summary:
 *   The function performs a multi-step write to DAT_0003c215, using DAT_00000061 as a
 *   staging register and polling DAT_00000060 for bits 3 and 4 to clear/set. It
 *   conditionally writes a second byte from param_2 if bit 7 of DAT_0003c140 is set.
 *   wait_if_flag_is_two is called between steps, likely to trigger or synchronize the MMIO
 *   transaction.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_to_mmio(byte param_1,uint param_2)

{
  wait_if_flag_is_two();
  if ((DAT_0003c140 & 0x80) == 0) {
    param_1 = param_1 | (byte)((param_2 & 0x100) >> 5);
  }
  DAT_0003c215 = DAT_00000061;
  do {
  } while ((DAT_00000060 & 8) == 0);
  DAT_00000061 = param_1;
  wait_if_flag_is_two();
  do {
  } while ((DAT_00000060 & 0x10) == 0);
  DAT_0003c215 = DAT_00000061;
  do {
  } while ((DAT_00000060 & 8) == 0);
  if ((DAT_0003c140 & 0x80) != 0) {
    DAT_00000061 = (byte)(param_2 >> 8);
    wait_if_flag_is_two();
    do {
    } while ((DAT_00000060 & 0x10) == 0);
  }
  DAT_0003c215 = DAT_00000061;
  DAT_00000061 = (byte)param_2;
  do {
  } while ((DAT_00000060 & 0x10) == 0);
  wait_if_flag_is_two();
  return;
}
