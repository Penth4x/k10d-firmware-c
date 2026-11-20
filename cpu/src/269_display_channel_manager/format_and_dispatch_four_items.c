/* @k10d format_and_dispatch_four_items @ 0x10507ff6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_and_dispatch_four_items(int param_1,void *param_2,void *param_3)

{
  short sVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t uVar4;
  char *pcVar5;
  uint32_t *puVar6;
  int iVar7;
  int *piVar8;
  uintptr_t sp;
  char *pcStack_78;
  uint8_t auStack_64 [80];
  uint8_t auStack_14 [4];
  int iStack_10;
  uint32_t uStack_c;
  
  if (((*(char *)((int)param_2 + 0x16) != '\0') &&
      (uStack_c = 0, *(int *)((int)param_2 + 0x18) != 0)) &&
     (*(char *)(*(int *)((int)param_2 + 0x18) + 0x40) != '\0')) {
    call_kernel_service_with_param(auStack_14);
    iVar7 = 0;
    *(int *)(param_1 + 800) = iStack_10 - *(int *)(param_1 + 800);
    append_bytes_to_ring_buffer(*(int *)((int)param_2 + 0x18),0x105d526c/*ROM*/,0);
    copy_stream_bytes_into_struct(*(uint32_t *)((int)param_2 + 0x18),(void*)(*(uint32_t *)(param_1 + 0x324)),1,0);
    append_newline_to_buffer(*(int *)((int)param_2 + 0x18),0);
    copy_stream_bytes_into_struct(*(uint32_t *)((int)param_2 + 0x18),(void*)(*(uint32_t *)(param_1 + 800)),1,0);
    append_newline_to_buffer(*(int *)((int)param_2 + 0x18),0);
    puVar6 = (uint32_t *)0x0;
    copy_stream_bytes_into_struct(*(uint32_t *)((int)param_2 + 0x18),(void*)(*(uint *)(param_1 + 0x324) / *(uint *)(param_1 + 800)),1,(void *)__frv_reg_unset(7));
    append_newline_to_buffer(*(int *)((int)param_2 + 0x18),0);
    uVar2 = *(uint32_t *)((int)param_2 + 0x18);
    pcStack_78 = (char *)0x105d52c4/*ROM*/;
    do {
      iVar3 = compute_indexed_offset_delta(uVar2,iVar7);
      if (iVar3 != 0) {
        if (iVar7 == 0) {
          pcVar5 = (char *)0x105d5280/*ROM*/;
        }
        else if (iVar7 == 1) {
          pcVar5 = (char *)0x105d5290/*ROM*/;
        }
        else if (iVar7 == 2) {
          pcVar5 = (char *)0x105d52a0/*ROM*/;
        }
        else {
          pcVar5 = pcStack_78;
          if (iVar7 == 3) {
            pcVar5 = (char *)0x105d52b0/*ROM*/;
          }
        }
        format_string_to_buffer_10545140(auStack_64,pcVar5,param_3,puVar6);
        iVar3 = **(int **)(param_1 + 0x300);
        puVar6 = &uStack_c;
        iVar3 = (((vtbl_entry*)(iVar3))[5].fn)
                          ((int)*(int **)(param_1 + 0x300) + (int)((vtbl_entry*)(iVar3))[5].adj,
                           auStack_64,0);
        uVar2 = uStack_c;
        if (iVar3 != 0) {
          piVar8 = *(int **)(param_1 + 0x300);
          iVar3 = *piVar8;
          sVar1 = *(short *)(iVar3 + 0x40);
          uVar4 = read_fourth_word_from_array(*(uint32_t *)((int)param_2 + 0x18),iVar7);
          puVar6 = (uint32_t *)compute_indexed_offset_delta(*(uint32_t *)((int)param_2 + 0x18),iVar7);
          (((vtbl_entry*)(iVar3))[8].fn)((int)piVar8 + (int)sVar1,uVar2,uVar4);
        }
        iVar3 = **(int **)(param_1 + 0x300);
        (((vtbl_entry*)(iVar3))[6].fn)
                  ((int)*(int **)(param_1 + 0x300) + (int)((vtbl_entry*)(iVar3))[6].adj,uStack_c);
      }
      iVar7 = iVar7 + 1;
      uVar2 = *(uint32_t *)((int)param_2 + 0x18);
    } while (iVar7 < 4);
  }
  return;
}
