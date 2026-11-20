/* @k10d initialize_subsystem_objects @ 0x1047d9ae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 169_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_subsystem_objects(cls_105aadb0 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)get_or_create_sram_object_1047dd7a();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)((vtbl_entry*)(*piVar1))[3].adj + (int)piVar1,0);
  queue_event_with_payload(piVar1,0,(char *)0x105aade0/*ROM*/);
  queue_event_with_payload(piVar1,2,(char *)0x105aade4/*ROM*/);
  queue_event_with_payload(piVar1,3,(char *)0x105aade8/*ROM*/);
  queue_event_with_payload(piVar1,4,(char *)0x105aadec/*ROM*/);
  queue_event_with_payload(piVar1,5,(char *)0x105aadf0/*ROM*/);
  piVar1 = (int *)get_or_create_sram_object_10478100();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_1047a73e();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_1047c910();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_1047d00a();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  iVar2 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  return;
}
