/* @k10d set_mode_and_timeout_value_10425f40 @ 0x10425f40
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 101_parameter_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10425f86) overlaps instruction at (ram,0x10425f84)
    */

cls_1059dec8 * set_mode_and_timeout_value_10425f40(cls_1059dec8 *param_1,int param_2)

{
  int iVar1;
  cls_1059dec8 *pcVar2;
  
  *(int *)&param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_1059dec8 *)get_or_init_sram_object_104248cc();
  }
  iVar1 = *(int *)&param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_1059dec8 *)0x0;
  }
  if ((*(int *)&param_1->field_0x14 == 0x19) || (*(int *)&param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_1059dec8 *)0x0;
  }
  if (*(int *)&param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_1059dec8 *)0x0;
  }
  if (*(int *)&param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_1059dec8 *)0x0;
  }
  if (*(int *)&param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_1059dec8 *)0x0;
  }
  return pcVar2;
}
