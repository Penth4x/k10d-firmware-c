/* @k10d pack_two_byte_value_10496952 @ 0x10496952
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Combines a high byte and a low byte into a 16-bit value.
 * summary:
 *   The function takes a high byte (param_3) and a low byte (param_2) and returns their
 *   concatenation as a 16-bit unsigned integer. It is called as virtual method slot 2 by
 *   several classes, suggesting it implements a standard interface for retrieving a packed
 *   16-bit property or state. No other side effects or memory accesses are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

ushort pack_two_byte_value_10496952(void *param_1,ushort param_2,short param_3)

{
  return param_3 << 8 | param_2;
}
