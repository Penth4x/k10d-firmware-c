/* @k10d average_four_reads @ 0x000db6a4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Reads a value four times via write_two_byte_command_pair(2), sums them, and returns the
 *   8-bit average.
 * summary:
 *   The function calls write_two_byte_command_pair with argument 2 in a loop four times,
 *   accumulating the low 16 bits of each result. It then right-shifts the sum by 2
 *   (dividing by 4) and masks to 8 bits to return the average. The caller is
 *   read_and_classify_two_samples. The specific meaning of the argument 2 or the data
 *   source is not determinable from the provided pseudocode and unverified callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint average_four_reads(void)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  
  uVar3 = 0;
  sVar2 = 0;
  do {
    iVar1 = write_two_byte_command_pair(2);
    uVar3 = uVar3 + iVar1 & 0xffff;
    sVar2 = sVar2 + 1;
  } while (sVar2 < 4);
  return (int)uVar3 >> 2 & 0xff;
}
