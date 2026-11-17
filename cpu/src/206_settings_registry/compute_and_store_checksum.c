/* @k10d compute_and_store_checksum @ 0x104a5d46
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_store_checksum(int param_1,int param_2)

{
  uint uVar1;
  uintptr_t sp;
  byte bStack_10;
  byte bStack_f;
  byte bStack_e;
  byte bStack_d;
  byte bStack_c;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  
  uVar1 = invoke_virtual_slot_two_104602ce(*(int **)(param_1 + 0x3c));
  read_four_status_bytes(param_1,&bStack_10);
  read_three_byte_status(param_1,&bStack_c);
  uVar1 = uVar1 ^ ((uint)bStack_10 << 0x18 | (uint)bStack_f << 0x10 | (uint)bStack_e << 8 |
                  (uint)bStack_d) ^ 0xffffffff ^
          ((uint)bStack_c << 0x18 | (uint)bStack_b << 0x10 | (uint)bStack_a << 8 | (uint)bStack_9);
  write_byte_to_struct_offset_104a8be2(param_2,0,(char)(uVar1 >> 0x18));
  write_byte_to_struct_offset_104a8be2(param_2,1,(char)(uVar1 >> 0x10));
  write_byte_to_struct_offset_104a8be2(param_2,2,(char)(uVar1 >> 8));
  write_byte_to_struct_offset_104a8be2(param_2,3,(char)uVar1);
  return;
}
