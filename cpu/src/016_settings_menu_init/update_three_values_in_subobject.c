/* @k10d update_three_values_in_subobject @ 0x1036aef8
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 016_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Reads three values from param_1 and writes them into a sub-object at offset 0x14,
 *   bracketed by a flag check.
 * summary:
 *   The function operates on a sub-object located at param_1 + 0x14. It first checks a flag
 *   via read_byte_at_offset_0x1d and sets it to 1 via dispatch_object_state_update_10491fb2
 *   if non-zero. It then retrieves three values from param_1 using
 *   test_low_two_bits_of_helper (twice) and test_bits_2_and_3_of_status, and passes them to
 *   register_menu_item_and_invoke_slot_10387f8c,
 *   register_menu_item_and_invoke_slot_10387fba, and
 *   invoke_virtual_method_on_object_10387fe8 respectively. It calls
 *   read_two_shorts_and_store_1036af70, then re-checks the flag and sets it to 0 if it was
 *   non-zero. The specific subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_three_values_in_subobject(void *param_1)

{
  char cVar2;
  uint32_t uVar1;
  int iVar3;
  
  iVar3 = (int)param_1 + 0x14;
  cVar2 = read_byte_at_offset_0x1d(iVar3);
  if (cVar2 != '\0') {
    dispatch_object_state_update_10491fb2(iVar3,1);
  }
  uVar1 = test_low_two_bits_of_helper(param_1);
  register_menu_item_and_invoke_slot_10387f8c(iVar3,uVar1);
  uVar1 = test_bits_2_and_3_of_status(param_1);
  register_menu_item_and_invoke_slot_10387fba(iVar3,uVar1);
  uVar1 = test_low_two_bits_of_helper(param_1);
  invoke_virtual_method_on_object_10387fe8(iVar3,uVar1);
  read_two_shorts_and_store_1036af70(param_1);
  cVar2 = read_byte_at_offset_0x1d(iVar3);
  if (cVar2 != '\0') {
    dispatch_object_state_update_10491fb2(iVar3,0);
  }
  return;
}
