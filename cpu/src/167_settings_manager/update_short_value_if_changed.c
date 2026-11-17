/* @k10d update_short_value_if_changed @ 0x10473812
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes a new value, compares it against a stored short, and updates the stored value
 *   if the new value is valid and different.
 * summary:
 *   The function branches on whether the short at param_3 is zero. If non-zero, it calls
 *   call_helper_with_field_at_offset_8_10476864 and process_object_event_and_notify. If
 *   zero, it calls increment_file_number_if_needed to get a value (iVar2), checks if it is
 *   in the range (99, 1000), and compares it to the result of
 *   call_function_at_offset_8_104767f8. If the value is valid and different, it calls
 *   process_object_event_and_notify. Finally, it stores the new value into *param_3 and
 *   returns a status flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int update_short_value_if_changed(int param_1,char *param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*param_3 != 0) {
    iVar1 = call_helper_with_field_at_offset_8_10476864(*(int *)(param_1 + 8));
    if (iVar1 != 0) {
      return 1;
    }
    bVar3 = process_object_event_and_notify(param_1,(uint)(ushort)*param_3,param_2);
    return (uint)bVar3;
  }
  iVar1 = call_function_at_offset_8_104767f8(*(int *)(param_1 + 8));
  iVar2 = increment_file_number_if_needed(param_1,param_2);
  get_or_init_sram_buffer_10478858();
  if ((99 < iVar2) && (iVar2 < 1000)) {
    if (iVar1 == iVar2) {
      uVar4 = 1;
      goto LAB_1047386c;
    }
    bVar3 = process_object_event_and_notify(param_1,iVar2,param_2);
    uVar4 = (uint)bVar3;
  }
  if (uVar4 == 0) {
    return 0;
  }
LAB_1047386c:
  *param_3 = (short)iVar2;
  return uVar4;
}
