/* @k10d copy_four_bytes_to_struct @ 0x10532b74
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_bytes_to_struct(int param_1,int param_2)

{
  uint8_t uVar1;
  uint8_t uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x18);
  uVar1 = read_byte_from_struct_offset_104a8c54(param_2,0);
  uVar2 = read_byte_from_struct_offset_104a8c54(param_2,1);
  *(ushort *)(iVar3 + 0x12) = CONCAT11(uVar1,uVar2);
  iVar3 = *(int *)(param_1 + 0x18);
  uVar1 = read_byte_from_struct_offset_104a8c54(param_2,2);
  uVar2 = read_byte_from_struct_offset_104a8c54(param_2,3);
  *(ushort *)(iVar3 + 0x14) = CONCAT11(uVar1,uVar2);
  iVar3 = *(int *)(param_1 + 0x18);
  uVar1 = read_byte_from_struct_offset_104a8c54(param_2,4);
  uVar2 = read_byte_from_struct_offset_104a8c54(param_2,5);
  *(ushort *)(iVar3 + 0x16) = CONCAT11(uVar1,uVar2);
  iVar3 = *(int *)(param_1 + 0x18);
  uVar1 = read_byte_from_struct_offset_104a8c54(param_2,6);
  uVar2 = read_byte_from_struct_offset_104a8c54(param_2,7);
  *(ushort *)(iVar3 + 0x18) = CONCAT11(uVar1,uVar2);
  return;
}
