/* @k10d write_struct_fields_to_object @ 0x104ed606
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Copies fields from a descriptor array into an object via a series of indirect setter
 *   calls.
 * summary:
 *   The function iterates through a table of offsets (param_3) and reads values from a
 *   source buffer (param_2). It calls a sequence of indirect functions at fixed addresses
 *   (0x1044dba2 through 0x1044de7c), passing the target object (derived from param_1) and
 *   the extracted data. One field is mapped from a 3-value enum (0,1,2) to (0,1,3) before
 *   being written three times. The specific subsystem is not identifiable from the code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_struct_fields_to_object(cls_105c2c74 *param_1,int param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  uint16_t *puVar3;
  uint16_t *puVar4;
  uint16_t *puVar5;
  uint32_t uStack_c;
  
  (*(code *)0x1044dba2/*ROM*/)
            (param_1->field_0x8 + 0x10,*(uint8_t *)(param_3[1] + param_2),
             *(uint8_t *)(param_3[2] + param_2));
  iVar2 = param_2 * 2;
  (*(code *)0x1044dbf2/*ROM*/)(param_1->field_0x8 + 0x10,*(uint16_t *)(param_3[3] + iVar2));
  (*(code *)0x1044dc02/*ROM*/)(param_1->field_0x8 + 0x10,*(uint16_t *)(param_3[4] + iVar2));
  (*(code *)0x1044dc12/*ROM*/)(param_1->field_0x8 + 0x10,*(uint16_t *)(param_3[5] + iVar2));
  sVar1 = *(short *)(*param_3 + iVar2);
  if (sVar1 == 0) {
    uStack_c = 0;
  }
  else if (sVar1 == 1) {
    uStack_c = 1;
  }
  else if (sVar1 == 2) {
    uStack_c = 3;
  }
  (*(code *)0x1044dc58/*ROM*/)(param_1->field_0x8 + 0x10,uStack_c);
  (*(code *)0x1044dc76/*ROM*/)(param_1->field_0x8 + 0x10,uStack_c);
  (*(code *)0x1044dc94/*ROM*/)(param_1->field_0x8 + 0x10,uStack_c);
  (*(code *)0x1044dd18/*ROM*/)
            (param_1->field_0x8 + 0x10,*(uint8_t *)(param_3[6] + param_2),
             *(uint8_t *)(param_3[7] + param_2),*(uint16_t *)(param_3[8] + iVar2));
  (*(code *)0x1044dd92/*ROM*/)
            (param_1->field_0x8 + 0x10,*(uint16_t *)(param_3[9] + iVar2),
             *(uint16_t *)(param_3[9] + iVar2));
  (*(code *)0x1044ddaa/*ROM*/)
            (param_1->field_0x8 + 0x10,*(uint16_t *)(param_3[10] + iVar2),
             *(uint16_t *)(param_3[10] + iVar2));
  (*(code *)0x1044ddc2/*ROM*/)
            (param_1->field_0x8 + 0x10,*(uint16_t *)(param_3[0xb] + iVar2),
             *(uint16_t *)(param_3[0xb] + iVar2));
  iVar2 = param_2 * 4;
  puVar5 = *(uint16_t **)(param_3[0xc] + iVar2);
  puVar4 = *(uint16_t **)(param_3[0xd] + iVar2);
  puVar3 = *(uint16_t **)(iVar2 + param_3[0xe]);
  (*(code *)0x1044de34/*ROM*/)(param_1->field_0x8 + 0x10,*puVar5,puVar5[1],puVar5[2]);
  (*(code *)0x1044de58/*ROM*/)(param_1->field_0x8 + 0x10,*puVar4,puVar4[1],puVar4[2]);
  (*(code *)0x1044de7c/*ROM*/)(param_1->field_0x8 + 0x10,*puVar3,puVar3[1],puVar3[2]);
  return;
}
