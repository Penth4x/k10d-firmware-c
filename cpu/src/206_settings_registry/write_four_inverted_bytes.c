/* @k10d write_four_inverted_bytes @ 0x104a538e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_four_inverted_bytes(int param_1,int param_2)

{
  write_byte_to_struct_offset_104a8be2(param_2,0,
               (byte)((ushort)*(uint16_t *)(*(int *)(param_1 + 0x58) + 0x4d8) >> 8) ^ 0xff);
  write_byte_to_struct_offset_104a8be2(param_2,1,(byte)*(uint16_t *)(*(int *)(param_1 + 0x58) + 0x4d8) ^ 0xff);
  write_byte_to_struct_offset_104a8be2(param_2,2,
               (byte)((ushort)*(uint16_t *)(*(int *)(param_1 + 0x58) + 0x4da) >> 8) ^ 0xff);
  write_byte_to_struct_offset_104a8be2(param_2,3,(byte)*(uint16_t *)(*(int *)(param_1 + 0x58) + 0x4da) ^ 0xff);
  return;
}
