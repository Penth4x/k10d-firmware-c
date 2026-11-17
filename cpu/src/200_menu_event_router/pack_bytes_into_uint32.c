/* @k10d pack_bytes_into_uint32 @ 0x10496964
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Packs four byte-sized values into a single 32-bit integer in big-endian order.
 * summary:
 *   The function takes four parameters (param_2 through param_5) and combines them into a
 *   32-bit value where param_5 is the most significant byte and param_2 is the least
 *   significant byte. It is called as virtual method slot 2 by several classes, suggesting
 *   it is part of a common interface for data serialization or packet construction. No
 *   other callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint pack_bytes_into_uint32(void *param_1,uint param_2,int param_3,int param_4,byte param_5)

{
  return (uint)param_5 << 0x18 | param_4 << 0x10 | param_3 << 8 | param_2;
}
