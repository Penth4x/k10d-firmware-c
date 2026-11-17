/* @k10d collect_eight_values_and_send @ 0x104a6872
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads eight 16-bit values from a struct, calls a helper for each, then sends the
 *   collected data to a destination.
 * summary:
 *   The function iterates over eight consecutive 16-bit fields (offsets 0x10-0x1e) within a
 *   sub-structure pointed to by *(param_1 + 100). For each field, it calls
 *   write_two_byte_value_104a7246 with the value and a flag of 1, storing results in local
 *   stack variables. It then calls two additional helpers (query_status_by_index,
 *   query_parameter_by_index) to get two more bytes, and finally calls
 *   copy_bytes_to_struct_field with param_2, the first collected value, and a size of 0x12
 *   (18). The specific subsystem is not identifiable from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void collect_eight_values_and_send(int param_1,int param_2)

{
  uintptr_t sp;
  uint8_t auStack_1a [2];
  uint8_t auStack_18 [2];
  uint8_t auStack_16 [2];
  uint8_t auStack_14 [2];
  uint8_t auStack_12 [2];
  uint8_t auStack_10 [2];
  uint8_t auStack_e [2];
  uint8_t auStack_c [2];
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  write_two_byte_value_104a7246(param_1,auStack_1a,*(uint16_t *)(*(int *)(param_1 + 100) + 0x10),1);
  write_two_byte_value_104a7246(param_1,auStack_18,*(uint16_t *)(*(int *)(param_1 + 100) + 0x12),1);
  write_two_byte_value_104a7246(param_1,auStack_16,*(uint16_t *)(*(int *)(param_1 + 100) + 0x14),1);
  write_two_byte_value_104a7246(param_1,auStack_14,*(uint16_t *)(*(int *)(param_1 + 100) + 0x16),1);
  write_two_byte_value_104a7246(param_1,auStack_12,*(uint16_t *)(*(int *)(param_1 + 100) + 0x18),1);
  write_two_byte_value_104a7246(param_1,auStack_10,*(uint16_t *)(*(int *)(param_1 + 100) + 0x1a),1);
  write_two_byte_value_104a7246(param_1,auStack_e,*(uint16_t *)(*(int *)(param_1 + 100) + 0x1c),1);
  write_two_byte_value_104a7246(param_1,auStack_c,*(uint16_t *)(*(int *)(param_1 + 100) + 0x1e),1);
  uStack_a = query_status_by_index(param_1);
  uStack_9 = query_parameter_by_index(param_1);
  copy_bytes_to_struct_field(param_2,auStack_1a,0x12);
  return;
}
