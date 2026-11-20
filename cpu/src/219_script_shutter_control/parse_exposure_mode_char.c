/* @k10d parse_exposure_mode_char @ 0x104b6c1e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * purpose:
 *   Converts an ASCII character representing an exposure mode into an internal index and
 *   updates the state object.
 * summary:
 *   The function interprets the first byte of param_2 as an exposure mode character (P, Tv,
 *   Av, Sv, TAv, M, B, X) or a numeric value. For letters, it maps them to indices 0-15
 *   (e.g., 'P'->0, 'T'->13, 'A'->14, 'S'->16). For numeric values (0x30-0x39), it calls
 *   parse_and_mask_hex_string and read_state_at_offset_16 to update fields in the state
 *   object pointed to by param_1. It then normalizes the input character to a space if it
 *   was a letter, calls strip_whitespace_and_check_comment, and conditionally calls
 *   cmd_error_report if the resulting index is greater than 26. The return value is the
 *   internal mode index.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint parse_exposure_mode_char(uint32_t *param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t r6_in;
  uint32_t r7_in;
  uint uVar4;
  
  uVar1 = (uint)*param_2;
  uVar4 = 0;
  if ((uVar1 < 0x30) || (0x39 < uVar1)) {
    if ((uVar1 < 0x41) || (0x4a < uVar1)) {
      if (uVar1 == 0x4c) {
        uVar4 = 10;
      }
      else if (uVar1 == 0x4d) {
        uVar4 = 0xb;
      }
      else if (uVar1 == 0x4e) {
        uVar4 = 0xc;
      }
      else if (uVar1 == 0x54) {
        uVar4 = 0xd;
      }
      else if (uVar1 == 0x52) {
        uVar4 = 0xe;
      }
      else if (uVar1 == 0x4b) {
        uVar4 = 0xf;
      }
      else if (uVar1 == 0x53) {
        uVar4 = 0x10;
      }
    }
    else {
      uVar4 = uVar1 - 0x41;
    }
  }
  else {
    iVar2 = parse_and_mask_hex_string((int)param_1,(char *)param_2,(uint32_t)(r6_in),(void *)(r7_in));
    param_1[0x86] = iVar2;
    if (iVar2 == 0) {
      uVar4 = 0x11;
    }
    else {
      uVar3 = read_state_at_offset_16(*param_1);
      param_1[0x20] = uVar3;
      uVar4 = 0x12;
    }
  }
  if ((0x40 < *param_2) && (*param_2 < 0x55)) {
    *param_2 = 0x20;
  }
  strip_whitespace_and_check_comment(param_1,(char *)param_2);
  if (0x1a < uVar4) {
    cmd_error_report((uint32_t *)(param_1[1]),(uint32_t)(0x90));
  }
  return uVar4;
}
