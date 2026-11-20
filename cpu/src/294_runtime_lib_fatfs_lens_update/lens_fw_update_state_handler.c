/* @k10d lens_fw_update_state_handler @ 0x10536870
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Handles state transitions for the lens firmware update process based on a mode
 *   parameter.
 * summary:
 *   This function is virtual method slot 2 of class cls_10621d20, which resides in the
 *   lens_firmware_update module. It branches on param_2: if 1, it returns NULL; if 2, it
 *   checks a flag at offset 0x1b in param_1 and invokes virtual calls on param_3 (slots 3
 *   and 4) to manage the update state, potentially calling helper functions
 *   set_lens_update_flag and init_lens_update_context_10536ffe. The context of the module
 *   (lens CPU F/W UPDATE) strongly suggests this manages the state machine for updating
 *   lens firmware.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int lens_fw_update_state_handler(cls_10621d20 *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 == 2) {
    if (param_1->field_0x6c == '\0') {
      iVar1 = (((vtbl_entry*)(*param_3))[4].fn)((int)((vtbl_entry*)(*param_3))[4].adj + (int)param_3,0x15);
      if (iVar1 == 0) {
        iVar1 = (((vtbl_entry*)(*param_3))[4].fn)((int)((vtbl_entry*)(*param_3))[4].adj + (int)param_3,0x17)
        ;
        if (iVar1 != 0) {
          param_1 = (cls_10621d20 *)0x0;
        }
      }
      else {
        set_lens_update_flag((int)param_1);
        param_1 = (cls_10621d20 *)init_lens_update_context_10536ffe((void*)(param_1));
      }
    }
  }
  else if (param_2 == 1) {
    param_1 = (cls_10621d20 *)0x0;
  }
  return (int)param_1;
}
