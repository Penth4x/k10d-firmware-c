/* @k10d set_flags_and_call_handler @ 0x000f5218
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets specific bits in four global flag variables and calls a handler with parameters
 *   from one of two lookup tables.
 * summary:
 *   The function unconditionally sets bit 7 of DAT_0003c4b9 and bit 3 of DAT_0003c4b7 and
 *   DAT_0003c4bb. It then branches on DAT_0003c3ac to select one of two sets of four byte
 *   values from lookup tables at 0x000fab72 or 0x000fabb2, sets additional bits in
 *   DAT_0003c4b1, DAT_0003c4b5, and DAT_0003c4bd, and finally calls update_four_byte_flags
 *   with the selected values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flags_and_call_handler(int param_1, uint32_t param_x1)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  
  DAT_0003c4b9 = DAT_0003c4b9 | 0x80;
  DAT_0003c4b7 = DAT_0003c4b7 | 8;
  DAT_0003c4bb = DAT_0003c4bb | 8;
  if (DAT_0003c3ac == '\0') {
    uVar1 = (&DAT_000fab72)[param_1];
    uVar2 = (&DAT_000fab82)[param_1];
    uVar3 = (&DAT_000fab92)[param_1];
    uVar4 = (&DAT_000faba2)[param_1];
    DAT_0003c4b1 = DAT_0003c4b1 | 7;
    DAT_0003c4b5 = DAT_0003c4b5 | 0x85;
    DAT_0003c4bd = DAT_0003c4bd | 1;
  }
  else {
    DAT_0003c4b5 = DAT_0003c4b5 | 0x87;
    DAT_0003c4bd = DAT_0003c4bd | 7;
    uVar1 = (&DAT_000fabb2)[param_1];
    uVar2 = (&DAT_000fabc2)[param_1];
    uVar3 = (&DAT_000fabd2)[param_1];
    uVar4 = (&DAT_000fabe2)[param_1];
    DAT_0003c4b1 = DAT_0003c4b1 | 1;
  }
  update_four_byte_flags(uVar1,uVar2,uVar3,uVar4);
  return;
}
