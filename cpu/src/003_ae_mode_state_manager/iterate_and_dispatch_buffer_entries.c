/* @k10d iterate_and_dispatch_buffer_entries @ 0x10364154
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over a count of entries, dispatching virtual calls and processing data for
 *   each index.
 * summary:
 *   The function retrieves a count from a helper (read_byte_at_offset_four_1051e508) and
 *   loops through that many entries. For each entry, it performs a virtual call (slot
 *   0xa4/0x8c) and calls dispatch_event_to_handler_103653a0 with data retrieved via
 *   read_array_element_at_offset. It concludes by making final virtual calls (slots
 *   0xb4/0xbc) with values from read_offset_six_word_1051e514/0x1a/0x0e. The specific
 *   subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_and_dispatch_buffer_entries(void *param_1)

{
  short sVar1;
  char cVar6;
  uint16_t *puVar2;
  int iVar3;
  byte bVar7;
  byte bVar8;
  uint32_t uVar4;
  uint32_t uVar5;
  uint8_t uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  
  set_pointer_by_mode_byte(__frv_reg_unset(4));
  iVar13 = **(int **)((int)param_1 + 0x70);
  (**(code **)(iVar13 + 0x8c))((int)*(int **)((int)param_1 + 0x70) + (int)*(short *)(iVar13 + 0x88))
  ;
  iVar13 = (int)param_1 + 0x1c;
  cVar6 = read_byte_at_offset_four_1051e508(iVar13);
  uVar10 = 0;
  if (cVar6 != '\0') {
    do {
      *(uint *)((int)param_1 + 0x214) = uVar10;
      if (*(char *)(uVar10 * 0x214 + -0x7ffe9ed8) == '\0') {
        iVar3 = **(int **)((int)param_1 + 0x70);
        (**(code **)(iVar3 + 0xa4))
                  ((int)*(int **)((int)param_1 + 0x70) + (int)*(short *)(iVar3 + 0xa0),uVar10);
      }
      else {
        dispatch_event_with_payload_103649e6((int)param_1);
      }
      iVar11 = (int)param_1 + 0x1c;
      puVar2 = (uint16_t *)read_array_element_at_offset(iVar11,uVar10);
      *(uint16_t *)((int)param_1 + 0x218) = *puVar2;
      iVar3 = read_array_element_at_offset(iVar11,uVar10);
      *(uint16_t *)((int)param_1 + 0x21a) = *(uint16_t *)(iVar3 + 2);
      (*(code *)0x10364aa0/*ROM*/)(param_1);
      dispatch_event_to_handler_103653a0((int)param_1,uVar10,(uint)*(ushort *)((int)param_1 + 0x218),
                   (uint)*(ushort *)((int)param_1 + 0x21a));
      uVar10 = uVar10 + 1 & 0xff;
      bVar7 = read_byte_at_offset_four_1051e508(iVar11);
    } while (uVar10 < bVar7);
  }
  cVar6 = read_byte_at_offset_four_1051e508(iVar13);
  bVar7 = 0;
  if (cVar6 != '\0') {
    do {
      iVar3 = **(int **)((int)param_1 + 0x70);
      (**(code **)(iVar3 + 0xac))
                ((int)*(int **)((int)param_1 + 0x70) + (int)*(short *)(iVar3 + 0xa8),bVar7);
      bVar7 = bVar7 + 1;
      bVar8 = read_byte_at_offset_four_1051e508((int)param_1 + 0x1c);
    } while (bVar7 < bVar8);
  }
  piVar12 = *(int **)((int)param_1 + 0x70);
  iVar3 = *piVar12;
  sVar1 = *(short *)(iVar3 + 0xb0);
  uVar4 = read_offset_six_word_1051e514(iVar13);
  uVar5 = read_offset_8_word(iVar13);
  (**(code **)(iVar3 + 0xb4))((int)piVar12 + (int)sVar1,uVar4,uVar5);
  piVar12 = *(int **)((int)param_1 + 0x70);
  iVar3 = *piVar12;
  sVar1 = *(short *)(iVar3 + 0xb8);
  uVar9 = read_byte_at_offset_five_1051e50e(iVar13);
  (**(code **)(iVar3 + 0xbc))((int)piVar12 + (int)sVar1,uVar9);
  release_object_at_offset_0x70(param_1);
  return;
}
