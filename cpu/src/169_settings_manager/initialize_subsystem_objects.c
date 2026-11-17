/* @k10d initialize_subsystem_objects @ 0x1047d9ae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 169_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_subsystem_objects(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)get_or_create_sram_object_1047dd7a();
  (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0);
  queue_event_with_payload(piVar1,0,(char *)0x105aade0/*ROM*/);
  queue_event_with_payload(piVar1,2,(char *)0x105aade4/*ROM*/);
  queue_event_with_payload(piVar1,3,(char *)0x105aade8/*ROM*/);
  queue_event_with_payload(piVar1,4,(char *)0x105aadec/*ROM*/);
  queue_event_with_payload(piVar1,5,(char *)0x105aadf0/*ROM*/);
  piVar1 = (int *)get_or_create_sram_object_10478100();
  (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),0);
  piVar1 = (int *)get_or_create_singleton_object_1047a73e();
  (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),0);
  piVar1 = (int *)get_or_create_singleton_object_1047c910();
  (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),0);
  piVar1 = (int *)get_or_create_singleton_object_1047d00a();
  (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),0);
  iVar2 = **(int **)((int)param_1 + 4);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 4) + (int)*(short *)(iVar2 + 0x18),0);
  return;
}
