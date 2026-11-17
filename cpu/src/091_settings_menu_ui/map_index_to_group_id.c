/* @k10d map_index_to_group_id @ 0x104083e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_index_to_group_id(void *param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = param_2;
  if (0 < param_3) {
    switch(param_2) {
    case 1:
      uVar1 = 2;
      break;
    case 3:
      uVar1 = 4;
      break;
    case 5:
    case 6:
      uVar1 = 7;
      break;
    case 8:
    case 9:
      uVar1 = 10;
      break;
    case 0xb:
    case 0xc:
      uVar1 = 0xd;
      break;
    case 0xe:
    case 0xf:
      uVar1 = 0x10;
      break;
    case 0x11:
    case 0x12:
    case 0x13:
      uVar1 = 0x14;
      break;
    case 0x15:
    case 0x16:
      uVar1 = 0x18;
      break;
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
      uVar1 = 0x1d;
      break;
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
      uVar1 = 0x22;
      break;
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
      uVar1 = 0x28;
      break;
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
      uVar1 = 0x30;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      uVar1 = 0x3a;
      break;
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
      uVar1 = 0x47;
      break;
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
      uVar1 = 0x58;
    }
  }
  if (param_3 < 0) {
    switch(param_2) {
    case 1:
      uVar1 = 0;
      break;
    case 3:
      uVar1 = 2;
      break;
    case 5:
    case 6:
      uVar1 = 4;
      break;
    case 8:
    case 9:
      uVar1 = 7;
      break;
    case 0xb:
    case 0xc:
      uVar1 = 10;
      break;
    case 0xe:
    case 0xf:
      uVar1 = 0xd;
      break;
    case 0x11:
    case 0x12:
    case 0x13:
      uVar1 = 0x10;
      break;
    case 0x15:
    case 0x16:
      uVar1 = 0x14;
      break;
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
      uVar1 = 0x18;
      break;
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
      uVar1 = 0x1d;
      break;
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
      uVar1 = 0x22;
      break;
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
      uVar1 = 0x28;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      uVar1 = 0x30;
      break;
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
      uVar1 = 0x3a;
      break;
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
      uVar1 = 0x47;
    }
  }
  return uVar1;
}
