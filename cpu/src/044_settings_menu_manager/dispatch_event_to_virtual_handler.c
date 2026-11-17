/* @k10d dispatch_event_to_virtual_handler @ 0x103a0fb6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Routes an event ID to a specific virtual method on the object or a sub-object based on
 *   a switch statement.
 * summary:
 *   The function first calls dispatch_event_0x29_via_vtable with the provided arguments. It
 *   then checks a flag at offset 0x41 in the object; if set, it returns. Otherwise, it
 *   evaluates param_2 (the event ID) against a series of values. For specific IDs (like
 *   0x11, 0xf, 0x13, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x2c), it invokes a virtual method at
 *   slot 9 (offset 0x74) on the main object with a specific code (0x1120001 or 0x1120004).
 *   For ID 0xc, it invokes a virtual method at slot 2 (offset 0x14) on a sub-object stored
 *   at offset 0x2c (param_1[0xb]) with code 0x1120066. It sets the flag at offset 0x41 to 1
 *   after successful dispatch.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_to_virtual_handler(int *param_1,uint param_2,uint32_t param_3)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  
  dispatch_event_0x29_via_vtable(param_1,param_2,param_3);
  if (*(char *)((int)param_1 + 0x41) != '\0') {
    return;
  }
  uVar2 = 0;
  if (param_2 == 0x11) {
LAB_103a103e:
    uVar2 = 0x1120001;
    bVar1 = false;
  }
  else {
    if (param_2 < 0x12) {
      if (param_2 != 7) {
        if (param_2 < 8) {
          if (((param_2 != 0) && (param_2 != 1)) && (param_2 != 3)) {
            bVar1 = true;
            goto LAB_103a106e;
          }
        }
        else if (param_2 != 9) {
          if (param_2 == 0xc) {
            iVar3 = *(int *)param_1[0xb];
            (**(code **)(iVar3 + 0x14))(param_1[0xb] + (int)*(short *)(iVar3 + 0x10),0x1120066,0);
            *(uint8_t *)((int)param_1 + 0x41) = 1;
            goto LAB_103a106c;
          }
          if (param_2 != 0xf) {
            bVar1 = true;
            goto LAB_103a106e;
          }
          goto LAB_103a103e;
        }
      }
    }
    else if (param_2 != 0x1a) {
      if (param_2 < 0x1b) {
        if (((param_2 != 0x13) && (param_2 != 0x18)) && (param_2 != 0x19)) {
          bVar1 = true;
          goto LAB_103a106e;
        }
      }
      else if (((param_2 != 0x1b) && (param_2 != 0x1c)) && (param_2 != 0x2c)) {
LAB_103a106c:
        bVar1 = true;
        goto LAB_103a106e;
      }
    }
    uVar2 = 0x1120004;
    bVar1 = false;
  }
LAB_103a106e:
  if (!bVar1) {
    (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,uVar2,0);
    *(uint8_t *)((int)param_1 + 0x41) = 1;
  }
  return;
}
