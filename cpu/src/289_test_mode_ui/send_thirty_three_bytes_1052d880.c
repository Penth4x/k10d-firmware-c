/* @k10d send_thirty_three_bytes_1052d880 @ 0x1052d880
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Sends 33 consecutive bytes from a struct to a destination via a helper function.
 * summary:
 *   The function iterates through 33 specific byte offsets (0x20c-0x22c) within the object
 *   pointed to by param_1. For each byte, it calls field_setter with param_2 as the first
 *   argument, a sequential index (starting at 0x11) as the second argument, and the byte
 *   value as the third argument. The indices are not strictly sequential in the call order
 *   (e.g., 0x2a is followed by 0x2c, skipping 0x2b which appears later), suggesting a
 *   specific field mapping or reordering.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_thirty_three_bytes_1052d880(int param_1,int param_2)

{
  field_setter(param_2,0x11,*(uint8_t *)(param_1 + 0x20c));
  field_setter(param_2,0x12,*(uint8_t *)(param_1 + 0x20d));
  field_setter(param_2,0x13,*(uint8_t *)(param_1 + 0x20e));
  field_setter(param_2,0x14,*(uint8_t *)(param_1 + 0x20f));
  field_setter(param_2,0x15,*(uint8_t *)(param_1 + 0x210));
  field_setter(param_2,0x16,*(uint8_t *)(param_1 + 0x211));
  field_setter(param_2,0x17,*(uint8_t *)(param_1 + 0x212));
  field_setter(param_2,0x18,*(uint8_t *)(param_1 + 0x213));
  field_setter(param_2,0x19,*(uint8_t *)(param_1 + 0x214));
  field_setter(param_2,0x1a,*(uint8_t *)(param_1 + 0x215));
  field_setter(param_2,0x1b,*(uint8_t *)(param_1 + 0x216));
  field_setter(param_2,0x1c,*(uint8_t *)(param_1 + 0x217));
  field_setter(param_2,0x1d,*(uint8_t *)(param_1 + 0x218));
  field_setter(param_2,0x1e,*(uint8_t *)(param_1 + 0x219));
  field_setter(param_2,0x1f,*(uint8_t *)(param_1 + 0x21a));
  field_setter(param_2,0x20,*(uint8_t *)(param_1 + 0x21b));
  field_setter(param_2,0x21,*(uint8_t *)(param_1 + 0x21c));
  field_setter(param_2,0x22,*(uint8_t *)(param_1 + 0x21d));
  field_setter(param_2,0x23,*(uint8_t *)(param_1 + 0x21e));
  field_setter(param_2,0x24,*(uint8_t *)(param_1 + 0x21f));
  field_setter(param_2,0x25,*(uint8_t *)(param_1 + 0x220));
  field_setter(param_2,0x26,*(uint8_t *)(param_1 + 0x221));
  field_setter(param_2,0x27,*(uint8_t *)(param_1 + 0x222));
  field_setter(param_2,0x28,*(uint8_t *)(param_1 + 0x223));
  field_setter(param_2,0x29,*(uint8_t *)(param_1 + 0x224));
  field_setter(param_2,0x2a,*(uint8_t *)(param_1 + 0x225));
  field_setter(param_2,0x2c,*(uint8_t *)(param_1 + 0x226));
  field_setter(param_2,0x2d,*(uint8_t *)(param_1 + 0x227));
  field_setter(param_2,0x2f,*(uint8_t *)(param_1 + 0x228));
  field_setter(param_2,0x30,*(uint8_t *)(param_1 + 0x229));
  field_setter(param_2,0x2b,*(uint8_t *)(param_1 + 0x22a));
  field_setter(param_2,0x2e,*(uint8_t *)(param_1 + 0x22b));
  field_setter(param_2,0x31,*(uint8_t *)(param_1 + 0x22c));
  return;
}
