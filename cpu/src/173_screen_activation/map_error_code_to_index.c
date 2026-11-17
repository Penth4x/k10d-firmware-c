/* @k10d map_error_code_to_index @ 0x104806ee
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 173_screen_activation (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_error_code_to_index(void *param_1,int param_2)

{
  if (param_2 == -0x1d) {
    return 4;
  }
  if (param_2 < -0x1c) {
    if (param_2 != -0x259) {
      if (-0x259 < param_2) {
        if (param_2 == -0x1f6) {
          return 6;
        }
        if (param_2 < -0x1f5) {
          if (param_2 == -600) {
            return 0xd;
          }
          if (param_2 != -0x208) {
            if (param_2 == -0x1ff) {
              return 10;
            }
            return 0x15;
          }
        }
        else {
          if (param_2 == -0x1f5) {
            return 5;
          }
          if (param_2 != -0x4e) {
            if (param_2 == -0x27) {
              return 7;
            }
            if (param_2 == -0x1e) {
              return 10;
            }
            return 0x15;
          }
        }
        return 2;
      }
      if (param_2 == -0x32a) {
        return 9;
      }
      if (param_2 < -0x329) {
        if (param_2 == -1000) {
          return 0x11;
        }
        if (param_2 != -0x38e) {
          if (param_2 == -0x352) {
            return 0x13;
          }
          return 0x15;
        }
      }
      else if (param_2 != -0x321) {
        if (param_2 == -0x26c) {
          return 0xd;
        }
        if (param_2 == -0x263) {
          return 0xd;
        }
        if (param_2 == -0x262) {
          return 0xd;
        }
        return 0x15;
      }
      return 1;
    }
  }
  else if (param_2 != -0x10) {
    if (param_2 < -0xf) {
      if (param_2 == -0x16) {
        return 0xc;
      }
      if (-0x16 < param_2) {
        if (param_2 == -0x15) {
          return 10;
        }
        if (param_2 == -0x14) {
          return 2;
        }
        if (param_2 == -0x13) {
          return 0xf;
        }
        if (param_2 != -0x11) {
          return 0x15;
        }
        return 8;
      }
      if ((param_2 != -0x1c) && (param_2 != -0x1b)) {
        if (param_2 != -0x18) {
          return 0x15;
        }
        return 3;
      }
    }
    else {
      if (param_2 == -5) {
        return 0x12;
      }
      if (param_2 < -4) {
        if (param_2 != -0xc) {
          if (param_2 == -9) {
            return 0xb;
          }
          if (param_2 == -6) {
            return 0xf;
          }
          return 0x15;
        }
      }
      else if (param_2 != -3) {
        if (param_2 == -2) {
          return 2;
        }
        if (param_2 != 0) {
          if (param_2 == 1) {
            return 5;
          }
          return 0x15;
        }
        return 0;
      }
    }
  }
  return 0xd;
}
