/* @k10d adjust_mode_by_direction @ 0x104082c2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns a modified mode index based on the sign of a direction parameter for specific
 *   mode values.
 * summary:
 *   The function takes a mode identifier (param_2) and a direction (param_3). For a set of
 *   specific mode values (2, 4, 7, 10, 13, 16, 20, 24, 29, 40, 48, 58), it returns a
 *   distinct code depending on whether the direction is negative or positive. For mode 71,
 *   it decrements or increments the mode value itself. Otherwise, it returns the input mode
 *   unchanged. No memory writes or external calls are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int adjust_mode_by_direction(void *param_1,int param_2,int param_3)

{
  if (param_2 == 2) {
    if (param_3 < 0) {
      return 1;
    }
    if (0 < param_3) {
      return 3;
    }
  }
  if (param_2 == 4) {
    if (param_3 < 0) {
      return 3;
    }
    if (0 < param_3) {
      return 5;
    }
  }
  if (param_2 == 7) {
    if (param_3 < 0) {
      return 6;
    }
    if (0 < param_3) {
      return 8;
    }
  }
  if (param_2 == 10) {
    if (param_3 < 0) {
      return 9;
    }
    if (0 < param_3) {
      return 0xb;
    }
  }
  if (param_2 == 0xd) {
    if (param_3 < 0) {
      return 0xc;
    }
    if (0 < param_3) {
      return 0xe;
    }
  }
  if (param_2 == 0x10) {
    if (param_3 < 0) {
      return 0xf;
    }
    if (0 < param_3) {
      return 0x11;
    }
  }
  if (param_2 == 0x14) {
    if (param_3 < 0) {
      return 0x13;
    }
    if (0 < param_3) {
      return 0x15;
    }
  }
  if (param_2 == 0x18) {
    if (param_3 < 0) {
      return 0x17;
    }
    if (0 < param_3) {
      return 0x19;
    }
  }
  if (param_2 == 0x1d) {
    if (param_3 < 0) {
      return 0x1c;
    }
    if (0 < param_3) {
      return 0x1e;
    }
  }
  if (param_2 == 0x28) {
    if (param_3 < 0) {
      return 0x27;
    }
    if (0 < param_3) {
      return 0x29;
    }
  }
  if (param_2 == 0x30) {
    if (param_3 < 0) {
      return 0x2f;
    }
    if (0 < param_3) {
      return 0x31;
    }
  }
  if (param_2 == 0x3a) {
    if (param_3 < 0) {
      return 0x39;
    }
    if (0 < param_3) {
      return 0x3b;
    }
  }
  if (param_2 == 0x47) {
    if (param_3 < 0) {
      param_2 = 0x46;
    }
    else if (0 < param_3) {
      param_2 = 0x48;
    }
  }
  return param_2;
}
