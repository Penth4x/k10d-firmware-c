/* @k10d check_flag_and_dispatch @ 0x000e1418
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Tests bit 5 of a global flag and conditionally calls two helper functions before
 *   returning another global value.
 * summary:
 *   The function checks if bit 5 (0x20) is set in DAT_0003c127. If set, it calls
 *   read_bytes_if_enabled with arguments 0x33, a pointer to DAT_0003c100, and 0x10,
 *   followed by a call to set_flag_if_byte_equals_8. It always returns the value stored in
 *   DAT_0003c122. The specific roles of the callees and the data globals are not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t check_flag_and_dispatch(void)

{
  if ((DAT_0003c127 & 0x20) != 0) {
    read_bytes_if_enabled(0x33,(void *)&DAT_0003c100,0x10);
    set_flag_if_byte_equals_8();
  }
  return DAT_0003c122;
}
