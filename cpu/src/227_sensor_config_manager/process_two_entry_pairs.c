/* @k10d process_two_entry_pairs @ 0x104c11ca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_two_entry_pairs(int param_1,uint16_t *param_2)

{
  char cVar3;
  int iVar1;
  int iVar2;
  int iVar4;
  uintptr_t sp;
  int iStack_28;
  int iStack_24;
  uint32_t uStack_1c;
  uint8_t auStack_18 [16];
  
  write_two_words_to_struct_104c1ff4(param_1,*param_2,param_2[1]);
  iStack_24 = 0;
  uStack_1c = 2;
  iStack_28 = 5;
  do {
    iVar1 = iStack_24;
    if (*(char *)(param_1 + 0x1e) == '\0') {
      iVar1 = iStack_28;
    }
    cVar3 = read_byte_at_offset_1051ed64(param_2,iVar1);
    if (cVar3 != '\0') {
      iVar1 = find_first_active_entry((int)param_2,iVar1);
      *(uint32_t *)(param_1 + 0x3c) = *(uint32_t *)(iVar1 + 8);
      iVar2 = invoke_virtual_method_on_object_104bf940(param_1,param_1 + 0x4c);
      if (iVar2 != 0) {
        copy_string_with_offset((int)(iVar1),(char *)(param_1 + 0x4c));
        *(uint8_t *)(iVar1 + 0x19) = *(uint8_t *)(param_1 + 0x59);
        *(uint32_t *)(iVar1 + 0x1c) = *(uint32_t *)(param_1 + 0x5c);
        iVar2 = 8;
        do {
          iVar4 = iVar2 + -1;
          auStack_18[iVar2 + 7] = *(uint8_t *)(iVar4 + param_1 + 0x60);
          iVar2 = iVar4;
        } while (iVar4 != 0);
        iVar2 = 8;
        do {
          iVar4 = iVar2 + -1;
          auStack_18[iVar4] = auStack_18[iVar2 + 7];
          iVar2 = iVar4;
        } while (iVar4 != 0);
        write_field_at_offset_0x20(iVar1,auStack_18);
        free_heap_if_flag_set_1045c56c(auStack_18,2);
      }
    }
    iVar1 = iStack_24 + 1;
    if (*(char *)(param_1 + 0x1e) == '\0') {
      iVar1 = iStack_28 + -1;
    }
    cVar3 = read_byte_at_offset_1051ed64(param_2,iVar1);
    if (cVar3 != '\0') {
      iVar1 = find_first_active_entry((int)param_2,iVar1);
      *(uint32_t *)(param_1 + 0x3c) = *(uint32_t *)(iVar1 + 8);
      iVar2 = invoke_virtual_method_on_object_104bf940(param_1,param_1 + 0x4c);
      if (iVar2 != 0) {
        copy_string_with_offset((int)(iVar1),(char *)(param_1 + 0x4c));
        *(uint8_t *)(iVar1 + 0x19) = *(uint8_t *)(param_1 + 0x59);
        *(uint32_t *)(iVar1 + 0x1c) = *(uint32_t *)(param_1 + 0x5c);
        iVar2 = 8;
        do {
          iVar4 = iVar2 + -1;
          auStack_18[iVar2 + 7] = *(uint8_t *)(iVar4 + param_1 + 0x60);
          iVar2 = iVar4;
        } while (iVar4 != 0);
        iVar2 = 8;
        do {
          iVar4 = iVar2 + -1;
          auStack_18[iVar4] = auStack_18[iVar2 + 7];
          iVar2 = iVar4;
        } while (iVar4 != 0);
        write_field_at_offset_0x20(iVar1,auStack_18);
        free_heap_if_flag_set_1045c56c(auStack_18,2);
      }
    }
    iStack_24 = iStack_24 + 2;
    iStack_28 = iStack_28 + -2;
    uStack_1c = uStack_1c + -1;
  } while (-1 < uStack_1c);
  return;
}
