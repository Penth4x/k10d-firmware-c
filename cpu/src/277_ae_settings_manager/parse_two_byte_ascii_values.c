/* @k10d parse_two_byte_ascii_values @ 0x1051e28e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool parse_two_byte_ascii_values(uint32_t param_1,int param_2,void *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  bVar5 = *(short *)((int)param_3 + 2) == 7;
  if (bVar5) {
    bVar1 = read_byte_from_struct_offset_104a8c54((int)param_3,0);
    bVar2 = read_byte_from_struct_offset_104a8c54((int)param_3,1);
    bVar3 = read_byte_from_struct_offset_104a8c54((int)param_3,2);
    bVar4 = read_byte_from_struct_offset_104a8c54((int)param_3,3);
    *(uint *)(param_2 + 0xa8) = (bVar1 - 0x30) * 10 + (bVar2 - 0x30) & 0xffff;
    *(uint *)(param_2 + 0xac) = (bVar3 - 0x30) * 10 + (bVar4 - 0x30) & 0xffff;
  }
  return bVar5;
}
