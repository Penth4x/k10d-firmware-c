/* @k10d scan_short_array_for_nonzero @ 0x104c1502
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Scans a short array for non-zero entries and returns a bitmask of their indices.
 * summary:
 *   Iterates over the first 5 elements of the short array pointed to by param_2. For each
 *   index, it calls read_byte_at_offset_1051ed64 to check if the value is non-zero. If non-
 *   zero, it sets the corresponding bit in the returned 16-bit mask. The byte at
 *   param_1+0x1e controls whether the scan proceeds in ascending or descending order.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint scan_short_array_for_nonzero(int param_1,short *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iStack_c;
  
  uVar5 = 0;
  if ((*param_2 != 0) || (param_2[1] != 0)) {
    iVar3 = 0;
    iStack_c = 1;
    iVar2 = 5;
    do {
      iVar4 = iVar2;
      if (*(char *)(param_1 + 0x1e) != '\0') {
        iVar4 = iVar3;
      }
      cVar1 = read_byte_at_offset_1051ed64(param_2,iVar4);
      if (cVar1 != '\0') {
        uVar5 = 1 << ((byte)iVar4 & 0xf) | uVar5;
      }
      iVar4 = iVar3 + 1;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar4 = iVar2 + -1;
      }
      cVar1 = read_byte_at_offset_1051ed64(param_2,iVar4);
      if (cVar1 != '\0') {
        uVar5 = 1 << ((byte)iVar4 & 0xf) | uVar5;
      }
      iVar4 = iVar3 + 2;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar4 = iVar2 + -2;
      }
      cVar1 = read_byte_at_offset_1051ed64(param_2,iVar4);
      if (cVar1 != '\0') {
        uVar5 = 1 << ((byte)iVar4 & 0xf) | uVar5;
      }
      iVar3 = iVar3 + 3;
      iStack_c = iStack_c + -1;
      iVar2 = iVar2 + -3;
    } while (-1 < iStack_c);
  }
  return uVar5;
}
