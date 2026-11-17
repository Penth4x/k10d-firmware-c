/* @k10d dispatch_event_to_object_ctor_104a81de @ 0x104a81de
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Maps an event code to parameters and invokes a class constructor.
 * summary:
 *   The function validates an event code (param_2) against a large set of constants
 *   (0xa000-0xa500). For valid codes, it sets up parameters (uVar3, uVar4, uVar5) and calls
 *   construct_object_with_vtable, which is the constructor for class cls_105b6a30. For code
 *   0xa005, it calls construct_cls_105b6d0c (constructor for cls_105b6d0c). It returns 0
 *   for invalid codes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104a81f2) overlaps instruction at (ram,0x104a81f0)
    */

uint dispatch_event_to_object_ctor_104a81de(uint32_t param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  
  if (param_2 == 0xa301) {
    uVar3 = 0xa301;
    uVar4 = 7;
  }
  else {
    if (0xa301 < param_2) {
      if (param_2 == 0xa407) {
        uVar3 = 0xa407;
      }
      else if (param_2 < 0xa408) {
        if (param_2 == 0xa403) {
          uVar3 = 0xa403;
        }
        else if (param_2 < 0xa404) {
          if (param_2 == 0xa302) {
            uVar3 = 0xa302;
            uVar4 = 7;
            uVar5 = 8;
            goto code_r0x104a8614;
          }
          if (param_2 == 0xa401) {
            uVar3 = 0xa401;
          }
          else {
            if (param_2 != 0xa402) {
              return 0;
            }
            uVar3 = 0xa402;
          }
        }
        else {
          if (param_2 == 0xa404) {
            uVar3 = 0xa404;
            goto code_r0x104a860a;
          }
          if (param_2 == 0xa405) {
            uVar3 = 0xa405;
          }
          else {
            if (param_2 != 0xa406) {
              return 0;
            }
            uVar3 = 0xa406;
          }
        }
      }
      else {
        if (param_2 == 0xa40b) {
          uVar3 = 0xa40b;
          uVar4 = 7;
          uVar5 = 0;
          goto code_r0x104a8614;
        }
        if (param_2 < 0xa40c) {
          if (param_2 == 0xa408) {
            uVar3 = 0xa408;
          }
          else if (param_2 == 0xa409) {
            uVar3 = 0xa409;
          }
          else {
            if (param_2 != 0xa40a) {
              return 0;
            }
            uVar3 = 0xa40a;
          }
        }
        else {
          if (param_2 != 0xa40c) {
            if (param_2 == 0xa420) {
              uVar3 = 0xa420;
              uVar4 = 2;
              uVar5 = 0x21;
              goto code_r0x104a8614;
            }
            if (param_2 != 0xa500) {
              return 0;
            }
            uVar3 = 0xa500;
            goto code_r0x104a860a;
          }
          uVar3 = 0xa40c;
        }
      }
      goto code_r0x104a85e6;
    }
    if (param_2 == 0xa20c) {
      uVar3 = 0xa20c;
      uVar4 = 7;
      uVar5 = 0;
      goto code_r0x104a8614;
    }
    if (param_2 < 0xa20d) {
      if (param_2 == 0xa003) {
        uVar3 = 0xa003;
        uVar4 = 4;
      }
      else {
        if (0xa003 < param_2) {
          if (param_2 == 0xa004) {
            uVar3 = 0xa004;
            uVar4 = 2;
            uVar5 = 0xd;
            goto code_r0x104a8614;
          }
          if (param_2 == 0xa005) {
            iVar1 = construct_cls_105b6d0c(0,0xa005,4,1,0);
            return iVar1;
          }
          if (param_2 != 0xa20b) {
            return 0;
          }
          uVar3 = 0xa20b;
          goto code_r0x104a860a;
        }
        if (param_2 == 0xa000) {
          uVar3 = 0xa000;
          uVar4 = 7;
          uVar5 = 4;
          goto code_r0x104a8614;
        }
        if (param_2 == 0xa001) {
          uVar3 = 0xa001;
          goto code_r0x104a85e6;
        }
        if (param_2 != 0xa002) {
          return 0;
        }
        uVar3 = 0xa002;
        uVar4 = 4;
      }
    }
    else {
      if (param_2 == 0xa214) {
        uVar3 = 0xa214;
        uVar4 = 3;
        uVar5 = 2;
        goto code_r0x104a8614;
      }
      if (param_2 < 0xa215) {
        if (param_2 == 0xa20e) {
          uVar3 = 0xa20e;
        }
        else {
          if (param_2 != 0xa20f) {
            if (param_2 != 0xa210) {
              return 0;
            }
            uVar3 = 0xa210;
            goto code_r0x104a85e6;
          }
          uVar3 = 0xa20f;
        }
      }
      else {
        if (param_2 != 0xa215) {
          if (param_2 != 0xa217) {
            if (param_2 != 0xa300) {
              return 0;
            }
            uVar3 = 0xa300;
            uVar4 = 7;
            goto code_r0x104a8460;
          }
          uVar3 = 0xa217;
code_r0x104a85e6:
          uVar4 = 3;
          goto code_r0x104a8460;
        }
        uVar3 = 0xa215;
      }
code_r0x104a860a:
      uVar4 = 5;
    }
  }
code_r0x104a8460:
  uVar5 = 1;
code_r0x104a8614:
  uVar2 = construct_object_with_vtable((uint16_t *)0x0,uVar3,uVar4,uVar5,0);
  return (uint)uVar2;
}
