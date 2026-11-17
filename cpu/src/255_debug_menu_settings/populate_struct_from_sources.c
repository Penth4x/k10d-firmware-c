/* @k10d populate_struct_from_sources @ 0x104eee8c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Copies fields from three source pointers into a destination struct at param_2.
 * summary:
 *   The function performs a series of direct memory copies from param_3, param_4, param_5,
 *   and param_6 into offsets within the structure pointed to by param_2. It shifts 16-bit
 *   values from param_3 right by 5 bits before storing them. No callees are invoked, and
 *   the specific semantic meaning of the data fields is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_struct_from_sources(uint32_t param_1,int param_2,ushort *param_3,ushort *param_4,int param_5,
                 int param_6)

{
  *(uint *)(param_2 + 0x10) = (uint)*param_4;
  *(uint *)(param_2 + 0x14) = (uint)param_4[1];
  *(ushort *)(param_2 + 0x18) = *param_3 >> 5;
  *(ushort *)(param_2 + 0x1a) = param_3[1] >> 5;
  *(ushort *)(param_2 + 0x1c) = param_3[2] >> 5;
  *(ushort *)(param_2 + 0x1e) = param_3[3] >> 5;
  *(uint32_t *)(param_2 + 0x40) = *(uint32_t *)(param_6 + 0x18);
  *(uint32_t *)(param_2 + 0x44) = *(uint32_t *)(param_6 + 0x1c);
  *(uint32_t *)(param_2 + 0x48) = *(uint32_t *)(param_6 + 0x24);
  *(uint32_t *)(param_2 + 0x50) = *(uint32_t *)(param_6 + 0x28);
  *(uint32_t *)(param_2 + 0x4c) = *(uint32_t *)(param_6 + 0x20);
  *(uint32_t *)(param_2 + 0x30) = *(uint32_t *)(param_4 + 2);
  *(uint32_t *)(param_2 + 0x20) = *(uint32_t *)(param_4 + 4);
  *(uint32_t *)(param_2 + 0x24) = *(uint32_t *)(param_4 + 6);
  *(uint32_t *)(param_2 + 0x28) = *(uint32_t *)(param_4 + 8);
  *(uint32_t *)(param_2 + 0x2c) = *(uint32_t *)(param_4 + 10);
  *(uint32_t *)(param_2 + 0x38) = *(uint32_t *)(param_4 + 0xc);
  *(uint32_t *)(param_2 + 0x3c) = *(uint32_t *)(param_4 + 0xe);
  *(uint32_t *)(param_2 + 0x6c) = *(uint32_t *)(param_5 + 0x44);
  *(uint32_t *)(param_2 + 0x70) = *(uint32_t *)(param_5 + 0x48);
  *(uint32_t *)(param_2 + 0x74) = *(uint32_t *)(param_5 + 0x24);
  *(uint8_t *)(param_2 + 0x78) = *(uint8_t *)(param_6 + 0x34);
  *(uint8_t *)(param_2 + 0x79) = *(uint8_t *)(param_6 + 0x35);
  return;
}
