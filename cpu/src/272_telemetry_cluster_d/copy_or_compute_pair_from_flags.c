/* @k10d copy_or_compute_pair_from_flags @ 0x10511b56
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Copies two 16-bit values from offsets 0x108/0x10a to 0x124/0x126 if flags at 0x2a/0x2b
 *   match, otherwise calls helpers to compute them.
 * summary:
 *   Checks two byte flags at param_1+0x2a and param_1+0x2b. If they are 0x00 and 0x01
 *   respectively, it directly copies two 16-bit values from param_1+0x108 and param_1+0x10a
 *   to param_1+0x124 and param_1+0x126. Otherwise, it calls settings_getter with
 *   param_1+0x2ac and 0x52, then passes the result and the destination pointers to
 *   select_two_parameter_values_by_index. The specific subsystem is not identifiable from
 *   the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_or_compute_pair_from_flags(int param_1)

{
  byte bVar1;
  uintptr_t sp;
  uint8_t uStack_9;
  
  if ((*(char *)(param_1 + 0x2a) == '\0') && (*(char *)(param_1 + 0x2b) == '\x01')) {
    *(uint16_t *)(param_1 + 0x124) = *(uint16_t *)(param_1 + 0x108);
    *(uint16_t *)(param_1 + 0x126) = *(uint16_t *)(param_1 + 0x10a);
  }
  else {
    bVar1 = settings_getter(param_1 + 0x2ac,0x52);
    select_two_parameter_values_by_index(&uStack_9,(uint)bVar1,(uint16_t *)(param_1 + 0x124),
                 (uint16_t *)(param_1 + 0x126));
  }
  return;
}
