/* @k10d compute_state_and_update_flags @ 0x000f42e4
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Computes a state value from global flags and updates associated status bits and
 *   counters.
 * summary:
 *   The function reads several global flag variables (DAT_0003c412, DAT_0003c4d7,
 *   DAT_0003c036) to determine a state value stored in DAT_0003c440. It updates status bits
 *   in DAT_0003c4de and DAT_0003c4df based on the computed state and other conditions.
 *   Depending on the final state value, it calls one of three sub-functions
 *   (select_and_store_mode_value, update_state_flag_based_on_mode_000f4694,
 *   update_state_flag_based_on_mode_000f46f2) and sets additional flags in DAT_0003c4db.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_state_and_update_flags(void)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  
  bVar1 = false;
  bVar2 = false;
  if ((DAT_0003c412 & 2) == 0) {
    if (((DAT_0003c4d7 & 0x10) == 0) && ((DAT_0003c4d7 & 0x20) != 0)) {
      if ((DAT_0003c036 & 0x1f) >> 1 == 9) {
        uVar3 = (uint)DAT_0003c441;
        if ((DAT_0003c4d7 & 4) == 0) {
          DAT_0003c4de = DAT_0003c4de & 0xfe;
        }
        else {
          DAT_0003c4de = DAT_0003c4de | 1;
        }
        if ((DAT_0003c4d7 & 8) == 0) {
          DAT_0003c4df = DAT_0003c4df & 0xf7;
        }
        else {
          DAT_0003c4df = DAT_0003c4df | 8;
        }
      }
      else {
        uVar3 = (uint)(byte)(&DAT_000fc890)[(DAT_0003c036 & 0x1f) >> 1];
        if ((DAT_0003c129 & 1) != 0) {
          uVar3 = uVar3 + 9;
        }
      }
    }
    else {
      uVar3 = (uint)DAT_0003c441;
      if (((DAT_0003c129 & 1) == 0) || (8 < uVar3)) {
        if (((DAT_0003c129 & 1) == 0) && (8 < uVar3)) {
          uVar3 = uVar3 - 9;
        }
      }
      else {
        uVar3 = uVar3 + 9;
      }
      if ((uVar3 == 4) || (uVar3 == 5)) {
        uVar3 = 0;
      }
      if ((DAT_0003c4d7 & 4) == 0) {
        DAT_0003c4de = DAT_0003c4de & 0xfe;
      }
      else {
        DAT_0003c4de = DAT_0003c4de | 1;
      }
      if ((DAT_0003c4d7 & 8) == 0) {
        DAT_0003c4df = DAT_0003c4df & 0xf7;
      }
      else {
        DAT_0003c4df = DAT_0003c4df | 8;
      }
    }
  }
  else {
    if ((DAT_0003c129 & 1) == 0) {
      uVar3 = (uint)(byte)(&DAT_000fc86c)[DAT_0003c442];
      if ((DAT_0003c442 == 9) || (DAT_0003c442 == 0xc)) {
        bVar1 = true;
      }
      else if ((DAT_0003c442 == 0x10) || (DAT_0003c442 == 0x11)) {
        bVar2 = true;
      }
    }
    else {
      uVar3 = (uint)(byte)(&DAT_000fc87e)[DAT_0003c442];
      if ((DAT_0003c442 == 9) || (DAT_0003c442 == 0xc)) {
        bVar1 = true;
      }
      else if ((DAT_0003c442 == 0x10) || (DAT_0003c442 == 0x11)) {
        bVar2 = true;
      }
    }
    DAT_0003c412 = DAT_0003c412 & 0xfd;
  }
  DAT_0003c440 = (byte)uVar3;
  if ((((uVar3 == 0) && (DAT_0003c3bd != '\0')) && (DAT_0003c3bd != '\x04')) ||
     ((uVar3 == 1 || (uVar3 != 0)))) {
    if ((DAT_0003c393 & 0x10) == 0) {
      if (DAT_0003c498 != '\0') {
        DAT_0003c4df = DAT_0003c4df | 2;
      }
      if (DAT_0003c499 != '\0') {
        DAT_0003c4df = DAT_0003c4df | 4;
      }
    }
    if ((DAT_0003c440 == 0) && ((DAT_0003c4d2 & 2) != 0)) {
      DAT_0003c49a = 0;
    }
  }
  else {
    if (((((DAT_0003c036 & 0x80) != 0) && ((DAT_0003c000 & 0x80) != 0)) &&
        ((DAT_0003c035 & 0x10) != 0)) && ((DAT_0003c3bd == '\0' || (DAT_0003c3bd == '\x04')))) {
      if (DAT_0003c498 != '\0') {
        DAT_0003c4df = DAT_0003c4df | 2;
      }
      if (DAT_0003c499 != '\0') {
        DAT_0003c4df = DAT_0003c4df | 4;
      }
    }
    if (((DAT_0003c441 == 0) || (DAT_0003c441 == 4)) || (DAT_0003c441 == 5)) {
      DAT_0003c440 = DAT_0003c441;
    }
    if (DAT_0003c440 == 0) {
      select_and_store_mode_value();
    }
    else if (DAT_0003c440 == 5) {
      update_state_flag_based_on_mode_000f4694();
    }
    else if (DAT_0003c440 == 4) {
      update_state_flag_based_on_mode_000f46f2();
    }
  }
  DAT_0003c444 = DAT_0003c3bc;
  switch(DAT_0003c440) {
  case 0:
    DAT_0003c4de = DAT_0003c4de | 4;
    break;
  case 1:
    DAT_0003c444 = '\0';
    DAT_0003c4df = DAT_0003c4df | 0x10;
    DAT_0003c4de = DAT_0003c4de | 100;
    break;
  case 6:
    DAT_0003c4de = DAT_0003c4de | 4;
    if ((DAT_0003c4d2 & 2) != 0) {
      DAT_0003c49a = 0;
      DAT_0003c4d7 = DAT_0003c4d7 & 0x3f;
    }
    break;
  case 7:
    DAT_0003c4de = DAT_0003c4de | 2;
    break;
  case 8:
  case 0x11:
    if (((DAT_0003c036 & 0x1f) >> 1 == 0xe) || (bVar1)) {
      DAT_0003c4de = DAT_0003c4de | 1;
    }
    else if ((((DAT_0003c036 & 0x1f) >> 1 == 0xc) || ((DAT_0003c036 & 0x1f) >> 1 == 0xd)) || (bVar2)
            ) {
      DAT_0003c4df = DAT_0003c4df | 8;
    }
    DAT_0003c4de = DAT_0003c4de | 0x22;
  }
  if ((DAT_0003c440 != DAT_0003c441) || (DAT_0003c444 != DAT_0003c445)) {
    DAT_0003c49a = 0;
    DAT_0003c4d7 = DAT_0003c4d7 & 0x3f;
  }
  DAT_0003c4db = DAT_0003c4db & 0xdf;
  if ((((DAT_0003c440 == 3) && ((DAT_0003c3c0 == '\x03' || (DAT_0003c3c0 == '\x04')))) ||
      ((DAT_0003c440 == 2 && ((DAT_0003c3bf == '\x03' || (DAT_0003c3bf == '\x04')))))) ||
     ((8 < DAT_0003c440 &&
      (((DAT_0003c440 < 0x11 && (DAT_0003c3bf == '\x03')) ||
       ((8 < DAT_0003c440 && ((DAT_0003c440 < 0x11 && (DAT_0003c3bf == '\x04')))))))))) {
    DAT_0003c4db = DAT_0003c4db | 0x20;
  }
  return;
}
