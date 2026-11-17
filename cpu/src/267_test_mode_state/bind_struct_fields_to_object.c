/* @k10d bind_struct_fields_to_object @ 0x105068ec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 267_test_mode_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void bind_struct_fields_to_object(int param_1)

{
  int iVar1;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  iVar1 = *(int *)(iVar1 + 0x1c);
  copy_twelve_bytes_to_buffer(iVar1,(void *)(param_1 + 0xec));
  copy_27_bytes_to_buffer(iVar1,(void *)(param_1 + 0x7c));
  copy_buffer_with_lock_1045e4d4(iVar1,(void *)(param_1 + 0xc4));
  copy_fourteen_bytes_from_struct(iVar1,(void *)(param_1 + 0xd8));
  copy_four_bytes_from_struct_field_1045e556(iVar1,(void *)(param_1 + 0x10c));
  copy_32_bytes_from_struct_field_1045e39e(iVar1,(void *)(param_1 + 0x140));
  copy_four_bytes_from_struct(iVar1,param_1 + 0x4bc);
  copy_0x45_byte_block(iVar1,(void *)(param_1 + 0x30));
  copy_field_from_struct_1045e622(iVar1,(void *)(param_1 + 0x9c));
  copy_32_bytes_from_struct_field_1045e360(iVar1,(void *)(param_1 + 0x11c));
  return;
}
