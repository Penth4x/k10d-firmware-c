/* @k10d process_unhandled_list_entries @ 0x10538292
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Walks a linked list and calls a handler for each node whose flag at offset 0x10 is not
 *   set.
 * summary:
 *   The function reads a list head from offset 0x64 of the context object in param_1. It
 *   iterates through nodes, checking if the node's flag at offset 0x10 is 1. If not, it
 *   calls validate_and_swap_block_fields with the context, a pointer from the node's offset
 *   0x18, and the node's offset 0x08. On success, it sets the node's flag to 1. The loop
 *   continues until the list is empty or an error is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_unhandled_list_entries(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)((int)param_1 + 100) + 0x14);
  do {
    if (iVar2 == 0) {
      return 0;
    }
    if ((*(int *)(*(int *)(iVar2 + 8) + 8) != 1) && (*(int *)(iVar2 + 0x10) != 1)) {
      iVar1 = validate_and_swap_block_fields(param_1,(int *)(*(int *)(iVar2 + 8) + 0x10),(void *)(iVar2 + 8));
      if (iVar1 != 0) {
        return iVar1;
      }
      *(uint32_t *)(iVar2 + 0x10) = 1;
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}
