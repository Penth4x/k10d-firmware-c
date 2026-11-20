/* @k10d dispatch_mode_change_event_103b0252 @ 0x103b0252
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Routes a mode change event to a specific handler based on the event ID and updates the
 *   UI state.
 * summary:
 *   The function first invokes a virtual method on an object stored in param_1[0xb] with ID
 *   0x1120065. It then calls dispatch_event_0x29_via_vtable with the original parameters.
 *   Based on the value of param_2 (event ID), it determines a specific UI update ID (uVar2)
 *   and a boolean flag. For certain IDs (0x0c, 0x0d-0x10, 0x29-0x2b), it sets the flag to
 *   true and returns early after a virtual call with ID 0x1120066. For other IDs, it calls
 *   empty_stub_function_103b76f0 and empty_noop_stub_103b76f2, then invokes a virtual
 *   method on the object in *param_1 with the determined UI ID. The structure suggests
 *   handling of camera mode transitions (e.g., P, Tv, Av, M) or status updates.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_change_event_103b0252(cls_10565d08 *param_1,uint param_2,uint32_t param_3)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  void *puVar4;
  
  iVar3 = *(uint32_t *)param_1->field_0x2c;
  (((vtbl_entry*)(iVar3))[2].fn)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[2].adj,0x1120065,0);
  dispatch_event_0x29_via_vtable((cls_105643d0 *)param_1,param_2,param_3);
  uVar2 = 0;
  if (param_2 == 0x11) {
LAB_103b0300:
    uVar2 = 0x1120004;
    bVar1 = false;
  }
  else {
    if (0x11 < param_2) {
      if (param_2 != 0x1c) {
        if (param_2 < 0x1d) {
          if (param_2 == 0x18) {
            uVar2 = 0x1120001;
            bVar1 = false;
            goto LAB_103b0350;
          }
          if (((param_2 != 0x19) && (param_2 != 0x1a)) && (param_2 != 0x1b)) goto LAB_103b0334;
        }
        else {
          if (((param_2 == 0x29) || (param_2 == 0x2a)) || (param_2 == 0x2b)) goto LAB_103b034e;
          if (param_2 != 0x2c) goto LAB_103b0334;
        }
      }
      goto LAB_103b0300;
    }
    if (param_2 != 0xc) {
      if (param_2 < 0xd) {
        if ((((param_2 == 0) || (param_2 == 1)) || (param_2 == 7)) || (param_2 == 9))
        goto LAB_103b0300;
      }
      else if (((param_2 == 0xd) || (param_2 == 0xe)) || ((param_2 == 0xf || (param_2 == 0x10)))) {
LAB_103b034e:
        bVar1 = true;
        goto LAB_103b0350;
      }
LAB_103b0334:
      empty_stub_function_103b76f0();
      empty_noop_stub_103b76f2();
      uVar2 = 0x1120004;
      puVar4 = (void *)(param_1->field_0x0);
      goto LAB_103b0354;
    }
    iVar3 = *(uint32_t *)param_1->field_0x2c;
    (((vtbl_entry*)(iVar3))[2].fn)
              ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[2].adj,0x1120066,0);
    bVar1 = true;
  }
LAB_103b0350:
  if (bVar1) {
    return;
  }
  puVar4 = (void *)(param_1->field_0x0);
LAB_103b0354:
  (((vtbl_entry*)(puVar4))[14].fn)((int)&param_1->field_0x0 + (int)((vtbl_entry*)(puVar4))[14].adj,uVar2,0);
  return;
}
