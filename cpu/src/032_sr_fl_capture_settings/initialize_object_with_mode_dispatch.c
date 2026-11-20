/* @k10d initialize_object_with_mode_dispatch @ 0x10371502
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 032_sr_fl_capture_settings (unit names are model-proposed)
 * purpose:
 *   Initializes an object structure, queries its mode, and dispatches to specific setup
 *   routines based on the mode bits.
 * summary:
 *   The function clears several fields in the object pointed to by param_1 (offsets 5,
 *   0x15, 6, 0x14). It calls query_state_and_flag_range to retrieve a mode or state value.
 *   Depending on the bits in the returned value (specifically bits 2 and 3), it calls
 *   dispatch_event_and_return_offset with different arguments (2 or 3) and then performs
 *   further initialization via read_struct_field_at_index_104c2890 and
 *   dispatch_object_state_change_10372604. If initialization succeeds, it configures a sub-
 *   object at param_1+8 using values from param_1[0x1f] and calls
 *   read_two_shorts_from_param2_10372684 and init_object_with_offset_0x20. If it fails or
 *   specific flags are set, it calls init_object_with_sram_ref_103722e0 with error codes (6
 *   or 0x13). Finally, it may call write_second_field_via_helper_1036c486 and
 *   write_second_field_of_struct with a timeout value of 180000.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10558104 * initialize_object_with_mode_dispatch(cls_10558104 *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  bool bVar4;
  uint32_t uVar5;
  uint32_t *puVar6;
  uintptr_t sp;
  int iStack_c;
  
  param_1->field_0x14 = 0;
  param_1->field_0x15 = 0;
  param_1->field_0x18 = 0;
  param_1->field_0x50 = 0;
  iStack_c = 5;
  iVar1 = query_state_and_flag_range(param_1,&iStack_c);
  if (iVar1 == 0) {
    if (iStack_c == 1) {
      init_object_with_sram_ref_103722e0(param_1,6);
      return param_1;
    }
    allocate_and_link_heap_blocks(&param_1->field_0x4a8);
    uVar3 = init_sram_block_and_store_param(param_1);
    bVar4 = false;
    iVar1 = -1;
    if ((uVar3 & 4) == 0) {
      if ((uVar3 & 8) == 0) goto LAB_10371590;
      iVar1 = 3;
LAB_10371594:
      iVar1 = dispatch_event_and_return_offset(param_1,&param_1->field_0x7c,iVar1);
      if (((iVar1 != 0) && (iVar1 = read_struct_field_at_index_104c2890((char*)(param_1) ->field_0x7c,0x28), iVar1 == 1)) &&
         (iVar1 = read_struct_field_at_index_104c2890((char*)(param_1) ->field_0x7c,0x29), iVar1 == 1)) {
        bVar4 = dispatch_object_state_change_10372604(param_1,1);
      }
    }
    else {
      iVar1 = 2;
LAB_10371590:
      if (iVar1 != -1) goto LAB_10371594;
    }
    if (bVar4 == false) {
      if (param_1->field_0x14 == '\0') {
        init_object_with_sram_ref_103722e0(param_1,0x13);
      }
    }
    else {
      puVar6 = &param_1->field_0x20;
      register_and_activate_menu_items_10403552(puVar6,0);
      register_and_configure_six_menu_items(puVar6,*(int *)(param_1->field_0x7c + 8));
      register_three_menu_items_10404a44(puVar6,*(uint16_t *)(param_1->field_0x7c + 4),
                   *(uint16_t *)(param_1->field_0x7c + 6));
      read_two_shorts_from_param2_10372684(param_1,&param_1->field_0x80);
      init_object_with_offset_0x20(param_1);
    }
    if (param_1->field_0x18 == 0) {
      if (param_1->field_0x15 != '\0') {
        (((vtbl_entry*)(param_1->field_0x0))[10].fn)
                  ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[10].adj);
        uVar2 = get_or_create_singleton_object_1036c796();
        uVar5 = 0xd;
        goto code_r0x1037166a;
      }
    }
    else {
      param_1->field_0x14 = 0;
      param_1->field_0x15 = 0;
    }
    if (bVar4 != false) {
      write_second_field_via_helper_1036c486(param_1,180000);
      write_second_field_of_struct(param_1,0);
    }
  }
  else {
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar5 = 1;
code_r0x1037166a:
    param_1 = (cls_10558104 *)read_array_element_bounded(uVar2,uVar5);
  }
  return param_1;
}
