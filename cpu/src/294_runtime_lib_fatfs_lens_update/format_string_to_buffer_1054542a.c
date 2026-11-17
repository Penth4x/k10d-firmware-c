/* @k10d format_string_to_buffer_1054542a @ 0x1054542a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int format_string_to_buffer_1054542a(uint8_t *param_1,char *param_2,void *param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  char *pcStack_8;
  void *pvStack_4;
  
  iVar2 = 0;
  pcStack_8 = param_2;
  pvStack_4 = param_3;
  do {
    pcVar1 = pcStack_8;
    *(uint *)_DAT_80014a6c/*SDRAM*/ = iVar2;
    if (*pcStack_8 == '\0') {
      *param_1 = 0;
      return *(uint *)_DAT_80014a6c/*SDRAM*/;
    }
    if (*pcStack_8 == '%') {
      iVar3 = format_value_into_buffer(param_1,&pcStack_8,&pvStack_4,0);
      pcStack_8 = pcStack_8 + 1;
    }
    else {
      do {
        pcStack_8 = pcStack_8 + 1;
        if (*pcStack_8 == '%') break;
      } while (*pcStack_8 != '\0');
      iVar3 = (int)pcStack_8 - (int)pcVar1;
      memcpy_bytes(param_1,pcVar1,iVar3);
    }
    iVar2 = *(uint *)_DAT_80014a6c/*SDRAM*/ + iVar3;
    param_1 = param_1 + iVar3;
  } while( true );
}
