/* @k10d select_string_by_index_and_copy @ 0x104f04be
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Selects a string pointer from a table based on param_2 and passes it to a helper with
 *   two additional pointers.
 * summary:
 *   The function uses a switch statement on param_2 to select one of 26 distinct string
 *   pointers located in the 0x105c2ed8-0x105c2f5c range. It then calls
 *   format_string_to_buffer_10545140 with a fixed SDRAM address (0x80010cac), the selected
 *   string pointer, and the two input pointer arguments param_3 and param_4. The function
 *   returns the fixed SDRAM address 0x80010cac.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_string_by_index_and_copy(uint32_t param_1,uint32_t param_2,void *param_3,void *param_4)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = (char *)&DAT_105c2ed8/*ROM*/;
    break;
  case 1:
    pcVar1 = (char *)0x105c2ee0/*ROM*/;
    break;
  case 2:
    pcVar1 = (char *)0x105c2ee4/*ROM*/;
    break;
  case 3:
    pcVar1 = (char *)0x105c2ee8/*ROM*/;
    break;
  case 4:
    pcVar1 = (char *)0x105c2eec/*ROM*/;
    break;
  case 5:
    pcVar1 = (char *)0x105c2ef0/*ROM*/;
    break;
  case 6:
    pcVar1 = (char *)0x105c2ef4/*ROM*/;
    break;
  case 7:
    pcVar1 = (char *)0x105c2ef8/*ROM*/;
    break;
  case 8:
    pcVar1 = (char *)0x105c2efc/*ROM*/;
    break;
  case 9:
    pcVar1 = (char *)0x105c2f00/*ROM*/;
    break;
  case 10:
    pcVar1 = (char *)0x105c2f04/*ROM*/;
    break;
  case 0xb:
    pcVar1 = (char *)0x105c2f08/*ROM*/;
    break;
  case 0xc:
    pcVar1 = (char *)0x105c2f0c/*ROM*/;
    break;
  case 0xd:
    pcVar1 = (char *)0x105c2f10/*ROM*/;
    break;
  case 0xe:
    pcVar1 = (char *)0x105c2f14/*ROM*/;
    break;
  case 0xf:
    pcVar1 = (char *)0x105c2f18/*ROM*/;
    break;
  case 0x10:
    pcVar1 = (char *)0x105c2f1c/*ROM*/;
    break;
  case 0x11:
    pcVar1 = (char *)0x105c2f20/*ROM*/;
    break;
  case 0x12:
    pcVar1 = (char *)0x105c2f24/*ROM*/;
    break;
  case 0x13:
    pcVar1 = (char *)0x105c2f2c/*ROM*/;
    break;
  case 0x14:
    pcVar1 = (char *)0x105c2f34/*ROM*/;
    break;
  case 0x15:
    pcVar1 = (char *)0x105c2f3c/*ROM*/;
    break;
  case 0x16:
    pcVar1 = (char *)0x105c2f44/*ROM*/;
    break;
  case 0x17:
    pcVar1 = (char *)0x105c2f4c/*ROM*/;
    break;
  case 0x18:
    pcVar1 = (char *)0x105c2f54/*ROM*/;
    break;
  case 0x19:
    pcVar1 = (char *)0x105c2f5c/*ROM*/;
    break;
  default:
    goto LAB_104f05ae;
  }
  format_string_to_buffer_10545140((uint8_t *)0x80010cac/*SDRAM*/,pcVar1,param_3,param_4);
LAB_104f05ae:
  return 0x80010cac/*SDRAM*/;
}
