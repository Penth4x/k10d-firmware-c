/* @k10d build_and_send_two_param_message @ 0x104cf5d4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 240_menu_event_system (unit names are model-proposed)
 * purpose:
 *   Constructs a message from two or four parameters and dispatches it to a target object.
 * summary:
 *   The function allocates a temporary object (cls_105a6f84), retrieves a context pointer
 *   via initialize_singleton_object_1045d6a0, and populates the object with values from
 *   invoke_virtual_slot_6_10460914/932 (and 96e/98c if param_2 is non-zero). It then
 *   formats these values into a buffer using format_string_to_buffer_10545140 with a mode-
 *   dependent string pointer, retrieves a target object from param_1+0x38, and sends the
 *   buffer to it via glyph_draw and a virtual call. The temporary object is deleted at the
 *   end.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_send_two_param_message(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  char *pcVar6;
  uintptr_t sp;
  uint32_t *puVar7;
  uint8_t auStack_88 [8];
  byte abStack_64 [80];
  cls_105a6f84 cStack_14;
  
  puVar7 = (uint32_t *)auStack_88;
  cls_105a6f84_new(&cStack_14);
  iVar1 = initialize_singleton_object_1045d6a0();
  copy_eight_bytes_from_struct(*(int *)(iVar1 + 0x1c),&cStack_14);
  if (param_2 == 0) {
    pvVar2 = (void *)invoke_virtual_slot_6_10460914((int *)&cStack_14);
    pvVar3 = (void *)invoke_virtual_slot_6_10460932((int *)&cStack_14);
    pcVar6 = (char *)0x105b9828/*ROM*/;
  }
  else {
    pvVar2 = (void *)invoke_virtual_slot_6_10460914((int *)&cStack_14);
    pvVar3 = (void *)invoke_virtual_slot_6_10460932((int *)&cStack_14);
    uVar4 = call_virtual_slot_6_1046096e((int *)&cStack_14);
    uVar5 = invoke_virtual_slot_6_1046098c((int *)&cStack_14);
    *puVar7 = uVar4;
    puVar7[1] = uVar5;
    pcVar6 = (char *)0x105b980c/*ROM*/;
  }
  format_string_to_buffer_10545140(abStack_64,pcVar6,pvVar2,pvVar3);
  pvVar2 = (void *)menu_item_register(*(int *)(param_1 + 0x38));
  glyph_draw(pvVar2,abStack_64);
  (((vtbl_entry*)(*(int *)((int)pvVar2 + 0xc)))[1].fn)
            ((int)pvVar2 + (int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8),1);
  cls_105a6f84_delete(&cStack_14,2);
  return;
}
