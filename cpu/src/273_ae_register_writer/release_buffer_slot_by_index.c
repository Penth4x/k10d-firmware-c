/* @k10d release_buffer_slot_by_index @ 0x10515fce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Releases a heap-allocated buffer at a specific offset in param_2 and invokes a virtual
 *   callback on the object.
 * summary:
 *   Switches on param_3 (1-14) to select a buffer pointer from param_2 (offsets 0x34-0x5c).
 *   For cases 1-3, it calls specific helper functions
 *   (forward_two_params_with_offset_10515f7e/92/a6) instead of releasing memory. For cases
 *   4-14, it releases the buffer via mempool_release_block. In all cases, it performs a
 *   virtual call on the object pointed to by param_2+0x8d4, using a vtable offset derived
 *   from the case index. Finally, for cases 4-14, it calls invoke_dual_object_slot2 with a
 *   constant 0xf0000b and the case index.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10515fe2) overlaps instruction at (ram,0x10515fe0)
    */

void release_buffer_slot_by_index(int param_1,int param_2,uint32_t param_3)

{
  void *pvVar1;
  uint32_t uVar2;
  
  switch(param_3) {
  case 1:
    if (*(int *)(param_2 + 0x3c) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xf4) == 0) {
      return;
    }
    forward_two_params_with_offset_10515f7e(param_1,*(int *)(param_2 + 0x3c));
    (**(code **)(*(int *)(param_2 + 0x8d4) + 0x24))
              (*(short *)(*(int *)(param_2 + 0x8d4) + 0x20) + param_2,0);
    return;
  case 2:
    if (*(int *)(param_2 + 0x50) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x174) == 0) {
      return;
    }
    forward_two_params_with_offset_10515f92(param_1, __frv_reg_unset(5));
    (**(code **)(*(int *)(param_2 + 0x8d4) + 0x4c))
              (*(short *)(*(int *)(param_2 + 0x8d4) + 0x48) + param_2,0);
    return;
  case 3:
    if (*(int *)(param_2 + 0x54) == 0) {
      return;
    }
    if (*(int *)(param_1 + 500) == 0) {
      return;
    }
    call_subroutine_with_offset_10515fa6(param_1, __frv_reg_unset(5));
    (**(code **)(*(int *)(param_2 + 0x8d4) + 0x54))
              (*(short *)(*(int *)(param_2 + 0x8d4) + 0x50) + param_2,0);
    return;
  case 4:
    if (*(int *)(param_2 + 0x34) == 0) {
      return;
    }
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,*(void **)(param_2 + 0x34));
    (**(code **)(*(int *)(param_2 + 0x8d4) + 0x14))
              (*(short *)(*(int *)(param_2 + 0x8d4) + 0x10) + param_2,0);
    uVar2 = 4;
    break;
  case 5:
    if (*(int *)(param_2 + 0x38) == 0) {
      return;
    }
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,*(void **)(param_2 + 0x38));
    (**(code **)(*(int *)(param_2 + 0x8d4) + 0x1c))
              (*(short *)(*(int *)(param_2 + 0x8d4) + 0x18) + param_2,0);
    uVar2 = 5;
    break;
  case 6:
    if (*(int *)(param_2 + 0x3c) == 0) {
      return;
    }
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,*(void **)(param_2 + 0x3c));
    (**(code **)(*(int *)(param_2 + 0x8d4) + 0x24))
              (*(short *)(*(int *)(param_2 + 0x8d4) + 0x20) + param_2,0);
    uVar2 = 6;
    break;
  case 7:
    if (*(int *)(param_2 + 0x40) == 0) {
      return;
    }
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,*(void **)(param_2 + 0x40));
    (**(code **)(*(int *)(param_2 + 0x8d4) + 0x2c))
              (*(short *)(*(int *)(param_2 + 0x8d4) + 0x28) + param_2,0);
    uVar2 = 7;
    break;
  case 8:
    if (*(int *)(param_2 + 0x44) == 0) {
      return;
    }
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,*(void **)(param_2 + 0x44));
    (**(code **)(*(int *)(param_2 + 0x8d4) + 0x34))
              (*(short *)(*(int *)(param_2 + 0x8d4) + 0x30) + param_2,0);
    uVar2 = 8;
    break;
  case 9:
    if (*(int *)(param_2 + 0x48) == 0) {
      return;
    }
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,*(void **)(param_2 + 0x48));
    (**(code **)(*(int *)(param_2 + 0x8d4) + 0x3c))
              (*(short *)(*(int *)(param_2 + 0x8d4) + 0x38) + param_2,0);
    uVar2 = 9;
    break;
  case 10:
    if (*(int *)(param_2 + 0x4c) == 0) {
      return;
    }
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,*(void **)(param_2 + 0x4c));
    (**(code **)(*(int *)(param_2 + 0x8d4) + 0x44))
              (*(short *)(*(int *)(param_2 + 0x8d4) + 0x40) + param_2,0);
    uVar2 = 10;
    break;
  case 0xb:
    if (*(int *)(param_2 + 0x50) == 0) {
      return;
    }
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,*(void **)(param_2 + 0x50));
    (**(code **)(*(int *)(param_2 + 0x8d4) + 0x4c))
              (*(short *)(*(int *)(param_2 + 0x8d4) + 0x48) + param_2,0);
    uVar2 = 0xb;
    break;
  case 0xc:
    if (*(int *)(param_2 + 0x54) == 0) {
      return;
    }
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,*(void **)(param_2 + 0x54));
    (**(code **)(*(int *)(param_2 + 0x8d4) + 0x54))
              (*(short *)(*(int *)(param_2 + 0x8d4) + 0x50) + param_2,0);
    uVar2 = 0xc;
    break;
  case 0xd:
    if (*(int *)(param_2 + 0x58) == 0) {
      return;
    }
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,*(void **)(param_2 + 0x58));
    (**(code **)(*(int *)(param_2 + 0x8d4) + 0x5c))
              (*(short *)(*(int *)(param_2 + 0x8d4) + 0x58) + param_2,0);
    uVar2 = 0xd;
    break;
  case 0xe:
    if (*(int *)(param_2 + 0x5c) == 0) {
      return;
    }
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,*(void **)(param_2 + 0x5c));
    (**(code **)(*(int *)(param_2 + 0x8d4) + 100))
              (*(short *)(*(int *)(param_2 + 0x8d4) + 0x60) + param_2,0);
    uVar2 = 0xe;
    break;
  default:
    return;
  }
  invoke_dual_object_slot2(param_1,0xf0000b,uVar2);
  return;
}
