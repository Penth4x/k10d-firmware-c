/* @k10d expand_bayer_macro_to_rgb @ 0x1053447c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Decodes a 48x48 Bayer macro pattern into RGB and YCrCb pixel data in SDRAM.
 * summary:
 *   The function processes a 48x48 block of Bayer-encoded data (param_2) by first expanding
 *   it into a 576-byte intermediate buffer using a switch statement that handles specific
 *   macro codes (e.g., 0x33, 0xc0, 0xff). It then uses lookup tables (DAT_105984dc) to
 *   convert the expanded data into RGB values and writes them to a destination buffer
 *   (param_5) with a stride of param_6. Finally, it computes YCrCb values from the RGB data
 *   and writes them to a second destination buffer. The use of 48x48 blocks and Bayer-
 *   specific expansion codes strongly suggests this is part of the image pipeline, likely
 *   for demosaicing or preview generation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10534594) overlaps instruction at (ram,0x10534592)
    */

void expand_bayer_macro_to_rgb(uint32_t param_1,byte *param_2,int param_3,uint param_4,int param_5,
                 ushort param_6,ushort param_7,ushort param_8,ushort param_9)

{
  byte bVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  uint8_t uVar5;
  uint8_t uVar6;
  int iVar7;
  uint8_t uVar9;
  int iVar8;
  byte bVar10;
  byte *pbVar11;
  uint8_t *puVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  uint8_t *puVar16;
  ushort uVar18;
  uint uVar17;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uintptr_t sp;
  int iStack_294;
  uint8_t *puStack_28c;
  byte *pbStack_278;
  uint8_t *puStack_274;
  uint8_t *puStack_270;
  byte abStack_250 [576];
  uint8_t auStack_10 [4];
  uint8_t auStack_c [4];
  uint8_t auStack_8 [4];
  
  uVar15 = (uint)param_6;
  iVar7 = (int)uVar15 >> 1;
  iVar20 = iVar7 * ((int)(uint)param_7 >> 1);
  iVar14 = uVar15 * param_7 + param_5;
  puStack_28c = (uint8_t *)(param_5 + param_3 + (param_4 & 0xffff) * uVar15);
  iVar8 = ((int)param_4 >> 1) * iVar7;
  iVar21 = iVar14 + iVar20;
  iVar19 = param_3 >> 1;
  puStack_270 = (uint8_t *)(iVar14 + iVar8 + iVar19);
  puStack_274 = (uint8_t *)(iVar21 + iVar8 + iVar19);
  pbStack_278 = (byte *)(iVar20 + iVar21 + param_4 * iVar7 + iVar19);
  iVar20 = (uint)param_8 * 3;
  uVar2 = (DAT_105984dc/*ROM*/)[iVar20];
  uVar3 = (&DAT_105984de/*ROM*/)[iVar20];
  uVar4 = (&DAT_105984dd/*ROM*/)[iVar20];
  if (param_9 == 0xff) {
    uVar5 = 0;
    uVar9 = 0x80;
    uVar6 = 0x80;
  }
  else {
    iVar20 = (uint)param_9 * 3;
    uVar5 = (DAT_105984dc/*ROM*/)[iVar20];
    uVar6 = (&DAT_105984de/*ROM*/)[iVar20];
    uVar9 = (&DAT_105984dd/*ROM*/)[iVar20];
  }
  pbVar11 = abStack_250;
  iVar20 = 0;
  do {
    uVar18 = 0;
    do {
      switch(*param_2) {
      case 3:
        *pbVar11 = 0;
        pbVar11[1] = 0;
        pbVar11[2] = 0;
        pbVar11 = pbVar11 + 3;
        uVar18 = uVar18 + 3;
        break;
      case 0xc:
        iVar8 = 1;
        do {
          *pbVar11 = 0;
          pbVar11[1] = 0;
          pbVar11[2] = 0;
          iVar8 = iVar8 + -1;
          pbVar11 = pbVar11 + 3;
        } while (-1 < iVar8);
        uVar18 = uVar18 + 6;
        break;
      case 0xf:
        iVar8 = 2;
        do {
          *pbVar11 = 0;
          pbVar11[1] = 0;
          pbVar11[2] = 0;
          pbVar11[3] = 0;
          iVar8 = iVar8 + -1;
          pbVar11 = pbVar11 + 4;
        } while (-1 < iVar8);
        uVar18 = uVar18 + 0xc;
        break;
      case 0x33:
        *pbVar11 = pbVar11[-3];
        pbVar11[1] = pbVar11[-2];
        pbVar11[2] = pbVar11[-1];
        pbVar11 = pbVar11 + 3;
        uVar18 = uVar18 + 3;
        break;
      case 0x3c:
        *pbVar11 = pbVar11[-6];
        pbVar11[1] = pbVar11[-5];
        pbVar11 = pbVar11 + 2;
        uVar18 = uVar18 + 2;
        break;
      case 0x3f:
        *pbVar11 = pbVar11[-6];
        pbVar11[1] = pbVar11[-5];
        pbVar11[2] = pbVar11[-4];
        pbVar11 = pbVar11 + 3;
        uVar18 = uVar18 + 3;
        break;
      case 0xc0:
        *pbVar11 = 0x55;
        pbVar11[1] = 0x55;
        pbVar11[2] = 0x55;
        pbVar11 = pbVar11 + 3;
        uVar18 = uVar18 + 3;
        break;
      case 0xc3:
        pbVar13 = pbVar11 + -6;
        iVar8 = 1;
        do {
          *pbVar11 = *pbVar13;
          pbVar11[1] = pbVar13[1];
          pbVar11[2] = pbVar13[2];
          pbVar11 = pbVar11 + 3;
          iVar8 = iVar8 + -1;
          pbVar13 = pbVar13 + 3;
        } while (-1 < iVar8);
        uVar18 = uVar18 + 6;
        break;
      case 0xcc:
        *pbVar11 = 0xaa;
        pbVar11[1] = 0xaa;
        pbVar11[2] = 0xaa;
        pbVar11 = pbVar11 + 3;
        uVar18 = uVar18 + 3;
        break;
      case 0xcf:
        pbVar13 = pbVar11 + -6;
        iVar8 = 1;
        do {
          *pbVar11 = *pbVar13;
          pbVar11[1] = pbVar13[1];
          pbVar11[2] = pbVar13[2];
          pbVar11 = pbVar11 + 3;
          iVar8 = iVar8 + -1;
          pbVar13 = pbVar13 + 3;
        } while (-1 < iVar8);
        uVar18 = uVar18 + 6;
        break;
      case 0xf0:
        *pbVar11 = 0;
        pbVar11[1] = 0;
        pbVar11 = pbVar11 + 2;
        uVar18 = uVar18 + 2;
        break;
      case 0xf3:
        *pbVar11 = 0x55;
        pbVar11[1] = 0x55;
        pbVar11 = pbVar11 + 2;
        uVar18 = uVar18 + 2;
        break;
      case 0xfc:
        *pbVar11 = 0xaa;
        pbVar11[1] = 0xaa;
        pbVar11 = pbVar11 + 2;
        uVar18 = uVar18 + 2;
        break;
      case 0xff:
        pbVar13 = pbVar11 + -6;
        iVar8 = 2;
        do {
          *pbVar11 = *pbVar13;
          pbVar11[1] = pbVar13[1];
          pbVar11[2] = pbVar13[2];
          pbVar11[3] = pbVar13[3];
          pbVar11 = pbVar11 + 4;
          iVar8 = iVar8 + -1;
          pbVar13 = pbVar13 + 4;
        } while (-1 < iVar8);
        uVar18 = uVar18 + 0xc;
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
        *pbVar11 = *param_2;
        pbVar11 = pbVar11 + 1;
        uVar18 = uVar18 + 1;
      }
      param_2 = param_2 + 1;
    } while (uVar18 < 6);
    iVar20 = iVar20 + 1;
  } while (iVar20 < 0x30);
  iVar20 = 0;
  pbVar11 = abStack_250;
  auStack_10[0] = uVar5;
  auStack_10[1] = 0;
  auStack_10[2] = uVar2;
  auStack_10[3] = uVar2;
  do {
    iVar8 = 1;
    puVar12 = puStack_28c;
    do {
      uVar15 = (uint)*pbVar11;
      *puVar12 = auStack_10[(int)uVar15 >> 6];
      puVar12[1] = auStack_10[(int)uVar15 >> 4 & 3];
      puVar12[2] = auStack_10[(int)uVar15 >> 2 & 3];
      puVar12[3] = auStack_10[uVar15 & 3];
      uVar15 = (uint)pbVar11[1];
      puVar12[4] = auStack_10[(int)uVar15 >> 6];
      puVar12[5] = auStack_10[(int)uVar15 >> 4 & 3];
      puVar12[6] = auStack_10[(int)uVar15 >> 2 & 3];
      puVar12[7] = auStack_10[uVar15 & 3];
      uVar15 = (uint)pbVar11[2];
      pbVar11 = pbVar11 + 3;
      puVar12[8] = auStack_10[(int)uVar15 >> 6];
      puVar12[9] = auStack_10[(int)uVar15 >> 4 & 3];
      puVar12[10] = auStack_10[(int)uVar15 >> 2 & 3];
      puVar12[0xb] = auStack_10[uVar15 & 3];
      iVar8 = iVar8 + -1;
      puVar12 = puVar12 + 0xc;
    } while (-1 < iVar8);
    iVar20 = iVar20 + 1;
    puStack_28c = puStack_28c + param_6;
  } while (iVar20 < 0x30);
  auStack_c[0] = uVar6;
  auStack_c[1] = 0x80;
  pbVar11 = abStack_250;
  auStack_c[2] = uVar3;
  auStack_c[3] = uVar3;
  auStack_8[1] = 0x80;
  auStack_8[0] = uVar9;
  uVar15 = 0;
  auStack_8[2] = uVar4;
  auStack_8[3] = uVar4;
  do {
    if ((uVar15 & 1) == 0) {
      pbVar11 = pbVar11 + 6;
    }
    else {
      iVar20 = 1;
      puVar12 = puStack_270;
      puVar16 = puStack_274;
      do {
        bVar10 = *pbVar11;
        uVar22 = (int)(uint)bVar10 >> 4 & 3;
        *puVar12 = auStack_c[uVar22];
        uVar17 = bVar10 & 3;
        *puVar16 = auStack_8[uVar22];
        puVar12[1] = auStack_c[uVar17];
        puVar16[1] = auStack_8[uVar17];
        bVar10 = pbVar11[1];
        uVar17 = (int)(uint)bVar10 >> 4 & 3;
        puVar12[2] = auStack_c[uVar17];
        puVar16[2] = auStack_8[uVar17];
        uVar17 = bVar10 & 3;
        puVar12[3] = auStack_c[uVar17];
        puVar16[3] = auStack_8[uVar17];
        bVar10 = pbVar11[2];
        pbVar11 = pbVar11 + 3;
        uVar17 = (int)(uint)bVar10 >> 4 & 3;
        puVar12[4] = auStack_c[uVar17];
        puVar16[4] = auStack_8[uVar17];
        uVar17 = bVar10 & 3;
        puVar12[5] = auStack_c[uVar17];
        puVar16[5] = auStack_8[uVar17];
        puVar16 = puVar16 + 6;
        iVar20 = iVar20 + -1;
        puVar12 = puVar12 + 6;
      } while (-1 < iVar20);
      puStack_270 = puStack_270 + iVar7;
      puStack_274 = puStack_274 + iVar7;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x30);
  pbVar11 = abStack_250;
  iStack_294 = 0;
code_r0x105349c0:
  iVar20 = 1;
  pbVar13 = pbStack_278;
  do {
    bVar1 = *pbVar11;
    uVar15 = (uint)bVar1;
    bVar10 = 0;
    if (((int)uVar15 >> 6 != 0) || (param_9 != 0xff)) {
      bVar10 = 0xe0;
    }
    if ((((int)uVar15 >> 4 & 3U) != 0) || (param_9 != 0xff)) {
      bVar10 = bVar10 | 0xe;
    }
    if ((bVar10 == 0xe0) || (bVar10 == 0xf0)) {
      bVar10 = 0xc0;
LAB_10534a10:
      if (bVar10 == 0xf) goto LAB_10534a14;
    }
    else {
      if (bVar10 != 0xe) goto LAB_10534a10;
LAB_10534a14:
      bVar10 = 0xc;
    }
    *pbVar13 = bVar10;
    bVar10 = 0;
    if ((((int)uVar15 >> 2 & 3U) != 0) || (param_9 != 0xff)) {
      bVar10 = 0xe0;
    }
    if (((bVar1 & 3) != 0) || (param_9 != 0xff)) {
      bVar10 = bVar10 | 0xe;
    }
    if ((bVar10 == 0xe0) || (bVar10 == 0xf0)) {
      bVar10 = 0xc0;
LAB_10534a54:
      if (bVar10 == 0xf) goto LAB_10534a58;
    }
    else {
      if (bVar10 != 0xe) goto LAB_10534a54;
LAB_10534a58:
      bVar10 = 0xc;
    }
    pbVar13[1] = bVar10;
    bVar1 = pbVar11[1];
    uVar15 = (uint)bVar1;
    bVar10 = 0;
    if (((int)uVar15 >> 6 != 0) || (param_9 != 0xff)) {
      bVar10 = 0xe0;
    }
    if ((((int)uVar15 >> 4 & 3U) != 0) || (param_9 != 0xff)) {
      bVar10 = bVar10 | 0xe;
    }
    if ((bVar10 == 0xe0) || (bVar10 == 0xf0)) {
      bVar10 = 0xc0;
LAB_10534aa4:
      if (bVar10 == 0xf) goto LAB_10534aa8;
    }
    else {
      if (bVar10 != 0xe) goto LAB_10534aa4;
LAB_10534aa8:
      bVar10 = 0xc;
    }
    pbVar13[2] = bVar10;
    bVar10 = 0;
    if ((((int)uVar15 >> 2 & 3U) != 0) || (param_9 != 0xff)) {
      bVar10 = 0xe0;
    }
    if (((bVar1 & 3) != 0) || (param_9 != 0xff)) {
      bVar10 = bVar10 | 0xe;
    }
    if ((bVar10 == 0xe0) || (bVar10 == 0xf0)) {
      bVar10 = 0xc0;
LAB_10534ae8:
      if (bVar10 == 0xf) goto LAB_10534aec;
    }
    else {
      if (bVar10 != 0xe) goto LAB_10534ae8;
LAB_10534aec:
      bVar10 = 0xc;
    }
    pbVar13[3] = bVar10;
    bVar1 = pbVar11[2];
    uVar15 = (uint)bVar1;
    pbVar11 = pbVar11 + 3;
    bVar10 = 0;
    if (((int)uVar15 >> 6 != 0) || (param_9 != 0xff)) {
      bVar10 = 0xe0;
    }
    if ((((int)uVar15 >> 4 & 3U) != 0) || (param_9 != 0xff)) {
      bVar10 = bVar10 | 0xe;
    }
    if ((bVar10 == 0xe0) || (bVar10 == 0xf0)) {
      bVar10 = 0xc0;
LAB_10534b38:
      if (bVar10 == 0xf) goto LAB_10534b3c;
    }
    else {
      if (bVar10 != 0xe) goto LAB_10534b38;
LAB_10534b3c:
      bVar10 = 0xc;
    }
    pbVar13[4] = bVar10;
    bVar10 = 0;
    if ((((int)uVar15 >> 2 & 3U) != 0) || (param_9 != 0xff)) {
      bVar10 = 0xe0;
    }
    if (((bVar1 & 3) != 0) || (param_9 != 0xff)) {
      bVar10 = bVar10 | 0xe;
    }
    if ((bVar10 == 0xe0) || (bVar10 == 0xf0)) {
      bVar10 = 0xc0;
LAB_10534b7c:
      if (bVar10 == 0xf) goto LAB_10534b80;
    }
    else {
      if (bVar10 != 0xe) goto LAB_10534b7c;
LAB_10534b80:
      bVar10 = 0xc;
    }
    pbVar13[5] = bVar10;
    iVar20 = iVar20 + -1;
    if (iVar20 < 0) break;
    pbVar13 = pbVar13 + 6;
  } while( true );
  pbStack_278 = pbStack_278 + iVar7;
  iStack_294 = iStack_294 + 1;
  if (0x2f < iStack_294) {
    return;
  }
  goto code_r0x105349c0;
}
