/* @k10d read_two_16bit_values @ 0x104aa154
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads two 16-bit big-endian values from an object at indices 6-7 and 8-9 into output
 *   pointers.
 * summary:
 *   Calls extract_bitfield_from_table four times with indices 6, 7, 8, and 9 to retrieve
 *   8-bit values. Combines the first pair into a 16-bit big-endian value stored in *param_2
 *   and the second pair into *param_3. The callee extract_bitfield_from_table is not named,
 *   so the specific data source is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_two_16bit_values(uint32_t param_1,ushort *param_2,ushort *param_3)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = extract_bitfield_from_table(param_1,6);
  uVar2 = extract_bitfield_from_table(param_1,7);
  *param_2 = sVar1 << 8 | uVar2;
  sVar1 = extract_bitfield_from_table(param_1,8);
  uVar2 = extract_bitfield_from_table(param_1,9);
  *param_3 = sVar1 << 8 | uVar2;
  return;
}
