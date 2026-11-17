/* @k10d decode_bayer_pattern_to_sram @ 0x1046a808
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1046a910) overlaps instruction at (ram,0x1046a90e)
    */

void decode_bayer_pattern_to_sram(uint32_t param_1,byte *param_2,int param_3,uint param_4,int param_5,
                 ushort param_6,ushort param_7)

{
  byte bVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  uint8_t uVar5;
  uint8_t uVar6;
  uint8_t uVar7;
  byte *pbVar8;
  uint8_t *puVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  ushort uVar16;
  uint8_t *puVar15;
  int iVar17;
  uint uVar18;
  uintptr_t sp;
  uint8_t *puStack_290;
  int iStack_288;
  byte *pbStack_274;
  uint8_t *puStack_270;
  uint8_t *puStack_26c;
  byte local_250 [576];
  uint8_t auStack_10 [4];
  uint8_t auStack_c [4];
  uint8_t auStack_8 [4];
  
  puStack_290 = (uint8_t *)(param_5 + param_3 + (param_4 & 0xffff) * 0x280);
  iVar17 = ((int)param_4 >> 1) * 0x140;
  iVar12 = param_3 >> 1;
  puStack_26c = (uint8_t *)(param_5 + 0x4b000 + iVar17 + iVar12);
  puStack_270 = (uint8_t *)(param_5 + 0x5dc00 + iVar17 + iVar12);
  pbStack_274 = (byte *)(param_5 + 0x70800 + (param_4 & 0xffff) * 0x140 + iVar12);
  iVar17 = (uint)param_6 * 3;
  uVar2 = *(uint8_t *)(iVar17 + -0x7fffbe0c);
  uVar3 = *(uint8_t *)(iVar17 + -0x7fffbe0a);
  uVar4 = *(uint8_t *)(iVar17 + -0x7fffbe0b);
  if (param_7 == 0xff) {
    uVar5 = 0;
    uVar7 = 0x80;
    uVar6 = 0x80;
  }
  else {
    iVar17 = (uint)param_7 * 3;
    uVar5 = *(uint8_t *)(iVar17 + -0x7fffbe0c);
    uVar6 = *(uint8_t *)(iVar17 + -0x7fffbe0a);
    uVar7 = *(uint8_t *)(iVar17 + -0x7fffbe0b);
  }
  pbVar8 = local_250;
  iVar17 = 0;
  do {
    uVar16 = 0;
    do {
      switch(*param_2) {
      case 3:
        *pbVar8 = 0;
        pbVar8[1] = 0;
        pbVar8[2] = 0;
        pbVar8 = pbVar8 + 3;
        uVar16 = uVar16 + 3;
        break;
      case 0xc:
        iVar12 = 1;
        do {
          *pbVar8 = 0;
          pbVar8[1] = 0;
          pbVar8[2] = 0;
          iVar12 = iVar12 + -1;
          pbVar8 = pbVar8 + 3;
        } while (-1 < iVar12);
        uVar16 = uVar16 + 6;
        break;
      case 0xf:
        iVar12 = 2;
        do {
          *pbVar8 = 0;
          pbVar8[1] = 0;
          pbVar8[2] = 0;
          pbVar8[3] = 0;
          iVar12 = iVar12 + -1;
          pbVar8 = pbVar8 + 4;
        } while (-1 < iVar12);
        uVar16 = uVar16 + 0xc;
        break;
      case 0x33:
        *pbVar8 = pbVar8[-3];
        pbVar8[1] = pbVar8[-2];
        pbVar8[2] = pbVar8[-1];
        pbVar8 = pbVar8 + 3;
        uVar16 = uVar16 + 3;
        break;
      case 0x3c:
        *pbVar8 = pbVar8[-6];
        pbVar8[1] = pbVar8[-5];
        pbVar8 = pbVar8 + 2;
        uVar16 = uVar16 + 2;
        break;
      case 0x3f:
        *pbVar8 = pbVar8[-6];
        pbVar8[1] = pbVar8[-5];
        pbVar8[2] = pbVar8[-4];
        pbVar8 = pbVar8 + 3;
        uVar16 = uVar16 + 3;
        break;
      case 0xc0:
        *pbVar8 = 0x55;
        pbVar8[1] = 0x55;
        pbVar8[2] = 0x55;
        pbVar8 = pbVar8 + 3;
        uVar16 = uVar16 + 3;
        break;
      case 0xc3:
        pbVar10 = pbVar8 + -6;
        iVar12 = 1;
        do {
          *pbVar8 = *pbVar10;
          pbVar8[1] = pbVar10[1];
          pbVar8[2] = pbVar10[2];
          pbVar8 = pbVar8 + 3;
          iVar12 = iVar12 + -1;
          pbVar10 = pbVar10 + 3;
        } while (-1 < iVar12);
        uVar16 = uVar16 + 6;
        break;
      case 0xcc:
        *pbVar8 = 0xaa;
        pbVar8[1] = 0xaa;
        pbVar8[2] = 0xaa;
        pbVar8 = pbVar8 + 3;
        uVar16 = uVar16 + 3;
        break;
      case 0xcf:
        pbVar10 = pbVar8 + -6;
        iVar12 = 1;
        do {
          *pbVar8 = *pbVar10;
          pbVar8[1] = pbVar10[1];
          pbVar8[2] = pbVar10[2];
          pbVar8 = pbVar8 + 3;
          iVar12 = iVar12 + -1;
          pbVar10 = pbVar10 + 3;
        } while (-1 < iVar12);
        uVar16 = uVar16 + 6;
        break;
      case 0xf0:
        *pbVar8 = 0;
        pbVar8[1] = 0;
        pbVar8 = pbVar8 + 2;
        uVar16 = uVar16 + 2;
        break;
      case 0xf3:
        *pbVar8 = 0x55;
        pbVar8[1] = 0x55;
        pbVar8 = pbVar8 + 2;
        uVar16 = uVar16 + 2;
        break;
      case 0xfc:
        *pbVar8 = 0xaa;
        pbVar8[1] = 0xaa;
        pbVar8 = pbVar8 + 2;
        uVar16 = uVar16 + 2;
        break;
      case 0xff:
        pbVar10 = pbVar8 + -6;
        iVar12 = 2;
        do {
          *pbVar8 = *pbVar10;
          pbVar8[1] = pbVar10[1];
          pbVar8[2] = pbVar10[2];
          pbVar8[3] = pbVar10[3];
          pbVar8 = pbVar8 + 4;
          iVar12 = iVar12 + -1;
          pbVar10 = pbVar10 + 4;
        } while (-1 < iVar12);
        uVar16 = uVar16 + 0xc;
        break;
      default:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xd:
      case 0xe:
      case 0x10:
      case 0x11:
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
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3d:
      case 0x3e:
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
      case 0xc1:
      case 0xc2:
      case 0xc4:
      case 0xc5:
      case 0xc6:
      case 199:
      case 200:
      case 0xc9:
      case 0xca:
      case 0xcb:
      case 0xcd:
      case 0xce:
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
      case 0xf1:
      case 0xf2:
      case 0xf4:
      case 0xf5:
      case 0xf6:
      case 0xf7:
      case 0xf8:
      case 0xf9:
      case 0xfa:
      case 0xfb:
      case 0xfd:
      case 0xfe:
        *pbVar8 = *param_2;
        pbVar8 = pbVar8 + 1;
        uVar16 = uVar16 + 1;
      }
      param_2 = param_2 + 1;
    } while (uVar16 < 6);
    iVar17 = iVar17 + 1;
  } while (iVar17 < 0x30);
  iVar17 = 0;
  pbVar8 = local_250;
  auStack_10[0] = uVar5;
  auStack_10[1] = 0;
  auStack_10[2] = uVar2;
  auStack_10[3] = uVar2;
  do {
    iVar12 = 1;
    puVar9 = puStack_290;
    do {
      uVar13 = (uint)*pbVar8;
      *puVar9 = auStack_10[(int)uVar13 >> 6];
      puVar9[1] = auStack_10[(int)uVar13 >> 4 & 3];
      puVar9[2] = auStack_10[(int)uVar13 >> 2 & 3];
      puVar9[3] = auStack_10[uVar13 & 3];
      uVar13 = (uint)pbVar8[1];
      puVar9[4] = auStack_10[(int)uVar13 >> 6];
      puVar9[5] = auStack_10[(int)uVar13 >> 4 & 3];
      puVar9[6] = auStack_10[(int)uVar13 >> 2 & 3];
      puVar9[7] = auStack_10[uVar13 & 3];
      uVar13 = (uint)pbVar8[2];
      pbVar8 = pbVar8 + 3;
      puVar9[8] = auStack_10[(int)uVar13 >> 6];
      puVar9[9] = auStack_10[(int)uVar13 >> 4 & 3];
      puVar9[10] = auStack_10[(int)uVar13 >> 2 & 3];
      puVar9[0xb] = auStack_10[uVar13 & 3];
      iVar12 = iVar12 + -1;
      puVar9 = puVar9 + 0xc;
    } while (-1 < iVar12);
    puStack_290 = puStack_290 + 0x280;
    iVar17 = iVar17 + 1;
  } while (iVar17 < 0x30);
  auStack_c[0] = uVar6;
  auStack_c[1] = 0x80;
  pbVar8 = local_250;
  auStack_c[2] = uVar3;
  auStack_c[3] = uVar3;
  auStack_8[1] = 0x80;
  auStack_8[0] = uVar7;
  uVar13 = 0;
  auStack_8[2] = uVar4;
  auStack_8[3] = uVar4;
  do {
    if ((uVar13 & 1) == 0) {
      pbVar8 = pbVar8 + 6;
    }
    else {
      iVar17 = 1;
      puVar9 = puStack_26c;
      puVar15 = puStack_270;
      do {
        bVar14 = *pbVar8;
        uVar18 = (int)(uint)bVar14 >> 4 & 3;
        *puVar9 = auStack_c[uVar18];
        uVar11 = bVar14 & 3;
        *puVar15 = auStack_8[uVar18];
        puVar9[1] = auStack_c[uVar11];
        puVar15[1] = auStack_8[uVar11];
        bVar14 = pbVar8[1];
        uVar11 = (int)(uint)bVar14 >> 4 & 3;
        puVar9[2] = auStack_c[uVar11];
        puVar15[2] = auStack_8[uVar11];
        uVar11 = bVar14 & 3;
        puVar9[3] = auStack_c[uVar11];
        puVar15[3] = auStack_8[uVar11];
        bVar14 = pbVar8[2];
        pbVar8 = pbVar8 + 3;
        uVar11 = (int)(uint)bVar14 >> 4 & 3;
        puVar9[4] = auStack_c[uVar11];
        puVar15[4] = auStack_8[uVar11];
        uVar11 = bVar14 & 3;
        puVar9[5] = auStack_c[uVar11];
        puVar15[5] = auStack_8[uVar11];
        puVar15 = puVar15 + 6;
        iVar17 = iVar17 + -1;
        puVar9 = puVar9 + 6;
      } while (-1 < iVar17);
      puStack_26c = puStack_26c + 0x140;
      puStack_270 = puStack_270 + 0x140;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x30);
  pbVar8 = local_250;
  iVar17 = 0;
  do {
    iStack_288 = 1;
    pbVar10 = pbStack_274;
    do {
      bVar1 = *pbVar8;
      uVar13 = (uint)bVar1;
      bVar14 = 0;
      if (((int)uVar13 >> 6 != 0) || (param_7 != 0xff)) {
        bVar14 = 0xe0;
      }
      if ((((int)uVar13 >> 4 & 3U) != 0) || (param_7 != 0xff)) {
        bVar14 = bVar14 | 0xe;
      }
      if ((bVar14 == 0xe0) || (bVar14 == 0xf0)) {
        bVar14 = 0xc0;
LAB_1046ad76:
        if (bVar14 == 0xf) goto LAB_1046ad7a;
      }
      else {
        if (bVar14 != 0xe) goto LAB_1046ad76;
LAB_1046ad7a:
        bVar14 = 0xc;
      }
      *pbVar10 = bVar14;
      bVar14 = 0;
      if ((((int)uVar13 >> 2 & 3U) != 0) || (param_7 != 0xff)) {
        bVar14 = 0xe0;
      }
      if (((bVar1 & 3) != 0) || (param_7 != 0xff)) {
        bVar14 = bVar14 | 0xe;
      }
      if ((bVar14 == 0xe0) || (bVar14 == 0xf0)) {
        bVar14 = 0xc0;
LAB_1046adba:
        if (bVar14 == 0xf) goto LAB_1046adbe;
      }
      else {
        if (bVar14 != 0xe) goto LAB_1046adba;
LAB_1046adbe:
        bVar14 = 0xc;
      }
      pbVar10[1] = bVar14;
      bVar1 = pbVar8[1];
      uVar13 = (uint)bVar1;
      bVar14 = 0;
      if (((int)uVar13 >> 6 != 0) || (param_7 != 0xff)) {
        bVar14 = 0xe0;
      }
      if ((((int)uVar13 >> 4 & 3U) != 0) || (param_7 != 0xff)) {
        bVar14 = bVar14 | 0xe;
      }
      if ((bVar14 == 0xe0) || (bVar14 == 0xf0)) {
        bVar14 = 0xc0;
LAB_1046ae0a:
        if (bVar14 == 0xf) goto LAB_1046ae0e;
      }
      else {
        if (bVar14 != 0xe) goto LAB_1046ae0a;
LAB_1046ae0e:
        bVar14 = 0xc;
      }
      pbVar10[2] = bVar14;
      bVar14 = 0;
      if ((((int)uVar13 >> 2 & 3U) != 0) || (param_7 != 0xff)) {
        bVar14 = 0xe0;
      }
      if (((bVar1 & 3) != 0) || (param_7 != 0xff)) {
        bVar14 = bVar14 | 0xe;
      }
      if ((bVar14 == 0xe0) || (bVar14 == 0xf0)) {
        bVar14 = 0xc0;
LAB_1046ae4e:
        if (bVar14 == 0xf) goto LAB_1046ae52;
      }
      else {
        if (bVar14 != 0xe) goto LAB_1046ae4e;
LAB_1046ae52:
        bVar14 = 0xc;
      }
      pbVar10[3] = bVar14;
      bVar1 = pbVar8[2];
      uVar13 = (uint)bVar1;
      pbVar8 = pbVar8 + 3;
      bVar14 = 0;
      if (((int)uVar13 >> 6 != 0) || (param_7 != 0xff)) {
        bVar14 = 0xe0;
      }
      if ((((int)uVar13 >> 4 & 3U) != 0) || (param_7 != 0xff)) {
        bVar14 = bVar14 | 0xe;
      }
      if ((bVar14 == 0xe0) || (bVar14 == 0xf0)) {
        bVar14 = 0xc0;
LAB_1046aea6:
        if (bVar14 == 0xf) goto LAB_1046aeaa;
      }
      else {
        if (bVar14 != 0xe) goto LAB_1046aea6;
LAB_1046aeaa:
        bVar14 = 0xc;
      }
      pbVar10[4] = bVar14;
      bVar14 = 0;
      if ((((int)uVar13 >> 2 & 3U) != 0) || (param_7 != 0xff)) {
        bVar14 = 0xe0;
      }
      if (((bVar1 & 3) != 0) || (param_7 != 0xff)) {
        bVar14 = bVar14 | 0xe;
      }
      if ((bVar14 == 0xe0) || (bVar14 == 0xf0)) {
        bVar14 = 0xc0;
LAB_1046aef2:
        if (bVar14 == 0xf) goto LAB_1046aef6;
      }
      else {
        if (bVar14 != 0xe) goto LAB_1046aef2;
LAB_1046aef6:
        bVar14 = 0xc;
      }
      pbVar10[5] = bVar14;
      pbVar10 = pbVar10 + 6;
      iStack_288 = iStack_288 + -1;
    } while (-1 < iStack_288);
    pbStack_274 = pbStack_274 + 0x140;
    iVar17 = iVar17 + 1;
    if (0x2f < iVar17) {
      return;
    }
  } while( true );
}
