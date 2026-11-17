/* @k10d compute_pointer_offsets_and_init_struct @ 0x105129e6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Computes a series of pointer offsets from a base field and initializes a large struct
 *   region with derived values and constants.
 * summary:
 *   The function branches on two byte flags at offsets 0x2a and 0x2b to determine the
 *   number of offset calculations. It repeatedly calls align_down_to_32_bytes with the
 *   object pointer and an accumulated offset (starting from field 0x54 and adding values
 *   from fields 0x858, 0x860, 0x86c, or 0x130) to compute new pointers, storing them in
 *   fields 0xdc through 0xf0. It then populates a large block of memory starting at offset
 *   0x774 with these computed pointers, other fields from the object, and hardcoded
 *   constants (1, 4, 0). The callee align_down_to_32_bytes is not named, but its usage
 *   suggests it performs a pointer adjustment or lookup based on the provided offset.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_pointer_offsets_and_init_struct(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  if ((*(char *)(param_1 + 0x2a) == '\0') && (*(char *)(param_1 + 0x2b) == '\x01')) {
    iVar1 = align_down_to_32_bytes(param_1,*(uint32_t *)(param_1 + 0x54));
    *(int *)(param_1 + 0xe4) = iVar1;
    iVar1 = align_down_to_32_bytes(param_1,iVar1 + *(int *)(param_1 + 0x860));
    *(int *)(param_1 + 0xe0) = iVar1;
    iVar1 = align_down_to_32_bytes(param_1,iVar1 + *(int *)(param_1 + 0x858));
    *(int *)(param_1 + 0xf0) = iVar1;
    uVar2 = align_down_to_32_bytes(param_1,iVar1 + *(int *)(param_1 + 0x86c));
    *(uint32_t *)(param_1 + 0xe8) = uVar2;
    uVar2 = align_down_to_32_bytes(param_1,*(uint32_t *)(param_1 + 0x54));
    iVar1 = 0xdc;
  }
  else if ((*(char *)(param_1 + 0x2a) == '\x01') && (*(char *)(param_1 + 0x2b) == '\x01')) {
    iVar1 = align_down_to_32_bytes(param_1,*(uint32_t *)(param_1 + 0x54));
    *(int *)(param_1 + 0xe4) = iVar1;
    iVar1 = align_down_to_32_bytes(param_1,iVar1 + *(int *)(param_1 + 0x860));
    *(int *)(param_1 + 0xe0) = iVar1;
    iVar1 = align_down_to_32_bytes(param_1,iVar1 + *(int *)(param_1 + 0x858));
    *(int *)(param_1 + 0xf0) = iVar1;
    iVar1 = align_down_to_32_bytes(param_1,iVar1 + *(int *)(param_1 + 0x86c));
    *(int *)(param_1 + 0xdc) = iVar1;
    uVar2 = align_down_to_32_bytes(param_1,iVar1 + *(int *)(param_1 + 0x130));
    iVar1 = 0xe8;
  }
  else {
    iVar1 = align_down_to_32_bytes(param_1,*(uint32_t *)(param_1 + 0x54));
    *(int *)(param_1 + 0xe4) = iVar1;
    iVar1 = align_down_to_32_bytes(param_1,iVar1 + *(int *)(param_1 + 0x860));
    *(int *)(param_1 + 0xe0) = iVar1;
    iVar1 = align_down_to_32_bytes(param_1,iVar1 + *(int *)(param_1 + 0x858));
    *(int *)(param_1 + 0xf0) = iVar1;
    uVar2 = align_down_to_32_bytes(param_1,iVar1 + *(int *)(param_1 + 0x86c));
    *(uint32_t *)(param_1 + 0xdc) = uVar2;
    uVar2 = align_down_to_32_bytes(param_1,*(uint32_t *)(param_1 + 0x54));
    iVar1 = 0xe8;
  }
  *(uint32_t *)(iVar1 + param_1) = uVar2;
  *(uint32_t *)(param_1 + 0x774) = *(uint32_t *)(param_1 + 0xdc);
  *(uint32_t *)(param_1 + 0x778) = *(uint32_t *)(param_1 + 300);
  *(uint32_t *)(param_1 + 0x77c) = *(uint32_t *)(param_1 + 0x130);
  *(uint32_t *)(param_1 + 0x784) = 1;
  *(uint16_t *)(param_1 + 0x788) = 4;
  *(uint32_t *)(param_1 + 0x780) = 0;
  *(uint32_t *)(param_1 + 0x790) = *(uint32_t *)(param_1 + 0xe0);
  *(uint32_t *)(param_1 + 0x794) = *(uint32_t *)(param_1 + 0x854);
  *(uint32_t *)(param_1 + 0x798) = *(uint32_t *)(param_1 + 0x858);
  *(uint32_t *)(param_1 + 0x7a0) = 1;
  *(uint16_t *)(param_1 + 0x7a4) = 0;
  *(uint32_t *)(param_1 + 0x79c) = 0;
  *(uint32_t *)(param_1 + 0x7ac) = *(uint32_t *)(param_1 + 0xe4);
  *(uint32_t *)(param_1 + 0x7b0) = *(uint32_t *)(param_1 + 0x85c);
  *(uint32_t *)(param_1 + 0x7b4) = *(uint32_t *)(param_1 + 0x860);
  *(uint32_t *)(param_1 + 0x7bc) = 1;
  *(uint16_t *)(param_1 + 0x7c0) = 0;
  *(uint32_t *)(param_1 + 0x7b8) = 0;
  *(uint32_t *)(param_1 + 0x7c8) = *(uint32_t *)(param_1 + 0xe8);
  *(uint32_t *)(param_1 + 0x7cc) = *(uint32_t *)(param_1 + 0x864);
  *(uint32_t *)(param_1 + 2000) = *(uint32_t *)(param_1 + 0x868);
  *(uint32_t *)(param_1 + 0x7d8) = 1;
  *(uint16_t *)(param_1 + 0x7dc) = 4;
  *(uint32_t *)(param_1 + 0x7d4) = 0;
  return;
}
