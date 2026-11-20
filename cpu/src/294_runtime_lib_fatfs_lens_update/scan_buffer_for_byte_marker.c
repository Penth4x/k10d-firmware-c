/* @k10d scan_buffer_for_byte_marker @ 0x10537b3c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Scans a 256-byte buffer in 0x80-byte steps for a 0x01 byte and returns its address or
 *   an error code.
 * summary:
 *   Checks if the global buffer at _DAT_80014980 is NULL; if so, returns 0xfffffda7.
 *   Otherwise, iterates through the buffer at offsets 0x00 and 0x80 checking for a byte
 *   value of 0x01. If found, stores the pointer to that byte in *param_1 and returns 0. If
 *   not found, stores 0 in *param_1 and returns 0xffffffed. The function performs a simple
 *   memory scan without any specific lens or firmware logic visible in the code itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t scan_buffer_for_byte_marker(uint32_t *param_1)

{
  char *pcVar1;
  uint32_t uVar2;
  int iVar3;
  
  if (_DAT_80014980/*SDRAM*/ == 0) {
    uVar2 = 0xfffffda7;
  }
  else {
    iVar3 = 0;
    do {
      pcVar1 = (char *)((char*)_DAT_80014980/*SDRAM*/ + iVar3);
      *param_1 = (uintptr_t)(pcVar1);
      if (*pcVar1 == '\x01') {
        return 0;
      }
      iVar3 = iVar3 + 0x80;
    } while (iVar3 < 0x100);
    *param_1 = 0;
    uVar2 = 0xffffffed;
  }
  return uVar2;
}
