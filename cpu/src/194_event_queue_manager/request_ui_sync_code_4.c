/* @k10d request_ui_sync_code_4 @ 0x10491f8c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t request_ui_sync_code_4(void *param_1)

{
  empty_stub_104928e0();
  ui_request_sync((int)param_1,4);
  check_kernel_call_success_10459fea();
  return 1;
}
