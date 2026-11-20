/* @k10d build_exif_string_from_list @ 0x10479546
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10479756) overlaps instruction at (ram,0x10479754)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool build_exif_string_from_list(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t auStack_b4 [16];
  int iStack_84;
  char acStack_68 [8];
  char cStack_60;
  char cStack_5f;
  char cStack_5e;
  uint8_t uStack_5d;
  char *pcStack_18;
  char *pcStack_14;
  uint16_t auStack_10 [4];
  
  puVar4 = auStack_b4;
  cVar1 = *pcRam80014864;
  pcStack_14 = param_2;
  pcVar2 = pcRam80014864;
  while (cVar1 != '\0') {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcStack_14 = cVar1;
    pcStack_14 = pcStack_14 + 1;
    cVar1 = *pcVar2;
  }
  *pcStack_14 = '\0';
  pcVar2 = (char *)0x105aa5e4/*ROM*/;
  cVar1 = cRam105aa5e4;
  while (cVar1 != '\0') {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcStack_14 = cVar1;
    pcStack_14 = pcStack_14 + 1;
    cVar1 = *pcVar2;
  }
  *pcStack_14 = '\0';
  cVar1 = *pcRam8000ff78;
  pcVar2 = pcRam8000ff78;
  while (cVar1 != '\0') {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcStack_14 = cVar1;
    pcStack_14 = pcStack_14 + 1;
    cVar1 = *pcVar2;
  }
  *pcStack_14 = '\0';
  pcVar2 = (char *)0x105aa5e4/*ROM*/;
  cVar1 = cRam105aa5e4;
  while (cVar1 != '\0') {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcStack_14 = cVar1;
    pcStack_14 = pcStack_14 + 1;
    cVar1 = *pcVar2;
  }
  *pcStack_14 = '\0';
  cVar1 = *pcRam8000ff7c;
  pcVar2 = pcRam8000ff7c;
  while (cVar1 != '\0') {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcStack_14 = cVar1;
    pcStack_14 = pcStack_14 + 1;
    cVar1 = *pcVar2;
  }
  *pcStack_14 = '\0';
  pcVar2 = *(char **)(param_1 + 0x10);
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcStack_14 = cVar1;
    pcStack_14 = pcStack_14 + 1;
    cVar1 = *pcVar2;
  }
  *pcStack_14 = '\0';
  cVar1 = *pcRam8000ff80;
  pcVar2 = pcRam8000ff80;
  while (cVar1 != '\0') {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcStack_14 = cVar1;
    pcStack_14 = pcStack_14 + 1;
    cVar1 = *pcVar2;
  }
  *pcStack_14 = '\0';
  pcVar2 = (char *)0x105aa5e4/*ROM*/;
  cVar1 = cRam105aa5e4;
  while (cVar1 != '\0') {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcStack_14 = cVar1;
    pcStack_14 = pcStack_14 + 1;
    cVar1 = *pcVar2;
  }
  *pcStack_14 = '\0';
  pcStack_18 = param_2;
  copy_null_terminated_string((void *)(acStack_68),(void *)(pvRam8000ff84));
  copy_string_to_buffer((char *)(acStack_68),(void *)(pvRam8000ffa8));
  puVar4[3] = 0;
  puVar4[7] = 0;
  puVar4[0xb] = 0;
  puVar4[0xf] = 0;
  alloc_and_init_small_struct_1045c524(auStack_10,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar4[3],puVar4[7],puVar4[0xb],puVar4[0xf]);
  iVar3 = get_or_create_singleton_object_1046d20c();
  collect_and_forward_object_state(*(uint32_t *)(iVar3 + 4),auStack_10);
  puVar4[3] = 0;
  puVar4[7] = 0x3a;
  format_ordered_numeric_fields(param_1,&cStack_60,auStack_10,0,puVar4[3],puVar4[7]);
  pcVar2 = acStack_68;
  cVar1 = acStack_68[0];
  while (cVar1 != '\0') {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcStack_14 = cVar1;
    pcStack_14 = pcStack_14 + 1;
    cVar1 = *pcVar2;
  }
  *pcStack_14 = '\0';
  pcVar2 = (char *)0x105aa5e4/*ROM*/;
  cVar1 = cRam105aa5e4;
  while (cVar1 != '\0') {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcStack_14 = cVar1;
    pcStack_14 = pcStack_14 + 1;
    cVar1 = *pcVar2;
  }
  *pcStack_14 = '\0';
  iStack_84 = 1;
  pcVar2 = pcRam8000ff74;
  for (iVar3 = *(int *)(param_1 + 0xea4c); pcRam8000ff74 = pcVar2, iVar3 != 0;
      iVar3 = *(int *)(iVar3 + 0x38)) {
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcStack_14 = cVar1;
      pcStack_14 = pcStack_14 + 1;
      cVar1 = *pcVar2;
    }
    *pcStack_14 = '\0';
    pcVar2 = (char *)0x105aa5e4/*ROM*/;
    cVar1 = cRam105aa5e4;
    while (cVar1 != '\0') {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcStack_14 = cVar1;
      pcStack_14 = pcStack_14 + 1;
      cVar1 = *pcVar2;
    }
    *pcStack_14 = '\0';
    copy_null_terminated_string((void *)(acStack_68),(void *)(pvRam8000ff88));
    uStack_5d = 0;
    cStack_60 = (char)(iStack_84 / 100) + '0';
    cStack_5f = (char)((iStack_84 % 100) / 10) + '0';
    pcVar2 = acStack_68;
    cStack_5e = (char)iStack_84 + (char)(iStack_84 / 10) * -10 + '0';
    cVar1 = acStack_68[0];
    while (cVar1 != '\0') {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcStack_14 = cVar1;
      pcStack_14 = pcStack_14 + 1;
      cVar1 = *pcVar2;
    }
    *pcStack_14 = '\0';
    pcVar2 = (char *)0x105aa5e4/*ROM*/;
    cVar1 = cRam105aa5e4;
    while (cVar1 != '\0') {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcStack_14 = cVar1;
      pcStack_14 = pcStack_14 + 1;
      cVar1 = *pcVar2;
    }
    *pcStack_14 = '\0';
    cVar1 = *pcRam8000ff8c;
    pcVar2 = pcRam8000ff8c;
    while (cVar1 != '\0') {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcStack_14 = cVar1;
      pcStack_14 = pcStack_14 + 1;
      cVar1 = *pcVar2;
    }
    *pcStack_14 = '\0';
    pcVar2 = (char *)0x105aa5e4/*ROM*/;
    cVar1 = cRam105aa5e4;
    while (cVar1 != '\0') {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcStack_14 = cVar1;
      pcStack_14 = pcStack_14 + 1;
      cVar1 = *pcVar2;
    }
    *pcStack_14 = '\0';
    copy_null_terminated_string((void *)(acStack_68),(void *)(pvRam8000ff90));
    cStack_60 = '0';
    cStack_5f = (char)(((uint)*(ushort *)(iVar3 + 4) % 100) / 10) + '0';
    cStack_5e = (char)*(ushort *)(iVar3 + 4) + (char)(*(ushort *)(iVar3 + 4) / 10) * -10 + '0';
    pcVar2 = acStack_68;
    uStack_5d = 0;
    cVar1 = acStack_68[0];
    while (cVar1 != '\0') {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcStack_14 = cVar1;
      pcStack_14 = pcStack_14 + 1;
      cVar1 = *pcVar2;
    }
    *pcStack_14 = '\0';
    pcVar2 = (char *)0x105aa5e4/*ROM*/;
    cVar1 = cRam105aa5e4;
    while (cVar1 != '\0') {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcStack_14 = cVar1;
      pcStack_14 = pcStack_14 + 1;
      cVar1 = *pcVar2;
    }
    *pcStack_14 = '\0';
    cVar1 = *pcRam8000ff94;
    pcVar2 = pcRam8000ff94;
    while (cVar1 != '\0') {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcStack_14 = cVar1;
      pcStack_14 = pcStack_14 + 1;
      cVar1 = *pcVar2;
    }
    *pcStack_14 = '\0';
    pcVar2 = (char *)(*(code *)0x105309aa/*ROM*/)(*(uint32_t *)(param_1 + 0xea50));
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcStack_14 = cVar1;
      pcStack_14 = pcStack_14 + 1;
      cVar1 = *pcVar2;
    }
    *pcStack_14 = '\0';
    pcVar2 = (char *)0x105aa5e4/*ROM*/;
    cVar1 = cRam105aa5e4;
    while (cVar1 != '\0') {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcStack_14 = cVar1;
      pcStack_14 = pcStack_14 + 1;
      cVar1 = *pcVar2;
    }
    *pcStack_14 = '\0';
    cVar1 = *pcRam8000ff98;
    pcVar2 = pcRam8000ff98;
    while (cVar1 != '\0') {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcStack_14 = cVar1;
      pcStack_14 = pcStack_14 + 1;
      cVar1 = *pcVar2;
    }
    *pcStack_14 = '\0';
    pcVar2 = (char *)(iVar3 + 8);
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcStack_14 = cVar1;
      pcStack_14 = pcStack_14 + 1;
      cVar1 = *pcVar2;
    }
    *pcStack_14 = '\0';
    cVar1 = *pcRam8000ff9c;
    pcVar2 = pcRam8000ff9c;
    while (cVar1 != '\0') {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcStack_14 = cVar1;
      pcStack_14 = pcStack_14 + 1;
      cVar1 = *pcVar2;
    }
    *pcStack_14 = '\0';
    pcVar2 = (char *)0x105aa5e4/*ROM*/;
    cVar1 = cRam105aa5e4;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      *pcStack_14 = cVar1;
      pcStack_14 = pcStack_14 + 1;
      cVar1 = *pcVar2;
    }
    *pcStack_14 = '\0';
    if (*(char *)(iVar3 + 6) == '\x01') {
      cVar1 = *pcRam8000ffa0;
      pcVar2 = pcRam8000ffa0;
      while (cVar1 != '\0') {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        *pcStack_14 = cVar1;
        pcStack_14 = pcStack_14 + 1;
        cVar1 = *pcVar2;
      }
      *pcStack_14 = '\0';
      pcVar2 = (char *)(iVar3 + 0x27);
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        *pcStack_14 = cVar1;
        pcStack_14 = pcStack_14 + 1;
        cVar1 = *pcVar2;
      }
      *pcStack_14 = '\0';
      cVar1 = *pcRam8000ffa4;
      pcVar2 = pcRam8000ffa4;
      while (cVar1 != '\0') {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        *pcStack_14 = cVar1;
        pcStack_14 = pcStack_14 + 1;
        cVar1 = *pcVar2;
      }
      *pcStack_14 = '\0';
      pcVar2 = (char *)0x105aa5e4/*ROM*/;
      cVar1 = cRam105aa5e4;
      while (cVar1 != '\0') {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        *pcStack_14 = cVar1;
        pcStack_14 = pcStack_14 + 1;
        cVar1 = *pcVar2;
      }
      *pcStack_14 = '\0';
    }
    iStack_84 = iStack_84 + 1;
    pcVar2 = pcRam8000ff74;
  }
  free_heap_if_flag_set_1045c56c(auStack_10,2);
  return iStack_84 != 1;
}
