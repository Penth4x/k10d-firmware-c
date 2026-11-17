/* @k10d convert_11_to_16_bit_words @ 0x10435da0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Converts a packed array of 11-bit values into an array of 16-bit words.
 * summary:
 *   The function takes a source pointer (param_1) and a destination pointer (param_2). It
 *   skips the first 4 bytes of the source (likely a header or alignment padding) and then
 *   reads 11-bit values from the source, writing them as 16-bit unsigned integers to the
 *   destination. It processes 8 values in a first loop and 1 value in a second loop,
 *   totaling 9 values. It returns the constant 0xb (11), likely indicating the bit-width of
 *   the source data or the number of elements processed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t convert_11_to_16_bit_words(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar2 = 0;
  param_1 = param_1 + 4;
  iVar3 = 8;
  do {
    iVar4 = iVar3;
    *(uint *)(param_2 + iVar1) = (uint)*(ushort *)(param_1 + iVar2);
    *(uint *)(param_2 + iVar1 + 4) = (uint)*(ushort *)(param_1 + iVar2 + 2);
    *(uint *)(param_2 + iVar1 + 8) = (uint)*(ushort *)(param_1 + iVar2 + 4);
    iVar2 = iVar2 + 6;
    iVar3 = iVar4 + -3;
    iVar1 = iVar1 + 0xc;
  } while (-1 < iVar3);
  iVar4 = iVar4 + -1;
  do {
    *(uint *)(param_2 + iVar1) = (uint)*(ushort *)(param_1 + iVar2);
    iVar2 = iVar2 + 2;
    iVar4 = iVar4 + -1;
    iVar1 = iVar1 + 4;
  } while (-1 < iVar4);
  return 0xb;
}
