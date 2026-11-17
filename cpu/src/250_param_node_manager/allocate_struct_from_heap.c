/* @k10d allocate_struct_from_heap @ 0x104df49a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0xea24-byte block from the system heap and stores the pointer in the first
 *   field of the given struct.
 * summary:
 *   Initializes the second and third fields of the input struct to zero. Calls
 *   get_system_heap to obtain the heap descriptor, then calls mempool_get_block to allocate
 *   a 0xea24-byte block from pool 0. Stores the resulting pointer in the first field of the
 *   struct and returns true if the allocation succeeded.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool allocate_struct_from_heap(int *param_1)

{
  void *pvVar1;
  int iVar2;
  
  param_1[2] = 0;
  param_1[1] = 0;
  pvVar1 = (void *)get_system_heap();
  iVar2 = mempool_get_block(pvVar1,(void *)0xea24,0);
  *param_1 = iVar2;
  return iVar2 != 0;
}
