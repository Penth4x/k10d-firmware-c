/* @k10d write_four_inverted_status_bytes @ 0x104a5414
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_four_inverted_status_bytes(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = invoke_virtual_slot_6_10460914(*(int **)(param_1 + 0x24));
  write_byte_to_struct_offset_104a8be2(param_2,0,(byte)uVar1 ^ 0xff);
  uVar1 = invoke_virtual_slot_6_10460932(*(int **)(param_1 + 0x24));
  write_byte_to_struct_offset_104a8be2(param_2,1,(byte)uVar1 ^ 0xff);
  uVar1 = call_virtual_slot_6_1046096e(*(int **)(param_1 + 0x24));
  write_byte_to_struct_offset_104a8be2(param_2,2,(byte)uVar1 ^ 0xff);
  uVar1 = invoke_virtual_slot_6_1046098c(*(int **)(param_1 + 0x24));
  write_byte_to_struct_offset_104a8be2(param_2,3,(byte)uVar1 ^ 0xff);
  return;
}
