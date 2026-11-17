/* @k10d check_mode_in_valid_set @ 0x1047156a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 164_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Returns 1 if param_2 matches one of a hardcoded set of mode identifiers, else 0.
 * summary:
 *   The function performs a switch on param_2 against a specific list of integer values
 *   (2,4,5,8-0xf,0x14,0x18-0x1f) and returns 1 for matches or 0 otherwise. It is called as
 *   virtual method slot 6 of class cls_105a9ac8. No other callees are present, and the
 *   specific meaning of the mode identifiers is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_mode_in_valid_set(uint32_t param_1,void *param_2)

{
  uint32_t uVar1;
  
  switch ((uintptr_t)param_2) {
  case 0x2:
  case 0x4:
  case 0x5:
  case 0x8:
  case 0x9:
  case 0xa:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x14:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    uVar1 = 1;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
