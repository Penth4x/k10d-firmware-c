/* @k10d set_and_apply_object_flag @ 0x103942aa
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a boolean flag on an object field and then applies or commits that state.
 * summary:
 *   The function takes an object pointer (param_1) and a boolean value (param_2 != 0). It
 *   calls request_ui_sync_with_flag_10491f5c with the object's field at offset 0x48 and the
 *   boolean, likely setting a state or flag. It then calls request_ui_sync_code_4 with the
 *   same field pointer, likely applying, committing, or notifying about the change. The
 *   specific subsystem is unknown as the callees are not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_and_apply_object_flag(int param_1,int param_2)

{
  request_ui_sync_with_flag_10491f5c(*(void **)(param_1 + 0x48),(uint)(param_2 != 0));
  request_ui_sync_code_4(*(void **)(param_1 + 0x48));
  return;
}
