/* @k10d open_cf_autorun_file @ 0x104b5632
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Opens an AUTORUN file on the CF card via a virtual file interface and registers it.
 * summary:
 *   The function uses a virtual call idiom on the object in param_1 to invoke a method at
 *   vtable offset 0x2c, passing a filename buffer at param_1+0x15 and a mode of 2 (likely
 *   open-for-read). If the first call fails (returns 0), it retries with mode 0. On
 *   success, it calls count_string_bytes(param_2) to process the filename string, then
 *   invokes another virtual method at offset 0x44 to register or associate the file handle
 *   (uStack_c) with the string. Finally, it calls a method at offset 0x34, likely to
 *   finalize or commit the operation. The prior note 'script_open_autorun' aligns with the
 *   'AUTORUN' filename pattern typical of CF card autorun scripts.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void open_cf_autorun_file(int *param_1,char *param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar4 = *(int *)*param_1;
  iVar4 = (((vtbl_entry*)(iVar4))[5].fn)
                    (*param_1 + (int)((vtbl_entry*)(iVar4))[5].adj,param_1 + 0x15,2,&uStack_c);
  piVar2 = (int *)*param_1;
  if (iVar4 == 0) {
    (((vtbl_entry*)(*piVar2))[5].fn)
              ((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[5].adj,param_1 + 0x15,0,&uStack_c);
    piVar2 = (int *)*param_1;
  }
  else {
    (((vtbl_entry*)(*piVar2))[9].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[9].adj,uStack_c,0,2);
    piVar2 = (int *)*param_1;
  }
  iVar3 = *piVar2;
  sVar1 = *(short *)(iVar3 + 0x40);
  iVar4 = count_string_bytes(param_2);
  (((vtbl_entry*)(iVar3))[8].fn)((int)piVar2 + (int)sVar1,uStack_c,param_2,iVar4);
  iVar4 = *(int *)*param_1;
  (((vtbl_entry*)(iVar4))[6].fn)(*param_1 + (int)((vtbl_entry*)(iVar4))[6].adj,uStack_c);
  return;
}
