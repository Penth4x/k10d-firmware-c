/* @k10d select_mode_table_and_notify @ 0x1036d1ca
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 023_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Selects a mode-specific table pointer based on a mode byte and notifies a sub-object
 *   with the chosen index.
 * summary:
 *   Reads a one-byte mode selector at offset 0x6c of the object passed in param_1.
 *   Depending on the value (0, 1, 2, or other), it sets the pointer at offset 0x70 to one
 *   of three internal offsets (0xe4, 0x74, or 0x170) and determines a corresponding index
 *   (3, 2, or 4). It then calls write_two_bytes_at_offset with a sub-object at offset 0x1c
 *   and the selected index. The specific camera subsystem (e.g., exposure mode, AF mode) is
 *   not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_mode_table_and_notify(int param_1)

{
  char cVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  cVar1 = *(char *)(param_1 + 0x6c);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x70) = param_1 + 0xe4;
    uVar2 = 3;
    uVar3 = 3;
  }
  else if (cVar1 == '\x01') {
    *(int *)(param_1 + 0x70) = param_1 + 0x74;
    uVar2 = 2;
    uVar3 = 2;
  }
  else if (cVar1 == '\x02') {
    *(int *)(param_1 + 0x70) = param_1 + 0x170;
    uVar2 = 4;
    uVar3 = 4;
  }
  else {
    *(int *)(param_1 + 0x70) = param_1 + 0xe4;
    uVar2 = 3;
    uVar3 = 3;
  }
  write_two_bytes_at_offset(param_1 + 0x1c,uVar2,uVar3);
  return;
}
