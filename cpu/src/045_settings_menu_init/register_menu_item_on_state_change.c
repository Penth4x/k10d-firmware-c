/* @k10d register_menu_item_on_state_change @ 0x103a4af0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Checks object flags and dispatches a virtual call with ID 0x1120064 after handling a
 *   conditional branch.
 * summary:
 *   The function verifies that byte 4 of the object is non-zero and byte 0x65 is zero. It
 *   calls call_with_offset_lock_1050b8de with fields at 0x38 and 0x3c. Depending on the
 *   result, it either performs a virtual call on a derived object or copies three fields
 *   from the pointer at 0x3c into the object at offsets 0x40-0x48, manipulates a sub-object
 *   at offset 8, and sets byte 100 to 0. Finally, it invokes a virtual method (slot 2) on
 *   the object at 0x2c with argument 0x1120064.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_on_state_change(int param_1)

{
  int iVar1;
  uint32_t *puVar2;
  void *pvVar3;
  
  if ((*(char *)(param_1 + 4) != '\0') && (*(char *)(param_1 + 0x65) == '\0')) {
    iVar1 = call_with_offset_lock_1050b8de(*(int *)(param_1 + 0x38),*(void **)(param_1 + 0x3c),0);
    if (iVar1 == 0) {
      iVar1 = menu_item_register(param_1 + 8);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    }
    else {
      *(uint32_t *)(param_1 + 0x40) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 4);
      *(uint32_t *)(param_1 + 0x44) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 8);
      pvVar3 = (void *)(param_1 + 8);
      *(uint32_t *)(param_1 + 0x48) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 0xc);
      puVar2 = (uint32_t *)menu_item_register((int)pvVar3);
      call_helper_and_set_flag_10494b88(puVar2);
      (((vtbl_entry*)(puVar2[3]))[1].fn)((int)puVar2 + (int)*(short *)(puVar2[3] + 8),1);
      request_ui_sync_code_4(pvVar3);
      *(uint8_t *)(param_1 + 100) = 0;
      request_ui_sync_with_flag_10491f5c(pvVar3,1);
    }
    iVar1 = **(int **)(param_1 + 0x2c);
    (((vtbl_entry*)(iVar1))[2].fn)
              ((int)*(int **)(param_1 + 0x2c) + (int)((vtbl_entry*)(iVar1))[2].adj,0x1120064,0);
  }
  return;
}
