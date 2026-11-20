/* @k10d dispatch_event_with_timeout_103a5214 @ 0x103a5214
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Sends a virtual event to an object, conditionally sets a 60-second timeout, and updates
 *   state flags based on the result.
 * summary:
 *   The function checks a flag at offset 0x14 in the input object. It constructs a local
 *   structure with values derived from the object's fields (offsets 0x15, 0x16, 0xf) and
 *   calls configure_pipeline_with_settings. If this call succeeds, it sets a flag at offset
 *   0x65, calls register_seven_menu_items, toggles a state via two virtual calls on an
 *   object retrieved by menu_item_register, clears a flag at 0x19, and sets a timeout value
 *   of 60000 at offset 0xd. It sends virtual events (0x1120069, 0x1120065, 0x1120067) to
 *   the object at offset 0xb. On failure, it sends event 0x1120069 with a different
 *   parameter and another event 0x1120009 to the object itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_with_timeout_103a5214(int *param_1)

{
  struct {
    uint8_t uStack_1c;
    uint8_t uStack_1b;
    int iStack_18;
    uint8_t uStack_14;
    int iStack_10;
    int iStack_c;
  } _cfg_1c;
  int iVar1;
  uintptr_t sp;
  if (*(char *)(param_1 + 0x14) == '\x01') {
    _cfg_1c.iStack_10 = param_1[0x15] + 0x1a;
    _cfg_1c.iStack_c = param_1[0x16] + 8;
  }
  else {
    _cfg_1c.iStack_10 = 0;
    _cfg_1c.iStack_c = 0;
  }
  _cfg_1c.uStack_1c = 1;
  _cfg_1c.uStack_1b = 9;
  _cfg_1c.iStack_18 = param_1[0xf];
  _cfg_1c.uStack_14 = *(char *)(param_1 + 0x14) == '\x01';
  iVar1 = *(int *)param_1[0xb];
  (((vtbl_entry*)(iVar1))[2].fn)(param_1[0xb] + (int)((vtbl_entry*)(iVar1))[2].adj,0x1120069,2);
  iVar1 = configure_pipeline_with_settings(param_1[0xe],&_cfg_1c.uStack_1c);
  if (iVar1 == 0) {
    *(uint8_t *)((int)param_1 + 0x65) = 1;
    register_seven_menu_items(param_1);
    iVar1 = menu_item_register((int)(param_1 + 2));
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register((int)(param_1 + 2));
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    *(uint8_t *)(param_1 + 0x19) = 0;
    param_1[0xd] = 60000;
    iVar1 = *(int *)param_1[0xb];
    (((vtbl_entry*)(iVar1))[2].fn)(param_1[0xb] + (int)((vtbl_entry*)(iVar1))[2].adj,0x1120065,0);
  }
  else {
    iVar1 = *(int *)param_1[0xb];
    (((vtbl_entry*)(iVar1))[2].fn)(param_1[0xb] + (int)((vtbl_entry*)(iVar1))[2].adj,0x1120069,0);
    (((vtbl_entry*)(*param_1))[14].fn)((int)((vtbl_entry*)(*param_1))[14].adj + (int)param_1,0x1120009,0);
  }
  iVar1 = *(int *)param_1[0xb];
  (((vtbl_entry*)(iVar1))[2].fn)(param_1[0xb] + (int)((vtbl_entry*)(iVar1))[2].adj,0x1120067,1);
  return;
}
