/* @k10d register_menu_item_with_status_1038a260 @ 0x1038a260
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Formats a numeric value into a fixed SDRAM buffer and updates an object's state via
 *   virtual calls.
 * summary:
 *   The function retrieves an object handle via menu_item_register and invokes virtual
 *   methods to set a state flag to 0. It initializes a local structure, processes
 *   parameters 3 and 4 through compute_range_from_two_values, and selects one of four
 *   string pointers based on the result. The final value is written to SDRAM address
 *   0x800197b7 via format_string_to_buffer_10545140, followed by calls to glyph_draw and
 *   set_struct_fields_and_flag to update the object's state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_with_status_1038a260(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  char *pcVar6;
  uint uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uintptr_t sp;
  char cVar10;
  char cVar11;
  uint64_t uVar12;
  uint8_t uStack_9;
  
  uVar4 = param_4;
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  if (param_2 == 0) {
    return;
  }
  alloc_one_byte_if_null_10409cf6(&uStack_9);
  uVar7 = param_4;
  uVar3 = compute_range_from_two_values(&uStack_9,param_3,param_4);
  if (param_4 != 0) {
    cVar10 = '\0';
    cVar11 = param_3 == 0;
    if (!(bool)cVar11) {
      uVar12 = convert_signed_byte_to_unsigned(uVar3);
      uVar4 = (uint)((ulonglong)uVar12 >> 0x20);
      uVar8 = 0x4023cccc;
      uVar9 = 0xcccccccd;
      compute_lens_fw_block_offset_10544502(uVar4,(void *)uVar12,0x4023cccc);
      if (cVar10 == '\x01') {
        uVar8 = 0xc023cccc;
        uVar9 = 0xcccccccd;
        compute_lens_fw_block_offset_10544502(uVar4,(void *)uVar12,0xc023cccc);
        if (cVar10 == '\0' && cVar11 == '\0') {
          pcVar6 = (char *)0x105598e8/*ROM*/;
        }
        else {
          pcVar6 = (char *)0x105598e0/*ROM*/;
          uVar12 = CONCAT44(uVar8,uVar9);
        }
      }
      else {
        pcVar6 = (char *)0x105598d8/*ROM*/;
        uVar12 = CONCAT44(uVar8,uVar9);
      }
      goto LAB_1038a35c;
    }
  }
  pcVar6 = (char *)0x105598d0/*ROM*/;
  uVar12 = CONCAT44(uVar7,uVar4);
LAB_1038a35c:
  format_string_to_buffer_10545140((uint8_t *)0x800197b7/*SDRAM*/,pcVar6,(void *)((ulonglong)uVar12 >> 0x20),(void *)uVar12);
  pvVar5 = (void *)menu_item_register(param_1);
  glyph_draw(pvVar5,(byte *)0x800197b7/*SDRAM*/);
  set_struct_fields_and_flag(pvVar5,0x60,2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
  (((vtbl_entry*)(*(int *)((int)pvVar5 + 0xc)))[1].fn)
            ((int)pvVar5 + (int)*(short *)(*(int *)((int)pvVar5 + 0xc) + 8),1);
  free_heap_if_flagged_10409d0a(&uStack_9,2);
  return;
}
