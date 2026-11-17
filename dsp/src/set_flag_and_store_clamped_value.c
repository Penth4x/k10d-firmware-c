/* @k10d set_flag_and_store_clamped_value @ 0x000c4860
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets bits 5-6 in DAT_0003c185, calls two helpers, and stores a clamped computed value
 *   into DAT_0003c18a.
 * summary:
 *   The function ORs 0x60 into the global DAT_0003c185, then calls
 *   clamp_and_store_byte_000c4898. It calls compute_clamped_offset_value_000d8a3a with
 *   argument 2, adds 0x50 to the result, multiplies by 2, and clamps the outcome to the
 *   range [0, 0xff] before storing it as a byte in DAT_0003c18a. The roles of the two
 *   callees and the specific meaning of the globals are not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_store_clamped_value(void)

{
  short sVar1;
  
  DAT_0003c185 = DAT_0003c185 | 0x60;
  clamp_and_store_byte_000c4898();
  sVar1 = compute_clamped_offset_value_000d8a3a(2);
  sVar1 = (sVar1 + 0x50) * 2;
  if (sVar1 < 0) {
    sVar1 = 0;
  }
  if (0xff < sVar1) {
    sVar1 = 0xff;
  }
  DAT_0003c18a = (char)sVar1;
  return;
}
