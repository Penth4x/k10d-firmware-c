/* @k10d update_pointer_offsets_from_source @ 0x1049bf6a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads four values from a source object based on a type field and updates offset fields
 *   in a destination object.
 * summary:
 *   The function checks a 16-bit field at offset 2 of param_2. If it is 1, it calls
 *   read_byte_from_struct_offset_104a8c54 four times with indices 0-3 to get byte values.
 *   If it is 3, it calls read_u16_from_struct_array four times to get 16-bit values. It
 *   then writes these values to offsets 0xc, 0x8, and 0x14 of the object pointed to by
 *   *(param_1 + 0x14), calculating differences from base pointers stored at offsets 4 and
 *   0. The specific role of the data (e.g., image buffer, sensor data) is not determinable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_pointer_offsets_from_source(int param_1,int param_2)

{
  uint uVar1;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar10;
  uint uVar11;
  uint uStack_c;
  
  uVar11 = 0;
  uStack_c = 0;
  uVar1 = 0;
  uVar10 = 0;
  if (*(short *)(param_2 + 2) == 1) {
    bVar6 = read_byte_from_struct_offset_104a8c54(param_2,0);
    bVar7 = read_byte_from_struct_offset_104a8c54(param_2,1);
    bVar8 = read_byte_from_struct_offset_104a8c54(param_2,2);
    bVar9 = read_byte_from_struct_offset_104a8c54(param_2,3);
    uVar1 = (uint)bVar9;
    uVar10 = (uint)bVar8;
    uVar11 = (uint)bVar6;
    uStack_c = (uint)bVar7;
  }
  else if (*(short *)(param_2 + 2) == 3) {
    uVar2 = read_u16_from_struct_array(param_2,0);
    uVar3 = read_u16_from_struct_array(param_2,1);
    uVar4 = read_u16_from_struct_array(param_2,2);
    uVar5 = read_u16_from_struct_array(param_2,3);
    uVar1 = (uint)uVar5;
    uVar10 = (uint)uVar4;
    uVar11 = (uint)uVar2;
    uStack_c = (uint)uVar3;
  }
  *(uint *)(*(int *)(param_1 + 0x14) + 0xc) = uVar11;
  *(uint *)(*(int *)(param_1 + 0x14) + 0x14) =
       *(int *)(*(int *)(param_1 + 0x14) + 4) - (uVar11 + uStack_c);
  *(uint *)(*(int *)(param_1 + 0x14) + 8) = uVar10;
  (*(int **)(param_1 + 0x14))[4] = **(int **)(param_1 + 0x14) - (uVar10 + uVar1);
  return;
}
