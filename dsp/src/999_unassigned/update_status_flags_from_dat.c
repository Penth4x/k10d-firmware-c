/* @k10d update_status_flags_from_dat @ 0x000e7090
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates two byte flags based on bit 3 of DAT_0003c4d3 and a call to
 *   decrement_byte_counter.
 * summary:
 *   The function clears or sets bit 0 of DAT_0003c07f depending on whether bit 3 of
 *   DAT_0003c4d3 is set. It always clears bit 5 of DAT_0003c02b. If bit 3 of DAT_0003c4d3
 *   is set, decrement_byte_counter is called; if it returns 0 or DAT_0003c45d is null,
 *   empty_stub_function is called and bit 5 of DAT_0003c02b is set. The roles of the DAT
 *   globals and callees are not known from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flags_from_dat(void)

{
  int iVar1;
  
  if ((DAT_0003c4d3 & 8) == 0) {
    DAT_0003c07f = DAT_0003c07f & 0xfe;
  }
  else {
    DAT_0003c07f = DAT_0003c07f | 1;
  }
  DAT_0003c02b = DAT_0003c02b & 0xdf;
  if (((DAT_0003c4d3 & 8) != 0) && ((iVar1 = decrement_byte_counter(), iVar1 == 0 || (DAT_0003c45d == '\0'))))
  {
    empty_stub_function();
    DAT_0003c02b = DAT_0003c02b | 0x20;
  }
  return;
}
