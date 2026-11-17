/* @k10d store_mapped_status_code_1049bebe @ 0x1049bebe
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 0-3 status code from a callee into a 1-4 value and stores it in an object field.
 * summary:
 *   Calls read_byte_from_struct_offset_104a8c54 with param_2 and 2 to retrieve a small
 *   integer status. The result is mapped: 0->1, 1->2, 2->3, 3->4, otherwise 0. This mapped
 *   value is written to offset 100 (0x64) of the object pointed to by the pointer at
 *   param_1+0x10. The specific camera subsystem or meaning of the status code is not
 *   determinable from the provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_mapped_status_code_1049bebe(int param_1,int param_2)

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
  else if (cVar2 == '\x02') {
    uVar1 = 3;
  }
  else if (cVar2 == '\x03') {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  *(uint32_t *)(*(int *)(param_1 + 0x10) + 100) = uVar1;
  return;
}
