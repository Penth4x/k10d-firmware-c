/* @k10d set_setting_and_notify_object @ 0x104efd52
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Writes a setting value to a struct field and forwards the value to an object at offset
 *   0x20.
 * summary:
 *   The function calls setting_set to store param_2 into the settings block at the index
 *   given by *(param_1+0xc), using 0x60 as the setting ID. It then passes the object
 *   pointer at *(param_1+0x20) and param_2 to send_command_with_timeout_104b87e8, and
 *   passes the same object pointer and a boolean (param_2 != 0) to
 *   dispatch_event_with_lock_104b876e. The role of the object at offset 0x20 and the
 *   specific setting 0x60 are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_setting_and_notify_object(int param_1,int param_2)

{
  setting_set(*(int *)(param_1 + 0xc),0x60,param_2);
  send_command_with_timeout_104b87e8(*(uint32_t *)(param_1 + 0x20),param_2);
  dispatch_event_with_lock_104b876e(*(uint32_t *)(param_1 + 0x20),param_2 != 0);
  return;
}
