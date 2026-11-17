/* @k10d populate_struct_from_source_offsets @ 0x1051129a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Copies a series of 16-bit and 32-bit values from param_1 into a structured array at
 *   param_2.
 * summary:
 *   The function initializes a structure pointed to by param_2 by reading various fields
 *   from the object pointed to by param_1. It first calls an external function at
 *   0x10508af0 with param_2 as an argument. It then populates specific indices of the
 *   param_2 array with values derived from param_1, including byte flags, 16-bit values,
 *   32-bit pointers, and hardcoded constants like 0, 1, and 8. The layout suggests a
 *   complex configuration or state structure being built from a source object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_struct_from_source_offsets(int param_1,uint *param_2)

{
  (*(code *)0x10508af0/*ROM*/)(param_2);
  *param_2 = (uint)(*(char *)(param_1 + 0x695) == '\0');
  param_2[0x39] = param_1 + 0x148;
  param_2[1] = (uint)*(ushort *)(param_1 + 0x124);
  param_2[2] = (uint)*(ushort *)(param_1 + 0x126);
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = (uint)*(ushort *)(param_1 + 0x124);
  param_2[6] = (uint)*(ushort *)(param_1 + 0x126);
  param_2[7] = *(uint *)(param_1 + 0x134);
  param_2[8] = 1;
  param_2[9] = 1;
  *(uint16_t *)(param_2 + 10) = 8;
  param_2[0xb] = 1;
  param_2[0xc] = *(uint *)(param_1 + 0xdc);
  param_2[0xf] = (uint)*(ushort *)(param_1 + 0x848);
  param_2[0x10] = (uint)*(ushort *)(param_1 + 0x84a);
  param_2[0x11] = 0;
  param_2[0x12] = (uint)*(ushort *)(param_1 + 0x6a6);
  param_2[0x13] = (uint)*(ushort *)(param_1 + 0x848);
  param_2[0x14] = (uint)*(ushort *)(param_1 + 0x6a8);
  param_2[0x15] = *(uint *)(param_1 + 0x138);
  param_2[0x16] = 1;
  param_2[0x17] = 1;
  *(uint16_t *)(param_2 + 0x18) = 8;
  param_2[0x19] = 1;
  param_2[0x1a] = *(uint *)(param_1 + 0xe0);
  param_2[0x1d] = (uint)*(ushort *)(param_1 + 0x84c);
  param_2[0x1e] = (uint)*(ushort *)(param_1 + 0x84e);
  param_2[0x1f] = 0;
  param_2[0x20] = (uint)*(ushort *)(param_1 + 0x6aa);
  param_2[0x21] = (uint)*(ushort *)(param_1 + 0x84c);
  param_2[0x22] = (uint)*(ushort *)(param_1 + 0x6ac);
  param_2[0x23] = *(uint *)(param_1 + 0x13c);
  param_2[0x24] = 1;
  param_2[0x25] = 1;
  *(uint16_t *)(param_2 + 0x26) = 8;
  param_2[0x27] = 1;
  param_2[0x28] = *(uint *)(param_1 + 0xe4);
  return;
}
