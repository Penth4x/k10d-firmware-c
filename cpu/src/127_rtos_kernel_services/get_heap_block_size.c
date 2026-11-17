/* @k10d get_heap_block_size @ 0x1045812c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns the size of a heap-allocated block by reading the size field at offset 0x10 and
 *   adding the 0x500-byte header overhead.
 * summary:
 *   The function takes a pointer to a heap block header (param_1), reads the integer at
 *   offset 0x10, and adds 0x500 to it. This pattern is consistent with retrieving the user-
 *   visible size of a heap allocation where the allocator stores the payload size at a
 *   fixed offset and the total block size includes a 0x500-byte header/metadata region. It
 *   is a pure accessor with no side effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int get_heap_block_size(int param_1)

{
  return *(int *)(param_1 + 0x10) + 0x500;
}
