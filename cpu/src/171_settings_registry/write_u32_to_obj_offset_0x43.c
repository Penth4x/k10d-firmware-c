/* @k10d write_u32_to_obj_offset_0x43 @ 0x1047f948
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 171_settings_registry (unit names are model-proposed)
 * purpose:
 *   Writes a 32-bit value into a 4-byte field at offset 0x43 of the object pointed to by
 *   the first argument.
 * summary:
 *   The function dereferences param_1 to get an object pointer and stores the four bytes of
 *   param_2 (little-endian) at offsets 0x43 through 0x46 of that object. It has no callees
 *   and no MMIO writes, so it is a plain in-memory struct field update. The caller is a
 *   virtual method slot 2 of class cls_105aaf90, but the specific subsystem role of this
 *   field is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_u32_to_obj_offset_0x43(int *param_1,uint32_t param_2)

{
  *(char *)(*param_1 + 0x43) = (char)param_2;
  *(char *)(*param_1 + 0x44) = (char)((uint)param_2 >> 8);
  *(char *)(*param_1 + 0x45) = (char)((uint)param_2 >> 0x10);
  *(char *)(*param_1 + 0x46) = (char)((uint)param_2 >> 0x18);
  return;
}
