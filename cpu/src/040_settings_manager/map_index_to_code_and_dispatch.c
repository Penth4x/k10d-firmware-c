/* @k10d map_index_to_code_and_dispatch @ 0x10396344
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_index_to_code_and_dispatch(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  uVar2 = return_r4_passthrough_104d800e();
  uVar2 = adjust_pointer_by_flag(uVar2,1);
  uVar3 = call_function_at_0x1039b688(param_1);
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
