/* @k10d read_pair_from_buffer @ 0x10460ea8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 137_settings_manager (unit names are model-proposed)
 * purpose:
 *   Selects a 2-byte pair from a buffer based on an index and passes it to a helper
 *   function.
 * summary:
 *   The function branches on param_2 to select two bytes from the object pointed to by
 *   param_1. For indices 0, 1, and 3, it reads a specific byte pair and calls
 *   pack_two_byte_value_10496952. For index 2, it reads four bytes and calls
 *   pack_bytes_into_uint32. The return value is the result of the called helper function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint read_pair_from_buffer(void *param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  
  if (param_2 == 0) {
    uVar2 = (ushort)*(byte *)((int)param_1 + 5);
    uVar3 = (ushort)*(byte *)((int)param_1 + 4);
  }
  else if (param_2 == 1) {
    uVar2 = (ushort)*(byte *)((int)param_1 + 7);
    uVar3 = (ushort)*(byte *)((int)param_1 + 6);
  }
  else {
    if (param_2 == 2) {
      uVar1 = pack_bytes_into_uint32(param_1,(uint)*(byte *)((int)param_1 + 7),
                           (uint)*(byte *)((int)param_1 + 6),(uint)*(byte *)((int)param_1 + 5),
                           *(byte *)((int)param_1 + 4));
      return uVar1;
    }
    if (param_2 != 3) {
      return 0;
    }
    uVar2 = (ushort)*(byte *)((int)param_1 + 9);
    uVar3 = (ushort)*(byte *)((int)param_1 + 8);
  }
  uVar2 = pack_two_byte_value_10496952(param_1,uVar2,uVar3);
  return (uint)uVar2;
}
