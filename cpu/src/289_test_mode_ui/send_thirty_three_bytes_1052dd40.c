/* @k10d send_thirty_three_bytes_1052dd40 @ 0x1052dd40
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Sends 33 consecutive bytes from a source buffer to a destination via a helper function.
 * summary:
 *   The function iterates through 33 specific byte offsets in the memory block pointed to
 *   by param_1 (starting at 0x22e) and calls field_setter for each. The second argument to
 *   the helper is an incrementing index (0x11 to 0x31), while the third argument is the
 *   byte value read from param_1. The order of indices is slightly non-sequential near the
 *   end (e.g., 0x2a, 0x2c, 0x2d, 0x2f, 0x30, 0x2b, 0x2e, 0x31), suggesting a specific data
 *   layout or transmission order.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_thirty_three_bytes_1052dd40(int param_1,int param_2)

{
  field_setter(param_2,0x11,*(uint8_t *)(param_1 + 0x22e));
  field_setter(param_2,0x12,*(uint8_t *)(param_1 + 0x22f));
  field_setter(param_2,0x13,*(uint8_t *)(param_1 + 0x230));
  field_setter(param_2,0x14,*(uint8_t *)(param_1 + 0x231));
  field_setter(param_2,0x15,*(uint8_t *)(param_1 + 0x232));
  field_setter(param_2,0x16,*(uint8_t *)(param_1 + 0x233));
  field_setter(param_2,0x17,*(uint8_t *)(param_1 + 0x234));
  field_setter(param_2,0x18,*(uint8_t *)(param_1 + 0x235));
  field_setter(param_2,0x19,*(uint8_t *)(param_1 + 0x236));
  field_setter(param_2,0x1a,*(uint8_t *)(param_1 + 0x237));
  field_setter(param_2,0x1b,*(uint8_t *)(param_1 + 0x238));
  field_setter(param_2,0x1c,*(uint8_t *)(param_1 + 0x239));
  field_setter(param_2,0x1d,*(uint8_t *)(param_1 + 0x23a));
  field_setter(param_2,0x1e,*(uint8_t *)(param_1 + 0x23b));
  field_setter(param_2,0x1f,*(uint8_t *)(param_1 + 0x23c));
  field_setter(param_2,0x20,*(uint8_t *)(param_1 + 0x23d));
  field_setter(param_2,0x21,*(uint8_t *)(param_1 + 0x23e));
  field_setter(param_2,0x22,*(uint8_t *)(param_1 + 0x23f));
  field_setter(param_2,0x23,*(uint8_t *)(param_1 + 0x240));
  field_setter(param_2,0x24,*(uint8_t *)(param_1 + 0x241));
  field_setter(param_2,0x25,*(uint8_t *)(param_1 + 0x242));
  field_setter(param_2,0x26,*(uint8_t *)(param_1 + 0x243));
  field_setter(param_2,0x27,*(uint8_t *)(param_1 + 0x244));
  field_setter(param_2,0x28,*(uint8_t *)(param_1 + 0x245));
  field_setter(param_2,0x29,*(uint8_t *)(param_1 + 0x246));
  field_setter(param_2,0x2a,*(uint8_t *)(param_1 + 0x247));
  field_setter(param_2,0x2c,*(uint8_t *)(param_1 + 0x248));
  field_setter(param_2,0x2d,*(uint8_t *)(param_1 + 0x249));
  field_setter(param_2,0x2f,*(uint8_t *)(param_1 + 0x24a));
  field_setter(param_2,0x30,*(uint8_t *)(param_1 + 0x24b));
  field_setter(param_2,0x2b,*(uint8_t *)(param_1 + 0x24c));
  field_setter(param_2,0x2e,*(uint8_t *)(param_1 + 0x24d));
  field_setter(param_2,0x31,*(uint8_t *)(param_1 + 0x24e));
  return;
}
