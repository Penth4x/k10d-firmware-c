/* @k10d read_two_byte_value_at_offset_1045f92e @ 0x1045f92e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 133_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a two-byte value from a buffer at an offset stored in a global array indexed by
 *   param_2.
 * summary:
 *   The function retrieves an integer offset from the global array at 0x105a6144 using
 *   param_2 as the index. It then reads two consecutive bytes from the buffer pointed to by
 *   param_1 at the calculated offset (param_1 + 4 + offset). These two bytes are passed as
 *   arguments to pack_two_byte_value_10496952, and the result is returned. The role of
 *   pack_two_byte_value_10496952 is unknown, so the specific data being processed cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint read_two_byte_value_at_offset_1045f92e(cls_105a6c24 *param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = *(int *)(param_2 * 8 + 0x105a6144/*ROM*/);
  uVar2 = pack_two_byte_value_10496952(param_1,(ushort)*(byte *)((int)&param_1[1].field_0x0 + iVar1 + 1),
                       (ushort)*(byte *)((int)&param_1[1].field_0x0 + iVar1));
  return (uint)uVar2;
}
