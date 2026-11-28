/* @k10d map_event_code_to_value @ 0x1045b0f4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * purpose:
 *   Returns a small integer (0-12) based on a switch over the second argument.
 * summary:
 *   The function takes two parameters but only uses param_2 in a switch statement to select
 *   a return value. It maps specific input codes (e.g., 0, 3-5, 8, 0xb-0xd, 0x10, 0xf0,
 *   0xf3-0xf5, 0xf8, 0xfb-0xfd) to fixed integer outputs (8, 10, 12, 0, 2, 4, 6). The first
 *   parameter is unused. Without context on what these codes represent, the specific domain
 *   role is unclear.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_event_code_to_value(uint32_t unused_event_context, uint32_t event_code)

{
  uint32_t mapped_value;

  switch (event_code) {
  case 0:
    mapped_value = 8;
    break;
  default:
    mapped_value = 8;
    break;
  case 3:
  case 4:
  case 5:
    mapped_value = 10;
    break;
  case 8:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x10:
    mapped_value = 0xc;
    break;
  case 0xf0:
    mapped_value = 0;
    break;
  case 0xf3:
  case 0xf4:
  case 0xf5:
    mapped_value = 2;
    break;
  case 0xf8:
    mapped_value = 4;
    break;
  case 0xfb:
  case 0xfc:
  case 0xfd:
    mapped_value = 6;
  }

  return mapped_value;
}
