/* @k10d invoke_virtual_on_nine_objects @ 0x1042fb0e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_on_nine_objects(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = app_mode_activate(param_1,0);
  if (iVar1 != 0) {
    iVar2 = (((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].fn)
                      ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].adj + iVar1 + 4);
    if (iVar2 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].fn)
                ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].adj + iVar1 + 4,param_2,param_3);
    }
  }
  iVar1 = app_mode_activate(param_1,1);
  if (iVar1 != 0) {
    iVar2 = (((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].fn)
                      ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].adj + iVar1 + 4);
    if (iVar2 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].fn)
                ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].adj + iVar1 + 4,param_2,param_3);
    }
  }
  iVar1 = app_mode_activate(param_1,2);
  if (iVar1 != 0) {
    iVar2 = (((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].fn)
                      ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].adj + iVar1 + 4);
    if (iVar2 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].fn)
                ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].adj + iVar1 + 4,param_2,param_3);
    }
  }
  iVar1 = app_mode_activate(param_1,3);
  if (iVar1 != 0) {
    iVar2 = (((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].fn)
                      ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].adj + iVar1 + 4);
    if (iVar2 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].fn)
                ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].adj + iVar1 + 4,param_2,param_3);
    }
  }
  iVar1 = app_mode_activate(param_1,4);
  if (iVar1 != 0) {
    iVar2 = (((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].fn)
                      ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].adj + iVar1 + 4);
    if (iVar2 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].fn)
                ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].adj + iVar1 + 4,param_2,param_3);
    }
  }
  iVar1 = get_or_init_cached_value(param_1,0);
  if (iVar1 != 0) {
    iVar2 = (((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].fn)
                      ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].adj + iVar1 + 4);
    if (iVar2 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].fn)
                ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].adj + iVar1 + 4,param_2,param_3);
    }
  }
  iVar1 = get_or_init_cached_value(param_1,1);
  if (iVar1 != 0) {
    iVar2 = (((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].fn)
                      ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].adj + iVar1 + 4);
    if (iVar2 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].fn)
                ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].adj + iVar1 + 4,param_2,param_3);
    }
  }
  iVar1 = get_or_init_cached_value(param_1,2);
  if (iVar1 != 0) {
    iVar2 = (((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].fn)
                      ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].adj + iVar1 + 4);
    if (iVar2 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].fn)
                ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].adj + iVar1 + 4,param_2,param_3);
    }
  }
  iVar1 = get_or_init_cached_value(param_1,3);
  if (iVar1 != 0) {
    iVar2 = (((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].fn)
                      ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[2].adj + iVar1 + 4);
    if (iVar2 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].fn)
                ((int)((vtbl_entry*)(*(int *)(iVar1 + 4)))[3].adj + iVar1 + 4,param_2,param_3);
    }
  }
  return 1;
}
