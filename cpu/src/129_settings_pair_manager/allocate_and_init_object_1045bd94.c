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

int allocate_and_init_object_1045bd94(uint32_t *obj_ptr,int field_a,int field_b,int field_c,int field_d)

{
  uint32_t *obj_ptr_plus_two;

  if ((obj_ptr != (uint32_t *)0x0) ||
     (obj_ptr = (uint32_t *)heap_alloc((void *)0x10), obj_ptr != (uint32_t *)0x0)) {
    alloc_and_zero_two_words_1045bc0e(obj_ptr);
    obj_ptr_plus_two = obj_ptr + 2;
    alloc_and_zero_two_words_1045c3bc(obj_ptr_plus_two);
    store_word_to_pointer_1045bd48(obj_ptr,field_a);
    write_field_at_offset_four_1045bd50(obj_ptr,field_b);
    store_value_to_pointer_1045c510(obj_ptr_plus_two,field_c - field_a);
    write_field_at_offset_four_1045c518(obj_ptr_plus_two,field_d - field_b);
  }
  return (int)obj_ptr;
}
