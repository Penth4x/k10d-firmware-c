/* @k10d text_widget_layout @ 0x1048edd8
 * name: verified (structural evidence: decomp + emulator: reads 'Date Adjust' and measures it on the Date screen)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Lays out a text widget: picks its string for the current UI language (setting 0xa9)
 *   from the widget's per-language pointer table, measures it, and computes the bounding
 *   rectangle.
 * summary:
 *   VERIFIED: decomp + emulator: reads 'Date Adjust' and measures it on the Date screen
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void text_widget_layout(uint32_t param_1,ushort *param_2,uint32_t param_3,uint32_t param_4,
                 int param_5)

{
  struct {
    uint32_t uStack_48;
    uint32_t uStack_44;
    uint32_t uStack_40;
  } _cfg_48;
  ushort uVar1;
  int iVar2;
  uint32_t uVar3;
  uint uVar4;
  void *pvVar5;
  uint32_t uVar6;
  uint32_t *puVar7;
  int iVar8;
  uintptr_t sp;
  uint32_t auStack_3c [5];
  uint32_t uStack_28;
  uint32_t auStack_24 [7];
  
  iVar2 = get_or_create_singleton_object_10485138();
  iVar2 = setting_get(*(int *)(iVar2 + 0x10),0xa9);
  uVar6 = *(uint32_t *)(*(int *)(param_2 + 0x18) + iVar2 * 4);
  uVar3 = get_or_init_static_buffer_103fe528();
  (*(code *)0x103fe66a/*ROM*/)(&_cfg_48.uStack_48,uVar3,uVar6);
  uStack_28 = _cfg_48.uStack_48;
  auStack_24[0] = _cfg_48.uStack_44;
  free_heap_if_flagged_1045c402(&_cfg_48.uStack_48,2);
  uVar1 = param_2[0x13];
  uVar4 = return_first_word_1045c514(&uStack_28);
  if (uVar4 <= uVar1) {
    store_value_to_pointer_1045c510(&uStack_28,(uint)param_2[0x13]);
  }
  uVar1 = param_2[0x15];
  uVar4 = read_struct_field_at_offset_4(&uStack_28);
  if (uVar4 <= uVar1) {
    write_field_at_offset_four_1045c518(&uStack_28,(uint)param_2[0x15]);
  }
  puVar7 = auStack_24 + 1;
  allocate_and_init_widget(puVar7);
  copy_four_words(puVar7,&uStack_28);
  pvVar5 = (void *)alloc_two_word_pair_1045bc2e(&_cfg_48.uStack_40,(uint)*param_2,(uint)param_2[1]);
  copy_eight_bytes_1045bf68(puVar7,pvVar5);
  free_heap_block_if_flagged_1045bc54(&_cfg_48.uStack_40,2);
  iVar2 = 0x10;
  do {
    iVar8 = iVar2 + -4;
    *(uint32_t *)((int)auStack_3c + iVar2) = *(uint32_t *)((int)auStack_24 + iVar2);
    iVar2 = iVar8;
  } while (iVar8 != 0);
  destroy_text_widget(puVar7,2);
  free_heap_if_flagged_1045c402(&uStack_28,2);
  iVar2 = 0x10;
  do {
    iVar8 = iVar2 + -4;
    *(uint32_t *)(iVar8 + param_5) = *(uint32_t *)((int)auStack_3c + iVar2);
    iVar2 = iVar8;
  } while (iVar8 != 0);
  return;
}
