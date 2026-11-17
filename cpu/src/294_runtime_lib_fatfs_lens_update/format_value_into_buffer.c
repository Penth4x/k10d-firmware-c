/* @k10d format_value_into_buffer @ 0x105454b4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Parses a printf-style format string and writes the formatted result into a caller-
 *   provided buffer.
 * summary:
 *   The function implements a subset of printf, supporting flags (-, +, 0, space, #),
 *   width, precision, and conversion specifiers for integers (d, u, x, X, o), floating-
 *   point (f, e, g), characters (c), and strings (s). It uses helper functions for division
 *   and string length, and writes the final output via memcpy_bytes (likely a memcpy or
 *   similar). The return value is the number of characters written.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x105456ba) overlaps instruction at (ram,0x105456b8)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int format_value_into_buffer(uint8_t *param_1,uint32_t *param_2,int *param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  uint32_t *puVar4;
  uint *puVar5;
  char cVar7;
  int iVar6;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint8_t *puVar15;
  uintptr_t sp;
  byte local_250 [510];
  byte local_52 [6];
  uint uStack_4c;
  uint uStack_48;
  uint *puStack_44;
  byte *pbStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  byte *pbStack_30;
  byte *pbStack_2c;
  uint32_t local_28;
  
  pbVar11 = (byte *)0x0;
  local_28 = 0;
  iStack_34 = 0;
  local_52[2] = local_52[2] & 7;
  local_52[1] = 0;
  pbStack_40 = local_52 + 1;
  pbVar10 = (byte *)*param_2;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while (pbVar9 = pbVar10 + 1, *pbVar9 == 0x2d) {
            local_52[2] = local_52[2] & 0xdf | 0x80;
            pbVar10 = pbVar9;
          }
          if (*pbVar9 != 0x2b) break;
          local_52[2] = local_52[2] & 0xef | 0x40;
          local_28 = 0x2b0000;
          pbVar10 = pbVar9;
        }
        if (*pbVar9 != 0x30) break;
        pbVar10 = pbVar9;
        if ((local_52[2] & 0x80) == 0) {
          local_52[2] = local_52[2] | 0x20;
        }
      }
      if (*pbVar9 != 0x20) break;
      pbVar10 = pbVar9;
      if ((local_52[2] & 0x40) == 0) {
        local_52[2] = local_52[2] | 0x10;
        local_28 = 0x200000;
      }
    }
    if (*pbVar9 != 0x23) break;
    local_52[2] = local_52[2] | 8;
    pbVar10 = pbVar9;
  }
  if (((&DAT_106220f1)[*pbVar9] & 0x20) == 0) {
    if (*pbVar9 == 0x2a) {
      piVar3 = (int *)*param_3;
      pbVar9 = pbVar10 + 2;
      *param_3 = (int)(piVar3 + 1);
      iStack_34 = *piVar3;
      if (iStack_34 < 0) {
        iStack_34 = -iStack_34;
        local_52[2] = local_52[2] & 0xdf | 0x80;
      }
    }
  }
  else {
    iStack_34 = 0;
    do {
      iStack_34 = iStack_34 * 10 + (uint)*pbVar9 + -0x30;
      pbVar9 = pbVar9 + 1;
    } while (((&DAT_106220f1)[*pbVar9] & 0x20) != 0);
  }
  if (*pbVar9 == 0x2e) {
    pbVar10 = pbVar9 + 1;
    if (((&DAT_106220f1)[*pbVar10] & 0x20) == 0) {
      if (*pbVar10 == 0x2a) {
        puVar4 = (uint32_t *)*param_3;
        *param_3 = (int)(puVar4 + 1);
        pbVar11 = (byte *)*puVar4;
        pbVar10 = pbVar9 + 2;
      }
    }
    else {
      do {
        pbVar11 = (byte *)((int)pbVar11 * 10 + (uint)*pbVar10 + -0x30);
        pbVar10 = pbVar10 + 1;
      } while (((&DAT_106220f1)[*pbVar10] & 0x20) != 0);
    }
    uVar13 = 0;
    pbVar9 = pbVar10;
    if ((int)pbVar11 < 0) {
      pbVar11 = (byte *)0x0;
      uVar13 = 7;
    }
  }
  else {
    uVar13 = 7;
  }
  if (((*pbVar9 == 0x68) || (*pbVar9 == 0x6c)) || (*pbVar9 == 0x4c)) {
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  }
  else {
    bVar8 = 0;
  }
  bVar1 = *pbVar9;
  pbStack_2c = pbStack_40;
  if (bVar1 != 0x66) {
    if (bVar1 < 0x67) {
      if (bVar1 != 0x58) {
        if (bVar1 < 0x59) {
          if (bVar1 == 0x25) {
            local_52[2] = local_52[2] & 0xdf;
            pbStack_2c = local_52;
            local_52[0] = *pbVar9;
            pbStack_30 = (byte *)0x1;
            goto LAB_10545db2;
          }
          if ((bVar1 != 0x45) && (bVar1 != 0x47)) {
LAB_10545d7a:
            pbVar9 = pbVar9 + ((uint)(*pbVar9 != 0) - (int)*param_2);
            if ((param_4 != 0) && (0x200 < (int)pbVar9)) {
              pbVar9 = (byte *)0x200;
            }
            memcpy_bytes(param_1,(void *)*param_2,(int)pbVar9);
            return 1;
          }
        }
        else {
          if (bVar1 == 99) {
            local_52[2] = local_52[2] & 0xdf;
            pbStack_2c = local_52;
            puVar4 = (uint32_t *)*param_3;
            *param_3 = (int)(puVar4 + 1);
            local_52[0] = (byte)*puVar4;
            pbStack_30 = (byte *)0x1;
            goto LAB_10545db2;
          }
          if (bVar1 == 100) goto LAB_1054577e;
          if (bVar1 != 0x65) goto LAB_10545d7a;
        }
        goto LAB_10545962;
      }
    }
    else if (bVar1 != 0x6f) {
      if (bVar1 < 0x70) {
        if (bVar1 == 0x67) goto LAB_10545962;
        if (bVar1 != 0x69) {
          if (bVar1 == 0x6e) {
            puVar4 = (uint32_t *)*param_3;
            if (bVar8 == 0x68) {
              *param_3 = (int)(puVar4 + 1);
              *(short *)*puVar4 = (short)*(uint *)_DAT_80014a6c/*SDRAM*/;
            }
            else {
              *param_3 = (int)(puVar4 + 1);
              *(uint32_t *)*puVar4 = *(uint *)_DAT_80014a6c/*SDRAM*/;
            }
            *param_2 = pbVar9;
            return 0;
          }
          goto LAB_10545d7a;
        }
      }
      else {
        if (bVar1 == 0x70) {
          local_52[2] = local_52[2] & 0xdf;
          puVar5 = (uint *)*param_3;
          *param_3 = (int)(puVar5 + 1);
          uStack_4c = *puVar5;
          pbStack_30 = (byte *)0x8;
          for (iVar6 = 8; 0 < iVar6; iVar6 = iVar6 + -1) {
            pbStack_2c = pbStack_2c + -1;
            if ((uStack_4c & 0xf) < 10) {
              cVar7 = '0';
            }
            else {
              cVar7 = '7';
            }
            *pbStack_2c = (char)(uStack_4c & 0xf) + cVar7;
            uStack_4c = uStack_4c >> 4;
          }
          local_28 = 0x2307800;
          goto LAB_10545db2;
        }
        if (bVar1 == 0x73) {
          local_52[2] = local_52[2] & 0xdf;
          puVar4 = (uint32_t *)*param_3;
          *param_3 = (int)(puVar4 + 1);
          pbStack_2c = (byte *)*puVar4;
          pbStack_30 = (byte *)count_string_bytes((char *)pbStack_2c);
          if (0x1ff < (int)pbStack_30) {
            pbStack_30 = (byte *)0x1ff;
          }
          if (uVar13 == 0) {
            if (0x1ff < (int)pbVar11) {
              pbVar11 = (byte *)0x1ff;
            }
            (*(code *)0x1054534e/*ROM*/)(local_250,pbStack_2c,pbVar11);
            if ((int)pbVar11 < (int)pbStack_30) {
              pbStack_30 = pbVar11;
            }
          }
          else if (pbStack_30 == (byte *)0x1ff) {
            (*(code *)0x1054534e/*ROM*/)(local_250,pbStack_2c,0x1ff);
          }
          else {
            copy_null_terminated_string(local_250,pbStack_2c);
          }
          pbStack_2c = local_250;
          goto LAB_10545db2;
        }
        if (bVar1 != 0x75) {
          if (bVar1 != 0x78) goto LAB_10545d7a;
          goto LAB_1054585c;
        }
      }
LAB_1054577e:
      puVar5 = (uint *)*param_3;
      *param_3 = (int)(puVar5 + 1);
      uStack_4c = *puVar5;
      if (*pbVar9 == 0x75) {
        if (bVar8 == 0x68) {
          uStack_4c = uStack_4c & 0xffff;
        }
      }
      else {
        if (bVar8 == 0x68) {
          uStack_4c = (uint)(short)uStack_4c;
        }
        if ((int)uStack_4c < 0) {
          local_28 = 0x12d0000;
          uStack_4c = -uStack_4c;
        }
        else if (((local_52[2] & 0x40) != 0) || ((local_52[2] & 0x10) != 0)) {
          local_28 = local_28 | 0x1000000;
        }
      }
      uVar12 = (uint)pbVar11 | uVar13 & 1;
      if (uVar13 == 0) {
        local_52[2] = local_52[2] & 0xdf;
      }
      if (0x1ff < (int)uVar12) {
        uVar12 = 0x1ff;
      }
      for (; (uStack_4c != 0 || (0 < (int)uVar12)); uVar12 = uVar12 - 1) {
        pbStack_2c = pbStack_2c + -1;
        uVar13 = compute_modulo_10544c28(uStack_4c,10);
        *pbStack_2c = (char)uVar13 + 0x30;
        uStack_4c = unsigned_divide(uStack_4c,10);
      }
      if (*pbStack_2c == 0) {
        local_28 = 0;
        local_52[2] = local_52[2] & 0xdf;
      }
      pbStack_30 = pbStack_40 + -(int)pbStack_2c;
      goto LAB_10545db2;
    }
LAB_1054585c:
    puVar5 = (uint *)*param_3;
    *param_3 = (int)(puVar5 + 1);
    uStack_4c = *puVar5;
    if (bVar8 == 0x68) {
      uStack_4c = uStack_4c & 0xffff;
    }
    uVar12 = (uint)pbVar11 | uVar13 & 1;
    if (uVar13 == 0) {
      local_52[2] = local_52[2] & 0xdf;
    }
    if (*pbVar9 == 0x6f) {
      if (0x1ff < (int)uVar12) {
        uVar12 = 0x1ff;
      }
      for (; (uStack_4c != 0 || (0 < (int)uVar12)); uVar12 = uVar12 - 1) {
        pbStack_2c = pbStack_2c + -1;
        *pbStack_2c = ((byte)uStack_4c & 7) + 0x30;
        uStack_4c = uStack_4c >> 3;
      }
      if (((local_52[2] & 8) != 0) && (*pbStack_2c != 0x30)) {
        local_28 = 0x1300000;
      }
    }
    else {
      if (uStack_4c == 0) {
        local_52[2] = local_52[2] & 0xf7;
      }
      if (0x1fe < (int)uVar12) {
        uVar12 = 0x1fe;
      }
      for (; (uStack_4c != 0 || (0 < (int)uVar12)); uVar12 = uVar12 - 1) {
        pbStack_2c = pbStack_2c + -1;
        if ((uStack_4c & 0xf) < 10) {
          cVar7 = '0';
        }
        else {
          cVar7 = *pbVar9 - 0x21;
        }
        *pbStack_2c = (char)(uStack_4c & 0xf) + cVar7;
        uStack_4c = uStack_4c >> 4;
      }
      if (((local_52[2] & 8) != 0) && (*pbStack_2c != 0)) {
        local_28 = CONCAT22(0x230,(ushort)*pbVar9 << 8);
      }
    }
    pbStack_30 = pbStack_40 + -(int)pbStack_2c;
    goto LAB_10545db2;
  }
LAB_10545962:
  puVar5 = (uint *)*param_3;
  *param_3 = (int)(puVar5 + 2);
  uVar12 = *puVar5;
  uStack_48 = puVar5[1];
  uStack_4c = (uStack_4c & ~(0xffffULL << 0)) | ((((uint64_t)((ushort)(uVar12 >> 0x10))) & 0xffffULL) << 0);
  if ((uVar12 & 0x80000000/*SDRAM*/) == 0) {
LAB_105459ba:
    uStack_4c = uVar12;
    if (((local_52[2] & 0x40) != 0) || ((local_52[2] & 0x10) != 0)) {
      local_28 = local_28 | 0x1000000;
    }
  }
  else {
    bVar2 = false;
    if (((((uint16_t)((uint64_t)(uStack_4c) >> 0)) & 0x7ff0) == 0x7ff0) && (((uVar12 & 0xfffff) != 0 || (uStack_48 != 0)))) {
      bVar2 = true;
    }
    if (bVar2) goto LAB_105459ba;
    local_28 = 0x12d0000;
    uStack_4c = uVar12 ^ 0x80000000/*SDRAM*/;
  }
  if ((((uint16_t)((uint64_t)(uStack_4c) >> 0)) & 0x7ff0) == 0x7ff0) {
    if (((uStack_4c & 0xfffff) == 0) && (uStack_48 == 0)) {
      pbStack_2c = &DAT_10622234;
    }
    else {
      pbStack_2c = &DAT_10622238;
    }
    pbStack_30 = (byte *)0x3;
    goto LAB_10545db2;
  }
  puStack_44 = &uStack_4c;
  iStack_38 = normalize_fixed_point_value_10546d6a(puStack_44);
  uVar13 = (uint)pbVar11 | uVar13 & 6;
  iVar6 = iStack_38;
  if (*pbVar9 == 0x66) {
    uStack_3c = 0;
  }
  else {
    uStack_3c = (uint)*pbVar9;
    if (*pbVar9 != 0x65) {
      if (uStack_3c != 0x45) {
        if (uVar13 == 0) {
          uVar13 = 1;
        }
        if ((iStack_38 < -4) || ((int)uVar13 <= iStack_38)) {
          uStack_3c = *pbVar9 - 2;
          uVar13 = uVar13 - 1;
          iVar6 = 0;
        }
        else {
          uStack_3c = 0;
          uVar13 = (uVar13 - iStack_38) - 1;
        }
        goto LAB_10545a80;
      }
      uStack_3c = (uint)*pbVar9;
    }
    iVar6 = 0;
  }
LAB_10545a80:
  local_250[0] = 0;
  pbStack_2c = local_250 + 1;
  iVar6 = increment_decimal_string(&pbStack_2c,puStack_44,iVar6,uVar13);
  if (iVar6 != 0) {
    if (uStack_3c == 0) {
      if (((*pbVar9 == 0x67) || (*pbVar9 == 0x47)) && (pbStack_2c[-1] == 0x30)) {
        pbStack_2c = pbStack_2c + -1;
      }
      if (iVar6 == 1) {
        local_250[0] = 0x31;
      }
    }
    else {
      local_250[1] = 0x31;
      iStack_38 = iStack_38 + 1;
    }
  }
  if ((local_52[2] & 8) == 0) {
    pbStack_2c = pbStack_2c + -1;
    if ((*pbVar9 == 0x67) || (*pbVar9 == 0x47)) {
      bVar8 = *pbStack_2c;
      while (bVar8 == 0x30) {
        pbStack_2c = pbStack_2c + -1;
        bVar8 = *pbStack_2c;
      }
    }
    if (*pbStack_2c != 0x2e) {
      pbStack_2c = pbStack_2c + 1;
    }
  }
  if (uStack_3c != 0) {
    *pbStack_2c = (byte)uStack_3c;
    pbStack_2c = pbStack_2c + 1;
    if (iStack_38 < 0) {
      *pbStack_2c = 0x2d;
      iStack_38 = -iStack_38;
    }
    else {
      *pbStack_2c = 0x2b;
    }
    iVar6 = iStack_38;
    pbStack_2c = pbStack_2c + 1;
    if (99 < iStack_38) {
      cVar7 = integer_divide(iStack_38,100);
      *pbStack_2c = cVar7 + 0x30;
      pbStack_2c = pbStack_2c + 1;
      iStack_38 = compute_modulo_10546d1c(iVar6,100);
    }
    iVar6 = iStack_38;
    cVar7 = integer_divide(iStack_38,10);
    *pbStack_2c = cVar7 + 0x30;
    pbStack_2c = pbStack_2c + 1;
    cVar7 = compute_modulo_10546d1c(iVar6,10);
    *pbStack_2c = cVar7 + 0x30;
    pbStack_2c = pbStack_2c + 1;
  }
  *pbStack_2c = 0;
  if (local_250[0] == 0) {
    pbStack_30 = pbStack_2c + (-1 - (int)local_250);
    pbStack_2c = local_250 + 1;
  }
  else {
    pbStack_30 = pbStack_2c + -(int)local_250;
    pbStack_2c = local_250;
  }
LAB_10545db2:
  if ((param_4 != 0) && (0x1ff < iStack_34)) {
    iStack_34 = 0x1ff;
  }
  iVar6 = (iStack_34 - (int)pbStack_30) - (uint)((uint8_t)((uint64_t)(local_28) >> 0));
  puVar15 = param_1;
  if (((local_52[2] & 0x20) == 0) && (iVar14 = iVar6, (local_52[2] & 0x80) == 0)) {
    while (iVar6 = iVar14 + -1, 0 < iVar14) {
      *puVar15 = 0x20;
      iVar14 = iVar6;
      puVar15 = puVar15 + 1;
    }
  }
  if (((uint8_t)((uint64_t)(local_28) >> 0)) != 0) {
    memcpy_bytes(puVar15,(void *)((int)&local_28 + 1),(uint)((uint8_t)((uint64_t)(local_28) >> 0)));
    puVar15 = puVar15 + (local_28 >> 0x18);
  }
  pbVar10 = pbStack_30;
  iVar14 = iVar6;
  if ((local_52[2] & 0x20) != 0) {
    while (iVar6 = iVar14 + -1, 0 < iVar14) {
      *puVar15 = 0x30;
      puVar15 = puVar15 + 1;
      iVar14 = iVar6;
    }
  }
  memcpy_bytes(puVar15,pbStack_2c,(int)pbStack_30);
  puVar15 = puVar15 + (int)pbVar10;
  if ((local_52[2] & 0x80) != 0) {
    while (0 < iVar6) {
      *puVar15 = 0x20;
      puVar15 = puVar15 + 1;
      iVar6 = iVar6 + -1;
    }
  }
  *param_2 = pbVar9;
  return (int)puVar15 - (int)param_1;
}
