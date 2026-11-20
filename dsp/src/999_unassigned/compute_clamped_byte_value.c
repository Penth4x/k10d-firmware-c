/* @k10d compute_clamped_byte_value @ 0x000c56ac
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Computes a byte value from multiple global state variables, applying range clamping
 *   between 0x24 and 0xff.
 * summary:
 *   The function selects a base value from several global variables
 *   (DAT_0003c520-DAT_0003c52b) based on flags in DAT_0003c396, DAT_0003f325, and
 *   DAT_0003ce06. It may call unsigned_divide or divide_two_integers to transform the
 *   value, then clamps the result to the range [0x24, 0xff] before returning it. The
 *   specific meaning of the input globals and the transformation functions is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint compute_clamped_byte_value(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = 0;
  if ((DAT_0003c396 & 2) == 0) {
    if ((DAT_0003f325 & 1) == 0) {
      iVar3 = 0;
      iVar5 = 7;
      iVar6 = 0;
      do {
        iVar1 = iVar1 + (uint)(byte)(&DAT_0003c520)[iVar3];
        iVar6 = iVar6 + (uint)(byte)(&DAT_0003c521)[iVar3];
        iVar3 = iVar3 + 2;
        iVar5 = iVar5 + -1;
      } while (0 < iVar5);
      uVar2 = unsigned_divide(iVar1 + iVar6,0xe);
    }
    else if ((DAT_0003ce06 & 0x20) == 0) {
      switch(DAT_0003c467) {
      case 1:
        uVar2 = (uint)DAT_0003c523;
        break;
      default:
        uVar2 = (uint)DAT_0003c520 + (uint)DAT_0003c521 >> 1;
        break;
      case 3:
        uVar2 = (uint)DAT_0003c522;
        break;
      case 4:
        uVar2 = (uint)DAT_0003c529;
        break;
      case 5:
        uVar2 = (uint)DAT_0003c527;
        break;
      case 6:
        uVar2 = (uint)DAT_0003c520;
        break;
      case 7:
        uVar2 = (uint)DAT_0003c526;
        break;
      case 8:
        uVar2 = (uint)DAT_0003c528;
        break;
      case 9:
        uVar2 = (uint)DAT_0003c52b;
        break;
      case 0xb:
        uVar2 = (uint)DAT_0003c52a;
      }
    }
    else {
      switch(DAT_0003cc6e) {
      case 1:
      case 0xb:
        uVar2 = (uint)DAT_0003c52b;
        break;
      default:
        uVar2 = (uint)DAT_0003c520 + (uint)DAT_0003c521 >> 1;
        break;
      case 3:
      case 0xf:
        uVar2 = (uint)DAT_0003c52a;
        break;
      case 4:
      case 0x12:
        uVar2 = (uint)DAT_0003c527;
        break;
      case 5:
      case 0x13:
        uVar2 = (uint)DAT_0003c520;
        break;
      case 6:
      case 0x14:
        uVar2 = (uint)DAT_0003c526;
        break;
      case 7:
      case 0xc:
        uVar2 = (uint)DAT_0003c523;
        break;
      case 9:
      case 0x10:
        uVar2 = (uint)DAT_0003c522;
        break;
      case 10:
        uVar2 = (uint)DAT_0003c528;
        break;
      case 0x11:
        uVar2 = (uint)DAT_0003c529;
      }
    }
    if (uVar2 < 0x24) {
      uVar2 = 0x24;
    }
    if (0xd4 < uVar2) {
      uVar2 = 0xd4;
    }
    if (((DAT_0003f32c == 0) && (_DAT_0003f32e == 0)) && (DAT_0003f32d == 0)) {
      uVar4 = 0x5c;
      iVar1 = 0x24;
      uVar7 = 0x80;
    }
    else {
      uVar4 = (uint)DAT_0003f32c;
      iVar1 = (int)_DAT_0003f32e;
      uVar7 = (uint)DAT_0003f32d;
    }
    iVar3 = divide_two_integers(uVar2 * uVar4,0x40);
    uVar2 = iVar3 + iVar1;
    if (iVar3 + iVar1 < (int)uVar7) {
      uVar2 = uVar7;
    }
    if (0xff < (int)uVar2) {
      uVar2 = 0xff;
    }
  }
  else {
    uVar2 = (uint)DAT_0003c054;
  }
  return uVar2 & 0xff;
}
