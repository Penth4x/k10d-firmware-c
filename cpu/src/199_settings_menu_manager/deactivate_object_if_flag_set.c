/* @k10d deactivate_object_if_flag_set @ 0x10494eaa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Conditionally calls a sequence of cleanup functions on an object if a byte at offset
 *   0xac is non-zero.
 * summary:
 *   Checks if the byte at param_1 + 0xac is non-zero. If so, it calls
 *   get_or_init_sram_block_10409fec, invokes a function pointer at 0x1040a01e with the
 *   result and a value from param_1+4, then calls dispatch_object_event_and_notify,
 *   report_three_sensor_metrics, and destroy_object_list_entries. It then calls
 *   get_or_init_sram_block_10409fec again and invokes a function pointer at 0x1040a020.
 *   Finally, it unconditionally calls invoke_virtual_on_range_items_10493858 with param_1
 *   and 0. The specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void deactivate_object_if_flag_set(cls_105b4dac *param_1)

{
  uint32_t uVar1;
  
  if (param_1->field_0xac != '\0') {
    uVar1 = get_or_init_sram_block_10409fec();
    (*(code *)0x1040a01e/*ROM*/)(uVar1,param_1->field_0x4);
    dispatch_object_event_and_notify((cls_105b48dc *)param_1);
    report_three_sensor_metrics((int)(param_1),(void *)__frv_reg_unset(5),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
    destroy_object_list_entries((cls_105b44b4 *)param_1);
    uVar1 = get_or_init_sram_block_10409fec();
    (*(code *)0x1040a020/*ROM*/)(uVar1,param_1->field_0x4);
  }
  invoke_virtual_on_range_items_10493858(param_1,0);
  return;
}
