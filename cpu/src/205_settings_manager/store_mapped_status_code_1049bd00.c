/* @k10d store_mapped_status_code_1049bd00 @ 0x1049bd00
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 2-bit status from a callee into a 0/1/2 code and writes it to an object field.
 * summary:
 *   Calls read_byte_from_struct_offset_104a8c54 with param_2 and 2, then converts the
 *   returned byte: 0 becomes 1, 1 becomes 2, and any other value becomes 0. The resulting
 *   code is stored at offset 0x58 of the object pointed to by *(param_1 + 0x10). The
 *   callee's role is unknown, so the specific subsystem is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_mapped_status_code_1049bd00(int param_1,int param_2)

{
  uint32_t uVar1;
  char cVar2;
  
  cVar2 = read_byte_from_struct_offset_104a8c54(param_2,2);
  if (cVar2 == '\0') {
    uVar1 = 1;
  }
  else if (cVar2 == '\x01') {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  *(uint32_t *)(*(int *)(param_1 + 0x10) + 0x58) = uVar1;
  return;
}
