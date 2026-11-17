/* @k10d write_two_words_to_struct_10513bca @ 0x10513bca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_words_to_struct_10513bca(void *param_1,int param_2,uint16_t param_3,uint16_t param_4)

{
  *(uint16_t *)(param_2 * 2 + (int)param_1) = param_3;
  *(uint16_t *)((int)param_1 + param_2 * 2 + 0xa0) = param_4;
  return;
}
