/* @k10d allocate_and_init_object_104962ea @ 0x104962ea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_object_104962ea(void *unused_base_ptr,int field_value,uint32_t pair_arg_lo,uint32_t pair_arg_hi)

{
  cls_105b3ee0 *obj_ptr;
  uint32_t pair_ptr;
  uint32_t pair_buf [2];

  /* Allocate 0x34 (52) bytes from the heap */
  obj_ptr = (cls_105b3ee0 *)heap_alloc((void *)0x34);
  if (obj_ptr == (cls_105b3ee0 *)0x0) {
    obj_ptr = (cls_105b3ee0 *)0x0;
  }
  else {
    /* Construct the object in place */
    cls_105b3ee0_new(obj_ptr);
  }
  /* Allocate a two-word pair, passing pair_arg_lo and pair_arg_hi */
  pair_ptr = (uintptr_t)(alloc_two_word_pair_1045bc2e(pair_buf,pair_arg_lo,pair_arg_hi));
  /* Copy two shorts from the pair into the object */
  copy_two_shorts_from_source((uint16_t *)(obj_ptr),(uint32_t *)(pair_ptr));
  /* Free the pair buffer if flagged */
  free_heap_block_if_flagged_1045bc54(pair_buf,2);
  /* Conditionally write field_value and constant 7 into the object */
  if (field_value != 0) {
    write_two_fields_to_struct(obj_ptr,field_value,7);
  }
  return (int)obj_ptr;
}
