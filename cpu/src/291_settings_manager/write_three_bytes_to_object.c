/* @k10d write_three_bytes_to_object @ 0x105320cc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads three bytes from param_2 and writes them to consecutive offsets in an object
 *   derived from param_1.
 * summary:
 *   The function calculates a pointer by adding 0x4a8 to the value stored at param_1 +
 *   0x14. It then calls read_byte_from_struct_offset_104a8c54 three times with indices 0,
 *   1, and 2 to retrieve bytes from param_2. Each retrieved byte is passed to a distinct
 *   callee (store_capped_byte_at_offset, store_clamped_byte_at_offset_6,
 *   store_clamped_byte_at_offset_7) along with the calculated pointer, suggesting
 *   sequential writes to specific fields within the target structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_three_bytes_to_object(int param_1,int param_2)

{
  byte bVar1;
  void *pvVar2;
  
  pvVar2 = (void *)(*(int *)(param_1 + 0x14) + 0x4a8);
  bVar1 = read_byte_from_struct_offset_104a8c54(param_2,0);
  store_capped_byte_at_offset(pvVar2,(uint)bVar1);
  bVar1 = read_byte_from_struct_offset_104a8c54(param_2,1);
  store_clamped_byte_at_offset_6(pvVar2,(uint)bVar1);
  bVar1 = read_byte_from_struct_offset_104a8c54(param_2,2);
  store_clamped_byte_at_offset_7(pvVar2,(uint)bVar1);
  return;
}
