/* @k10d allocate_two_element_array @ 0x104b1f74
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a two-element array of pointers, each pointing to a newly created object of
 *   size param_3*param_4.
 * summary:
 *   The function allocates memory for an array of two pointers and a data buffer of size
 *   param_3*param_4*4 bytes. It stores the data buffer pointer at offset 0x38 of param_1.
 *   It then loops twice, calling cls_1061e14c_new to create two objects, passing the data
 *   buffer and dimensions as arguments, and stores the resulting pointers in the allocated
 *   array. The function returns the pointer to the array of object pointers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_two_element_array(void *param_1,uint16_t param_2,int param_3,int param_4)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  int iVar4;
  uintptr_t sp;
  uint16_t auStack_c [2];
  
  iVar1 = heap_alloc_2(8);
  heap_alloc_2(8);
  auStack_c[1] = (uint16_t)param_3;
  auStack_c[0] = param_2;
  uVar2 = (uint32_t)heap_alloc_2(param_4 * param_3 * 4);
  *(uint32_t *)((int)param_1 + 0x38) = uVar2;
  uVar3 = 0;
  do {
    iVar4 = uVar3 * 4;
    uVar2 = (uint32_t)cls_1061e14c_new(0,auStack_c[uVar3],*(uint32_t *)((int)param_1 + 0x38),
                             param_4 * param_3);
    uVar3 = uVar3 + 1 & 0xff;
    *(uint32_t *)(iVar1 + iVar4) = uVar2;
  } while (uVar3 < 2);
  return iVar1;
}
