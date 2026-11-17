/* @k10d release_object_at_offset_0x1c_1046d800 @ 0x1046d800
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 157_sr_event_manager (unit names are model-proposed)
 * purpose:
 *   Releases the object pointer stored at offset 0x1c of the given structure.
 * summary:
 *   Reads a pointer from param_1 + 0x1c and passes it to debug_flag_writer_0x18, which
 *   likely performs a deallocation or cleanup. The function itself performs no other
 *   operations. The specific subsystem or object type is not determinable from the
 *   available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_at_offset_0x1c_1046d800(int param_1)

{
  debug_flag_writer_0x18(*(void **)(param_1 + 0x1c));
  return;
}
