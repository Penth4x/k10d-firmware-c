/* @k10d write_four_bytes_to_mmio_block_104a5c9c @ 0x104a5c9c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_four_bytes_to_mmio_block_104a5c9c(uint32_t param_1,void *param_2,uint32_t param_3)

{
  uint32_t uVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  
  uVar1 = (*(code *)0x104a7056/*ROM*/)(param_1,param_3);
  uVar2 = (*(code *)0x104a7076/*ROM*/)(param_1,uVar1);
  uVar3 = (*(code *)0x104a7066/*ROM*/)(param_1,param_3);
  write_byte_to_struct_offset_104a8be2((int)param_2,0,(char)((ushort)uVar2 >> 8));
  write_byte_to_struct_offset_104a8be2((int)param_2,1,(char)uVar2);
  write_byte_to_struct_offset_104a8be2((int)param_2,2,(char)((ushort)uVar3 >> 8));
  write_byte_to_struct_offset_104a8be2((int)param_2,3,(char)uVar3);
  return;
}
