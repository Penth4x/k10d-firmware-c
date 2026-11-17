/* @k10d reset_all_subobject_states @ 0x104fbaa8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on each sub-object pointer stored in the struct, passing 0
 *   except for one object which receives param_2.
 * summary:
 *   The function iterates through 32 pointer fields within the 0x80-byte object (param_1),
 *   dereferencing each to obtain a vtable and calling virtual slot 2 (offset 0x1c) with a
 *   this-adjustment. For 31 of these calls, the second argument is 0. For one call, it uses
 *   the object returned by get_or_create_sram_object_104ecffc and passes param_2 as the
 *   second argument. The function returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t reset_all_subobject_states(void *param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = **(int **)((int)param_1 + 0x14);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x14) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x28);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x28) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x48);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x48) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x74);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x74) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  piVar1 = (int *)get_or_create_sram_object_104ecffc();
  (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),param_2);
  iVar2 = **(int **)((int)param_1 + 8);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 8) + (int)*(short *)(iVar2 + 0x18),0);
  iVar2 = **(int **)((int)param_1 + 0x10);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x10) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x1c);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x1c) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x24);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x24) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x2c);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x2c) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x30);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x6c);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x6c) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x38);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x38) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x40);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x40) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x5c);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x5c) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x60);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x60) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x58);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x58) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x78);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x78) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x7c);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x7c) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 4);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 4) + (int)*(short *)(iVar2 + 0x18),0);
  iVar2 = **(int **)((int)param_1 + 0xc);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0xc) + (int)*(short *)(iVar2 + 0x18),0);
  iVar2 = **(int **)((int)param_1 + 0x3c);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x3c) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x20);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x20) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x4c);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x4c) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x18);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x18) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 100);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 100) + (int)*(short *)(iVar2 + 0x18),0);
  iVar2 = **(int **)((int)param_1 + 0x34);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x34) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x44);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x44) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x50);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x50) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x54);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x54) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  iVar2 = **(int **)((int)param_1 + 0x68);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 0x68) + (int)*(short *)(iVar2 + 0x18),0)
  ;
  return 1;
}
