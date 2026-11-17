/* @k10d map_mode_index_to_flag_1039367e @ 0x1039367e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a mode index from param_1 and maps it to a specific flag value via a switch
 *   statement.
 * summary:
 *   The function retrieves a value from get_value_from_object and passes it to
 *   add_offset_to_pointer_104df392. It then obtains a handle from
 *   return_r4_passthrough_104d800e, modifies it with adjust_pointer_by_flag, and reads an
 *   index from param_1+8 using read_offset_0x24_field. A switch statement maps 12 possible
 *   index values (0-11) to specific flag constants (e.g., 0->0, 1->2, 2->4, 3->7, 4->1,
 *   5->0xe, 6->5, 7->8, 8->3, 9->9, 10->6, 11->0xd). If the index is out of range, it
 *   returns 0. Finally, it calls add_offset_to_pointer_104d65b6 and
 *   read_array_element_104d63c8 with the mapped flag value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_flag_1039367e(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  uVar2 = return_r4_passthrough_104d800e();
  uVar2 = adjust_pointer_by_flag(uVar2,1);
  uVar3 = read_offset_0x24_field((int)param_1 + 8);
  switch(uVar3) {
  case 0:
    uVar2 = add_offset_to_pointer_104d65b6(uVar2);
    uVar3 = 0;
    break;
  case 1:
    uVar2 = add_offset_to_pointer_104d65b6(uVar2);
    uVar3 = 2;
    break;
  case 2:
    uVar2 = add_offset_to_pointer_104d65b6(uVar2);
    uVar3 = 4;
    break;
  case 3:
    uVar2 = add_offset_to_pointer_104d65b6(uVar2);
    uVar3 = 7;
    break;
  case 4:
    uVar2 = add_offset_to_pointer_104d65b6(uVar2);
    uVar3 = 1;
    break;
  case 5:
    uVar2 = add_offset_to_pointer_104d65b6(uVar2);
    uVar3 = 0xe;
    break;
  case 6:
    uVar2 = add_offset_to_pointer_104d65b6(uVar2);
    uVar3 = 5;
    break;
  case 7:
    uVar2 = add_offset_to_pointer_104d65b6(uVar2);
    uVar3 = 8;
    break;
  case 8:
    uVar2 = add_offset_to_pointer_104d65b6(uVar2);
    uVar3 = 3;
    break;
  case 9:
    uVar2 = add_offset_to_pointer_104d65b6(uVar2);
    uVar3 = 9;
    break;
  case 10:
    uVar2 = add_offset_to_pointer_104d65b6(uVar2);
    uVar3 = 6;
    break;
  case 0xb:
    uVar2 = add_offset_to_pointer_104d65b6(uVar2);
    uVar3 = 0xd;
    break;
  default:
    return 0;
  }
  uVar2 = read_array_element_104d63c8(uVar2,uVar3);
  return uVar2;
}
