/* @k10d update_status_flags_000f41ac @ 0x000f41ac
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates multiple byte-level status flags based on current state conditions.
 * summary:
 *   The function clears two flags, then conditionally sets or clears specific bits in
 *   several status bytes (DAT_0003c4d7, DAT_0003c4df, DAT_0003c4d6, DAT_0003c491,
 *   DAT_0003c48b) based on the values of other status registers. It calls
 *   compute_state_and_update_flags and four other functions
 *   (select_table_by_masked_index_000c6d7a, select_table_entry_by_mask,
 *   select_table_by_masked_index_000c6d4a, select_indexed_value) at the end.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flags_000f41ac(void)

{
  byte bVar1;
  
  DAT_0003c4de = 0;
  DAT_0003c4df = 0;
  if (((DAT_0003c4d6 & 1) != 0) && ((DAT_0003c412 & 1) != 0)) {
    if (DAT_0003c3a2 == '\0') {
      DAT_0003c4d7 = DAT_0003c4d7 & 0xef | 0x20;
    }
    else {
      DAT_0003c4d7 = DAT_0003c4d7 & 0xdf | 0x10;
    }
  }
  compute_state_and_update_flags();
  if (((DAT_0003c036 & 0x80) == 0) && ((DAT_0003c393 & 0x10) == 0)) {
    if (DAT_0003c440 == '\x01') {
      bVar1 = DAT_0003c4df & 0xdf;
    }
    else if ((DAT_0003c4de & 1) == 0) {
      bVar1 = DAT_0003c4df | 0x20;
      if ((DAT_0003c440 == '\x11') && ((DAT_0003c4df & 8) != 0)) {
        bVar1 = DAT_0003c4df & 0xdf;
      }
    }
    else {
      bVar1 = DAT_0003c4df & 0xdf;
    }
    DAT_0003c4df = bVar1;
    if (((((DAT_0003f326 & 0x10) != 0) && ((DAT_0003c4df & 0x20) != 0)) &&
        (((DAT_0003c000 & 2) == 0 || ((DAT_0003c410 & 4) == 0)))) && ((DAT_0003c4d0 & 1) == 0)) {
      DAT_0003c44c = 0;
      DAT_0003c450 = 0;
    }
  }
  if ((((((DAT_0003c4df & 0x20) == 0) && ((DAT_0003c393 & 0x10) == 0)) &&
       ((DAT_0003c000 & 0x80) == 0)) &&
      (((DAT_0003c4de & 0x20) == 0 && (((DAT_0003c000 & 2) == 0 || ((DAT_0003c410 & 4) == 0)))))) &&
     ((DAT_0003c393 & 0x10) == 0)) {
    DAT_0003c48b = 0x40;
  }
  if ((((DAT_0003f326 & 1) == 0) || ((DAT_0003c000 & 1) != 0)) || ((DAT_0003c035 & 8) != 0)) {
    if ((((DAT_0003f326 & 1) != 0) && ((DAT_0003c000 & 0x80) == 0)) && ((DAT_0003c035 & 4) == 0)) {
      DAT_0003c4d6 = DAT_0003c4d6 | 8;
    }
  }
  else {
    DAT_0003c491 = DAT_0003c491 | 1;
  }
  select_table_by_masked_index_000c6d7a();
  select_table_entry_by_mask();
  select_table_by_masked_index_000c6d4a();
  select_indexed_value();
  return;
}
