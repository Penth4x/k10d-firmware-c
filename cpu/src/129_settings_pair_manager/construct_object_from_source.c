/* @k10d construct_object_from_source @ 0x1045be0c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Allocates or reuses a 0x10-byte object, initializes it, copies 8 bytes from a source,
 *   and computes two field differences.
 * summary:
 *   If param_1 is NULL, allocates 0x10 bytes via heap_alloc. Calls
 *   alloc_and_zero_two_words_1045bc0e on the object and alloc_and_zero_two_words_1045c3bc
 *   on offset 8. Copies 8 bytes from param_2 to the object's start. Computes differences of
 *   values returned by read_first_word_1045bd4c and get_second_word_of_struct for param_3
 *   and param_2, storing results via store_value_to_pointer_1045c510 and
 *   write_field_at_offset_four_1045c518 at offset 8. Returns the object pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int construct_object_from_source(uint32_t *param_1,uint32_t *param_2,uint32_t *param_3)

{
  int iVar1;
  uint32_t *puVar2;
  int iVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    alloc_and_zero_two_words_1045bc0e(param_1);
    puVar2 = param_1 + 2;
    alloc_and_zero_two_words_1045c3bc(puVar2);
    iVar3 = 8;
    do {
      iVar3 = iVar3 + -4;
      *(uint32_t *)(iVar3 + (int)param_1) = *(uint32_t *)(iVar3 + (int)param_2);
    } while (iVar3 != 0);
    iVar3 = read_first_word_1045bd4c(param_3);
    iVar1 = read_first_word_1045bd4c(param_2);
    store_value_to_pointer_1045c510(puVar2,iVar3 - iVar1);
    iVar3 = get_second_word_of_struct(param_3);
    iVar1 = get_second_word_of_struct(param_2);
    write_field_at_offset_four_1045c518(puVar2,iVar3 - iVar1);
  }
  return (int)param_1;
}
