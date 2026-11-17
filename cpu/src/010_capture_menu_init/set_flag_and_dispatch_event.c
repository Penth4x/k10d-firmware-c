/* @k10d set_flag_and_dispatch_event @ 0x103681d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 010_capture_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_dispatch_event(void *param_1,int param_2)

{
  int iVar1;
  
  *(uint32_t *)((int)param_1 + 0x14) = 1;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 2;
  }
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,0x15,iVar1,(uint)(param_2 != 0),1);
  call_helper_on_struct_field_1036c46c();
  call_helper_on_struct_field_1036c41a(param_1,(void *)0x80018060/*SDRAM*/,1);
  return;
}
