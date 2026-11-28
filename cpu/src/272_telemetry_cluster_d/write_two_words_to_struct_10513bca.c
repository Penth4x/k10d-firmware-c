/* @k10d write_two_words_to_struct_10513bca @ 0x10513bca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_words_to_struct_10513bca(void *base_off,int idx,uint16_t lo_half,uint16_t hi_half)

{
  *(uint16_t *)(idx * 2 + (int)base_off) = lo_half;
  *(uint16_t *)((int)base_off + idx * 2 + 0xa0) = hi_half;
  return;
}
