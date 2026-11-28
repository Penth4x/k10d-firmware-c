/* @k10d map_code_to_value @ 0x1045a8ea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_code_to_value(uint32_t unused_first, uint32_t input_code)
{
  uint32_t mapped_value;

  switch (input_code) {
  case 0:
    mapped_value = 0;
    break;
  default:
    mapped_value = 0;
    break;
  case 3:
    mapped_value = 0xfffffffd;
    break;
  case 4:
    mapped_value = 0xfffffffb;
    break;
  case 5:
    mapped_value = 0xfffffff9;
    break;
  case 8:
    mapped_value = 0xfffffff6;
    break;
  case 0xb:
    mapped_value = 0xfffffff3;
    break;
  case 0xc:
    mapped_value = 0xfffffff1;
    break;
  case 0xd:
    mapped_value = 0xffffffef;
    break;
  case 0x10:
    mapped_value = 0xffffffec;
    break;
  case 0xf0:
    mapped_value = 0x14;
    break;
  case 0xf3:
    mapped_value = 0x11;
    break;
  case 0xf4:
    mapped_value = 0xf;
    break;
  case 0xf5:
    mapped_value = 0xd;
    break;
  case 0xf8:
    mapped_value = 10;
    break;
  case 0xfb:
    mapped_value = 7;
    break;
  case 0xfc:
    mapped_value = 5;
    break;
  case 0xfd:
    mapped_value = 3;
    break;
  }

  return mapped_value;
}
