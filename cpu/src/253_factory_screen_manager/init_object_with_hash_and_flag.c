/* @k10d init_object_with_hash_and_flag @ 0x104e7598
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by computing a hash from its fields, storing a derived value, and
 *   setting a status flag.
 * summary:
 *   The function reads a value from offset 0x40 of the object, multiplies it by param_2,
 *   and passes the result to compute_lens_fw_crc32. It then calls multiply_two_floats with
 *   specific constants and normalize_fixed_point_value_105448ac to compute a value. This
 *   value is used with another field read from offset 0x40 to call
 *   alloc_two_word_pair_1045c3dc, which returns a value stored via dispatch_two_word_event
 *   at offset 0x20. Finally, it sets byte offset 9 to 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_hash_and_flag(void *param_1,int param_2)

{
  int iVar1;
  uint extraout_r4;
  uint extraout_r4_00;
  uint32_t uVar2;
  uint extraout_r5;
  uint extraout_r5_00;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  iVar1 = return_first_word_1045c514((uint32_t *)((int)param_1 + 0x40));
  compute_lens_fw_crc32(iVar1 * param_2);
  multiply_two_floats(extraout_r4,extraout_r5,0x3f847ae1,0x47ae147b);
  iVar1 = normalize_fixed_point_value_105448ac(extraout_r4_00,extraout_r5_00);
  uVar2 = read_struct_field_at_offset_4((uint32_t *)((int)param_1 + 0x40));
  uVar2 = alloc_two_word_pair_1045c3dc(auStack_10,iVar1,uVar2);
  dispatch_two_word_event((int)param_1 + 0x20,uVar2);
  free_heap_if_flagged_1045c402(auStack_10,2);
  *(uint8_t *)((int)param_1 + 9) = 1;
  return;
}
