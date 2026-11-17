/* @k10d serialize_object_fields_to_buffer @ 0x1042f040
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 111_menu_status_manager (unit names are model-proposed)
 * purpose:
 *   Serializes fields from an object into a buffer by calling a series of field-specific
 *   writers.
 * summary:
 *   The function first calls build_status_word_from_flags to determine the starting offset
 *   in the output buffer. It then writes two values derived from a global context (via
 *   get_or_create_singleton_104e7b68) into the buffer. Subsequently, it iteratively calls
 *   six different helper functions (build_mode_settings_snapshot_104d25d0,
 *   build_exposure_parameter_table_1042af90, read_two_values_from_object_1042b964,
 *   read_two_values_from_object_1042d8a4, populate_eight_entry_array,
 *   extract_three_values_from_object), passing pointers to specific fields of the input
 *   object (param_1) and the current write position in the buffer. Each helper returns the
 *   number of bytes written, which is added to the offset for the next call. The total
 *   length of the serialized data is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int serialize_object_fields_to_buffer(int param_1,uint32_t *param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  iVar1 = build_status_word_from_flags(param_1,param_2);
  iVar2 = get_or_create_singleton_104e7b68();
  uVar3 = call_helper_with_offset_0x38_104e8f3c(*(int *)(iVar2 + 8));
  param_2[iVar1] = uVar3;
  iVar2 = get_or_create_singleton_104e7b68();
  uVar3 = return_constant_0x1ff(*(uint32_t *)(iVar2 + 8));
  param_2[iVar1 + 1] = uVar3;
  iVar2 = build_mode_settings_snapshot_104d25d0(*(uint32_t *)(param_1 + 0x58),param_2 + iVar1 + 2);
  iVar2 = iVar1 + 2 + iVar2;
  iVar1 = build_exposure_parameter_table_1042af90(*(uint32_t *)(param_1 + 0x4c),param_2 + iVar2);
  iVar2 = iVar2 + iVar1;
  iVar1 = read_two_values_from_object_1042b964(*(uint32_t *)(param_1 + 0x50),param_2 + iVar2);
  iVar2 = iVar2 + iVar1;
  iVar1 = read_two_values_from_object_1042d8a4(*(uint32_t *)(param_1 + 0x5c),param_2 + iVar2);
  iVar2 = iVar2 + iVar1;
  iVar1 = populate_eight_entry_array(*(uint32_t *)(param_1 + 0x54),param_2 + iVar2);
  iVar2 = iVar2 + iVar1;
  iVar1 = extract_three_values_from_object(*(uint32_t *)(param_1 + 0x54),param_2 + iVar2);
  return iVar2 + iVar1;
}
