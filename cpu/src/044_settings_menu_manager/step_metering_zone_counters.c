/* @k10d step_metering_zone_counters @ 0x1039ffac
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Increments or decrements a set of 6-bit counters in a metering object based on a
 *   command code and zone index.
 * summary:
 *   The function dispatches on param_2 to perform counter operations on fields within the
 *   object pointed to by param_1. For command 0xd it increments specific 6-bit counters
 *   (wrapping at 0x3f), and for 0xe it decrements them (wrapping at 0). Commands 0xf and
 *   0x10 increment or decrement a zone index stored at offset 0x14. It also calls
 *   empty_stub_1050d03e and empty_stub_function_1050d044 with packed counter values, likely
 *   for display or processing. The structure contains multiple pairs of 16-bit values at
 *   offsets 0x15-0x21 and 0x56-0x82, which appear to be the counters being manipulated.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103a01bc) overlaps instruction at (ram,0x103a01ba)
    */

void step_metering_zone_counters(cls_10564530 *param_1,int param_2,uint32_t param_3)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  ushort uVar10;
  int iVar11;
  short sVar13;
  int iVar12;
  uint32_t uVar14;
  ushort *puVar15;
  uintptr_t sp;
  uint *puVar16;
  uint8_t auStack_88 [20];
  uint16_t *apuStack_6c [4];
  uint16_t *puStack_5c;
  uint16_t *puStack_58;
  uint16_t *puStack_54;
  uint16_t *puStack_50;
  uint16_t *puStack_4c;
  uint16_t *puStack_48;
  uint16_t *puStack_44;
  uint16_t *puStack_40;
  uint16_t *puStack_3c;
  uint16_t *puStack_38;
  uint16_t *puStack_34;
  uint16_t *puStack_30;
  uint16_t *puStack_2c;
  uint16_t *puStack_28;
  uint16_t *puStack_24;
  uint16_t *puStack_20;
  uint16_t *puStack_1c;
  uint16_t *puStack_18;
  uint16_t *puStack_14;
  uint16_t *puStack_10;
  uint16_t *puStack_c;
  
  puVar16 = (uint *)auStack_88;
  dispatch_event_0x29_via_vtable((cls_105643d0 *)param_1,param_2,param_3);
  apuStack_6c[0] = &param_1->field_0x54;
  apuStack_6c[1] = &param_1->field_0x56;
  apuStack_6c[2] = &param_1->field_0x58;
  apuStack_6c[3] = &param_1->field_0x5a;
  puStack_5c = &param_1->field_0x5c;
  puStack_58 = &param_1->field_0x5e;
  puStack_54 = &param_1->field_0x60;
  puStack_50 = &param_1->field_0x62;
  puStack_4c = &param_1->field_0x64;
  puStack_48 = &param_1->field_0x66;
  puStack_44 = &param_1->field_0x68;
  puStack_40 = &param_1->field_0x6a;
  puStack_3c = &param_1->field_0x6c;
  puStack_38 = &param_1->field_0x6e;
  puStack_34 = &param_1->field_0x70;
  puStack_30 = &param_1->field_0x72;
  puStack_2c = &param_1->field_0x74;
  puStack_28 = &param_1->field_0x76;
  puStack_24 = &param_1->field_0x78;
  puStack_20 = &param_1->field_0x7a;
  puStack_1c = &param_1->field_0x7c;
  puStack_18 = &param_1->field_0x7e;
  puStack_14 = &param_1->field_0x80;
  puStack_10 = &param_1->field_0x82;
  puStack_c = &param_1->field_0x84;
  iVar9 = param_1->field_0x50;
  puVar15 = apuStack_6c[iVar9];
  switch(param_2) {
  case 0:
  case 1:
  case 0x13:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x1c:
    (((vtbl_entry*)(param_1->field_0x0))[14].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,0x1120004,0);
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x12:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x1a:
    break;
  case 0xd:
    if (((iVar9 != 0) && (iVar9 != 1)) && ((iVar9 != 6 && (iVar9 != 7)))) {
      if ((iVar9 == 2) || (iVar9 == 3)) {
        if ((ushort)param_1->field_0x58 < 0x3f) {
          sVar13 = param_1->field_0x58 + 1;
        }
        else {
          sVar13 = 0;
        }
        param_1->field_0x58 = sVar13;
        if ((ushort)param_1->field_0x5a < 0x3f) {
          sVar13 = param_1->field_0x5a + 1;
        }
        else {
          sVar13 = 0;
        }
        iVar9 = 6;
      }
      else if ((iVar9 == 4) || (iVar9 == 5)) {
        if ((ushort)param_1->field_0x5c < 0x3f) {
          sVar13 = param_1->field_0x5c + 1;
        }
        else {
          sVar13 = 0;
        }
        param_1->field_0x5c = sVar13;
        if ((ushort)param_1->field_0x5e < 0x3f) {
          sVar13 = param_1->field_0x5e + 1;
        }
        else {
          sVar13 = 0;
        }
        iVar9 = 10;
      }
      else {
        if ((iVar9 != 8) && (iVar9 != 9)) {
          if ((iVar9 == 10) || (iVar9 == 0xb)) {
            if ((ushort)param_1->field_0x68 < 0x3f) {
              sVar13 = param_1->field_0x68 + 1;
            }
            else {
              sVar13 = 0;
            }
            param_1->field_0x68 = sVar13;
            if ((ushort)param_1->field_0x6a < 0x3f) {
              sVar13 = param_1->field_0x6a + 1;
            }
            else {
              sVar13 = 0;
            }
            param_1->field_0x6a = sVar13;
          }
          else {
            if (*puVar15 < 0x3f) {
              uVar10 = *puVar15 + 1;
            }
            else {
              uVar10 = 0;
            }
            *puVar15 = uVar10;
            if (param_1->field_0x50 == 0x18) {
              iVar12 = 5;
              iVar9 = 0;
              do {
                if ((((iVar9 != 0) && (iVar9 != 2)) && (iVar9 != 0xc)) && (iVar9 != 0xe)) {
                  if (*(ushort *)((int)apuStack_6c[0] + iVar9) < 0x3f) {
                    sVar13 = *(ushort *)((int)apuStack_6c[0] + iVar9) + 1;
                  }
                  else {
                    sVar13 = 0;
                  }
                  *(short *)((int)apuStack_6c[0] + iVar9) = sVar13;
                }
                iVar11 = iVar9 + 2;
                if (((iVar11 != 0) && (iVar11 != 2)) && ((iVar11 != 0xc && (iVar11 != 0xe)))) {
                  if (*(ushort *)((int)apuStack_6c[0] + iVar11) < 0x3f) {
                    sVar13 = *(ushort *)((int)apuStack_6c[0] + iVar11) + 1;
                  }
                  else {
                    sVar13 = 0;
                  }
                  *(short *)((int)apuStack_6c[0] + iVar11) = sVar13;
                }
                iVar11 = iVar9 + 4;
                if (((iVar11 != 0) && (iVar11 != 2)) && ((iVar11 != 0xc && (iVar11 != 0xe)))) {
                  if (*(ushort *)((int)apuStack_6c[0] + iVar11) < 0x3f) {
                    sVar13 = *(ushort *)((int)apuStack_6c[0] + iVar11) + 1;
                  }
                  else {
                    sVar13 = 0;
                  }
                  *(short *)((int)apuStack_6c[0] + iVar11) = sVar13;
                }
                iVar11 = iVar9 + 6;
                if ((((iVar11 != 0) && (iVar11 != 2)) && (iVar11 != 0xc)) && (iVar11 != 0xe)) {
                  if (*(ushort *)((int)apuStack_6c[0] + iVar11) < 0x3f) {
                    sVar13 = *(ushort *)((int)apuStack_6c[0] + iVar11) + 1;
                  }
                  else {
                    sVar13 = 0;
                  }
                  *(short *)((int)apuStack_6c[0] + iVar11) = sVar13;
                }
                iVar12 = iVar12 + -1;
                iVar9 = iVar9 + 8;
              } while (-1 < iVar12);
            }
          }
          break;
        }
        if ((ushort)param_1->field_0x64 < 0x3f) {
          sVar13 = param_1->field_0x64 + 1;
        }
        else {
          sVar13 = 0;
        }
        param_1->field_0x64 = sVar13;
        if ((ushort)param_1->field_0x66 < 0x3f) {
          sVar13 = param_1->field_0x66 + 1;
        }
        else {
          sVar13 = 0;
        }
        iVar9 = 0x12;
      }
      *(short *)(iVar9 + (int)apuStack_6c[0]) = sVar13;
    }
    break;
  case 0xe:
    if ((((iVar9 != 0) && (iVar9 != 1)) && (iVar9 != 6)) && (iVar9 != 7)) {
      if ((iVar9 == 2) || (iVar9 == 3)) {
        if (param_1->field_0x58 == 0) {
          sVar13 = 0x3f;
        }
        else {
          sVar13 = param_1->field_0x58 + -1;
        }
        param_1->field_0x58 = sVar13;
        if (param_1->field_0x5a == 0) {
          sVar13 = 0x3f;
        }
        else {
          sVar13 = param_1->field_0x5a + -1;
        }
        param_1->field_0x5a = sVar13;
      }
      else if ((iVar9 == 4) || (iVar9 == 5)) {
        if (param_1->field_0x5c == 0) {
          sVar13 = 0x3f;
        }
        else {
          sVar13 = param_1->field_0x5c + -1;
        }
        param_1->field_0x5c = sVar13;
        if (param_1->field_0x5e == 0) {
          sVar13 = 0x3f;
        }
        else {
          sVar13 = param_1->field_0x5e + -1;
        }
        param_1->field_0x5e = sVar13;
      }
      else if ((iVar9 == 8) || (iVar9 == 9)) {
        if (param_1->field_0x64 == 0) {
          sVar13 = 0x3f;
        }
        else {
          sVar13 = param_1->field_0x64 + -1;
        }
        param_1->field_0x64 = sVar13;
        if (param_1->field_0x66 == 0) {
          sVar13 = 0x3f;
        }
        else {
          sVar13 = param_1->field_0x66 + -1;
        }
        param_1->field_0x66 = sVar13;
      }
      else if ((iVar9 == 10) || (iVar9 == 0xb)) {
        if (param_1->field_0x68 == 0) {
          sVar13 = 0x3f;
        }
        else {
          sVar13 = param_1->field_0x68 + -1;
        }
        param_1->field_0x68 = sVar13;
        if (param_1->field_0x6a == 0) {
          sVar13 = 0x3f;
        }
        else {
          sVar13 = param_1->field_0x6a + -1;
        }
        param_1->field_0x6a = sVar13;
      }
      else {
        if (*puVar15 == 0) {
          uVar10 = 0x3f;
        }
        else {
          uVar10 = *puVar15 - 1;
        }
        *puVar15 = uVar10;
        if (param_1->field_0x50 == 0x18) {
          iVar12 = 5;
          iVar9 = 0;
          do {
            if ((((iVar9 != 0) && (iVar9 != 2)) && (iVar9 != 0xc)) && (iVar9 != 0xe)) {
              if (*(short *)((int)apuStack_6c[0] + iVar9) == 0) {
                sVar13 = 0x3f;
              }
              else {
                sVar13 = *(short *)((int)apuStack_6c[0] + iVar9) + -1;
              }
              *(short *)((int)apuStack_6c[0] + iVar9) = sVar13;
            }
            iVar11 = iVar9 + 2;
            if (((iVar11 != 0) && (iVar11 != 2)) && ((iVar11 != 0xc && (iVar11 != 0xe)))) {
              if (*(short *)((int)apuStack_6c[0] + iVar11) == 0) {
                sVar13 = 0x3f;
              }
              else {
                sVar13 = *(short *)((int)apuStack_6c[0] + iVar11) + -1;
              }
              *(short *)((int)apuStack_6c[0] + iVar11) = sVar13;
            }
            iVar11 = iVar9 + 4;
            if (((iVar11 != 0) && (iVar11 != 2)) && ((iVar11 != 0xc && (iVar11 != 0xe)))) {
              if (*(short *)((int)apuStack_6c[0] + iVar11) == 0) {
                sVar13 = 0x3f;
              }
              else {
                sVar13 = *(short *)((int)apuStack_6c[0] + iVar11) + -1;
              }
              *(short *)((int)apuStack_6c[0] + iVar11) = sVar13;
            }
            iVar11 = iVar9 + 6;
            if ((((iVar11 != 0) && (iVar11 != 2)) && (iVar11 != 0xc)) && (iVar11 != 0xe)) {
              if (*(short *)((int)apuStack_6c[0] + iVar11) == 0) {
                sVar13 = 0x3f;
              }
              else {
                sVar13 = *(short *)((int)apuStack_6c[0] + iVar11) + -1;
              }
              *(short *)((int)apuStack_6c[0] + iVar11) = sVar13;
            }
            iVar12 = iVar12 + -1;
            iVar9 = iVar9 + 8;
          } while (-1 < iVar12);
        }
      }
    }
    break;
  case 0xf:
    if (iVar9 < 0x18) {
      iVar9 = iVar9 + 1;
    }
    else {
      iVar9 = 0;
    }
    param_1->field_0x50 = iVar9;
    break;
  case 0x10:
    if (iVar9 < 1) {
      iVar9 = 0x18;
    }
    else {
      iVar9 = iVar9 + -1;
    }
    param_1->field_0x50 = iVar9;
    break;
  case 0x11:
    uVar14 = param_1->field_0x38;
    sVar13 = param_1->field_0x6c;
    uVar10 = param_1->field_0x6e;
    sVar1 = param_1->field_0x70;
    uVar8 = param_1->field_0x72;
    sVar2 = param_1->field_0x78;
    uVar3 = param_1->field_0x7a;
    sVar4 = param_1->field_0x7c;
    uVar5 = param_1->field_0x7e;
    sVar6 = param_1->field_0x80;
    uVar7 = param_1->field_0x82;
    *(uint16_t *)((int)puVar16 + 2) = param_1->field_0x74 << 6 | param_1->field_0x76;
    *(ushort *)((int)puVar16 + 6) = sVar2 << 6 | uVar3;
    *(uint16_t *)((int)puVar16 + 10) = 0;
    *(ushort *)((int)puVar16 + 0xe) = sVar4 << 6 | uVar5;
    *(ushort *)((int)puVar16 + 0x12) = sVar6 << 6 | uVar7;
    empty_stub_function_1050d044(uVar14,sVar13 << 6 | uVar10,sVar1 << 6 | uVar8,0);
    uVar14 = param_1->field_0x38;
    uVar10 = param_1->field_0x54;
    sVar13 = param_1->field_0x56;
    uVar8 = param_1->field_0x58;
    sVar1 = param_1->field_0x5a;
    uVar3 = param_1->field_0x5c;
    sVar2 = param_1->field_0x5e;
    sVar4 = param_1->field_0x64;
    uVar5 = param_1->field_0x66;
    sVar6 = param_1->field_0x68;
    uVar7 = param_1->field_0x6a;
    *(uint16_t *)((int)puVar16 + 2) = param_1->field_0x60 << 6 | param_1->field_0x62;
    *(ushort *)((int)puVar16 + 6) = sVar4 << 6 | uVar5;
    *(ushort *)((int)puVar16 + 10) = sVar6 << 6 | uVar7;
    empty_stub_1050d03e(uVar14,uVar10 | sVar13 << 6,uVar8 | sVar1 << 6,uVar3 | sVar2 << 6);
    break;
  default:
  }
  empty_noop_stub_103b88d2();
  empty_noop_stub_103b88d2();
  *puVar16 = (uint)(ushort)param_1->field_0x56;
  empty_noop_stub_103b88d2();
  *puVar16 = (uint)(ushort)param_1->field_0x5a;
  empty_noop_stub_103b88d2();
  *puVar16 = (uint)(ushort)param_1->field_0x5e;
  empty_noop_stub_103b88d2();
  *puVar16 = (uint)(ushort)param_1->field_0x62;
  empty_noop_stub_103b88d2();
  *puVar16 = (uint)(ushort)param_1->field_0x66;
  empty_noop_stub_103b88d2();
  *puVar16 = (uint)(ushort)param_1->field_0x6a;
  empty_noop_stub_103b88d2();
  uVar10 = param_1->field_0x70;
  uVar8 = param_1->field_0x72;
  *puVar16 = (uint)(ushort)param_1->field_0x6e;
  puVar16[1] = (uint)uVar10;
  puVar16[2] = (uint)uVar8;
  empty_noop_stub_103b88d2();
  uVar10 = param_1->field_0x78;
  uVar8 = param_1->field_0x7a;
  *puVar16 = (uint)(ushort)param_1->field_0x76;
  puVar16[1] = (uint)uVar10;
  puVar16[2] = (uint)uVar8;
  empty_noop_stub_103b88d2();
  uVar10 = param_1->field_0x80;
  uVar8 = param_1->field_0x82;
  *puVar16 = (uint)(ushort)param_1->field_0x7e;
  puVar16[1] = (uint)uVar10;
  puVar16[2] = (uint)uVar8;
  empty_noop_stub_103b88d2();
  empty_noop_stub_103b88d2();
  return;
}
