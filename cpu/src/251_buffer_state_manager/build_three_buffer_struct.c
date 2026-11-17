/* @k10d build_three_buffer_struct @ 0x104e1a16
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_three_buffer_struct(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  uint8_t *puVar3;
  uint8_t *puVar4;
  uint8_t *puVar5;
  uint8_t *puVar6;
  ushort *puVar7;
  byte *pbVar8;
  void *pvVar9;
  uint uVar10;
  uintptr_t sp;
  uint8_t uStack_9;
  
  iVar1 = read_byte_from_table_104e1efa(param_2,0);
  iVar1 = iVar1 + 1;
  iVar2 = read_byte_from_table_104e1efa(param_2,2);
  iVar2 = iVar2 + 1;
  puVar3 = (uint8_t *)heap_alloc_2(iVar1 * 2 + 1);
  puVar4 = (uint8_t *)heap_alloc_2(iVar2 * 2 + 1);
  puVar5 = (uint8_t *)heap_alloc_2(0xb);
  puVar6 = (uint8_t *)heap_alloc_2(1);
  *puVar3 = (char)iVar1;
  *puVar4 = (char)iVar2;
  *puVar5 = 4;
  *puVar6 = 0;
  fill_byte_array(puVar3 + 1,0,iVar1 * 2);
  fill_byte_array(puVar4 + 1,0,iVar2 * 2);
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar7 = (ushort *)heap_alloc_2(iVar1 * 2);
  pbVar8 = (byte *)read_nested_pointer_field(param_2,0);
  pvVar9 = (void *)read_byte_from_table_104e1efa(param_2,0);
  copy_byte_array_with_optional_transform(puVar7,pbVar8,pvVar9,0);
  iVar1 = read_byte_from_table_104e1efa(param_2,0);
  iVar1 = iVar1 * 2;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    (puVar3 + 1)[iVar1] = *(uint8_t *)(iVar1 + (int)puVar7);
  }
  heap_free_2((int)puVar7);
  puVar7 = (ushort *)heap_alloc_2(iVar2 * 2);
  pbVar8 = (byte *)read_nested_pointer_field(param_2,2);
  pvVar9 = (void *)read_byte_from_table_104e1efa(param_2,2);
  copy_byte_array_with_optional_transform(puVar7,pbVar8,pvVar9,0);
  iVar1 = read_byte_from_table_104e1efa(param_2,2);
  iVar1 = iVar1 * 2;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    (puVar4 + 1)[iVar1] = *(uint8_t *)(iVar1 + (int)puVar7);
  }
  heap_free_2((int)puVar7);
  puVar7 = (ushort *)heap_alloc_2(10);
  pbVar8 = (byte *)heap_alloc_2(6);
  heap_alloc_one_byte_1045926e((int)&uStack_9);
  uVar10 = (*(code *)0x10459356/*ROM*/)(&uStack_9);
  format_string_to_buffer_10545140(pbVar8,(char *)0x105be0c0/*ROM*/,(void *)((int)uVar10 >> 8),(void *)(uVar10 & 0xff));
  copy_byte_array_with_optional_transform(puVar7,pbVar8,(void *)0x4,0);
  iVar1 = 8;
  do {
    iVar2 = iVar1 + -1;
    puVar5[iVar1] = *(uint8_t *)(iVar2 + (int)puVar7);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  heap_free_2((int)pbVar8);
  heap_free_2((int)puVar7);
  puRam80010a40 = (uint32_t *)puVar3;
  puRam80010a44 = (uint32_t *)puVar4;
  puRam80010a48 = (uint32_t *)puVar5;
  puRam80010a4c = (uint32_t *)puVar6;
  heap_free_if_flagged(&uStack_9,2);
  return;
}
