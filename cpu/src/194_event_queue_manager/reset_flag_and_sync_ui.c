/* @k10d reset_flag_and_sync_ui @ 0x10492232
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Clears a byte at offset 0x1d in the object, calls two helpers, and posts a UI sync
 *   request with code 0x10.
 * summary:
 *   The function first calls empty_stub_104928e0, then writes 0 to the byte at param_1 +
 *   0x1d. It subsequently calls call_subroutine_on_field_0x18_104924d4 with the object
 *   pointer and finally invokes ui_request_sync with code 0x10. It returns 1
 *   unconditionally.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t reset_flag_and_sync_ui(int param_1)

{
  empty_stub_104928e0();
  *(uint8_t *)(param_1 + 0x1d) = 0;
  call_subroutine_on_field_0x18_104924d4(param_1);
  ui_request_sync(param_1,0x10);
  return 1;
}
