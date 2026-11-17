/* @k10d write_inverted_pair_to_buffer @ 0x10532346
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_inverted_pair_to_buffer(int param_1,int param_2)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  
  uVar1 = read_byte_from_struct_offset_104a8c54(param_2,0);
  uVar2 = read_byte_from_struct_offset_104a8c54(param_2,1);
  uVar3 = read_byte_from_struct_offset_104a8c54(param_2,2);
  uVar4 = read_byte_from_struct_offset_104a8c54(param_2,3);
  *(ushort *)(*(int *)(param_1 + 0x14) + 0x4d8) = CONCAT11(uVar1,uVar2) ^ 0xffff;
  *(ushort *)(*(int *)(param_1 + 0x14) + 0x4da) = CONCAT11(uVar3,uVar4) ^ 0xffff;
  return;
}
