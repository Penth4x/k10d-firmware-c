/* @k10d map_index_to_byte_pair @ 0x000c1bec
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Maps a 4-bit index and a lookup table value to two byte offsets and calls a helper with
 *   them.
 * summary:
 *   The function takes an index (param_1) clamped to 0-3 and a global value (DAT_0003c108).
 *   It uses a series of switch statements to map the global value to a small integer (0-15)
 *   based on the index. It then calculates an offset (index * 16) and reads two bytes from
 *   a global array (_DAT_0003c592) at positions offset+0xf9f7a and offset+0xf9fca. Finally,
 *   it calls clamp_offset_with_alignment with the base address and these two byte values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t map_index_to_byte_pair(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  if (3 < param_1) {
    param_1 = 0x30;
  }
  if (param_1 == 0) {
    switch(DAT_0003c108) {
    case 0x46:
      iVar2 = 8;
      break;
    default:
      iVar2 = 0;
      break;
    case 0x4a:
      iVar2 = 9;
      break;
    case 0x52:
      iVar2 = 10;
      break;
    case 0x5a:
      iVar2 = 0xb;
      break;
    case 0x62:
      iVar2 = 0xc;
      break;
    case 0x6a:
      iVar2 = 0xd;
      break;
    case 0x72:
      iVar2 = 0xe;
      break;
    case 0x81:
      iVar2 = 0;
      break;
    case 0x82:
      iVar2 = 0xf;
      break;
    case 0x91:
      iVar2 = 1;
      break;
    case 0x9d:
      iVar2 = 2;
      break;
    case 0xad:
      iVar2 = 3;
      break;
    case 0xbd:
      iVar2 = 4;
      break;
    case 0xcd:
      iVar2 = 5;
      break;
    case 0xe1:
      iVar2 = 6;
      break;
    case 0xf5:
      iVar2 = 7;
    }
  }
  else if (param_1 == 1) {
    switch(DAT_0003c108) {
    case 0x46:
      iVar2 = 9;
      break;
    default:
      iVar2 = 0;
      break;
    case 0x4e:
      iVar2 = 10;
      break;
    case 0x52:
      iVar2 = 0xb;
      break;
    case 0x5a:
      iVar2 = 0xc;
      break;
    case 0x62:
      iVar2 = 0xd;
      break;
    case 0x6e:
      iVar2 = 0xe;
      break;
    case 0x79:
      iVar2 = 0;
      break;
    case 0x7a:
      iVar2 = 0xf;
      break;
    case 0x89:
      iVar2 = 1;
      break;
    case 0x95:
      iVar2 = 2;
      break;
    case 0xa1:
      iVar2 = 3;
      break;
    case 0xb1:
      iVar2 = 4;
      break;
    case 0xc1:
      iVar2 = 5;
      break;
    case 0xd1:
      iVar2 = 6;
      break;
    case 0xe5:
      iVar2 = 7;
      break;
    case 0xfd:
      iVar2 = 8;
    }
  }
  else if (param_1 == 2) {
    switch(DAT_0003c108) {
    case 0x42:
      iVar2 = 0xd;
      break;
    default:
      iVar2 = 0;
      break;
    case 0x4a:
      iVar2 = 0xe;
      break;
    case 0x51:
      iVar2 = 0;
      break;
    case 0x52:
      iVar2 = 0xf;
      break;
    case 0x5d:
      iVar2 = 1;
      break;
    case 0x65:
      iVar2 = 2;
      break;
    case 0x6d:
      iVar2 = 3;
      break;
    case 0x75:
      iVar2 = 4;
      break;
    case 0x81:
      iVar2 = 5;
      break;
    case 0x8d:
      iVar2 = 6;
      break;
    case 0x99:
      iVar2 = 7;
      break;
    case 0xa9:
      iVar2 = 8;
      break;
    case 0xb9:
      iVar2 = 9;
      break;
    case 0xc9:
      iVar2 = 10;
      break;
    case 0xdd:
      iVar2 = 0xb;
      break;
    case 0xf1:
      iVar2 = 0xc;
    }
  }
  else if (param_1 == 3) {
    if (DAT_0003c108 == 0x89) {
      iVar2 = 8;
    }
    else {
      if (DAT_0003c108 < 0x8a) {
        if (DAT_0003c108 == 0x51) {
          iVar2 = 4;
          goto LAB_000c1dec;
        }
        if (DAT_0003c108 == 0x52) {
          iVar2 = 0xe;
          goto LAB_000c1dec;
        }
        if (DAT_0003c108 == 0x69) {
          iVar2 = 6;
          goto LAB_000c1dec;
        }
      }
      else {
        if (DAT_0003c108 == 0xb4) {
          iVar2 = 0;
          goto LAB_000c1dec;
        }
        if (DAT_0003c108 == 0xb5) {
          iVar2 = 10;
          goto LAB_000c1dec;
        }
        if (DAT_0003c108 == 0xed) {
          iVar2 = 0xc;
          goto LAB_000c1dec;
        }
        if (DAT_0003c108 == 0xf4) {
          iVar2 = 2;
          goto LAB_000c1dec;
        }
      }
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
  }
LAB_000c1dec:
  iVar2 = iVar2 + param_1 * 0x10;
  uVar1 = clamp_offset_with_alignment((int)_DAT_0003c592,(int)*(char *)(iVar2 + 0xf9f7a),
                       (int)*(char *)(iVar2 + 0xf9fca));
  return uVar1;
}
