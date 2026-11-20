/* @k10d dispatch_mode_change_event_104e8e04 @ 0x104e8e04
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 254_factory_screen (unit names are model-proposed)
 * purpose:
 *   Processes a mode change event by updating a 4-entry configuration table and notifying a
 *   handler.
 * summary:
 *   Checks if a handler pointer at offset 0x180 is valid. Based on the event type in
 *   param_2, it populates a 4-entry structure at offset 0x3c using
 *   write_two_words_to_struct_10513bca with specific values (0xf, 0x13, 0x19, 0x13) and a
 *   variable fourth parameter. It then calls set_object_field_0x20 to pass this structure
 *   to the handler. Finally, it performs cleanup operations via eventflag_clr_flg and
 *   eventflag_wai_flg, and clears the handler pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_mode_change_event_104e8e04(cls_105c1610 *param_1,uint32_t param_2)

{
  bool bVar1;
  uint16_t uVar2;
  uint32_t *puVar3;
  
  bVar1 = false;
  if (param_1->field_0x180 == 0) {
    return;
  }
  switch(param_2) {
  case 0:
  case 1:
    uVar2 = 0;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    uVar2 = 0;
    break;
  case 0xb:
    uVar2 = 3;
    break;
  case 0xc:
    puVar3 = &param_1->field_0x3c;
    write_two_words_to_struct_10513bca(puVar3,0,0xf,4);
    write_two_words_to_struct_10513bca(puVar3,1,0x13,0);
    write_two_words_to_struct_10513bca(puVar3,2,0x19,0);
    write_two_words_to_struct_10513bca(puVar3,3,0x13,0);
    set_object_field_0x20(param_1->field_0x180,puVar3);
    goto LAB_104e8ee8;
  default:
    goto LAB_104e8ee4;
  }
  puVar3 = &param_1->field_0x3c;
  write_two_words_to_struct_10513bca(puVar3,0,0xf,uVar2);
  write_two_words_to_struct_10513bca(puVar3,1,0x13,0);
  write_two_words_to_struct_10513bca(puVar3,2,0x19,0);
  write_two_words_to_struct_10513bca(puVar3,3,0x13,0);
  set_object_field_0x20(param_1->field_0x180,puVar3);
  bVar1 = true;
LAB_104e8ee4:
  if (bVar1) {
LAB_104e8ee8:
    puVar3 = &param_1->field_0x188;
    eventflag_clr_flg(puVar3,0x10);
    call_two_helpers_on_object_10514cfa(param_1->field_0x2c);
    eventflag_wai_flg(puVar3,0x10,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar3,0x10);
    param_1->field_0x180 = 0;
  }
  return;
}
