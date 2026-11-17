/* @k10d prepare_and_dispatch_event_105154de @ 0x105154de
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Reads fields from an object, packs them into a local struct, and passes it to a handler
 *   function.
 * summary:
 *   The function calls accumulate_lens_data_values with the first argument and a constant
 *   1. It then extracts several fields from the object pointed to by param_1 (at offsets
 *   0x44, 0x324, and 800) and combines them with the remaining parameters (param_2,
 *   param_3, param_4, param_5) into a local 16-byte structure. Finally, it calls
 *   compute_clamped_division_value, passing the extracted fields and the packed structure
 *   as arguments. The specific subsystem is not identifiable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void prepare_and_dispatch_event_105154de(int param_1,int param_2,int param_3,uint8_t param_4,uint param_5)

{
  uint uVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint *puVar3;
  uint8_t local_28 [16];
  
  puVar3 = (uint *)local_28;
  accumulate_lens_data_values(param_1,1);
  uVar1 = *(uint *)(param_1 + 0x44);
  uVar2 = *(uint32_t *)(param_1 + 800);
  *puVar3 = *(uint32_t *)(param_1 + 0x324);
  *(uint8_t *)((int)puVar3 + 7) = param_4;
  *(bool *)((int)puVar3 + 0xb) = param_5 != 0;
  puVar3[3] = param_5;
  compute_clamped_division_value(uVar1,param_2,param_3,uVar2,*puVar3,*(char *)((int)puVar3 + 7),
               *(char *)((int)puVar3 + 0xb),puVar3[3]);
  return;
}
