/* @k10d virtual_call_with_offset_adjust @ 0x104a92da
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes virtual methods on param_2 and adjusts an offset field in a heap object before
 *   calling dispatch_event_to_subscribers.
 * summary:
 *   Checks a flag at param_1+0xc. If set, calls virtual slot 6 on param_2 to save a value,
 *   calls virtual slot 5 to set a field at param_1+8, then calls
 *   dispatch_event_to_subscribers. If param_3 is non-null, it allocates/gets an object,
 *   subtracts the param_1+8 value from an offset at +0x30, calls
 *   dispatch_event_to_subscribers, and restores the offset. Finally, it restores the saved
 *   value via virtual slot 5. Returns the result of dispatch_event_to_subscribers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool virtual_call_with_offset_adjust(void *param_1,int *param_2,void *param_3)

{
  uint32_t uVar1;
  void *pvVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  if (*(char *)((int)param_1 + 0xc) == '\0') {
    bVar4 = dispatch_event_to_subscribers(*(int *)((int)param_1 + 4),param_2,(int)param_3);
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x34))((int)*(short *)(*param_2 + 0x30) + (int)param_2);
    (**(code **)(*param_2 + 0x2c))
              ((int)*(short *)(*param_2 + 0x28) + (int)param_2,*(uint32_t *)((int)param_1 + 8));
    if (param_3 == (void *)0x0) {
      bVar4 = dispatch_event_to_subscribers(*(int *)((int)param_1 + 4),param_2,0);
    }
    else {
      pvVar2 = (void *)(*(code *)0x104a29cc/*ROM*/)(param_3);
      iVar3 = read_struct_field_by_index_104a2a78(pvVar2,1);
      iVar5 = *(int *)(iVar3 + 0x30);
      *(int *)(iVar3 + 0x30) = iVar5 - *(int *)((int)param_1 + 8);
      bVar4 = dispatch_event_to_subscribers(*(int *)((int)param_1 + 4),param_2,(int)param_3);
      *(int *)(iVar3 + 0x30) = iVar5;
    }
    (**(code **)(*param_2 + 0x2c))((int)*(short *)(*param_2 + 0x28) + (int)param_2,uVar1);
  }
  return bVar4;
}
