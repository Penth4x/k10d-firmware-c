/* @k10d dispatch_mode_event_handler_103634d0 @ 0x103634d0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 002_settings_context (unit names are model-proposed)
 * purpose:
 *   Processes a mode/event code from param_2, updating object state fields and invoking
 *   virtual methods or helper functions based on the code value.
 * summary:
 *   The function branches on the first integer in param_2. For code 1, it stores the second
 *   parameter at offset 0x20c and, if a flag at 0x204 is clear, calls virtual slot 15 of an
 *   object pointer at offset 0x70, then calls virtual slot 14 with the result. For code 4,
 *   it validates the second parameter against a set of allowed values (0, 1, 3, 7, 10, 12,
 *   41) and either updates state fields at offsets 0x14, 0x15, and 0x16 and 0x210, or calls
 *   invoke_callback_at_8000439c or forward_param_to_global_offset. Codes 2 and others are
 *   ignored.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_mode_event_handler_103634d0(void *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint32_t uVar4;
  int iVar5;
  
  iVar1 = *param_2;
  if (iVar1 == 1) {
    *(int *)((int)param_1 + 0x20c) = param_2[1];
    if (*(int *)((int)param_1 + 0x204) != 0) {
      return;
    }
    piVar2 = *(int **)((int)param_1 + 0x70);
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar1 = (**(code **)(*piVar2 + 0xcc))((int)*(short *)(*piVar2 + 200) + (int)piVar2);
    if (iVar1 == 0) {
      return;
    }
    iVar5 = **(int **)((int)param_1 + 0x70);
    (**(code **)(iVar5 + 0xc4))
              ((int)*(int **)((int)param_1 + 0x70) + (int)*(short *)(iVar5 + 0xc0),iVar1 + -1);
    return;
  }
  if (iVar1 == 2) {
    return;
  }
  if (iVar1 != 4) {
    return;
  }
  uVar3 = param_2[1];
  uVar4 = _DAT_105bb5f4/*ROM*/;
  if (uVar3 != 7) {
    if (uVar3 < 8) {
      if (((uVar3 != 0) && (uVar3 != 1)) && (uVar3 != 3)) {
        return;
      }
    }
    else if (uVar3 != 10) {
      if (uVar3 == 0xc) {
        if (*(int *)((int)param_1 + 0x204) == 0) {
          *(uint8_t *)((int)param_1 + 0x14) = 1;
          *(uint8_t *)((int)param_1 + 0x15) = 1;
        }
        if (*(char *)((int)param_1 + 0x16) == '\0') {
          return;
        }
        *(int *)((int)param_1 + 0x210) = param_2[1];
        invoke_callback_at_8000439c();
        return;
      }
      if (uVar3 != 0x29) {
        return;
      }
      if (*(char *)((int)param_1 + 0x16) != '\0') {
        *(uint32_t *)((int)param_1 + 0x210) = 0x29;
        return;
      }
      if (DAT_800043a1/*SDRAM*/ != '\0') {
        uVar4 = _DAT_105bb5f8/*ROM*/;
      }
      goto LAB_103635ea;
    }
  }
  if (*(char *)((int)param_1 + 0x16) != '\0') {
    *(uint *)((int)param_1 + 0x210) = uVar3;
    return;
  }
LAB_103635ea:
  forward_param_to_global_offset(param_1,uVar4);
  return;
}
