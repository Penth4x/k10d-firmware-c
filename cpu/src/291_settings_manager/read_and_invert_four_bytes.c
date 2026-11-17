/* @k10d read_and_invert_four_bytes @ 0x105323b4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_and_invert_four_bytes(int param_1,int param_2)

{
  int *piVar1;
  uintptr_t sp;
  byte bStack_10;
  byte bStack_f;
  byte bStack_e;
  byte bStack_d;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x14) + 0xa4);
  (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,&bStack_10);
  bStack_10 = read_byte_from_struct_offset_104a8c54(param_2,0);
  bStack_10 = bStack_10 ^ 0xff;
  bStack_f = read_byte_from_struct_offset_104a8c54(param_2,1);
  bStack_f = bStack_f ^ 0xff;
  bStack_e = read_byte_from_struct_offset_104a8c54(param_2,2);
  bStack_e = bStack_e ^ 0xff;
  bStack_d = read_byte_from_struct_offset_104a8c54(param_2,3);
  bStack_d = bStack_d ^ 0xff;
  (**(code **)(*piVar1 + 0x44))((int)*(short *)(*piVar1 + 0x40) + (int)piVar1,&bStack_10);
  return;
}
