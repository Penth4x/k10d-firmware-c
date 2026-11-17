/* @k10d process_object_with_callback @ 0x10499daa
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Validates an object, copies a byte field, invokes a callback, and conditionally calls a
 *   finalizer.
 * summary:
 *   The function first calls process_event_queue_item_10499f16 to check a condition on
 *   param_1. If valid, it clears a field at offset 0x14 in param_2, copies a byte from
 *   param_1+0x14 to param_2+0x10 via read_byte_at_offset_0x20_1051b650, and calls
 *   initialize_struct_fields_1049a69c with a pointer from param_1+4. It then calls
 *   allocate_and_bind_object_10499df4; if that succeeds, it calls
 *   call_four_initializers_10499c5e and returns its result. The specific subsystem is not
 *   identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_object_with_callback(int param_1,int param_2)

{
  int iVar1;
  uint8_t uVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  iVar1 = process_event_queue_item_10499f16(param_1);
  if (iVar1 != 0) {
    *(uint32_t *)(param_2 + 0x14) = 0;
    uVar2 = read_byte_at_offset_0x20_1051b650(param_1 + 0x14);
    *(uint8_t *)(param_2 + 0x10) = uVar2;
    initialize_struct_fields_1049a69c(*(void **)(param_1 + 4));
    iVar1 = allocate_and_bind_object_10499df4(param_1,param_2);
    if (iVar1 != 0) {
      uVar3 = call_four_initializers_10499c5e(param_1);
    }
  }
  return uVar3;
}
