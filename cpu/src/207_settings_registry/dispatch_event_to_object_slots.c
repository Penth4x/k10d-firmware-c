/* @k10d dispatch_event_to_object_slots @ 0x104a9e88
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 207_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_to_object_slots(int param_1,int param_2,uint32_t param_3)

{
  int *piVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_14 [12];
  
  if (param_2 == 0xb0001) {
    empty_stub_function_103b76f0();
    empty_noop_stub_103b76f2();
    piVar1 = *(int **)(param_1 + 0x24);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0xd0001,param_3);
    }
  }
  else if (param_2 == 0xb0002) {
    empty_stub_function_103b76f0();
    empty_noop_stub_103b76f2();
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0xd0002,param_3);
    }
  }
  else if (param_2 == 0xa0014) {
    cls_105a7014_new((void *)auStack_14);
    copy_five_bytes_from_struct(*(int *)(param_1 + 0x20),auStack_14);
    uVar2 = (*(code *)0x10460bb2/*ROM*/)(auStack_14,0);
    *(uint32_t *)(param_1 + 0x3c) = uVar2;
    uVar2 = (*(code *)0x10460bb2/*ROM*/)(auStack_14,2);
    *(uint32_t *)(param_1 + 0x40) = uVar2;
    uVar2 = (*(code *)0x10460bb2/*ROM*/)(auStack_14,1);
    *(uint32_t *)(param_1 + 0x44) = uVar2;
    uVar2 = (*(code *)0x10460bb2/*ROM*/)(auStack_14,3);
    *(uint32_t *)(param_1 + 0x48) = uVar2;
    piVar1 = *(int **)(param_1 + 0x30);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0xd0004,0);
    }
    cls_105a7014_delete((void *)auStack_14,2);
  }
  return 1;
}
