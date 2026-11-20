/* @k10d branch_on_mode_code_and_value @ 0x000d31b8
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Sets global variables based on a mode code and a 16-bit value, calling a helper
 *   function.
 * summary:
 *   The function reads a mode code from DAT_0003c12a and a 16-bit value from
 *   DAT_0003c105/06. It initializes globals DAT_0003cd62, DAT_0003cd63, and _DAT_0003cd68,
 *   then calls lookup_next_byte_in_table. It iterates through a small table to potentially
 *   update these globals, then branches on the mode code to set specific values in
 *   DAT_0003cd62, DAT_0003cd63, _DAT_0003cd68, DAT_0003c117, or DAT_0003c115 based on the
 *   mode code and the 16-bit value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void branch_on_mode_code_and_value(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (uint)DAT_0003c105 * 0x100 + (uint)DAT_0003c106;
  DAT_0003cd63 = DAT_0003c12a;
  DAT_0003cd62 = 4;
  _DAT_0003cd68 = (uint)&DAT_000fb118;
  lookup_next_byte_in_table((void *)&DAT_0003c117);
  uVar1 = 0;
  do {
    if ((&DAT_000fb27b)[uVar1] == DAT_0003c12a) {
      DAT_0003cd62 = (&DAT_000fb278)[uVar1];
      _DAT_0003cd68 = (uint)(&PTR_DAT_000fb22c)[uVar1];
      DAT_0003cd63 = DAT_0003c106;
      lookup_next_byte_in_table((void *)&DAT_0003c117);
      break;
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 3);
  if ((DAT_0003c12a == 5) || (DAT_0003c12a == 7)) {
    DAT_0003cd63 = DAT_0003c106;
    if (DAT_0003c105 == 5) {
      DAT_0003cd62 = 0xc;
      _DAT_0003cd68 = (uint)&DAT_000fb140;
    }
    else {
      DAT_0003cd62 = 0xe;
      _DAT_0003cd68 = (uint)&DAT_000fb132;
    }
    lookup_next_byte_in_table((void *)&DAT_0003c116);
  }
  else if (DAT_0003c12a == 4) {
    if (iVar2 == 0x4488) {
      DAT_0003c117 = 0x87;
    }
  }
  else if (DAT_0003c12a == 6) {
    if (iVar2 == 0x448a) {
      DAT_0003c117 = 0x87;
    }
    else if (iVar2 == 0x448c) {
      DAT_0003c117 = 0x89;
    }
  }
  else if (DAT_0003c12a == 9) {
    DAT_0003c115 = 0x73;
  }
  return;
}
