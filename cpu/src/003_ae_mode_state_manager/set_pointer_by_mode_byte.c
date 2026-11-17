/* @k10d set_pointer_by_mode_byte @ 0x103640a6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Selects a struct offset based on a mode byte and stores the resulting pointer, then
 *   calls a helper with the mode value.
 * summary:
 *   Reads the byte at offset 0x6c of the object pointed to by param_1. Depending on whether
 *   it is 0, 1, 2, or other, it sets the pointer at offset 0x70 to param_1+0xd8,
 *   param_1+0x74, or param_1+0x144 respectively. It then calls write_two_bytes_at_offset
 *   with param_1+0x1c and the corresponding integer value (3, 2, or 4). The specific camera
 *   subsystem is not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_pointer_by_mode_byte(int param_1)

{
  char cVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  cVar1 = *(char *)(param_1 + 0x6c);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x70) = param_1 + 0xd8;
    uVar2 = 3;
    uVar3 = 3;
  }
  else if (cVar1 == '\x01') {
    *(int *)(param_1 + 0x70) = param_1 + 0x74;
    uVar2 = 2;
    uVar3 = 2;
  }
  else if (cVar1 == '\x02') {
    *(int *)(param_1 + 0x70) = param_1 + 0x144;
    uVar2 = 4;
    uVar3 = 4;
  }
  else {
    *(int *)(param_1 + 0x70) = param_1 + 0xd8;
    uVar2 = 3;
    uVar3 = 3;
  }
  write_two_bytes_at_offset(param_1 + 0x1c,uVar2,uVar3);
  return;
}
