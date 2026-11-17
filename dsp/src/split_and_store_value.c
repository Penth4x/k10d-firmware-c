/* @k10d split_and_store_value @ 0x000c2bea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Splits a 32-bit value into high and low 3-bit fields and stores them in two globals.
 * summary:
 *   Calls compute_flagged_offset_values, then reads DAT_0003c10a. It stores the value
 *   right-shifted by 3 into _DAT_0003f58c and the lower 3 bits into _DAT_0003f590. Finally,
 *   it calls compute_signed_offset_value_000c2ca2 and write_four_bytes_to_0x3c540. The
 *   specific meaning of the data fields is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void split_and_store_value(void)

{
  compute_flagged_offset_values();
  _DAT_0003f58c = (uint)(DAT_0003c10a >> 3);
  _DAT_0003f590 = DAT_0003c10a & 7;
  compute_signed_offset_value_000c2ca2();
  write_four_bytes_to_0x3c540();
  return;
}
