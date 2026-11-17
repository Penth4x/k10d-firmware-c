/* @k10d initialize_object_from_source_1051ac4e @ 0x1051ac4e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Validates a source object and copies selected fields into a destination structure.
 * summary:
 *   Calls dispatch_virtual_method_on_object_1051ae58 to check param_1. If valid, it clears
 *   a field at offset 0x14 in param_2, copies a byte from param_1+0x14 to param_2+0x10,
 *   calls initialize_struct_fields_1049a69c with a pointer from param_1+4, and then calls
 *   allocate_and_bind_resource. If that succeeds, it calls call_four_initializers_1051aac0
 *   and returns its result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_from_source_1051ac4e(int param_1,int param_2)

{
  int iVar1;
  uint8_t uVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  iVar1 = dispatch_virtual_method_on_object_1051ae58(param_1);
  if (iVar1 != 0) {
    *(uint32_t *)(param_2 + 0x14) = 0;
    uVar2 = read_byte_at_offset_0x20_1051b650(param_1 + 0x14);
    *(uint8_t *)(param_2 + 0x10) = uVar2;
    initialize_struct_fields_1049a69c(*(void **)(param_1 + 4));
    iVar1 = allocate_and_bind_resource(param_1,param_2);
    if (iVar1 != 0) {
      uVar3 = call_four_initializers_1051aac0(param_1);
    }
  }
  return uVar3;
}
