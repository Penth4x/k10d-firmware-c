/* @k10d iterate_and_dispatch_object_items @ 0x1036d288
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 023_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over a count of items, dispatching virtual calls and updating object state for
 *   each.
 * summary:
 *   The function initializes the object via select_mode_table_and_notify, then loops up to
 *   255 times based on a count from read_byte_at_offset_four_1051e508. In each iteration,
 *   it performs a virtual call (slot at offset 0xa4 or 0x8c) and updates fields at offsets
 *   0x24c-0x252 using data from read_array_element_at_offset. It then performs a second
 *   loop calling virtual slot 0xac, followed by final virtual calls at slots 0xb4 and 0xbc
 *   with parameters from read_offset_six_word_1051e514/1a/0e. The code manipulates a vtable
 *   pointer at offset 0x70 of the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_and_dispatch_object_items(void *param_1)

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
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  
  select_mode_table_and_notify((int)param_1);
  iVar13 = **(int **)((int)param_1 + 0x70);
  (**(code **)(iVar13 + 0x8c))((int)*(int **)((int)param_1 + 0x70) + (int)*(short *)(iVar13 + 0x88))
  ;
  iVar13 = (int)param_1 + 0x1c;
  cVar6 = read_byte_at_offset_four_1051e508(iVar13);
  uVar11 = 0;
  if (cVar6 != '\0') {
    do {
      *(uint *)((int)param_1 + 0x24c) = uVar11;
      if (*(char *)(uVar11 * 0x214 + -0x7ffe9ed8) == '\0') {
        iVar3 = **(int **)((int)param_1 + 0x70);
        (**(code **)(iVar3 + 0xa4))
                  ((int)*(int **)((int)param_1 + 0x70) + (int)*(short *)(iVar3 + 0xa0),uVar11);
      }
      else {
        dispatch_virtual_event_with_payload((int)param_1);
      }
      iVar10 = (int)param_1 + 0x1c;
      puVar2 = (uint16_t *)read_array_element_at_offset(iVar10,uVar11);
      *(uint16_t *)((int)param_1 + 0x250) = *puVar2;
      iVar3 = read_array_element_at_offset(iVar10,uVar11);
      *(uint16_t *)((int)param_1 + 0x252) = *(uint16_t *)(iVar3 + 2);
      invoke_virtual_method_on_subobject_1036dae4((int)param_1);
      uVar11 = uVar11 + 1 & 0xff;
      bVar7 = read_byte_at_offset_four_1051e508(iVar10);
    } while (uVar11 < bVar7);
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
  release_object_field_0x70(param_1);
  return;
}
