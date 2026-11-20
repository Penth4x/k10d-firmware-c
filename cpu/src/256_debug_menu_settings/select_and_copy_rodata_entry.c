/* @k10d select_and_copy_rodata_entry @ 0x104f0f28
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Selects a 4-byte rodata entry by index and passes it to a helper function.
 * summary:
 *   The function uses a large switch statement on param_2 to select a pointer to one of 88
 *   consecutive 4-byte data entries in the 0x105c2f64-0x105c3224 range. It then calls
 *   format_string_to_buffer_10545140 with the fixed SDRAM address 0x80010cb1, the selected
 *   rodata pointer, and two additional arguments (in_r6, in_r7). The function returns the
 *   constant 0x80010cb1. The specific role of the data entries and the helper function is
 *   not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_and_copy_rodata_entry(uint32_t param_1,uint32_t param_2)

{
  char *pcVar1;
  void *r6_in;
  void *r7_in;
  
  switch(param_2) {
  case 0:
    pcVar1 = &DAT_105c2f64/*ROM*/;
    break;
  case 1:
    pcVar1 = &DAT_105c2f6c/*ROM*/;
    break;
  case 2:
    pcVar1 = &DAT_105c2f74/*ROM*/;
    break;
  case 3:
    pcVar1 = &DAT_105c2f7c/*ROM*/;
    break;
  case 4:
    pcVar1 = &DAT_105c2f84/*ROM*/;
    break;
  case 5:
    pcVar1 = &DAT_105c2f8c/*ROM*/;
    break;
  case 6:
    pcVar1 = &DAT_105c2f94/*ROM*/;
    break;
  case 7:
    pcVar1 = &DAT_105c2f9c/*ROM*/;
    break;
  case 8:
    pcVar1 = &DAT_105c2fa4/*ROM*/;
    break;
  case 9:
    pcVar1 = &DAT_105c2fac/*ROM*/;
    break;
  case 10:
    pcVar1 = &DAT_105c2fb4/*ROM*/;
    break;
  case 0xb:
    pcVar1 = &DAT_105c2fbc/*ROM*/;
    break;
  case 0xc:
    pcVar1 = &DAT_105c2fc4/*ROM*/;
    break;
  case 0xd:
    pcVar1 = &DAT_105c2fcc/*ROM*/;
    break;
  case 0xe:
    pcVar1 = &DAT_105c2fd4/*ROM*/;
    break;
  case 0xf:
    pcVar1 = &DAT_105c2fdc/*ROM*/;
    break;
  case 0x10:
    pcVar1 = &DAT_105c2fe4/*ROM*/;
    break;
  case 0x11:
    pcVar1 = &DAT_105c2fec/*ROM*/;
    break;
  case 0x12:
    pcVar1 = &DAT_105c2ff4/*ROM*/;
    break;
  case 0x13:
    pcVar1 = &DAT_105c2ffc/*ROM*/;
    break;
  case 0x14:
    pcVar1 = &DAT_105c3004/*ROM*/;
    break;
  case 0x15:
    pcVar1 = &DAT_105c300c/*ROM*/;
    break;
  case 0x16:
    pcVar1 = &DAT_105c3014/*ROM*/;
    break;
  case 0x17:
    pcVar1 = &DAT_105c301c/*ROM*/;
    break;
  case 0x18:
    pcVar1 = &DAT_105c3024/*ROM*/;
    break;
  case 0x19:
    pcVar1 = &DAT_105c302c/*ROM*/;
    break;
  case 0x1a:
    pcVar1 = &DAT_105c3034/*ROM*/;
    break;
  case 0x1b:
    pcVar1 = &DAT_105c303c/*ROM*/;
    break;
  case 0x1c:
    pcVar1 = &DAT_105c3044/*ROM*/;
    break;
  case 0x1d:
    pcVar1 = &DAT_105c304c/*ROM*/;
    break;
  case 0x1e:
    pcVar1 = &DAT_105c3054/*ROM*/;
    break;
  case 0x1f:
    pcVar1 = &DAT_105c305c/*ROM*/;
    break;
  case 0x20:
    pcVar1 = &DAT_105c3064/*ROM*/;
    break;
  case 0x21:
    pcVar1 = &DAT_105c306c/*ROM*/;
    break;
  case 0x22:
    pcVar1 = &DAT_105c3074/*ROM*/;
    break;
  case 0x23:
    pcVar1 = &DAT_105c307c/*ROM*/;
    break;
  case 0x24:
    pcVar1 = &DAT_105c3084/*ROM*/;
    break;
  case 0x25:
    pcVar1 = &DAT_105c308c/*ROM*/;
    break;
  case 0x26:
    pcVar1 = &DAT_105c3094/*ROM*/;
    break;
  case 0x27:
    pcVar1 = &DAT_105c309c/*ROM*/;
    break;
  case 0x28:
    pcVar1 = &DAT_105c30a4/*ROM*/;
    break;
  case 0x29:
    pcVar1 = &DAT_105c30ac/*ROM*/;
    break;
  case 0x2a:
    pcVar1 = &DAT_105c30b4/*ROM*/;
    break;
  case 0x2b:
    pcVar1 = &DAT_105c30bc/*ROM*/;
    break;
  case 0x2c:
    pcVar1 = &DAT_105c30c4/*ROM*/;
    break;
  case 0x2d:
    pcVar1 = &DAT_105c30cc/*ROM*/;
    break;
  case 0x2e:
    pcVar1 = &DAT_105c30d4/*ROM*/;
    break;
  case 0x2f:
    pcVar1 = &DAT_105c30dc/*ROM*/;
    break;
  case 0x30:
    pcVar1 = &DAT_105c30e4/*ROM*/;
    break;
  case 0x31:
    pcVar1 = &DAT_105c30ec/*ROM*/;
    break;
  case 0x32:
    pcVar1 = &DAT_105c30f4/*ROM*/;
    break;
  case 0x33:
    pcVar1 = &DAT_105c30fc/*ROM*/;
    break;
  case 0x34:
    pcVar1 = &DAT_105c3104/*ROM*/;
    break;
  case 0x35:
    pcVar1 = &DAT_105c310c/*ROM*/;
    break;
  case 0x36:
    pcVar1 = &DAT_105c3114/*ROM*/;
    break;
  case 0x37:
    pcVar1 = &DAT_105c311c/*ROM*/;
    break;
  case 0x38:
    pcVar1 = &DAT_105c3124/*ROM*/;
    break;
  case 0x39:
    pcVar1 = &DAT_105c312c/*ROM*/;
    break;
  case 0x3a:
    pcVar1 = &DAT_105c3134/*ROM*/;
    break;
  case 0x3b:
    pcVar1 = &DAT_105c313c/*ROM*/;
    break;
  case 0x3c:
    pcVar1 = &DAT_105c3144/*ROM*/;
    break;
  case 0x3d:
    pcVar1 = &DAT_105c314c/*ROM*/;
    break;
  case 0x3e:
    pcVar1 = &DAT_105c3154/*ROM*/;
    break;
  case 0x3f:
    pcVar1 = &DAT_105c315c/*ROM*/;
    break;
  case 0x40:
    pcVar1 = &DAT_105c3164/*ROM*/;
    break;
  case 0x41:
    pcVar1 = &DAT_105c316c/*ROM*/;
    break;
  case 0x42:
    pcVar1 = &DAT_105c3174/*ROM*/;
    break;
  case 0x43:
    pcVar1 = &DAT_105c317c/*ROM*/;
    break;
  case 0x44:
    pcVar1 = &DAT_105c3184/*ROM*/;
    break;
  case 0x45:
    pcVar1 = &DAT_105c318c/*ROM*/;
    break;
  case 0x46:
    pcVar1 = &DAT_105c3194/*ROM*/;
    break;
  case 0x47:
    pcVar1 = &DAT_105c319c/*ROM*/;
    break;
  case 0x48:
    pcVar1 = &DAT_105c31a4/*ROM*/;
    break;
  case 0x49:
    pcVar1 = &DAT_105c31ac/*ROM*/;
    break;
  case 0x4a:
    pcVar1 = &DAT_105c31b4/*ROM*/;
    break;
  case 0x4b:
    pcVar1 = &DAT_105c31bc/*ROM*/;
    break;
  case 0x4c:
    pcVar1 = &DAT_105c31c4/*ROM*/;
    break;
  case 0x4d:
    pcVar1 = &DAT_105c31cc/*ROM*/;
    break;
  case 0x4e:
    pcVar1 = &DAT_105c31d4/*ROM*/;
    break;
  case 0x4f:
    pcVar1 = &DAT_105c31dc/*ROM*/;
    break;
  case 0x50:
    pcVar1 = &DAT_105c31e4/*ROM*/;
    break;
  case 0x51:
    pcVar1 = &DAT_105c31ec/*ROM*/;
    break;
  case 0x52:
    pcVar1 = &DAT_105c31f4/*ROM*/;
    break;
  case 0x53:
    pcVar1 = &DAT_105c31fc/*ROM*/;
    break;
  case 0x54:
    pcVar1 = &DAT_105c3204/*ROM*/;
    break;
  case 0x55:
    pcVar1 = &DAT_105c320c/*ROM*/;
    break;
  case 0x56:
    pcVar1 = &DAT_105c3214/*ROM*/;
    break;
  case 0x57:
    pcVar1 = &DAT_105c321c/*ROM*/;
    break;
  case 0x58:
    pcVar1 = &DAT_105c3224/*ROM*/;
    break;
  default:
    return 0x80010cb1/*SDRAM*/;
  }
  format_string_to_buffer_10545140((uint8_t *)0x80010cb1/*SDRAM*/,pcVar1,r6_in,r7_in);
  return 0x80010cb1/*SDRAM*/;
}
