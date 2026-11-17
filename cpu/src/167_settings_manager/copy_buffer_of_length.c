/* @k10d copy_buffer_of_length @ 0x10477b38
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a byte buffer from a global pointer into a destination offset by param_1.
 * summary:
 *   Reads the length from count_string_bytes applied to global pcRam8000ff34, then loops
 *   copying that many bytes from pcRam8000ff34 into memory at param_1 + 8. The destination
 *   is a byte-addressed region offset by the caller-supplied param_1. No camera-specific
 *   subsystem is evident from the code or the single unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_buffer_of_length(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = pcRam8000ff34;
  iVar2 = count_string_bytes(pcRam8000ff34);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *(char *)(iVar2 + param_1 + 8) = pcVar1[iVar2];
  }
  return;
}
