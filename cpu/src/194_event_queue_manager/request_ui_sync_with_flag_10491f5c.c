/* @k10d request_ui_sync_with_flag_10491f5c @ 0x10491f5c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t request_ui_sync_with_flag_10491f5c(void *param_1,int param_2)

{
  int iVar1;
  
  empty_stub_104928e0();
  if (param_2 == 0) {
    iVar1 = 0x100;
  }
  else {
    iVar1 = 0x80;
  }
  ui_request_sync((int)param_1,iVar1);
  return 1;
}
