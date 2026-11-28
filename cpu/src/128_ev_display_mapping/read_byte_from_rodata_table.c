/* @k10d read_byte_from_rodata_table @ 0x1045ae82
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * purpose:
 *   Returns the byte at index param_2 from a read-only data table at 0x105a4676.
 * summary:
 *   The function performs a simple array lookup, returning the byte at offset param_2 from
 *   the global data block starting at 0x105a4676. It ignores param_1 entirely. The role of
 *   the data table is unknown, and no callees are present to provide context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_from_rodata_table(uint32_t unused_param,int index)

{
  return (DAT_105a4676/*ROM*/)[index];
}
