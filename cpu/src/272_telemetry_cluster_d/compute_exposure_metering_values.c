/* @k10d compute_exposure_metering_values @ 0x10511d9a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10511dda) overlaps instruction at (ram,0x10511dd8)
    */

void compute_exposure_metering_values(int param_1)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  ushort uVar8;
  char cVar10;
  byte bVar11;
  char cVar12;
  uint8_t uVar13;
  uint8_t uVar14;
  ushort uVar9;
  int iVar15;
  
  iVar3 = param_1 + 0x2ac;
  cVar10 = settings_getter(iVar3,0x5b);
  if ((cVar10 == '\0') || (*(char *)(param_1 + 0x2a) == '\0')) {
    *(uint16_t *)(param_1 + 0x678) = 0;
    *(uint16_t *)(param_1 + 0x67a) = 0;
    return;
  }
  *(uint8_t *)(param_1 + 0x2c) = 1;
  *(uint16_t *)(param_1 + 0x678) = 0;
  *(uint16_t *)(param_1 + 0x67a) = 3;
  if (*(int *)(param_1 + 0x648) == 0) {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      *(uint *)(param_1 + 0x648) = (uint)*(ushort *)(param_1 + 0x67a);
      *(uint32_t *)(param_1 + 0x64c) = 0;
    }
    else {
      *(uint *)(param_1 + 0x648) = *(ushort *)(param_1 + 0x67a) + 1;
      *(uint32_t *)(param_1 + 0x64c) = 0;
    }
  }
  else if (*(char *)(param_1 + 0x2b) == '\0') {
    *(uint *)(param_1 + 0x648) = *(int *)(param_1 + 0x648) * (uint)*(ushort *)(param_1 + 0x67a);
    *(uint *)(param_1 + 0x64c) =
         (*(int *)(param_1 + 0x64c) + -1) * (uint)*(ushort *)(param_1 + 0x67a);
  }
  else {
    *(uint *)(param_1 + 0x648) = (*(ushort *)(param_1 + 0x67a) + 1) * *(int *)(param_1 + 0x648);
    *(uint *)(param_1 + 0x64c) =
         (*(int *)(param_1 + 0x64c) + -1) * (*(ushort *)(param_1 + 0x67a) + 1);
  }
  if (5 < *(ushort *)(param_1 + 0x67a)) {
    *(uint16_t *)(param_1 + 0x67a) = 5;
  }
  bVar11 = settings_getter(iVar3,0x5b);
  cVar10 = settings_getter(iVar3,0xb8);
  uVar4 = 0;
  if (*(short *)(param_1 + 0x67a) != 0) {
    do {
      *(ushort *)(uVar4 * 2 + param_1 + 0x67c) = (ushort)bVar11;
      *(uint16_t *)(uVar4 * 2 + param_1 + 0x686) = 0;
      uVar4 = uVar4 + 1 & 0xffff;
    } while (uVar4 < *(ushort *)(param_1 + 0x67a));
  }
  if (bVar11 == 2) {
    iVar3 = param_1 + 0x2ac;
    cVar12 = settings_getter(iVar3,0x50);
    iVar15 = 0x59;
    if (cVar12 != '\0') {
      iVar15 = 0x56;
    }
    bVar11 = settings_getter(iVar3,iVar15);
    uVar6 = (ushort)bVar11;
    cVar12 = settings_getter(iVar3,0x5d);
    uVar5 = 0;
    if (cVar12 == '\0') {
      uVar5 = 1;
    }
    else if (cVar12 == '\x01') {
      uVar5 = 2;
    }
    else if (cVar12 == '\x02') {
      uVar5 = 3;
    }
    uVar9 = (ushort)bVar11;
    if (cVar10 == '\0') {
      *(ushort *)(param_1 + 0x686) = uVar9;
      if (uVar6 < uVar5) {
        sVar7 = 0;
      }
      else {
        sVar7 = bVar11 - uVar5;
      }
      uVar6 = uVar6 + uVar5;
      *(short *)(param_1 + 0x688) = sVar7;
      if (6 < uVar6) {
        uVar6 = 6;
      }
    }
    else {
      if (cVar10 != '\x01') {
        if (cVar10 == '\x02') {
          *(ushort *)(param_1 + 0x688) = uVar9;
          if (uVar6 < uVar5) {
            sVar7 = 0;
          }
          else {
            sVar7 = bVar11 - uVar5;
          }
          uVar6 = uVar6 + uVar5;
          if (uVar6 < 7) {
            *(short *)(param_1 + 0x68a) = sVar7;
          }
          else {
            *(short *)(param_1 + 0x68a) = sVar7;
            uVar6 = 6;
          }
LAB_10512246:
          *(ushort *)(param_1 + 0x686) = uVar6;
          return;
        }
        *(ushort *)(param_1 + 0x686) = uVar9;
        if (uVar6 < uVar5) {
          sVar7 = 0;
        }
        else {
          sVar7 = bVar11 - uVar5;
        }
        uVar6 = uVar6 + uVar5;
        *(short *)(param_1 + 0x68a) = sVar7;
        if (6 < uVar6) {
          uVar6 = 6;
        }
LAB_10512006:
        iVar3 = 2;
        goto LAB_105124d8;
      }
      *(ushort *)(param_1 + 0x688) = uVar9;
      if (uVar6 < uVar5) {
        sVar7 = 0;
      }
      else {
        sVar7 = bVar11 - uVar5;
      }
      uVar6 = uVar6 + uVar5;
      *(short *)(param_1 + 0x686) = sVar7;
      if (6 < uVar6) {
        uVar6 = 6;
      }
    }
LAB_10511f7c:
    iVar3 = 4;
    goto LAB_105124d8;
  }
  if (bVar11 == 4) {
    iVar3 = param_1 + 0x2ac;
    cVar12 = settings_getter(iVar3,0x50);
    iVar15 = 0x5a;
    if (cVar12 != '\0') {
      iVar15 = 0x57;
    }
    bVar11 = settings_getter(iVar3,iVar15);
    uVar6 = (ushort)bVar11;
    cVar12 = settings_getter(iVar3,0x5f);
    uVar5 = 0;
    if (cVar12 == '\0') {
      uVar5 = 1;
    }
    else if (cVar12 == '\x01') {
      uVar5 = 2;
    }
    else if (cVar12 == '\x02') {
      uVar5 = 3;
    }
    uVar9 = (ushort)bVar11;
    if (cVar10 == '\0') {
      *(ushort *)(param_1 + 0x686) = uVar9;
      if (uVar6 < uVar5) {
        sVar7 = 0;
      }
      else {
        sVar7 = bVar11 - uVar5;
      }
      *(short *)(param_1 + 0x688) = sVar7;
      uVar6 = uVar6 + uVar5;
      if (6 < uVar6) {
        uVar6 = 6;
      }
    }
    else {
      if (cVar10 != '\x01') {
        if (cVar10 == '\x02') {
          *(ushort *)(param_1 + 0x688) = uVar9;
          if (uVar6 < uVar5) {
            sVar7 = 0;
          }
          else {
            sVar7 = bVar11 - uVar5;
          }
          *(short *)(param_1 + 0x68a) = sVar7;
          uVar6 = uVar6 + uVar5;
          if (6 < uVar6) {
            uVar6 = 6;
          }
          goto LAB_10512246;
        }
        *(ushort *)(param_1 + 0x686) = uVar9;
        if (uVar6 < uVar5) {
          sVar7 = 0;
        }
        else {
          sVar7 = bVar11 - uVar5;
        }
        *(short *)(param_1 + 0x68a) = sVar7;
        uVar6 = uVar6 + uVar5;
        if (6 < uVar6) {
          uVar6 = 6;
        }
        goto LAB_10512006;
      }
      *(ushort *)(param_1 + 0x688) = uVar9;
      if (uVar6 < uVar5) {
        sVar7 = 0;
      }
      else {
        sVar7 = bVar11 - uVar5;
      }
      *(short *)(param_1 + 0x686) = sVar7;
      uVar6 = uVar6 + uVar5;
      if (6 < uVar6) {
        uVar6 = 6;
      }
    }
    goto LAB_10511f7c;
  }
  if (bVar11 == 3) {
    iVar3 = param_1 + 0x2ac;
    cVar12 = settings_getter(iVar3,0x50);
    iVar15 = 0x58;
    if (cVar12 != '\0') {
      iVar15 = 0x55;
    }
    bVar11 = settings_getter(iVar3,iVar15);
    uVar6 = (ushort)bVar11;
    cVar12 = settings_getter(iVar3,0x5e);
    uVar5 = 0;
    if (cVar12 == '\0') {
      uVar5 = 1;
    }
    else if (cVar12 == '\x01') {
      uVar5 = 2;
    }
    else if (cVar12 == '\x02') {
      uVar5 = 3;
    }
    uVar9 = (ushort)bVar11;
    if (cVar10 == '\0') {
      *(ushort *)(param_1 + 0x686) = uVar9;
      if (uVar6 < uVar5) {
        sVar7 = 0;
      }
      else {
        sVar7 = bVar11 - uVar5;
      }
      uVar6 = uVar6 + uVar5;
      if (uVar6 < 7) {
        *(short *)(param_1 + 0x688) = sVar7;
      }
      else {
        *(short *)(param_1 + 0x688) = sVar7;
        uVar6 = 6;
      }
    }
    else {
      if (cVar10 != '\x01') {
        if (cVar10 == '\x02') {
          *(ushort *)(param_1 + 0x688) = uVar9;
          if (uVar6 < uVar5) {
            sVar7 = 0;
          }
          else {
            sVar7 = bVar11 - uVar5;
          }
          uVar6 = uVar6 + uVar5;
          *(short *)(param_1 + 0x68a) = sVar7;
          if (6 < uVar6) {
            uVar6 = 6;
          }
          goto LAB_10512246;
        }
        *(ushort *)(param_1 + 0x686) = uVar9;
        if (uVar6 < uVar5) {
          sVar7 = 0;
        }
        else {
          sVar7 = bVar11 - uVar5;
        }
        uVar6 = uVar6 + uVar5;
        if (uVar6 < 7) {
          *(short *)(param_1 + 0x68a) = sVar7;
        }
        else {
          *(short *)(param_1 + 0x68a) = sVar7;
          uVar6 = 6;
        }
        goto LAB_10512006;
      }
      *(ushort *)(param_1 + 0x688) = uVar9;
      if (uVar6 < uVar5) {
        sVar7 = 0;
      }
      else {
        sVar7 = bVar11 - uVar5;
      }
      uVar6 = uVar6 + uVar5;
      if (uVar6 < 7) {
        *(short *)(param_1 + 0x686) = sVar7;
      }
      else {
        *(short *)(param_1 + 0x686) = sVar7;
        uVar6 = 6;
      }
    }
    goto LAB_10511f7c;
  }
  iVar3 = param_1 + 0x2ac;
  uVar13 = settings_getter(iVar3,0xd);
  uVar14 = settings_getter(iVar3,0x5c);
  uVar5 = 0;
  bVar1 = true;
  switch(uVar14) {
  case 0:
    uVar5 = 3;
    break;
  case 1:
    uVar5 = 2;
    break;
  case 2:
    uVar5 = 1;
    break;
  case 3:
    uVar5 = 3;
    goto LAB_105122c8;
  case 4:
    uVar5 = 2;
    goto LAB_105122c8;
  case 5:
    uVar5 = 1;
LAB_105122c8:
    bVar1 = false;
  default:
    goto switchD_105122b6_default;
  }
  bVar1 = true;
switchD_105122b6_default:
  uVar6 = 0;
  switch(uVar13) {
  case 0:
    bVar11 = settings_getter(iVar3,0x11);
    uVar9 = (ushort)bVar11;
    iVar15 = 0x12;
    break;
  case 1:
    bVar11 = settings_getter(iVar3,0x13);
    uVar9 = (ushort)bVar11;
    iVar15 = 0x14;
    break;
  case 2:
    bVar11 = settings_getter(iVar3,0x15);
    uVar9 = (ushort)bVar11;
    iVar15 = 0x16;
    break;
  case 3:
    bVar11 = settings_getter(iVar3,0x17);
    uVar9 = (ushort)bVar11;
    iVar15 = 0x18;
    break;
  case 4:
    bVar11 = settings_getter(iVar3,0x19);
    uVar9 = (ushort)bVar11;
    iVar15 = 0x1a;
    break;
  case 5:
    bVar11 = settings_getter(iVar3,0x1b);
    uVar9 = (ushort)bVar11;
    iVar15 = 0x1c;
    break;
  case 6:
    bVar11 = settings_getter(iVar3,0x1d);
    uVar9 = (ushort)bVar11;
    iVar15 = 0x1e;
    break;
  case 7:
    bVar11 = settings_getter(iVar3,0x1f);
    uVar9 = (ushort)bVar11;
    iVar15 = 0x20;
    break;
  case 8:
    bVar11 = settings_getter(iVar3,0x21);
    uVar9 = (ushort)bVar11;
    iVar15 = 0x22;
    break;
  case 9:
    bVar11 = settings_getter(iVar3,0x23);
    uVar9 = (ushort)bVar11;
    iVar15 = 0x24;
    break;
  case 10:
    bVar11 = settings_getter(iVar3,0x25);
    uVar9 = (ushort)bVar11;
    iVar15 = 0x26;
    break;
  case 0xb:
    bVar11 = settings_getter(iVar3,0x27);
    uVar9 = (ushort)bVar11;
    iVar15 = 0x28;
    break;
  case 0xc:
    bVar11 = settings_getter(iVar3,0x29);
    uVar9 = (ushort)bVar11;
    iVar15 = 0x2a;
    break;
  case 0xd:
    bVar11 = settings_getter(iVar3,0x2c);
    uVar9 = (ushort)bVar11;
    iVar15 = 0x2d;
    break;
  case 0xe:
    bVar11 = settings_getter(iVar3,0x2f);
    uVar9 = (ushort)bVar11;
    iVar15 = 0x30;
    break;
  default:
    uVar9 = 0;
    goto LAB_105123f0;
  }
  bVar11 = settings_getter(iVar3,iVar15);
  uVar6 = (ushort)bVar11;
LAB_105123f0:
  uVar8 = uVar9;
  if (!bVar1) {
    uVar8 = uVar6;
  }
  if (cVar10 == '\0') {
    *(ushort *)(param_1 + 0x686) = uVar8;
    if (uVar8 < uVar5) {
      sVar7 = 0;
    }
    else {
      sVar7 = uVar8 - uVar5;
    }
    uVar8 = uVar8 + uVar5;
    *(short *)(param_1 + 0x688) = sVar7;
    if (0xe < uVar8) {
      uVar8 = 0xe;
    }
    iVar3 = 4;
LAB_1051249c:
    *(ushort *)(iVar3 + param_1 + 0x686) = uVar8;
  }
  else {
    if (cVar10 == '\x01') {
      *(ushort *)(param_1 + 0x688) = uVar8;
      if (uVar8 < uVar5) {
        sVar7 = 0;
      }
      else {
        sVar7 = uVar8 - uVar5;
      }
      uVar8 = uVar8 + uVar5;
      *(short *)(param_1 + 0x686) = sVar7;
      if (0xe < uVar8) {
        uVar8 = 0xe;
      }
      iVar3 = 4;
      goto LAB_1051249c;
    }
    if (cVar10 != '\x02') {
      *(ushort *)(param_1 + 0x686) = uVar8;
      if (uVar8 < uVar5) {
        sVar7 = 0;
      }
      else {
        sVar7 = uVar8 - uVar5;
      }
      uVar8 = uVar8 + uVar5;
      *(short *)(param_1 + 0x68a) = sVar7;
      if (0xe < uVar8) {
        uVar8 = 0xe;
      }
      iVar3 = 2;
      goto LAB_1051249c;
    }
    *(ushort *)(param_1 + 0x688) = uVar8;
    if (uVar8 < uVar5) {
      sVar7 = 0;
    }
    else {
      sVar7 = uVar8 - uVar5;
    }
    uVar8 = uVar8 + uVar5;
    *(short *)(param_1 + 0x68a) = sVar7;
    if (0xe < uVar8) {
      uVar8 = 0xe;
    }
    *(ushort *)(param_1 + 0x686) = uVar8;
  }
  puVar2 = (ushort *)(param_1 + 0x686);
  if (bVar1) {
    *puVar2 = *puVar2 << 8 | uVar6;
    *(ushort *)(param_1 + 0x688) = *(short *)(param_1 + 0x688) << 8 | uVar6;
    iVar3 = 4;
    uVar6 = *(short *)(param_1 + 0x68a) << 8 | uVar6;
  }
  else {
    uVar6 = uVar9 << 8;
    *puVar2 = *puVar2 | uVar6;
    *(ushort *)(param_1 + 0x688) = *(ushort *)(param_1 + 0x688) | uVar6;
    iVar3 = 4;
    uVar6 = *(ushort *)(param_1 + 0x68a) | uVar6;
  }
LAB_105124d8:
  *(ushort *)(iVar3 + param_1 + 0x686) = uVar6;
  return;
}
