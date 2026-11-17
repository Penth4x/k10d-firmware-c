/* @k10d lens_fw_update_step_1053db22 @ 0x1053db22
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Executes a single step of the lens firmware update sequence, conditionally triggering a
 *   follow-up action if the state is 4.
 * summary:
 *   Reads a pointer from offset 0x68 of the context object and passes it to
 *   iterate_struct_array_entries. If that call returns 0 and the state field at offset 0x48
 *   is 4, it calls send_swapped_word_to_device with the context and pointer. The module
 *   context indicates this is part of the lens CPU firmware update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void lens_fw_update_step_1053db22(int param_1)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 0x68);
  iVar1 = iterate_struct_array_entries((void *)param_1,puVar2);
  if ((iVar1 == 0) && (*(int *)(param_1 + 0x48) == 4)) {
    send_swapped_word_to_device(param_1,puVar2);
  }
  return;
}
