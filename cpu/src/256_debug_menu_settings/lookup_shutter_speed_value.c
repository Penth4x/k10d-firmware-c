/* @k10d lookup_shutter_speed_value @ 0x104f02c2
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Maps an index (0-25) to a corresponding shutter speed or exposure value constant.
 * summary:
 *   The function takes two parameters, ignoring the first, and uses the second as an index
 *   into a switch statement. It returns a specific integer value for each case from 0 to
 *   0x19 (25). The returned values (e.g., 0x32, 0x40, 0x46, 0x50, 100, 0x7d, 0x8c, 0xa0,
 *   200) appear to represent encoded shutter speeds or exposure steps, likely in units of
 *   1/1000th of a second or similar internal representation. No callees are present, and
 *   the role is inferred from the pattern of returned constants typical of camera exposure
 *   tables.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t lookup_shutter_speed_value(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 0x32;
    break;
  case 2:
    uVar1 = 0x40;
    break;
  case 3:
    uVar1 = 0x46;
    break;
  case 4:
    uVar1 = 0x50;
    break;
  case 5:
    uVar1 = 100;
    break;
  case 6:
    uVar1 = 0x7d;
    break;
  case 7:
    uVar1 = 0x8c;
    break;
  case 8:
    uVar1 = 0xa0;
    break;
  case 9:
    uVar1 = 200;
    break;
  case 10:
    uVar1 = 0xfa;
    break;
  case 0xb:
    uVar1 = 0x118;
    break;
  case 0xc:
    uVar1 = 0x140;
    break;
  case 0xd:
    uVar1 = 400;
    break;
  case 0xe:
    uVar1 = 500;
    break;
  case 0xf:
    uVar1 = 0x230;
    break;
  case 0x10:
    uVar1 = 0x280;
    break;
  case 0x11:
    uVar1 = 800;
    break;
  case 0x12:
    uVar1 = 1000;
    break;
  case 0x13:
    uVar1 = 0x44c;
    break;
  case 0x14:
    uVar1 = 0x4e2;
    break;
  case 0x15:
    uVar1 = 0x640;
    break;
  case 0x16:
    uVar1 = 2000;
    break;
  case 0x17:
    uVar1 = 0x898;
    break;
  case 0x18:
    uVar1 = 0x9c4;
    break;
  case 0x19:
    uVar1 = 0xc80;
  }
  return uVar1;
}
