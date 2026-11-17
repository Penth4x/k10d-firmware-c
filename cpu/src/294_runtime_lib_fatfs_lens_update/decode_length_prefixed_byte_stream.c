/* @k10d decode_length_prefixed_byte_stream @ 0x105438c2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Decodes a length-prefixed byte stream into a normalized byte sequence, returning the
 *   count of transformed tokens.
 * summary:
 *   Iterates through param_1 using a lookup table at DAT_10621ff0 to determine token
 *   lengths. It normalizes character codes (shifting ranges 0x60-0x7a and 0x8280-0x829a)
 *   and writes the resulting bytes to param_2, terminating with a null byte. The function
 *   returns the number of tokens that required multi-byte expansion or transformation. It
 *   is part of the lens firmware update module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int decode_length_prefixed_byte_stream(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iStack_10;
  
  iStack_10 = 0;
  while (*param_1 != 0) {
    uVar2 = (uint)(byte)(&DAT_10621ff0)[*param_1];
    uVar5 = (uint)*param_1;
    if (1 < uVar2) {
      uVar5 = (uint)CONCAT11(*param_1,param_1[1]);
    }
    uVar3 = uVar5;
    if ((0x60 < uVar5) && (uVar5 < 0x7b)) {
      uVar3 = uVar5 - 0x20;
    }
    if ((0x8280 < uVar3) && (uVar3 < 0x829b)) {
      uVar3 = uVar3 - 0x21;
    }
    if (uVar5 == uVar3) {
      for (iVar4 = 0; iVar4 < (int)uVar2; iVar4 = iVar4 + 1) {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        *param_2 = bVar1;
        param_2 = param_2 + 1;
      }
    }
    else {
      if (1 < uVar2) {
        param_2[1] = (byte)uVar3;
        uVar3 = uVar3 >> 8;
      }
      *param_2 = (byte)uVar3;
      iStack_10 = iStack_10 + 1;
      param_1 = param_1 + uVar2;
      param_2 = param_2 + uVar2;
    }
  }
  *param_2 = 0;
  return iStack_10;
}
