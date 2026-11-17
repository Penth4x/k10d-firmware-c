/* @k10d map_mode_to_index_and_dispatch @ 0x10397150
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 0-11 mode value to a specific index and passes it to a dispatch function.
 * summary:
 *   The function retrieves a value from get_or_create_singleton_object_10395bd6, processes
 *   it with call_function_at_0x1039b688, and uses a switch statement to map the result
 *   (0-11) to a new index (0-14). It then calls several initialization or setup functions
 *   (add_offset_to_pointer_104df392, return_r4_passthrough_104d800e,
 *   add_offset_to_pointer_104d6882) and finally calls store_value_at_offset_0x794 with the
 *   mapped index. The specific camera subsystem is not identifiable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_mode_to_index_and_dispatch(uint32_t param_x0)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  iVar1 = get_or_create_singleton_object_10395bd6();
  uVar2 = call_function_at_0x1039b688(iVar1);
  switch(uVar2) {
  case 0:
    uVar3 = 0;
    break;
  case 1:
    uVar3 = 2;
    break;
  case 2:
    uVar3 = 4;
    break;
  case 3:
    uVar3 = 7;
    break;
  case 4:
    uVar3 = 1;
    break;
  case 5:
    uVar3 = 0xe;
    break;
  case 6:
    uVar3 = 5;
    break;
  case 7:
    uVar3 = 8;
    break;
  case 8:
    uVar3 = 3;
    break;
  case 9:
    uVar3 = 9;
    break;
  case 10:
    uVar3 = 6;
    break;
  case 0xb:
    uVar3 = 0xd;
  }
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  return_r4_passthrough_104d800e();
  add_offset_to_pointer_104d6882(__frv_reg_unset(4));
  iVar1 = add_offset_to_pointer_104d8ad0(__frv_reg_unset(4));
  store_value_at_offset_0x794(iVar1,uVar3);
  return;
}
