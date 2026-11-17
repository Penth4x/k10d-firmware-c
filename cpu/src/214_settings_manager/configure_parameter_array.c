/* @k10d configure_parameter_array @ 0x104b2394
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a handle, applies three settings to an array of items, and configures four
 *   sub-parameters.
 * summary:
 *   The function calls alloc_two_byte_pair_record to obtain a handle stored at
 *   param_1+0x20. It iterates through an array of pointers in param_2 (counted by
 *   param_1+0x18), calling three functions at 0x104b3f8c, 0x104b3f9c, and 0x104b3fac for
 *   each element with parameters param_3, param_4, and param_5. Finally, it calls
 *   insert_entry_into_ring_buffer four times with values from a structure pointed to by
 *   param_1+0x1c, using indices (1,1), (1,2), (2,1), and (2,2). The handle is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
configure_parameter_array(int param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (uint32_t)alloc_two_byte_pair_record((uint8_t *)0x0,2,2);
  *(uint32_t *)(param_1 + 0x20) = uVar1;
  uVar3 = 0;
  alloc_and_zero_2d_array((byte *)__frv_reg_unset(4));
  if (*(char *)(param_1 + 0x18) != '\0') {
    do {
      iVar2 = uVar3 * 4;
      (*(code *)0x104b3f8c/*ROM*/)(*(uint32_t *)(param_2 + iVar2),param_3);
      (*(code *)0x104b3f9c/*ROM*/)(*(uint32_t *)(param_2 + iVar2),param_4);
      (*(code *)0x104b3fac/*ROM*/)(*(uint32_t *)(param_2 + iVar2),param_5);
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < *(byte *)(param_1 + 0x18));
  }
  insert_entry_into_ring_buffer((void *)(*(uint32_t *)(param_1 + 0x20)),**(uint32_t **)(param_1 + 0x1c),1,1);
  insert_entry_into_ring_buffer((void *)(*(uint32_t *)(param_1 + 0x20)),*(uint32_t *)(*(int *)(param_1 + 0x1c) + 4),1,2);
  insert_entry_into_ring_buffer((void *)(*(uint32_t *)(param_1 + 0x20)),*(uint32_t *)(*(int *)(param_1 + 0x1c) + 8),2,1);
  insert_entry_into_ring_buffer((void *)(*(uint32_t *)(param_1 + 0x20)),*(uint32_t *)(*(int *)(param_1 + 0x1c) + 0xc),2,2);
  return *(uint32_t *)(param_1 + 0x20);
}
