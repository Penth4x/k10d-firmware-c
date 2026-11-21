/* @k10d loop_write_seven_pointers @ 0x1052899c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * purpose:
 *   Iterates three times, calling a helper with seven pointer arguments derived from a base
 *   object at fixed offsets.
 * summary:
 *   The function performs two virtual calls with arguments 6 and 7, sets a local counter to
 *   3, and enters a loop. Inside the loop, it calculates an address based on a base pointer
 *   (unaff_r14 - 0x54) and offset 0x1054, then calls append_to_bounded_array seven times
 *   with pointers to fields at offsets 0x704, 0x958, 0xbac, 0x25c, 0x4b0, 0xe00, and a
 *   stack variable. It repeats this pattern for three iterations, incrementing the offset
 *   by 0x830 each time. The specific subsystem is not identifiable from the mechanical
 *   operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10528b96) overlaps instruction at (ram,0x10528b94)
    */

uint32_t loop_write_seven_pointers(void)

{
  int r0_in;
  void *pvVar1;
  int caller_r8;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int caller_r14;
  
  psVar5 = (short *)(*(int *)(r0_in + 0x6b8) + caller_r8);
  (**(code **)(psVar5 + 2))((int)*psVar5 + *(int *)(caller_r14 + -0x14),6);
  psVar5 = (short *)(*(int *)(*(int *)(caller_r14 + -0x54) + 0x1008) + caller_r8);
  (**(code **)(psVar5 + 2))((int)*psVar5 + *(int *)(caller_r14 + -0x18),7);
  *(uint32_t *)(caller_r14 + -0x1c) = 3;
  iVar3 = 0;
  while( true ) {
    iVar4 = *(int *)(caller_r14 + -0x54) + 0x1054;
    iVar2 = iVar4 + iVar3;
    append_to_bounded_array(*(void **)(caller_r14 + -0x24),iVar2);
    pvVar1 = (void *)(*(int *)(caller_r14 + -0x54) + 0x704);
    *(void **)(caller_r14 + -0x3c) = pvVar1;
    append_to_bounded_array(pvVar1,iVar2);
    pvVar1 = (void *)(*(int *)(caller_r14 + -0x54) + 0x958);
    *(void **)(caller_r14 + -0x40) = pvVar1;
    append_to_bounded_array(pvVar1,iVar2);
    pvVar1 = (void *)(*(int *)(caller_r14 + -0x54) + 0xbac);
    *(void **)(caller_r14 + -0x44) = pvVar1;
    append_to_bounded_array(pvVar1,iVar2);
    pvVar1 = (void *)(*(int *)(caller_r14 + -0x54) + 0x25c);
    *(void **)(caller_r14 + -0x48) = pvVar1;
    append_to_bounded_array(pvVar1,iVar2);
    pvVar1 = (void *)(*(int *)(caller_r14 + -0x54) + 0x4b0);
    *(void **)(caller_r14 + -0x4c) = pvVar1;
    append_to_bounded_array(pvVar1,iVar2);
    pvVar1 = (void *)(*(int *)(caller_r14 + -0x54) + 0xe00);
    *(void **)(caller_r14 + -0x50) = pvVar1;
    append_to_bounded_array(pvVar1,iVar2);
    iVar2 = iVar4 + iVar3 + 0x20c;
    append_to_bounded_array(*(void **)(caller_r14 + -0x24),iVar2);
    append_to_bounded_array(*(void **)(caller_r14 + -0x3c),iVar2);
    append_to_bounded_array(*(void **)(caller_r14 + -0x40),iVar2);
    append_to_bounded_array(*(void **)(caller_r14 + -0x44),iVar2);
    append_to_bounded_array(*(void **)(caller_r14 + -0x48),iVar2);
    append_to_bounded_array(*(void **)(caller_r14 + -0x4c),iVar2);
    append_to_bounded_array(*(void **)(caller_r14 + -0x50),iVar2);
    iVar2 = iVar4 + iVar3 + 0x418;
    append_to_bounded_array(*(void **)(caller_r14 + -0x24),iVar2);
    append_to_bounded_array(*(void **)(caller_r14 + -0x3c),iVar2);
    append_to_bounded_array(*(void **)(caller_r14 + -0x40),iVar2);
    append_to_bounded_array(*(void **)(caller_r14 + -0x44),iVar2);
    append_to_bounded_array(*(void **)(caller_r14 + -0x48),iVar2);
    append_to_bounded_array(*(void **)(caller_r14 + -0x4c),iVar2);
    append_to_bounded_array(*(void **)(caller_r14 + -0x50),iVar2);
    iVar4 = iVar4 + iVar3 + 0x624;
    append_to_bounded_array(*(void **)(caller_r14 + -0x24),iVar4);
    append_to_bounded_array(*(void **)(caller_r14 + -0x3c),iVar4);
    append_to_bounded_array(*(void **)(caller_r14 + -0x40),iVar4);
    append_to_bounded_array(*(void **)(caller_r14 + -0x44),iVar4);
    append_to_bounded_array(*(void **)(caller_r14 + -0x48),iVar4);
    append_to_bounded_array(*(void **)(caller_r14 + -0x4c),iVar4);
    append_to_bounded_array(*(void **)(caller_r14 + -0x50),iVar4);
    iVar3 = iVar3 + 0x830;
    iVar2 = *(int *)(caller_r14 + -0x1c) + -1;
    if (iVar2 < 0) break;
    *(int *)(caller_r14 + -0x1c) = iVar2;
  }
  *(int *)(caller_r14 + -0x1c) = iVar2;
  return *(uint32_t *)(caller_r14 + -0x54);
}
