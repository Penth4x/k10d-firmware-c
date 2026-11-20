/* @k10d read_two_shorts_and_store_1036af70 @ 0x1036af70
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 016_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void read_two_shorts_and_store_1036af70(void *param_1)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint32_t auStack_28 [2];
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint16_t uStack_14;
  uint16_t uStack_12;
  
  uStack_20 = _DAT_80015d24/*SDRAM*/;
  uStack_1c = _DAT_80015d28/*SDRAM*/;
  uStack_18 = _DAT_80015d2c/*SDRAM*/;
  copy_two_words_from_param2((int)auStack_28,-0x7ffea2fc);
  uVar1 = return_first_word_1045c514(auStack_28);
  uStack_14 = (short)uVar1;
  free_heap_if_flagged_1045c402(auStack_28,2);
  copy_two_words_from_param2((int)auStack_28,-0x7ffea2fc);
  uVar1 = read_struct_field_at_offset_4(auStack_28);
  uStack_12 = (short)uVar1;
  free_heap_if_flagged_1045c402(auStack_28,2);
  copy_menu_item_and_register_10387f26((cls_105595a8 *)((int)param_1 + 0x14),(uint)DAT_80015f14/*SDRAM*/,&uStack_20);
  return;
}
