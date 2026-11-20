/* @k10d dispatch_event_by_type_105116a8 @ 0x105116a8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Selects a data pair and label based on param_2, writes them to a struct at
 *   param_1+0x818, and calls a handler.
 * summary:
 *   The function switches on param_2 (0-8) to select specific offsets from the param_1
 *   struct and corresponding static data labels (DAT_105d5f58..DAT_105d5fd8). It writes the
 *   selected values into a pointer-referenced structure at param_1+0x818. Finally, it calls
 *   copy_null_terminated_string with the updated structure and the selected label. The
 *   default case calls format_string_to_buffer_10545140 before falling back to the case 0
 *   values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x105116bc) overlaps instruction at (ram,0x105116ba)
    */

void dispatch_event_by_type_105116a8(int param_1,void *param_2,uint32_t param_3,void *param_4)

{
  uint32_t uVar1;
  void *puVar2;
  int iVar3;
  uint32_t *puVar4;
  uintptr_t sp;
  uint8_t auStack_58 [80];
  
  switch ((uintptr_t)param_2) {
  case 0x0:
    *(uint32_t *)(*(int *)(param_1 + 0x818) + 4) = *(uint32_t *)(param_1 + 0xdc);
    puVar2 = &DAT_105d5f58/*ROM*/;
    **(uint32_t **)(param_1 + 0x818) = *(uint32_t *)(param_1 + 0x134);
    break;
  case 0x1:
    *(uint32_t *)(*(int *)(param_1 + 0x818) + 4) = *(uint32_t *)(param_1 + 0xe0);
    puVar2 = &DAT_105d5f64/*ROM*/;
    **(uint32_t **)(param_1 + 0x818) = *(uint32_t *)(param_1 + 0x138);
    break;
  case 0x2:
    *(uint32_t *)(*(int *)(param_1 + 0x818) + 4) = *(uint32_t *)(param_1 + 0xe4);
    puVar2 = &DAT_105d5f70/*ROM*/;
    **(uint32_t **)(param_1 + 0x818) = *(uint32_t *)(param_1 + 0x13c);
    break;
  case 0x3:
    *(uint32_t *)(*(int *)(param_1 + 0x818) + 4) = *(uint32_t *)(param_1 + 0xec);
    puVar2 = &DAT_105d5f80/*ROM*/;
    **(uint32_t **)(param_1 + 0x818) = *(uint32_t *)(param_1 + 0x144);
    break;
  case 0x4:
    iVar3 = *(int *)(param_1 + 0x818);
    uVar1 = read_fourth_word_from_array(param_1 + 0x880,0);
    *(uint32_t *)(iVar3 + 4) = uVar1;
    puVar4 = *(uint32_t **)(param_1 + 0x818);
    uVar1 = compute_indexed_offset_delta(param_1 + 0x880,0);
    puVar2 = &DAT_105d5f8c/*ROM*/;
    *puVar4 = uVar1;
    break;
  case 0x5:
    *(uint32_t *)(*(int *)(param_1 + 0x818) + 4) = *(uint32_t *)(param_1 + 0x84);
    puVar2 = &DAT_105d5f9c/*ROM*/;
    **(uint32_t **)(param_1 + 0x818) = *(uint32_t *)(param_1 + 0x104);
    break;
  case 0x6:
    *(uint32_t *)(*(int *)(param_1 + 0x818) + 4) = *(uint32_t *)(param_1 + 0x84);
    puVar2 = &DAT_105d5fac/*ROM*/;
    **(uint32_t **)(param_1 + 0x818) = *(uint32_t *)(param_1 + 0x104);
    break;
  case 0x7:
    *(uint32_t *)(*(int *)(param_1 + 0x818) + 4) = *(uint32_t *)(param_1 + 0x88);
    puVar2 = &DAT_105d5fbc/*ROM*/;
    **(uint32_t **)(param_1 + 0x818) = *(uint32_t *)(param_1 + 0x104);
    break;
  case 0x8:
    *(uint32_t *)(*(int *)(param_1 + 0x818) + 4) = *(uint32_t *)(param_1 + 0x38);
    puVar2 = &DAT_105d5fc8/*ROM*/;
    **(uint32_t **)(param_1 + 0x818) = *(uint32_t *)(param_1 + 0x104);
    break;
  default:
    puVar2 = auStack_58;
    format_string_to_buffer_10545140(puVar2,&DAT_105d5fd8/*ROM*/,param_2,param_4);
    *(uint32_t *)(*(int *)(param_1 + 0x818) + 4) = *(uint32_t *)(param_1 + 0xdc);
    **(uint32_t **)(param_1 + 0x818) = *(uint32_t *)(param_1 + 0x134);
  }
  copy_null_terminated_string((void *)(*(int *)(param_1 + 0x818) + 8),puVar2);
  return;
}
