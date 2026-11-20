/* @k10d compute_signed_delta_from_flag @ 0x000ed206
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes a difference between two globals based on a flag bit, storing the result in
 *   one of two target globals.
 * summary:
 *   Calls FUN_000ed26e first. Then checks bit 0 of DAT_0003c066. If clear, it stores
 *   DAT_0003c02d into DAT_0003c245 and calculates DAT_0003c241 - DAT_0003c02d into
 *   DAT_0003c249 (clamped to 0 if negative). If set, it stores DAT_0003c02d into
 *   DAT_0003c247 and calculates DAT_0003c243 - DAT_0003c02d into DAT_0003c24b (clamped to 0
 *   if negative). The specific meaning of the DAT globals is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_signed_delta_from_flag(void)

{
  FUN_000ed26e();
  if ((DAT_0003c066 & 1) == 0) {
    DAT_0003c245 = DAT_0003c02d;
    DAT_0003c249 = '\0';
    if (DAT_0003c02d <= DAT_0003c241) {
      DAT_0003c249 = DAT_0003c241 - DAT_0003c02d;
    }
  }
  else {
    DAT_0003c247 = DAT_0003c02d;
    if (DAT_0003c243 < DAT_0003c02d) {
      DAT_0003c24b = '\0';
    }
    else {
      DAT_0003c24b = DAT_0003c243 - DAT_0003c02d;
    }
  }
  return;
}
