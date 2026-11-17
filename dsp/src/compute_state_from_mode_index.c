/* @k10d compute_state_from_mode_index @ 0x000c8d18
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Computes new values for two byte state variables based on a switch over a mode index
 *   and auxiliary flag bytes.
 * summary:
 *   The function reads a mode index from DAT_0003c440 and a base state byte from
 *   DAT_0003c382. It performs a large switch statement to compute new values for
 *   DAT_0003c370 and DAT_0003c382, incorporating bits from DAT_0003c444, DAT_0003c3bd,
 *   DAT_0003c4de, and DAT_0003c4df. The final computed value is written back to
 *   DAT_0003c382, while DAT_0003c370 is updated in most cases. No external functions are
 *   called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x000c8d4a) overlaps instruction at (ram,0x000c8d48)
    */

void compute_state_from_mode_index(void)

{
  byte bVar1;
  
  bVar1 = DAT_0003c382;
  switch(DAT_0003c440) {
  case 0:
    DAT_0003c370 = 2;
    DAT_0003c371 = DAT_0003c371 & 0xe0 | DAT_0003c444 & 0x1f;
    bVar1 = DAT_0003c382 & 7 | DAT_0003c444 << 3;
    if (((DAT_0003c3bd == '\x01') || (DAT_0003c3bd == '\x02')) || (DAT_0003c3bd == '\x03')) {
      bVar1 = bVar1 | 3;
    }
    break;
  case 1:
    DAT_0003c370 = 3;
    DAT_0003c371 = DAT_0003c371 & 0xe0;
    bVar1 = DAT_0003c382 & 7 | 3;
    break;
  case 2:
    DAT_0003c370 = 5;
    bVar1 = DAT_0003c382 | 1;
    break;
  case 3:
    DAT_0003c370 = 4;
    bVar1 = DAT_0003c382 | 2;
    break;
  case 4:
    DAT_0003c370 = 7;
    break;
  case 5:
    DAT_0003c370 = 6;
    break;
  case 6:
    DAT_0003c370 = 0xf;
    bVar1 = DAT_0003c382 | 3;
    break;
  case 7:
    DAT_0003c370 = 0xd;
    break;
  case 8:
    DAT_0003c370 = 8;
    if ((DAT_0003c4de & 1) == 0) {
      if ((DAT_0003c4df & 8) != 0) {
        DAT_0003c370 = 0x10;
        bVar1 = DAT_0003c382 | 1;
      }
    }
    else {
      DAT_0003c370 = 9;
      bVar1 = DAT_0003c382 | 1;
    }
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    DAT_0003c370 = 10;
    bVar1 = DAT_0003c382 | 3;
    break;
  case 0x11:
    DAT_0003c370 = 0xb;
    if ((DAT_0003c4de & 1) == 0) {
      bVar1 = DAT_0003c382 | 2;
      if ((DAT_0003c4df & 8) != 0) {
        DAT_0003c370 = 0x11;
        bVar1 = DAT_0003c382 | 3;
      }
    }
    else {
      DAT_0003c370 = 0xc;
      bVar1 = DAT_0003c382 | 3;
    }
    break;
  case 0xff:
    DAT_0003c370 = 1;
    DAT_0003c371 = DAT_0003c371 & 0xe0 | DAT_0003c444 + 4 & 0x1f;
    bVar1 = (DAT_0003c444 + 4) * '\b' | DAT_0003c382 & 7 | 3;
    break;
  default:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
  case 0xf1:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
    DAT_0003c370 = 3;
    DAT_0003c371 = DAT_0003c371 & 0xe0;
    bVar1 = DAT_0003c382 & 7 | 3;
  }
  DAT_0003c382 = bVar1;
  return;
}
