/* @k10d build_status_word_from_flags @ 0x1042eeec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 111_menu_status_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t build_status_word_from_flags(int param_1,uint32_t *param_2)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  cls_105a6eac cStack_10;
  
  get_or_init_heap_block();
  uVar2 = read_virtual_property_field((int *)(*(uint32_t *)(param_1 + 0x68)),(int)(1));
  *param_2 = uVar2;
  iVar3 = get_or_create_singleton_object_10470d84();
  iVar4 = *(int *)(iVar3 + 4);
  param_2[1] = 0;
  iVar3 = check_object_flag_at_offset_0x1c(iVar4);
  uVar1 = 8;
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  param_2[1] = param_2[1] | uVar1;
  iVar3 = query_object_flag_at_offset_0x1c_1046d77c(iVar4);
  uVar1 = 4;
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  param_2[1] = param_2[1] | uVar1;
  iVar3 = query_object_flag_at_offset_0x1c_1046d73a(iVar4);
  uVar1 = 2;
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  param_2[1] = param_2[1] | uVar1;
  iVar3 = query_object_flag_at_offset_0x1c_1046d6f8(iVar4);
  param_2[1] = param_2[1] | (uint)(iVar3 != 0);
  uVar2 = read_virtual_property_field((int *)(*(uint32_t *)(param_1 + 0x68)),(int)(0x18));
  param_2[2] = uVar2;
  cls_105a6eac_new(&cStack_10);
  copy_four_bytes_from_struct_field_1045e59a(*(int *)(param_1 + 0x60),&cStack_10);
  iVar3 = extract_field_by_index_10460366(&cStack_10,0x1b);
  param_2[3] = iVar3;
  iVar3 = read_byte_at_offset_0x51(*(uint32_t *)(param_1 + 100));
  if (iVar3 != 0) {
    param_2[3] = param_2[3] | (uint)DAT_105a66b4/*ROM*/ << (3U - (char)_DAT_105a66b0/*ROM*/ & 0xf);
  }
  iVar3 = read_byte_at_offset_0x50_104617b2(*(uint32_t *)(param_1 + 100));
  if (iVar3 != 0) {
    param_2[3] = param_2[3] | (uint)DAT_105a66cc/*ROM*/ << (3U - (char)_DAT_105a66c8/*ROM*/ & 0xf);
  }
  uVar2 = read_virtual_property_field((int *)(*(uint32_t *)(param_1 + 0x68)),(int)(0x19));
  param_2[4] = uVar2;
  cls_105a6eac_delete(&cStack_10,2);
  return 5;
}
