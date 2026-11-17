/* @k10d map_iso_to_index @ 0x104f035c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104f036c) overlaps instruction at (ram,0x104f036a)
    */

uint32_t map_iso_to_index(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0x140) {
    uVar1 = 0xc;
  }
  else {
    uVar1 = 0;
    if (param_2 < 0x141) {
      if (param_2 == 100) {
        uVar1 = 5;
      }
      else if (param_2 < 0x65) {
        if (param_2 == 0x40) {
          uVar1 = 2;
        }
        else if (param_2 < 0x41) {
          if (param_2 == 0) {
            uVar1 = 0;
          }
          else if (param_2 == 0x32) {
            uVar1 = 1;
          }
        }
        else if (param_2 == 0x46) {
          uVar1 = 3;
        }
        else if (param_2 == 0x50) {
          uVar1 = 4;
        }
      }
      else if (param_2 == 0xa0) {
        uVar1 = 8;
      }
      else if (param_2 < 0xa1) {
        if (param_2 == 0x7d) {
          uVar1 = 6;
        }
        else if (param_2 == 0x8c) {
          uVar1 = 7;
        }
      }
      else if (param_2 == 200) {
        uVar1 = 9;
      }
      else if (param_2 == 0xfa) {
        uVar1 = 10;
      }
      else if (param_2 == 0x118) {
        uVar1 = 0xb;
      }
    }
    else if (param_2 == 0x44c) {
      uVar1 = 0x13;
    }
    else if (param_2 < 0x44d) {
      if (param_2 == 0x230) {
        uVar1 = 0xf;
      }
      else if (param_2 < 0x231) {
        if (param_2 == 400) {
          uVar1 = 0xd;
        }
        else if (param_2 == 500) {
          uVar1 = 0xe;
        }
      }
      else if (param_2 == 0x280) {
        uVar1 = 0x10;
      }
      else if (param_2 == 800) {
        uVar1 = 0x11;
      }
      else if (param_2 == 1000) {
        uVar1 = 0x12;
      }
    }
    else if (param_2 == 2000) {
      uVar1 = 0x16;
    }
    else if (param_2 < 0x7d1) {
      if (param_2 == 0x4e2) {
        uVar1 = 0x14;
      }
      else if (param_2 == 0x640) {
        uVar1 = 0x15;
      }
    }
    else if (param_2 == 0x898) {
      uVar1 = 0x17;
    }
    else if (param_2 == 0x9c4) {
      uVar1 = 0x18;
    }
    else if (param_2 == 0xc80) {
      uVar1 = 0x19;
    }
  }
  return uVar1;
}
