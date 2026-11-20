/* @k10d extract_byte_from_virtual_query @ 0x104f32fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void extract_byte_from_virtual_query(int param_1,uint8_t *param_2)

{
  int iVar1;
  uintptr_t sp;
  cls_105a6eac cStack_10;
  
  cls_105a6eac_new(&cStack_10);
  copy_four_bytes_from_struct_field_1045e59a(*(int *)(param_1 + 8),&cStack_10);
  iVar1 = extract_field_by_index_10460366(&cStack_10,0x1b);
  *param_2 = (char)((uint)iVar1 >> 0x18);
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = (byte)iVar1 & 0xf;
  cls_105a6eac_delete(&cStack_10,2);
  return;
}
