/* @k10d initialize_object_with_status @ 0x1049929c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Validates input, initializes a struct at param_2 with a status code and byte from
 *   param_1, and calls setup helpers.
 * summary:
 *   Checks a global state via check_three_byte_pair_conditions and validates param_1 via
 *   process_event_queue_item_104994a2. If valid, writes 0xc to offset 0x14 of param_2 and
 *   copies a byte from param_1+0x24 to param_2+0x10. Calls
 *   initialize_struct_fields_1049a69c on a pointer in param_1, then
 *   allocate_and_link_object, and finally initialize_subsystem_with_param if the previous
 *   step succeeded. Returns the result of initialize_subsystem_with_param or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_with_status(int param_1,int param_2)

{
  int iVar1;
  uint8_t uVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  iVar1 = check_three_byte_pair_conditions(__frv_reg_unset(4));
  if ((iVar1 != 0) && (iVar1 = process_event_queue_item_104994a2(param_1), iVar1 != 0)) {
    *(uint32_t *)(param_2 + 0x14) = 0xc;
    uVar2 = read_byte_at_offset_0x20_1051b650(param_1 + 0x24);
    *(uint8_t *)(param_2 + 0x10) = uVar2;
    initialize_struct_fields_1049a69c(*(void **)(param_1 + 4));
    iVar1 = allocate_and_link_object(param_1,param_2);
    if (iVar1 != 0) {
      uVar3 = initialize_subsystem_with_param(param_1);
    }
  }
  return uVar3;
}
