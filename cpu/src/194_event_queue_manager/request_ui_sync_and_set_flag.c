/* @k10d request_ui_sync_and_set_flag @ 0x10492216
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unknown helper, posts a UI sync request with code 2, and sets byte offset 0x1d
 *   of the context to 1.
 * summary:
 *   The function takes a context pointer, calls empty_stub_104928e0, then calls
 *   ui_request_sync with the context and code 2. It sets the byte at offset 0x1d of the
 *   context to 1 and returns 1. The role of empty_stub_104928e0 is unknown, and the
 *   specific meaning of the context structure is not determinable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t request_ui_sync_and_set_flag(void *param_1)

{
  empty_stub_104928e0();
  ui_request_sync((int)param_1,2);
  *(uint8_t *)((int)param_1 + 0x1d) = 1;
  return 1;
}
