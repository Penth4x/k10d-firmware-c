/* @k10d read_table_entry_if_present @ 0x104bd4c2
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Indexes a table of 0xb34-byte records and calls a handler on the first record whose
 *   first two shorts are non-zero.
 * summary:
 *   Computes a pointer into an array of 0xb34-byte records using a base object, a fixed
 *   offset 0x2118, and a count stored at offset 0x8d0. If the first two shorts of the
 *   selected record are both zero it returns 0; otherwise it calls
 *   read_byte_at_offset_1051ed64 with the record pointer and param_2 and returns that
 *   result. The role of the records and the callee is unknown, so no camera-subsystem label
 *   is applied.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_table_entry_if_present(int param_1,int param_2)

{
  short *psVar1;
  uint8_t uVar2;
  
  uVar2 = 0;
  psVar1 = (short *)(param_1 + 0x2118 + *(int *)(param_1 + 0x8d0) * 0xb34);
  if ((*psVar1 != 0) || (psVar1[1] != 0)) {
    uVar2 = read_byte_at_offset_1051ed64(psVar1,param_2);
  }
  return uVar2;
}
