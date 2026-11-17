/* @k10d scale_sensor_readings_by_gain @ 0x1052e266
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Scales four 16-bit input values by per-channel gain factors and stores the results as
 *   16-bit outputs.
 * summary:
 *   The function retrieves a pointer to four 16-bit divisor/gain values from an object
 *   returned by get_or_init_sram_buffer_1052c5b8 (at offset 0x38). It reads four 16-bit
 *   values from param_2 (offsets 0x18, 0x1a, 0x1c, 0x1e), multiplies each by a
 *   corresponding coefficient from a lookup table (indexed by a value at param_2+0x74),
 *   divides by the respective gain value, and shifts right by 5 bits. The results are
 *   written to param_3 at offsets 8, 10, 12, and 14. Offset 0x10 in param_3 is set to
 *   0xffff. The arithmetic pattern (multiply, divide, shift) is consistent with normalizing
 *   sensor or metering channel data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void scale_sensor_readings_by_gain(uint32_t param_1,void *param_2,void *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar3 = get_or_init_sram_buffer_1052c5b8();
  puVar2 = *(ushort **)(iVar3 + 0x38);
  iVar3 = *(int *)((int)param_2 + 0x74) * 2;
  uVar1 = *(ushort *)(&DAT_105fa1e8/*ROM*/ + iVar3);
  *(short *)((int)param_3 + 8) =
       (short)((uint)((int)((uint)*(ushort *)(&DAT_105fa136/*ROM*/ + iVar3) *
                           (uint)*(ushort *)((int)param_2 + 0x18)) / (int)(uint)*puVar2) >> 5);
  *(short *)((int)param_3 + 10) =
       (short)(((uint)*(ushort *)((int)param_2 + 0x1a) << 0xd) / (uint)puVar2[1] >> 5);
  *(short *)((int)param_3 + 0xc) =
       (short)(((uint)*(ushort *)((int)param_2 + 0x1c) << 0xd) / (uint)puVar2[2] >> 5);
  *(short *)((int)param_3 + 0xe) =
       (short)((uint)((int)((uint)uVar1 * (uint)*(ushort *)((int)param_2 + 0x1e)) /
                     (int)(uint)puVar2[3]) >> 5);
  *(uint16_t *)((int)param_3 + 0x10) = 0xffff;
  return;
}
