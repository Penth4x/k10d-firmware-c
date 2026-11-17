/* @k10d query_object_property_if_valid @ 0x104b94b2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Checks a condition on an object, and if true, queries a property via a virtual call and
 *   returns the result.
 * summary:
 *   The function first calls set_pointer_and_clear_flag with pointers to offsets 0x2c and 4
 *   of the input object. If this check passes, it instantiates a temporary object
 *   (cls_105a6abc), passes it to copy_buffer_with_lock_1045e22a along with a value from
 *   offset 0x1c of the input object. It then retrieves a value from get_or_init_heap_block,
 *   calls virtual slot 2 of the temporary object (extract_bitfield_from_byte_array) with
 *   argument 0x17, and combines the results via a function pointer at 0x1045b0aa. Finally,
 *   it calls delete_signal_semaphore and deletes the temporary object. The return value is
 *   either 8 (if the initial check fails) or the result of the property query.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_object_property_if_valid(int param_1)

{
  bool bVar2;
  uint uVar1;
  uint32_t uVar3;
  uintptr_t sp;
  uint8_t auStack_1c [20];
  
  bVar2 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  uVar3 = 8;
  if (bVar2) {
    cls_105a6abc_new((void *)auStack_1c);
    copy_buffer_with_lock_1045e22a(*(int *)(param_1 + 0x1c),auStack_1c);
    uVar3 = get_or_init_heap_block();
    uVar1 = extract_bitfield_from_byte_array(auStack_1c,0x17);
    uVar3 = (*(code *)0x1045b0aa/*ROM*/)(uVar3,uVar1 & 0xff);
    delete_signal_semaphore((int *)(param_1 + 0x2c));
    cls_105a6abc_delete((void *)auStack_1c,2);
  }
  return uVar3;
}
