/* @k10d dispatch_event_to_object_10517672 @ 0x10517672
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 16-bit event ID to a constructor argument and instantiates a cls_105b6a30
 *   object.
 * summary:
 *   The function acts as a factory or dispatcher for a specific range of event IDs
 *   (0xc612-0xc692). It validates the input ID against a large switch statement,
 *   determining specific parameters (uVar2, uVar3) for each valid case. It then calls
 *   construct_object_with_vtable, which is the constructor for class cls_105b6a30, passing
 *   the mapped ID and parameters. The return value is the result of the constructor call
 *   (likely the object pointer or status).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t dispatch_event_to_object_10517672(uint32_t param_1,int param_2)

{
  uint16_t uVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  
  if (param_2 == 0xc629) {
    uVar1 = 0xc629;
    uVar2 = 5;
    goto code_r0x10517af8;
  }
  if (param_2 < 0xc62a) {
    if (param_2 == 0xc61d) {
      uVar1 = 0xc61d;
      uVar2 = 4;
      goto code_r0x10517ad6;
    }
    if (param_2 < 0xc61e) {
      if (param_2 != 0xc617) {
        if (param_2 < 0xc618) {
          if (param_2 == 0xc614) {
            uVar1 = 0xc614;
            uVar2 = 2;
            uVar3 = 0x14;
            goto code_r0x10517d78;
          }
          if (0xc614 < param_2) {
            if (param_2 == 0xc615) {
              uVar1 = 0xc615;
              goto code_r0x10517cfc;
            }
            if (param_2 != 0xc616) {
              return 0;
            }
            uVar1 = 0xc616;
            uVar2 = 1;
code_r0x10517ab8:
            uVar3 = 3;
            goto code_r0x10517d78;
          }
          if (param_2 == 0xc612) {
            uVar1 = 0xc612;
            uVar2 = 1;
          }
          else {
            if (param_2 != 0xc613) {
              return 0;
            }
            uVar1 = 0xc613;
            uVar2 = 1;
          }
        }
        else {
          if (param_2 != 0xc61a) {
            if (0xc61a < param_2) {
              if (param_2 == 0xc61b) {
                uVar1 = 0xc61b;
              }
              else {
                if (param_2 != 0xc61c) {
                  return 0;
                }
                uVar1 = 0xc61c;
              }
              goto code_r0x10517d6e;
            }
            if (param_2 == 0xc618) {
              uVar1 = 0xc618;
              uVar2 = 3;
              goto code_r0x10517aa4;
            }
            if (param_2 != 0xc619) {
              return 0;
            }
            uVar1 = 0xc619;
            uVar2 = 3;
            goto code_r0x10517af8;
          }
          uVar1 = 0xc61a;
          uVar2 = 4;
        }
code_r0x10517a64:
        uVar3 = 4;
        goto code_r0x10517d78;
      }
      uVar1 = 0xc617;
      goto code_r0x10517cc4;
    }
    if (param_2 == 0xc623) {
      uVar1 = 0xc623;
    }
    else {
      if (param_2 < 0xc624) {
        if (param_2 == 0xc620) {
          uVar1 = 0xc620;
          uVar2 = 4;
        }
        else {
          if (0xc620 < param_2) {
            if (param_2 == 0xc621) {
              uVar1 = 0xc621;
            }
            else {
              if (param_2 != 0xc622) {
                return 0;
              }
              uVar1 = 0xc622;
            }
            goto code_r0x10517ba6;
          }
          if (param_2 == 0xc61e) {
            uVar1 = 0xc61e;
            uVar2 = 5;
          }
          else {
            if (param_2 != 0xc61f) {
              return 0;
            }
            uVar1 = 0xc61f;
            uVar2 = 4;
          }
        }
code_r0x10517af8:
        uVar3 = 2;
        goto code_r0x10517d78;
      }
      if (param_2 == 0xc626) {
        uVar1 = 0xc626;
      }
      else {
        if (0xc626 < param_2) {
          if (param_2 == 0xc627) {
            uVar1 = 0xc627;
            uVar2 = 5;
          }
          else {
            if (param_2 != 0xc628) {
              return 0;
            }
            uVar1 = 0xc628;
            uVar2 = 5;
          }
          goto code_r0x10517ab8;
        }
        if (param_2 == 0xc624) {
          uVar1 = 0xc624;
        }
        else {
          if (param_2 != 0xc625) {
            return 0;
          }
          uVar1 = 0xc625;
        }
      }
    }
code_r0x10517ba6:
    uVar2 = 10;
    uVar3 = 9;
    goto code_r0x10517d78;
  }
  if (param_2 == 0xc635) {
    uVar1 = 0xc635;
code_r0x10517cc4:
    uVar2 = 3;
    goto code_r0x10517ad6;
  }
  if (param_2 < 0xc636) {
    if (param_2 != 0xc62f) {
      if (param_2 < 0xc630) {
        if (param_2 == 0xc62c) {
          uVar1 = 0xc62c;
          goto code_r0x10517cd8;
        }
        if (param_2 < 0xc62d) {
          if (param_2 != 0xc62a) {
            if (param_2 != 0xc62b) {
              return 0;
            }
            uVar1 = 0xc62b;
            goto code_r0x10517cd8;
          }
          uVar1 = 0xc62a;
          uVar2 = 10;
        }
        else {
          if (param_2 != 0xc62d) {
            if (param_2 != 0xc62e) {
              return 0;
            }
            uVar1 = 0xc62e;
            goto code_r0x10517cd8;
          }
          uVar1 = 0xc62d;
          uVar2 = 4;
        }
      }
      else {
        if (param_2 == 0xc632) {
          uVar1 = 0xc632;
        }
        else if (param_2 < 0xc633) {
          if (param_2 == 0xc630) {
            uVar1 = 0xc630;
            uVar2 = 5;
            goto code_r0x10517a64;
          }
          if (param_2 != 0xc631) {
            return 0;
          }
          uVar1 = 0xc631;
        }
        else {
          if (param_2 != 0xc633) {
            if (param_2 != 0xc634) {
              return 0;
            }
            uVar1 = 0xc634;
            uVar2 = 1;
            goto code_r0x10517aa4;
          }
          uVar1 = 0xc633;
        }
code_r0x10517cd8:
        uVar2 = 5;
      }
code_r0x10517ad6:
      uVar3 = 1;
      goto code_r0x10517d78;
    }
    uVar1 = 0xc62f;
code_r0x10517cfc:
    uVar2 = 2;
  }
  else {
    if (param_2 == 0xc68c) {
      uVar1 = 0xc68c;
    }
    else {
      if (param_2 < 0xc68d) {
        if (param_2 == 0xc65c) {
          uVar1 = 0xc65c;
          goto code_r0x10517cd8;
        }
        if (param_2 < 0xc65d) {
          if (param_2 == 0xc65a) {
            uVar1 = 0xc65a;
          }
          else {
            if (param_2 != 0xc65b) {
              return 0;
            }
            uVar1 = 0xc65b;
          }
          goto code_r0x10517cc4;
        }
        if (param_2 == 0xc65d) {
          uVar1 = 0xc65d;
          uVar2 = 1;
          uVar3 = 0x10;
          goto code_r0x10517d78;
        }
        if (param_2 != 0xc68b) {
          return 0;
        }
        uVar1 = 0xc68b;
        goto code_r0x10517cfc;
      }
      if (param_2 != 0xc68f) {
        if (param_2 < 0xc690) {
          if (param_2 == 0xc68d) {
            uVar1 = 0xc68d;
            uVar2 = 4;
            goto code_r0x10517a64;
          }
          if (param_2 != 0xc68e) {
            return 0;
          }
          uVar1 = 0xc68e;
          uVar2 = 4;
        }
        else {
          if (param_2 == 0xc690) {
            uVar1 = 0xc690;
          }
          else {
            if (param_2 == 0xc691) {
              uVar1 = 0xc691;
              goto code_r0x10517d5a;
            }
            if (param_2 != 0xc692) {
              return 0;
            }
            uVar1 = 0xc692;
          }
code_r0x10517d6e:
          uVar2 = 10;
        }
        goto code_r0x10517aa4;
      }
      uVar1 = 0xc68f;
    }
code_r0x10517d5a:
    uVar2 = 7;
  }
code_r0x10517aa4:
  uVar3 = 0;
code_r0x10517d78:
  uVar1 = construct_object_with_vtable((uint16_t *)0x0,uVar1,uVar2,uVar3,0);
  return uVar1;
}
