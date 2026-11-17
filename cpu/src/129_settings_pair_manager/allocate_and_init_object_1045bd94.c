/* @k10d allocate_and_init_object_1045bd94 @ 0x1045bd94
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x10-byte object and initializes its fields via a series of setter calls.
 * summary:
 *   The function either uses the provided pointer or allocates a new 0x10-byte block from
 *   the heap. It then calls a sequence of initialization functions
 *   (alloc_and_zero_two_words_1045bc0e, alloc_and_zero_two_words_1045c3bc,
 *   store_word_to_pointer_1045bd48, write_field_at_offset_four_1045bd50,
 *   store_value_to_pointer_1045c510, write_field_at_offset_four_1045c518) to set up the
 *   object's state using the provided parameters. The final pointer is returned in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_object_1045bd94(uint32_t *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint32_t *puVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    alloc_and_zero_two_words_1045bc0e(param_1);
    puVar1 = param_1 + 2;
    alloc_and_zero_two_words_1045c3bc(puVar1);
    store_word_to_pointer_1045bd48(param_1,param_2);
    write_field_at_offset_four_1045bd50(param_1,param_3);
    store_value_to_pointer_1045c510(puVar1,param_4 - param_2);
    write_field_at_offset_four_1045c518(puVar1,param_5 - param_3);
  }
  return (int)param_1;
}
