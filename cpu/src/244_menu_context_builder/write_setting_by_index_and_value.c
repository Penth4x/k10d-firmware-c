/* @k10d write_setting_by_index_and_value @ 0x104d3c50
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 244_menu_context_builder (unit names are model-proposed)
 * purpose:
 *   Writes a byte value to one or two setting slots selected by an index derived from a
 *   class query.
 * summary:
 *   Creates a temporary cls_105a6d8c object, initializes it from param_1+8, and calls
 *   virtual slot 2 (extract_field_from_struct_1045ff0e) with argument 0x2b to obtain an
 *   index. If the index is <1, it writes param_2&0xff to setting slot 0xd and, for specific
 *   param_2 values (4-6 or 0xc-0xe), also writes to slot 0xe or 0x10. If the index is >=1,
 *   it computes a base offset (index-1)*0x80 + 0x135 and writes to that slot and a nearby
 *   slot (0x136 or 0x138) based on param_2. Finally, it deletes the temporary object and
 *   returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_setting_by_index_and_value(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uintptr_t sp;
  cls_105a6d8c acStack_24 [7];
  
  cls_105a6d8c_new(acStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_24);
  iVar1 = extract_field_from_struct_1045ff0e(acStack_24,0x2b);
  uVar2 = param_2 & 0xff;
  if (iVar1 < 1) {
    setting_set(*(int *)(param_1 + 0x14),0xd,uVar2);
    if (((param_2 == 0xc) || (param_2 == 0xd)) || (param_2 == 0xe)) {
      iVar1 = 0x10;
    }
    else {
      if (((param_2 != 4) && (param_2 != 5)) && (param_2 != 6)) goto LAB_104d3d10;
      iVar1 = 0xe;
    }
  }
  else {
    iVar1 = (iVar1 + -1) * 0x80;
    setting_set(*(int *)(param_1 + 0x14),iVar1 + 0x135,uVar2);
    if (((param_2 == 0xc) || (param_2 == 0xd)) || (param_2 == 0xe)) {
      iVar1 = iVar1 + 0x138;
    }
    else {
      if (((param_2 != 4) && (param_2 != 5)) && (param_2 != 6)) goto LAB_104d3d10;
      iVar1 = iVar1 + 0x136;
    }
  }
  setting_set(*(int *)(param_1 + 0x14),iVar1,uVar2);
LAB_104d3d10:
  cls_105a6d8c_delete(acStack_24,2);
  return 0;
}
