/* @k10d map_index_to_offset_104f1742 @ 0x104f1742
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Maps a small integer index to a corresponding offset value via a lookup table.
 * summary:
 *   The function takes two parameters but only uses param_2 as a switch key. It returns a
 *   specific integer value based on the case of param_2, effectively acting as a lookup
 *   table or mapping function. No memory writes or external calls are made. The role is
 *   purely computational mapping.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_index_to_offset_104f1742(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 2;
    break;
  case 3:
    uVar1 = 2;
    break;
  case 4:
    uVar1 = 4;
    break;
  case 5:
    uVar1 = 6;
    break;
  case 7:
    uVar1 = 6;
    break;
  case 8:
    uVar1 = 8;
    break;
  case 9:
    uVar1 = 10;
    break;
  case 0xb:
    uVar1 = 0xc;
    break;
  case 0xc:
    uVar1 = 0xc;
  }
  return uVar1;
}
