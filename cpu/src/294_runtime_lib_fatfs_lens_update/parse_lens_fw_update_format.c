/* @k10d parse_lens_fw_update_format @ 0x10546086
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Parses a single format specifier from a lens firmware update string, converting it to a
 *   value in the output buffer.
 * summary:
 *   The function implements a custom printf-like parser for the lens firmware update
 *   module. It handles standard specifiers like %d, %x, %s, and %f, as well as custom ones
 *   like %c and %n, using a lookup table at 0x106220f1 to identify character types. It
 *   calls parse_float_string_to_fixed to parse floating-point values and memcpy_bytes to
 *   copy strings, updating the input pointers and writing the resulting value to the
 *   destination buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1054615a) overlaps instruction at (ram,0x10546158)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t parse_lens_fw_update_format(int *param_1,int *param_2,uint32_t *param_3)

{
  uint *puVar1;
  uint32_t *puVar2;
  int iVar3;
  byte bVar5;
  byte *pbVar4;
  uint uVar6;
  uint extraout_r4;
  uint32_t uVar7;
  byte *pbVar8;
  uint extraout_r5;
  byte *pbVar9;
  uint caller_r9;
  uint uVar10;
  byte *pbVar11;
  uintptr_t sp;
  bool bVar12;
  byte local_254 [512];
  uint *puStack_54;
  byte *pbStack_50;
  byte *pbStack_4c;
  int iStack_48;
  byte *pbStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  pbVar11 = (byte *)(*param_2 + 1);
  pbVar9 = (byte *)*param_1;
  bVar5 = *pbVar11;
  if (bVar5 == 0x2a) {
    pbVar11 = (byte *)(*param_2 + 2);
  }
  uStack_24 = (uint)(bVar5 == 0x2a);
  if (((&DAT_106220f1)[*pbVar11] & 0x20) == 0) {
    iStack_2c = 0;
  }
  else {
    caller_r9 = 0;
    do {
      caller_r9 = (caller_r9 * 10 + (uint)*pbVar11) - 0x30;
      pbVar11 = pbVar11 + 1;
    } while (((&DAT_106220f1)[*pbVar11] & 0x20) != 0);
    iStack_2c = 1;
    if (caller_r9 == 0) {
      return 0xffffffff;
    }
  }
  uStack_28 = (uint)*pbVar11;
  if ((*pbVar11 == 0x68) || (bVar12 = uStack_28 == 0x6c, uStack_28 = (uint)*pbVar11, bVar12)) {
LAB_1054610e:
    pbVar11 = pbVar11 + 1;
  }
  else {
    if (uStack_28 == 0x4c) {
      uStack_28 = (uint)*pbVar11;
      goto LAB_1054610e;
    }
    uStack_28 = 0;
  }
  if ((uStack_24 == 0) && (*pbVar11 != 0x25)) {
    puVar2 = (uint32_t *)*param_3;
    *param_3 = puVar2 + 1;
    puStack_54 = (uint *)*puVar2;
  }
  bVar5 = *pbVar11;
  if (bVar5 == 0x66) {
LAB_1054621c:
    uStack_3c = 4;
  }
  else if (bVar5 < 0x67) {
    if (bVar5 == 0x58) goto LAB_10546210;
    if (bVar5 < 0x59) {
      if (bVar5 != 0x25) {
        if ((bVar5 != 0x45) && (bVar5 != 0x47)) {
          return 0xffffffff;
        }
        goto LAB_1054621c;
      }
      uStack_3c = 0;
      if (*pbVar9 != 0x25) {
        return 0xfffffffe;
      }
      pbVar9 = pbVar9 + 1;
    }
    else if (bVar5 == 0x5b) {
      uStack_3c = 2;
      pbStack_44 = pbVar11 + 1;
      bVar5 = *pbStack_44;
      if (bVar5 == 0x5e) {
        pbStack_44 = pbVar11 + 2;
      }
      uStack_40 = (uint)(bVar5 == 0x5e);
      pbVar11 = pbStack_44;
      if (*pbStack_44 != 0x5d) goto LAB_105462cc;
      pbVar11 = pbStack_44 + 1;
      bVar5 = *pbVar11;
      while ((bVar5 != 0 && (*pbVar11 != 0x5d))) {
        pbVar11 = pbVar11 + 1;
LAB_105462cc:
        bVar5 = *pbVar11;
      }
      if ((pbStack_44 == pbVar11) || (pbStack_50 = pbVar9, *pbVar11 == 0)) {
        return 0xffffffff;
      }
      while ((pbStack_4c = pbStack_50, *pbStack_50 != 0 &&
             (uVar6 = check_value_in_range_list(*pbStack_50,pbStack_44,pbVar11), uStack_40 != uVar6))) {
        pbStack_50 = pbStack_4c + 1;
      }
      pbStack_50 = (byte *)((int)pbStack_50 - (int)pbVar9);
      if ((iStack_2c == 0) || (pbStack_50 < caller_r9)) {
        caller_r9 = (uint)pbStack_50;
      }
    }
    else if (bVar5 == 99) {
      uStack_3c = 1;
      if (iStack_2c == 0) {
        caller_r9 = 1;
      }
      pbStack_50 = (byte *)count_string_bytes((char *)pbVar9);
      if (pbStack_50 < caller_r9) {
        return 0xffffffff;
      }
    }
    else {
      if (bVar5 != 100) {
        if (bVar5 != 0x65) {
          return 0xffffffff;
        }
        goto LAB_1054621c;
      }
LAB_105461f8:
      uStack_3c = 10;
    }
  }
  else if (bVar5 == 0x6f) {
    uStack_3c = 8;
  }
  else if (bVar5 < 0x70) {
    if (bVar5 == 0x67) goto LAB_1054621c;
    if (bVar5 == 0x69) {
      uStack_3c = 5;
    }
    else {
      if (bVar5 != 0x6e) {
        return 0xffffffff;
      }
      uStack_3c = 3;
      uStack_30 = *(uint *)_DAT_80014a6c/*SDRAM*/;
    }
  }
  else {
    if (bVar5 != 0x70) {
      if (bVar5 == 0x73) {
        uStack_3c = 2;
        while (pbStack_50 = pbVar9, ((&DAT_106220f1)[*pbVar9] & 4) != 0) {
          pbVar9 = pbVar9 + 1;
        }
        for (; (((&DAT_106220f1)[*pbStack_50] & 4) == 0 && (*pbStack_50 != 0));
            pbStack_50 = pbStack_50 + 1) {
        }
        pbStack_50 = (byte *)((int)pbStack_50 - (int)pbVar9);
        if ((iStack_2c == 0) || (pbStack_50 < caller_r9)) {
          caller_r9 = (uint)pbStack_50;
        }
        goto LAB_1054636a;
      }
      if (bVar5 == 0x75) goto LAB_105461f8;
      if (bVar5 != 0x78) {
        return 0xffffffff;
      }
    }
LAB_10546210:
    uStack_3c = 0x10;
  }
LAB_1054636a:
  puVar1 = puStack_54;
  if (3 < (int)uStack_3c) {
    bVar5 = *pbVar9;
    while (((&DAT_106220f1)[bVar5] & 4) != 0) {
      pbVar9 = pbVar9 + 1;
      bVar5 = *pbVar9;
    }
    iStack_48 = 0;
    if (*pbVar9 == 0x2d) {
      iStack_48 = 1;
    }
    else if (*pbVar9 != 0x2b) goto LAB_105463ba;
    if ((iStack_2c == 1) && (caller_r9 == 1)) {
      return 0xfffffffe;
    }
    pbVar9 = pbVar9 + 1;
    caller_r9 = caller_r9 - 1;
  }
LAB_105463ba:
  if (uStack_3c == 4) {
    if ((iStack_2c == 0) || (0x1ff < caller_r9)) {
      caller_r9 = 0x1ff;
    }
    if (caller_r9 == 0) {
      return 0xffffffff;
    }
    bVar5 = *pbVar9;
    pbVar4 = local_254;
    if (((&DAT_106220f1)[*pbVar9] & 0x20) == 0) {
      local_254[0] = *pbVar9;
      if (bVar5 != 0x2e) {
        if (local_254[0] != 0) {
          return 0xfffffffe;
        }
        return 0xffffffff;
      }
      pbVar9 = pbVar9 + 1;
      caller_r9 = caller_r9 - 1;
      if (((&DAT_106220f1)[*pbVar9] & 0x20) == 0) {
        uVar6 = (uint)*pbVar9;
      }
      else {
        uVar6 = (uint)*pbVar9;
        pbVar4 = local_254 + 1;
        if (caller_r9 != 0) goto LAB_105466b2;
      }
      if (uVar6 != 0) {
        return 0xfffffffe;
      }
      return 0xffffffff;
    }
    do {
      pbStack_50 = pbVar4;
      uVar10 = caller_r9;
      pbVar8 = pbVar9;
      pbVar9 = pbVar8 + 1;
      *pbStack_50 = bVar5;
      pbVar4 = pbStack_50 + 1;
      caller_r9 = uVar10 - 1;
      if (((&DAT_106220f1)[*pbVar9] & 0x20) == 0) {
        bVar5 = *pbVar9;
        break;
      }
      bVar5 = *pbVar9;
    } while (caller_r9 != 0);
    if (bVar5 == 0x2e) {
      bVar5 = *pbVar9;
      uVar6 = (uint)bVar5;
      if (caller_r9 == 0) goto LAB_105466b2;
      pbVar9 = pbVar8 + 2;
      *pbVar4 = bVar5;
      caller_r9 = uVar10 - 2;
      pbVar4 = pbStack_50 + 2;
    }
    while( true ) {
      pbStack_50 = pbVar4;
      uVar6 = (uint)*pbVar9;
      pbVar4 = pbStack_50;
LAB_105466b2:
      pbStack_50 = pbVar4;
      if (((&DAT_106220f1)[uVar6] & 0x20) == 0) break;
      bVar5 = *pbVar9;
      if (caller_r9 == 0) goto code_r0x105466c4;
      pbVar9 = pbVar9 + 1;
      *pbStack_50 = bVar5;
      caller_r9 = caller_r9 - 1;
      pbVar4 = pbStack_50 + 1;
    }
    bVar5 = *pbVar9;
code_r0x105466c4:
    if (((bVar5 == 0x65) || (*pbVar9 == 0x45)) && (caller_r9 != 0)) {
      pbVar4 = pbVar9 + 1;
      *pbStack_50 = *pbVar9;
      pbVar8 = pbStack_50 + 1;
      iVar3 = caller_r9 - 1;
      if (((*pbVar4 == 0x2d) || (*pbVar4 == 0x2b)) && (iVar3 != 0)) {
        *pbVar8 = *pbVar4;
        iVar3 = caller_r9 - 2;
        pbVar4 = pbVar9 + 2;
        pbVar8 = pbStack_50 + 2;
      }
      pbStack_50 = pbVar8;
      pbVar9 = pbVar4;
      if (((&DAT_106220f1)[*pbVar9] & 0x20) == 0) {
        bVar5 = *pbVar9;
code_r0x10546716:
        if (bVar5 != 0) {
          return 0xfffffffe;
        }
        return 0xffffffff;
      }
      bVar5 = *pbVar9;
      if (iVar3 == 0) goto code_r0x10546716;
      while( true ) {
        pbVar9 = pbVar9 + 1;
        *pbStack_50 = bVar5;
        pbStack_50 = pbStack_50 + 1;
        iVar3 = iVar3 + -1;
        if ((((&DAT_106220f1)[*pbVar9] & 0x20) == 0) || (iVar3 == 0)) break;
        bVar5 = *pbVar9;
      }
    }
    *pbStack_50 = 0;
    if (uStack_24 == 0) {
      parse_float_string_to_fixed(local_254);
      uStack_38 = extraout_r4;
      if (iStack_48 != 0) {
        uStack_38 = extraout_r4 ^ 0x80000000/*SDRAM*/;
      }
      if ((uStack_28 == 0x6c) || (uStack_28 == 0x4c)) {
        *puStack_54 = uStack_38;
        puStack_54[1] = extraout_r5;
      }
      else {
        uStack_34 = extraout_r5;
        uVar6 = encode_float32_to_fixed_point(uStack_38,extraout_r5);
        *puStack_54 = uVar6;
      }
    }
    goto LAB_105467a0;
  }
  if ((int)uStack_3c < 5) {
    if ((uStack_3c == 1) || (uStack_3c == 2)) {
      if (caller_r9 == 0) {
        if ((uStack_3c == 2) && (*pbVar9 != 0)) {
          return 0xfffffffe;
        }
        return 0xffffffff;
      }
      if ((uStack_24 == 0) && (memcpy_bytes(puStack_54,pbVar9,caller_r9), uStack_3c == 2)) {
        *(uint8_t *)(caller_r9 + (int)puVar1) = 0;
      }
      pbVar9 = pbVar9 + caller_r9;
      goto LAB_105467a0;
    }
    if (uStack_3c != 3) goto LAB_105467a0;
  }
  else {
    if (uStack_3c == 5) {
      if (*pbVar9 == 0x30) {
        if ((pbVar9[1] == 0x78) || (pbVar9[1] == 0x58)) {
          uStack_3c = 0x10;
        }
        else {
          uStack_3c = 8;
        }
      }
      else {
        uStack_3c = 10;
      }
LAB_1054648e:
      if ((*pbVar9 == 0x30) && ((pbVar9[1] == 0x78 || (pbVar9[1] == 0x58)))) {
        if ((iStack_2c == 0) || (2 < caller_r9)) {
          pbVar9 = pbVar9 + 2;
          caller_r9 = caller_r9 - 2;
        }
        else if (caller_r9 == 2) {
          if (*pbVar9 != 0) {
            return 0xfffffffe;
          }
          return 0xffffffff;
        }
      }
    }
    else if ((uStack_3c != 8) && (uStack_3c != 10)) {
      if (uStack_3c != 0x10) goto LAB_105467a0;
      goto LAB_1054648e;
    }
    if (((&DAT_106220f1)[*pbVar9] & 0x30) == 0) {
      if (*pbVar9 != 0) {
        return 0xfffffffe;
      }
      return 0xffffffff;
    }
    uVar6 = *pbVar9 & 0xdf;
    if (uVar6 < 0x41) {
      uVar6 = (uint)*pbVar9;
      iVar3 = 0x30;
    }
    else {
      iVar3 = 0x37;
    }
    uStack_30 = uVar6 - iVar3;
    if (uStack_3c <= uStack_30) {
      return 0xfffffffe;
    }
    if (iStack_2c == 1) {
      caller_r9 = caller_r9 - 1;
    }
    while (((pbVar9 = pbVar9 + 1, iStack_2c == 0 || (caller_r9 != 0)) &&
           (((&DAT_106220f1)[*pbVar9] & 0x30) != 0))) {
      if ((*pbVar9 & 0xdf) < 0x41) {
        pbStack_50 = (byte *)(*pbVar9 - 0x30);
      }
      else {
        pbStack_50 = (byte *)((*pbVar9 & 0xdf) - 0x37);
      }
      if (uStack_3c <= pbStack_50) break;
      uStack_30 = uStack_30 * uStack_3c + (int)pbStack_50;
      caller_r9 = caller_r9 - 1;
    }
    if (iStack_48 != 0) {
      uStack_30 = -uStack_30;
    }
  }
  if (uStack_24 == 0) {
    if (uStack_28 == 0x68) {
      *(short *)puStack_54 = (short)uStack_30;
    }
    else {
      *puStack_54 = uStack_30;
    }
  }
LAB_105467a0:
  *(uint *)_DAT_80014a6c/*SDRAM*/ = (uint)(pbVar9 + (*(uint *)_DAT_80014a6c/*SDRAM*/ - *param_1));
  *param_1 = (int)pbVar9;
  *param_2 = (int)(pbVar11 + 1);
  if (((uStack_24 == 1) || (*pbVar11 == 0x6e)) || (*pbVar11 == 0x25)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}
