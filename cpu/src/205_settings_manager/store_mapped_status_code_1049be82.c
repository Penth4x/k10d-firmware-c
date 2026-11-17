/* @k10d store_mapped_status_code_1049be82 @ 0x1049be82
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 0-2 status byte from a callee into a 1-3 code and writes it to an object field.
 * summary:
 *   Calls read_byte_from_struct_offset_104a8c54 with param_2 and 1, then converts the
 *   returned byte (0,1,2) to an integer (1,2,3) or 0 for other values. The result is stored
 *   at offset 0x60 of the object pointed to by the pointer at param_1+0x10. The specific
 *   camera subsystem role is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_mapped_status_code_1049be82(int param_1,int param_2)

{
  uint32_t uVar1;
  char cVar2;
  
  cVar2 = read_byte_from_struct_offset_104a8c54(param_2,1);
  if (cVar2 == '\0') {
    uVar1 = 1;
  }
  else if (cVar2 == '\x01') {
    uVar1 = 2;
  }
  else if (cVar2 == '\x02') {
    uVar1 = 3;
  }
  else {
    uVar1 = 0;
  }
  *(uint32_t *)(*(int *)(param_1 + 0x10) + 0x60) = uVar1;
  return;
}
