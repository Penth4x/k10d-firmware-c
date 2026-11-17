/* @k10d clear_two_halfword_fields @ 0x105124dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Writes zero to two consecutive 16-bit fields at offsets 0x678 and 0x67a of an object in
 *   r8.
 * summary:
 *   The function takes an implicit object pointer in r8 and clears two adjacent halfword
 *   members at offsets 0x678 and 0x67a. No callees are invoked and no other side effects
 *   are visible. The role of the object and these specific fields is not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_two_halfword_fields(void)

{
  int caller_r8;
  
  *(uint16_t *)(caller_r8 + 0x678) = 0;
  *(uint16_t *)(caller_r8 + 0x67a) = 0;
  return;
}
