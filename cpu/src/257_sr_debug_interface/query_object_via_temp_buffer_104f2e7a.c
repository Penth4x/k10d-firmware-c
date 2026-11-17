/* @k10d query_object_via_temp_buffer_104f2e7a @ 0x104f2e7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int query_object_via_temp_buffer_104f2e7a(int param_1)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_10 [8];
  
  cls_105a6b4c_new((void *)auStack_10);
  copy_three_bytes_from_offset(*(int *)(param_1 + 8),auStack_10);
  iVar1 = read_two_byte_field(auStack_10);
  cls_105a6b4c_delete((void *)auStack_10,2);
  return iVar1;
}
