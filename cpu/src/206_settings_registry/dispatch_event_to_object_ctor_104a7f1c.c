/* @k10d dispatch_event_to_object_ctor_104a7f1c @ 0x104a7f1c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Maps a 16-bit event code to parameters and invokes a class constructor.
 * summary:
 *   The function validates an input event code (param_2) against a set of known values
 *   (e.g., 0x9000, 0x9206, 0x927c). For most valid codes, it sets local variables (uVar3,
 *   uVar4, uVar5) and calls construct_object_with_vtable, which is the constructor for
 *   class cls_105b6a30. For code 0x927c, it directly calls construct_cls_105fa778_object,
 *   the constructor for class cls_105fa778. It returns 0 for unrecognized codes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104a7f30) overlaps instruction at (ram,0x104a7f2e)
    */

uint dispatch_event_to_object_ctor_104a7f1c(uint32_t param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  
  if (param_2 == 0x9206) {
    uVar3 = 0x9206;
code_r0x104a8174:
    uVar4 = 5;
  }
  else {
    if (param_2 < 0x9207) {
      if (param_2 == 0x9102) {
        uVar3 = 0x9102;
      }
      else {
        if (param_2 < 0x9103) {
          if (param_2 == 0x9000) {
            uVar3 = 0x9000;
            uVar4 = 7;
            uVar5 = 4;
          }
          else if (param_2 == 0x9003) {
            uVar3 = 0x9003;
            uVar4 = 2;
            uVar5 = 0x14;
          }
          else if (param_2 == 0x9004) {
            uVar3 = 0x9004;
            uVar4 = 2;
            uVar5 = 0x14;
          }
          else {
            if (param_2 != 0x9101) {
              return 0;
            }
            uVar3 = 0x9101;
            uVar4 = 7;
            uVar5 = 4;
          }
          goto code_r0x104a81d0;
        }
        if (param_2 == 0x9203) {
          uVar3 = 0x9203;
code_r0x104a8130:
          uVar4 = 10;
          goto code_r0x104a8102;
        }
        if (param_2 < 0x9204) {
          if (param_2 == 0x9201) {
            uVar3 = 0x9201;
            goto code_r0x104a8130;
          }
          if (param_2 != 0x9202) {
            return 0;
          }
          uVar3 = 0x9202;
        }
        else {
          if (param_2 == 0x9204) {
            uVar3 = 0x9204;
            goto code_r0x104a8130;
          }
          if (param_2 != 0x9205) {
            return 0;
          }
          uVar3 = 0x9205;
        }
      }
      goto code_r0x104a8174;
    }
    if (param_2 == 0x9214) {
      uVar3 = 0x9214;
      uVar4 = 3;
      uVar5 = 2;
      goto code_r0x104a81d0;
    }
    if (0x9214 < param_2) {
      if (param_2 == 0x9290) {
        uVar3 = 0x9290;
code_r0x104a81cc:
        uVar4 = 2;
      }
      else {
        if (0x9290 < param_2) {
          if (param_2 == 0x9291) {
            uVar3 = 0x9291;
          }
          else {
            if (param_2 != 0x9292) {
              return 0;
            }
            uVar3 = 0x9292;
          }
          goto code_r0x104a81cc;
        }
        if (param_2 == 0x927c) {
          iVar1 = construct_cls_105fa778_object(0,0x927c,7,0);
          return iVar1;
        }
        if (param_2 != 0x9286) {
          return 0;
        }
        uVar3 = 0x9286;
        uVar4 = 7;
      }
      uVar5 = 0;
      goto code_r0x104a81d0;
    }
    if (param_2 == 0x9207) {
      uVar3 = 0x9207;
    }
    else if (param_2 == 0x9208) {
      uVar3 = 0x9208;
    }
    else {
      if (param_2 != 0x9209) {
        if (param_2 != 0x920a) {
          return 0;
        }
        uVar3 = 0x920a;
        goto code_r0x104a8174;
      }
      uVar3 = 0x9209;
    }
    uVar4 = 3;
  }
code_r0x104a8102:
  uVar5 = 1;
code_r0x104a81d0:
  uVar2 = construct_object_with_vtable((uint16_t *)0x0,uVar3,uVar4,uVar5,0);
  return (uint)uVar2;
}
