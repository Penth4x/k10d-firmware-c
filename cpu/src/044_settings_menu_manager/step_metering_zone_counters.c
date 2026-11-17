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

void step_metering_zone_counters(int *param_1,int param_2,uint32_t param_3)

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
  ushort *puVar14;
  uintptr_t sp;
  uint *puVar15;
  uint8_t auStack_88 [20];
  int *piStack_6c;
  int iStack_68;
  int *piStack_64;
  int iStack_60;
  int *piStack_5c;
  int iStack_58;
  int *piStack_54;
  int iStack_50;
  int *piStack_4c;
  int iStack_48;
  int *piStack_44;
  int iStack_40;
  int *piStack_3c;
  int iStack_38;
  int *piStack_34;
  int iStack_30;
  int *piStack_2c;
  int iStack_28;
  int *piStack_24;
  int iStack_20;
  int *piStack_1c;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  int *piStack_c;
  
  puVar15 = (uint *)auStack_88;
  dispatch_event_0x29_via_vtable(param_1,param_2,param_3);
  piStack_6c = param_1 + 0x15;
  iStack_68 = (int)param_1 + 0x56;
  piStack_64 = param_1 + 0x16;
  iStack_60 = (int)param_1 + 0x5a;
  piStack_5c = param_1 + 0x17;
  iStack_58 = (int)param_1 + 0x5e;
  piStack_54 = param_1 + 0x18;
  iStack_50 = (int)param_1 + 0x62;
  piStack_4c = param_1 + 0x19;
  iStack_48 = (int)param_1 + 0x66;
  piStack_44 = param_1 + 0x1a;
  iStack_40 = (int)param_1 + 0x6a;
  piStack_3c = param_1 + 0x1b;
  iStack_38 = (int)param_1 + 0x6e;
  piStack_34 = param_1 + 0x1c;
  iStack_30 = (int)param_1 + 0x72;
  piStack_2c = param_1 + 0x1d;
  iStack_28 = (int)param_1 + 0x76;
  piStack_24 = param_1 + 0x1e;
  iStack_20 = (int)param_1 + 0x7a;
  piStack_1c = param_1 + 0x1f;
  iStack_18 = (int)param_1 + 0x7e;
  piStack_14 = param_1 + 0x20;
  iStack_10 = (int)param_1 + 0x82;
  piStack_c = param_1 + 0x21;
  iVar9 = param_1[0x14];
  puVar14 = (ushort *)(&piStack_6c)[iVar9];
  switch(param_2) {
  case 0:
  case 1:
  case 0x13:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x1c:
    (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120004,0);
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
        if (*(ushort *)(param_1 + 0x16) < 0x3f) {
          sVar13 = *(ushort *)(param_1 + 0x16) + 1;
        }
        else {
          sVar13 = 0;
        }
        *(short *)(param_1 + 0x16) = sVar13;
        if (*(ushort *)((int)param_1 + 0x5a) < 0x3f) {
          sVar13 = *(ushort *)((int)param_1 + 0x5a) + 1;
        }
        else {
          sVar13 = 0;
        }
        iVar9 = 6;
      }
      else if ((iVar9 == 4) || (iVar9 == 5)) {
        if (*(ushort *)(param_1 + 0x17) < 0x3f) {
          sVar13 = *(ushort *)(param_1 + 0x17) + 1;
        }
        else {
          sVar13 = 0;
        }
        *(short *)(param_1 + 0x17) = sVar13;
        if (*(ushort *)((int)param_1 + 0x5e) < 0x3f) {
          sVar13 = *(ushort *)((int)param_1 + 0x5e) + 1;
        }
        else {
          sVar13 = 0;
        }
        iVar9 = 10;
      }
      else {
        if ((iVar9 != 8) && (iVar9 != 9)) {
          if ((iVar9 == 10) || (iVar9 == 0xb)) {
            if (*(ushort *)(param_1 + 0x1a) < 0x3f) {
              sVar13 = *(ushort *)(param_1 + 0x1a) + 1;
            }
            else {
              sVar13 = 0;
            }
            *(short *)(param_1 + 0x1a) = sVar13;
            if (*(ushort *)((int)param_1 + 0x6a) < 0x3f) {
              sVar13 = *(ushort *)((int)param_1 + 0x6a) + 1;
            }
            else {
              sVar13 = 0;
            }
            *(short *)((int)param_1 + 0x6a) = sVar13;
          }
          else {
            if (*puVar14 < 0x3f) {
              uVar10 = *puVar14 + 1;
            }
            else {
              uVar10 = 0;
            }
            *puVar14 = uVar10;
            if (param_1[0x14] == 0x18) {
              iVar12 = 5;
              iVar9 = 0;
              do {
                if ((((iVar9 != 0) && (iVar9 != 2)) && (iVar9 != 0xc)) && (iVar9 != 0xe)) {
                  if (*(ushort *)((int)piStack_6c + iVar9) < 0x3f) {
                    sVar13 = *(ushort *)((int)piStack_6c + iVar9) + 1;
                  }
                  else {
                    sVar13 = 0;
                  }
                  *(short *)((int)piStack_6c + iVar9) = sVar13;
                }
                iVar11 = iVar9 + 2;
                if (((iVar11 != 0) && (iVar11 != 2)) && ((iVar11 != 0xc && (iVar11 != 0xe)))) {
                  if (*(ushort *)((int)piStack_6c + iVar11) < 0x3f) {
                    sVar13 = *(ushort *)((int)piStack_6c + iVar11) + 1;
                  }
                  else {
                    sVar13 = 0;
                  }
                  *(short *)((int)piStack_6c + iVar11) = sVar13;
                }
                iVar11 = iVar9 + 4;
                if (((iVar11 != 0) && (iVar11 != 2)) && ((iVar11 != 0xc && (iVar11 != 0xe)))) {
                  if (*(ushort *)((int)piStack_6c + iVar11) < 0x3f) {
                    sVar13 = *(ushort *)((int)piStack_6c + iVar11) + 1;
                  }
                  else {
                    sVar13 = 0;
                  }
                  *(short *)((int)piStack_6c + iVar11) = sVar13;
                }
                iVar11 = iVar9 + 6;
                if ((((iVar11 != 0) && (iVar11 != 2)) && (iVar11 != 0xc)) && (iVar11 != 0xe)) {
                  if (*(ushort *)((int)piStack_6c + iVar11) < 0x3f) {
                    sVar13 = *(ushort *)((int)piStack_6c + iVar11) + 1;
                  }
                  else {
                    sVar13 = 0;
                  }
                  *(short *)((int)piStack_6c + iVar11) = sVar13;
                }
                iVar12 = iVar12 + -1;
                iVar9 = iVar9 + 8;
              } while (-1 < iVar12);
            }
          }
          break;
        }
        if (*(ushort *)(param_1 + 0x19) < 0x3f) {
          sVar13 = *(ushort *)(param_1 + 0x19) + 1;
        }
        else {
          sVar13 = 0;
        }
        *(short *)(param_1 + 0x19) = sVar13;
        if (*(ushort *)((int)param_1 + 0x66) < 0x3f) {
          sVar13 = *(ushort *)((int)param_1 + 0x66) + 1;
        }
        else {
          sVar13 = 0;
        }
        iVar9 = 0x12;
      }
      *(short *)(iVar9 + (int)piStack_6c) = sVar13;
    }
    break;
  case 0xe:
    if ((((iVar9 != 0) && (iVar9 != 1)) && (iVar9 != 6)) && (iVar9 != 7)) {
      if ((iVar9 == 2) || (iVar9 == 3)) {
        if (*(short *)(param_1 + 0x16) == 0) {
          sVar13 = 0x3f;
        }
        else {
          sVar13 = *(short *)(param_1 + 0x16) + -1;
        }
        *(short *)(param_1 + 0x16) = sVar13;
        if (*(short *)((int)param_1 + 0x5a) == 0) {
          sVar13 = 0x3f;
        }
        else {
          sVar13 = *(short *)((int)param_1 + 0x5a) + -1;
        }
        *(short *)((int)param_1 + 0x5a) = sVar13;
      }
      else if ((iVar9 == 4) || (iVar9 == 5)) {
        if (*(short *)(param_1 + 0x17) == 0) {
          sVar13 = 0x3f;
        }
        else {
          sVar13 = *(short *)(param_1 + 0x17) + -1;
        }
        *(short *)(param_1 + 0x17) = sVar13;
        if (*(short *)((int)param_1 + 0x5e) == 0) {
          sVar13 = 0x3f;
        }
        else {
          sVar13 = *(short *)((int)param_1 + 0x5e) + -1;
        }
        *(short *)((int)param_1 + 0x5e) = sVar13;
      }
      else if ((iVar9 == 8) || (iVar9 == 9)) {
        if (*(short *)(param_1 + 0x19) == 0) {
          sVar13 = 0x3f;
        }
        else {
          sVar13 = *(short *)(param_1 + 0x19) + -1;
        }
        *(short *)(param_1 + 0x19) = sVar13;
        if (*(short *)((int)param_1 + 0x66) == 0) {
          sVar13 = 0x3f;
        }
        else {
          sVar13 = *(short *)((int)param_1 + 0x66) + -1;
        }
        *(short *)((int)param_1 + 0x66) = sVar13;
      }
      else if ((iVar9 == 10) || (iVar9 == 0xb)) {
        if (*(short *)(param_1 + 0x1a) == 0) {
          sVar13 = 0x3f;
        }
        else {
          sVar13 = *(short *)(param_1 + 0x1a) + -1;
        }
        *(short *)(param_1 + 0x1a) = sVar13;
        if (*(short *)((int)param_1 + 0x6a) == 0) {
          sVar13 = 0x3f;
        }
        else {
          sVar13 = *(short *)((int)param_1 + 0x6a) + -1;
        }
        *(short *)((int)param_1 + 0x6a) = sVar13;
      }
      else {
        if (*puVar14 == 0) {
          uVar10 = 0x3f;
        }
        else {
          uVar10 = *puVar14 - 1;
        }
        *puVar14 = uVar10;
        if (param_1[0x14] == 0x18) {
          iVar12 = 5;
          iVar9 = 0;
          do {
            if ((((iVar9 != 0) && (iVar9 != 2)) && (iVar9 != 0xc)) && (iVar9 != 0xe)) {
              if (*(short *)((int)piStack_6c + iVar9) == 0) {
                sVar13 = 0x3f;
              }
              else {
                sVar13 = *(short *)((int)piStack_6c + iVar9) + -1;
              }
              *(short *)((int)piStack_6c + iVar9) = sVar13;
            }
            iVar11 = iVar9 + 2;
            if (((iVar11 != 0) && (iVar11 != 2)) && ((iVar11 != 0xc && (iVar11 != 0xe)))) {
              if (*(short *)((int)piStack_6c + iVar11) == 0) {
                sVar13 = 0x3f;
              }
              else {
                sVar13 = *(short *)((int)piStack_6c + iVar11) + -1;
              }
              *(short *)((int)piStack_6c + iVar11) = sVar13;
            }
            iVar11 = iVar9 + 4;
            if (((iVar11 != 0) && (iVar11 != 2)) && ((iVar11 != 0xc && (iVar11 != 0xe)))) {
              if (*(short *)((int)piStack_6c + iVar11) == 0) {
                sVar13 = 0x3f;
              }
              else {
                sVar13 = *(short *)((int)piStack_6c + iVar11) + -1;
              }
              *(short *)((int)piStack_6c + iVar11) = sVar13;
            }
            iVar11 = iVar9 + 6;
            if ((((iVar11 != 0) && (iVar11 != 2)) && (iVar11 != 0xc)) && (iVar11 != 0xe)) {
              if (*(short *)((int)piStack_6c + iVar11) == 0) {
                sVar13 = 0x3f;
              }
              else {
                sVar13 = *(short *)((int)piStack_6c + iVar11) + -1;
              }
              *(short *)((int)piStack_6c + iVar11) = sVar13;
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
    param_1[0x14] = iVar9;
    break;
  case 0x10:
    if (iVar9 < 1) {
      iVar9 = 0x18;
    }
    else {
      iVar9 = iVar9 + -1;
    }
    param_1[0x14] = iVar9;
    break;
  case 0x11:
    iVar9 = param_1[0xe];
    sVar13 = *(short *)(param_1 + 0x1b);
    uVar10 = *(ushort *)((int)param_1 + 0x6e);
    sVar1 = *(short *)(param_1 + 0x1c);
    uVar8 = *(ushort *)((int)param_1 + 0x72);
    sVar2 = *(short *)(param_1 + 0x1e);
    uVar3 = *(ushort *)((int)param_1 + 0x7a);
    sVar4 = *(short *)(param_1 + 0x1f);
    uVar5 = *(ushort *)((int)param_1 + 0x7e);
    sVar6 = *(short *)(param_1 + 0x20);
    uVar7 = *(ushort *)((int)param_1 + 0x82);
    *(ushort *)((int)puVar15 + 2) =
         *(short *)(param_1 + 0x1d) << 6 | *(ushort *)((int)param_1 + 0x76);
    *(ushort *)((int)puVar15 + 6) = sVar2 << 6 | uVar3;
    *(uint16_t *)((int)puVar15 + 10) = 0;
    *(ushort *)((int)puVar15 + 0xe) = sVar4 << 6 | uVar5;
    *(ushort *)((int)puVar15 + 0x12) = sVar6 << 6 | uVar7;
    empty_stub_function_1050d044(iVar9,sVar13 << 6 | uVar10,sVar1 << 6 | uVar8,0);
    iVar9 = param_1[0xe];
    uVar10 = *(ushort *)(param_1 + 0x15);
    sVar13 = *(short *)((int)param_1 + 0x56);
    uVar8 = *(ushort *)(param_1 + 0x16);
    sVar1 = *(short *)((int)param_1 + 0x5a);
    uVar3 = *(ushort *)(param_1 + 0x17);
    sVar2 = *(short *)((int)param_1 + 0x5e);
    sVar4 = *(short *)(param_1 + 0x19);
    uVar5 = *(ushort *)((int)param_1 + 0x66);
    sVar6 = *(short *)(param_1 + 0x1a);
    uVar7 = *(ushort *)((int)param_1 + 0x6a);
    *(ushort *)((int)puVar15 + 2) =
         *(short *)(param_1 + 0x18) << 6 | *(ushort *)((int)param_1 + 0x62);
    *(ushort *)((int)puVar15 + 6) = sVar4 << 6 | uVar5;
    *(ushort *)((int)puVar15 + 10) = sVar6 << 6 | uVar7;
    empty_stub_1050d03e(iVar9,uVar10 | sVar13 << 6,uVar8 | sVar1 << 6,uVar3 | sVar2 << 6);
    break;
  default:
  }
  empty_noop_stub_103b88d2();
  empty_noop_stub_103b88d2();
  *puVar15 = (uint)*(ushort *)((int)param_1 + 0x56);
  empty_noop_stub_103b88d2();
  *puVar15 = (uint)*(ushort *)((int)param_1 + 0x5a);
  empty_noop_stub_103b88d2();
  *puVar15 = (uint)*(ushort *)((int)param_1 + 0x5e);
  empty_noop_stub_103b88d2();
  *puVar15 = (uint)*(ushort *)((int)param_1 + 0x62);
  empty_noop_stub_103b88d2();
  *puVar15 = (uint)*(ushort *)((int)param_1 + 0x66);
  empty_noop_stub_103b88d2();
  *puVar15 = (uint)*(ushort *)((int)param_1 + 0x6a);
  empty_noop_stub_103b88d2();
  uVar10 = *(ushort *)(param_1 + 0x1c);
  uVar8 = *(ushort *)((int)param_1 + 0x72);
  *puVar15 = (uint)*(ushort *)((int)param_1 + 0x6e);
  puVar15[1] = (uint)uVar10;
  puVar15[2] = (uint)uVar8;
  empty_noop_stub_103b88d2();
  uVar10 = *(ushort *)(param_1 + 0x1e);
  uVar8 = *(ushort *)((int)param_1 + 0x7a);
  *puVar15 = (uint)*(ushort *)((int)param_1 + 0x76);
  puVar15[1] = (uint)uVar10;
  puVar15[2] = (uint)uVar8;
  empty_noop_stub_103b88d2();
  uVar10 = *(ushort *)(param_1 + 0x20);
  uVar8 = *(ushort *)((int)param_1 + 0x82);
  *puVar15 = (uint)*(ushort *)((int)param_1 + 0x7e);
  puVar15[1] = (uint)uVar10;
  puVar15[2] = (uint)uVar8;
  empty_noop_stub_103b88d2();
  empty_noop_stub_103b88d2();
  return;
}
