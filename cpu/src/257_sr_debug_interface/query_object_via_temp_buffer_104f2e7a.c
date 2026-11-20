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
  cls_105a6b4c cStack_10;
  
  cls_105a6b4c_new(&cStack_10);
  copy_three_bytes_from_offset(*(int *)(param_1 + 8),&cStack_10);
  iVar1 = read_two_byte_field(&cStack_10);
  cls_105a6b4c_delete(&cStack_10,2);
  return iVar1;
}
