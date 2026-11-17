/* @k10d dispatch_event_by_state_byte @ 0x10407508
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Routes an event to a virtual handler based on a state byte and a helper return value.
 * summary:
 *   Checks byte at offset 0xbd of the object; if zero, inspects byte at 0x15. If it is a
 *   whitespace character (tab, newline, vertical tab), calls check_object_property_43 with
 *   param_1[10] and compares the result to byte at 0x2f. On match, invokes virtual slot 2
 *   (offset 0x14) on the object at param_1[0xb] twice with codes 0x1120065 and 0x1120064.
 *   On mismatch or non-whitespace, invokes virtual slot 14 (offset 0x74) on the object
 *   itself with code 0x1120004. The function acts as a state-dependent event dispatcher
 *   using Cfront virtual call idioms.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_by_state_byte(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)((int)param_1 + 0xbd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x15);
    if (((cVar1 == '\t') || (cVar1 == '\n')) || (cVar1 == '\v')) {
      uVar2 = check_object_property_43(param_1[10]);
      if (uVar2 == *(byte *)(param_1 + 0x2f)) {
        iVar3 = *(int *)param_1[0xb];
        (**(code **)(iVar3 + 0x14))(param_1[0xb] + (int)*(short *)(iVar3 + 0x10),0x1120065,0);
        iVar3 = *(int *)param_1[0xb];
        (**(code **)(iVar3 + 0x14))(param_1[0xb] + (int)*(short *)(iVar3 + 0x10),0x1120064,0);
      }
      else {
        (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120004);
      }
    }
    else {
      (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120004,0);
    }
  }
  return;
}
