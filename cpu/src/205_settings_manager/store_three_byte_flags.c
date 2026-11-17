/* @k10d store_three_byte_flags @ 0x1049c038
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads three byte values from a source object and stores them into a target object's
 *   fields at offsets 0x74 and 0x78.
 * summary:
 *   The function calls read_byte_from_struct_offset_104a8c54 three times with indices 0, 2,
 *   and 1 to retrieve byte values from param_2. The value from index 0 is incremented by 1
 *   (mapping 0-8 to 1-9) and stored at offset 0x74 of the object pointed to by *(param_1 +
 *   0x10). The values from indices 2 and 1 are packed into a 16-bit integer and stored at
 *   offset 0x78 of the same object. This appears to be a state synchronization or copy
 *   operation between two object instances.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_three_byte_flags(int param_1,int param_2)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint32_t uVar3;
  int iVar4;
  
  uVar1 = read_byte_from_struct_offset_104a8c54(param_2,0);
  uVar3 = 0;
  switch(uVar1) {
  case 0:
    uVar3 = 1;
    break;
  case 1:
    uVar3 = 2;
    break;
  case 2:
    uVar3 = 3;
    break;
  case 3:
    uVar3 = 4;
    break;
  case 4:
    uVar3 = 5;
    break;
  case 5:
    uVar3 = 6;
    break;
  case 6:
    uVar3 = 7;
    break;
  case 7:
    uVar3 = 8;
    break;
  case 8:
    uVar3 = 9;
  }
  *(uint32_t *)(*(int *)(param_1 + 0x10) + 0x74) = uVar3;
  iVar4 = *(int *)(param_1 + 0x10);
  uVar1 = read_byte_from_struct_offset_104a8c54(param_2,2);
  uVar2 = read_byte_from_struct_offset_104a8c54(param_2,1);
  *(uint *)(iVar4 + 0x78) = (uint)CONCAT11(uVar1,uVar2);
  return;
}
