/* @k10d copy_five_fields_from_subobject @ 0x103d687c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Copies a 4-byte value and four 2-byte values from a sub-object at offset 0x2e into the
 *   parent object.
 * summary:
 *   The function takes a pointer to an object (param_1) and a pointer to a sub-object at
 *   offset 0x2e (pvVar4). It calls get_or_create_singleton_object_1046d20c to get a context
 *   pointer, then uses collect_and_forward_object_state to copy a 4-byte value from that
 *   context into the sub-object. It then calls five accessor functions
 *   (read_first_word_1045c66c, read_byte_at_offset_three, read_byte_at_offset_two,
 *   read_byte_at_offset_5, read_byte_at_offset_six) on the sub-object and stores the
 *   results into the parent object at offsets 0x24, 0x26, 0x28, 0x2a, and 0x2c
 *   respectively. This appears to be a synchronization or update routine for a data
 *   structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_five_fields_from_subobject(void *param_1)

{
  int iVar1;
  uint16_t uVar2;
  byte bVar3;
  void *pvVar4;
  
  iVar1 = get_or_create_singleton_object_1046d20c();
  pvVar4 = (void *)((int)param_1 + 0x2e);
  collect_and_forward_object_state(*(uint32_t *)(iVar1 + 4),pvVar4);
  uVar2 = read_first_word_1045c66c(pvVar4);
  *(uint16_t *)((int)param_1 + 0x24) = uVar2;
  bVar3 = read_byte_at_offset_three(pvVar4);
  *(ushort *)((int)param_1 + 0x26) = (ushort)bVar3;
  bVar3 = read_byte_at_offset_two(pvVar4);
  *(ushort *)((int)param_1 + 0x28) = (ushort)bVar3;
  bVar3 = read_byte_at_offset_5(pvVar4);
  *(ushort *)((int)param_1 + 0x2a) = (ushort)bVar3;
  bVar3 = read_byte_at_offset_six(pvVar4);
  *(ushort *)((int)param_1 + 0x2c) = (ushort)bVar3;
  return;
}
