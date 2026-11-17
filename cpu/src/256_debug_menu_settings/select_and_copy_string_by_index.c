/* @k10d select_and_copy_string_by_index @ 0x104f177c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_and_copy_string_by_index(uint32_t param_1,uint32_t param_2,void *param_3,void *param_4)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = (char *)&DAT_105c322c/*ROM*/;
    break;
  case 1:
    pcVar1 = (char *)0x105c3234/*ROM*/;
    break;
  case 2:
    pcVar1 = (char *)0x105c323c/*ROM*/;
    break;
  case 3:
    pcVar1 = (char *)0x105c3244/*ROM*/;
    break;
  case 4:
    pcVar1 = (char *)0x105c324c/*ROM*/;
    break;
  case 5:
    pcVar1 = (char *)0x105c3254/*ROM*/;
    break;
  case 6:
    pcVar1 = (char *)0x105c325c/*ROM*/;
    break;
  case 7:
    pcVar1 = (char *)0x105c3264/*ROM*/;
    break;
  case 8:
    pcVar1 = (char *)0x105c326c/*ROM*/;
    break;
  case 9:
    pcVar1 = (char *)0x105c3270/*ROM*/;
    break;
  case 10:
    pcVar1 = (char *)0x105c3278/*ROM*/;
    break;
  case 0xb:
    pcVar1 = (char *)0x105c3280/*ROM*/;
    break;
  case 0xc:
    pcVar1 = (char *)0x105c3288/*ROM*/;
    break;
  default:
    goto LAB_104f1802;
  }
  format_string_to_buffer_10545140((uint8_t *)0x80010cb8/*SDRAM*/,pcVar1,param_3,param_4);
LAB_104f1802:
  return 0x80010cb8/*SDRAM*/;
}
