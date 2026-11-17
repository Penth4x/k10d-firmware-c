/* @k10d init_struct_with_two_subblocks @ 0x1047f19a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a struct by setting a flag byte and populating fields via two helper calls.
 * summary:
 *   The function writes a flag byte (0x80 or 0x00) to the start of the struct based on
 *   param_2, copies param_3 to offset 4, and calls encode_exposure_value_bytes twice to
 *   initialize sub-blocks at offsets 1 and 5. It then calls store_u32_little_endian twice
 *   to initialize fields at offsets 8 and 0xc using param_6 and param_7. The exact nature
 *   of the struct and the helpers is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_with_two_subblocks(uint8_t *param_1,int param_2,uint8_t param_3,uint param_4,ushort param_5,
                 int param_6,int param_7)

{
  uint8_t uVar1;
  uintptr_t sp;
  uint *puVar2;
  
  puVar2 = (uint *)&stack0xffffffe4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80;
  }
  *param_1 = uVar1;
  param_1[4] = param_3;
  encode_exposure_value_bytes(param_1,param_1 + 1,param_4,(uint)param_5,param_6);
  *puVar2 = param_6 + -1 + param_7;
  encode_exposure_value_bytes(param_1,param_1 + 5,param_4,(uint)param_5,*puVar2);
  store_u32_little_endian(param_1,param_1 + 8,param_6);
  store_u32_little_endian(param_1,param_1 + 0xc,param_7);
  return;
}
