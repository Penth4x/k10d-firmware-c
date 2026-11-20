/* @k10d dispatch_virtual_event_with_payload @ 0x1036da2a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 023_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_event_with_payload(int param_1)

{
  struct {
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint16_t uStack_1c;
  } _cfg_28;
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  uint16_t uStack_1a;
  uint32_t auStack_18 [4];
  
  _cfg_28.uStack_28 = *(uint32_t *)(*(int *)(param_1 + 0x24c) * 0x214 + -0x7ffea0c8);
  _cfg_28.uStack_24 = *(uint32_t *)(*(int *)(param_1 + 0x24c) * 0x214 + -0x7ffea0c4);
  _cfg_28.uStack_20 = *(uint32_t *)(*(int *)(param_1 + 0x24c) * 0x214 + -0x7ffea0c0);
  copy_two_words_from_param2((int)auStack_18,*(int *)(param_1 + 0x24c) * 0x214 + -0x7ffea0e8);
  uVar1 = return_first_word_1045c514(auStack_18);
  _cfg_28.uStack_1c = (short)uVar1;
  uVar1 = read_struct_field_at_offset_4(auStack_18);
  iVar2 = **(int **)(param_1 + 0x70);
  uStack_1a = (short)uVar1;
  (((vtbl_entry*)(iVar2))[19].fn)
            ((int)*(int **)(param_1 + 0x70) + (int)((vtbl_entry*)(iVar2))[19].adj,
             *(uint32_t *)(param_1 + 0x24c),&_cfg_28.uStack_28);
  free_heap_if_flagged_1045c402(auStack_18,2);
  return;
}
