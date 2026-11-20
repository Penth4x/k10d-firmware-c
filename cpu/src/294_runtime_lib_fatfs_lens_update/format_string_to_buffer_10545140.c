/* @k10d format_string_to_buffer_10545140 @ 0x10545140
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int format_string_to_buffer_10545140(uint8_t *param_1,char *param_2,void *param_3,void *param_4)

{
  struct {
    char * pcStack_c;
    void * pvStack_8;
    void * pvStack_4;
  } _cfg_c;
  char *pcVar1;
  int iVar2;
  uintptr_t sp;
  void **ppvStack_28;
  *(uint *)_DAT_80014a6c/*SDRAM*/ = 0;
  ppvStack_28 = &_cfg_c.pvStack_8;
  _cfg_c.pcStack_c = param_2;
  _cfg_c.pvStack_8 = param_3;
  _cfg_c.pvStack_4 = param_4;
  do {
    pcVar1 = _cfg_c.pcStack_c;
    if (*_cfg_c.pcStack_c == '\0') {
      *param_1 = 0;
      return *(uint *)_DAT_80014a6c/*SDRAM*/;
    }
    if (*_cfg_c.pcStack_c == '%') {
      iVar2 = format_value_into_buffer(param_1,&_cfg_c.pcStack_c,&ppvStack_28,0);
      _cfg_c.pcStack_c = _cfg_c.pcStack_c + 1;
    }
    else {
      do {
        _cfg_c.pcStack_c = _cfg_c.pcStack_c + 1;
        if (*_cfg_c.pcStack_c == '%') break;
      } while (*_cfg_c.pcStack_c != '\0');
      iVar2 = (int)_cfg_c.pcStack_c - (int)pcVar1;
      memcpy_bytes(param_1,pcVar1,iVar2);
    }
    *(uint *)_DAT_80014a6c/*SDRAM*/ = *(uint *)_DAT_80014a6c/*SDRAM*/ + iVar2;
    param_1 = param_1 + iVar2;
  } while( true );
}
