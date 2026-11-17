/* @k10d dispatch_event_to_class_ctor @ 0x105171c8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 16-bit event code to a class constructor call with specific parameters.
 * summary:
 *   The function acts as a switch statement on param_2, selecting one of several class
 *   constructors (construct_object_with_vtable or construct_cls_105b6d0c) based on the
 *   input value. It passes the event code and other constants (uVar4, uVar5) as arguments
 *   to the selected constructor. The caller is a virtual method, suggesting this is part of
 *   an event handling or object creation mechanism.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x105171dc) overlaps instruction at (ram,0x105171da)
    */

uint dispatch_event_to_class_ctor(uint32_t param_1,uint param_2)

{
  ushort uVar2;
  int iVar1;
  uint16_t uVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  
  uVar3 = (uint16_t)param_2;
  if (param_2 == 0x116) goto code_r0x1051731c;
  if ((int)param_2 < 0x117) {
    if (param_2 != 0x106) {
      if ((int)param_2 < 0x107) {
        if ((param_2 == 0x100) || (param_2 == 0x101)) goto code_r0x1051731c;
        if (param_2 == 0x102) {
          uVar3 = 0x102;
          uVar4 = 3;
          uVar5 = 0;
          goto code_r0x1051737a;
        }
        if (param_2 != 0x103) {
          return 0;
        }
      }
      else {
        if (param_2 == 0x111) {
code_r0x1051731c:
          uVar4 = 4;
          goto code_r0x105172bc;
        }
        if ((int)param_2 < 0x112) {
          if ((param_2 != 0x10f) && (param_2 != 0x110)) {
            return 0;
          }
          goto code_r0x105172e8;
        }
        if (param_2 == 0x112) {
          uVar3 = 0x112;
        }
        else {
          if (param_2 != 0x115) {
            return 0;
          }
          uVar3 = 0x115;
        }
      }
    }
code_r0x10517346:
    uVar4 = 3;
  }
  else {
    if (param_2 == 0x128) goto code_r0x10517346;
    if (0x128 < (int)param_2) {
      if (param_2 == 0x13e) {
        uVar3 = 0x13e;
        uVar4 = 5;
        uVar5 = 2;
        goto code_r0x1051737a;
      }
      if (0x13e < (int)param_2) {
        if (param_2 != 0x13f) {
          if (param_2 != 0x14a) {
            return 0;
          }
          iVar1 = construct_cls_105b6d0c(0,0x14a,4,2,0);
          return iVar1;
        }
        uVar3 = 0x13f;
        uVar4 = 5;
        uVar5 = 6;
        goto code_r0x1051737a;
      }
      if (param_2 == 0x131) {
        uVar3 = 0x131;
        uVar4 = 2;
        uVar5 = 0x18;
        goto code_r0x1051737a;
      }
      if (param_2 != 0x132) {
        return 0;
      }
code_r0x105172e8:
      uVar4 = 2;
      uVar5 = 0x14;
      goto code_r0x1051737a;
    }
    if (param_2 == 0x117) goto code_r0x1051731c;
    if (param_2 == 0x11a) {
      uVar3 = 0x11a;
      uVar4 = 5;
    }
    else {
      if (param_2 != 0x11b) {
        if (param_2 != 0x11c) {
          return 0;
        }
        goto code_r0x10517346;
      }
      uVar3 = 0x11b;
      uVar4 = 5;
    }
  }
code_r0x105172bc:
  uVar5 = 1;
code_r0x1051737a:
  uVar2 = construct_object_with_vtable((uint16_t *)0x0,uVar3,uVar4,uVar5,0);
  return (uint)uVar2;
}
