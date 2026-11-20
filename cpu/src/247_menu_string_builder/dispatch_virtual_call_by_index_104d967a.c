/* @k10d dispatch_virtual_call_by_index_104d967a @ 0x104d967a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_by_index_104d967a(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)0x104d689e/*ROM*/)(param_3);
  if (iVar1 == 0) {
    iVar1 = get_or_create_singleton_object_104d987a();
    (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].fn)
              (iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].adj,param_2,param_3);
  }
  else {
    iVar1 = (*(code *)0x104d689e/*ROM*/)(param_3);
    if (iVar1 == 1) {
      iVar1 = get_or_create_singleton_object_104da20c();
      (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].fn)
                (iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].adj,param_2,param_3);
    }
    else {
      iVar1 = (*(code *)0x104d689e/*ROM*/)(param_3);
      if (iVar1 == 2) {
        iVar1 = get_or_init_sram_object_104daf88();
        (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].fn)
                  (iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].adj,param_2,param_3);
      }
      else {
        iVar1 = (*(code *)0x104d689e/*ROM*/)(param_3);
        if (iVar1 == 3) {
          iVar1 = get_or_create_singleton_object_104db97e();
          (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].fn)
                    (iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].adj,param_2,param_3);
        }
        else {
          iVar1 = (*(code *)0x104d689e/*ROM*/)(param_3);
          if (iVar1 == 4) {
            iVar1 = get_or_init_singleton_object_104dd452();
            (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].fn)
                      (iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].adj,param_2,param_3);
          }
          else {
            iVar1 = (*(code *)0x104d689e/*ROM*/)(param_3);
            if (iVar1 == 5) {
              iVar1 = init_singleton_object_104dc134();
              (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].fn)
                        (iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].adj,param_2,param_3);
            }
            else {
              iVar1 = (*(code *)0x104d689e/*ROM*/)(param_3);
              if (iVar1 == 6) {
                iVar1 = get_or_create_sram_object_104dc2a4();
                (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].fn)
                          (iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].adj,param_2,param_3);
              }
              else {
                iVar1 = (*(code *)0x104d689e/*ROM*/)(param_3);
                if (iVar1 == 7) {
                  iVar1 = get_or_init_sram_object_104dcc9a();
                  (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].fn)
                            (iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].adj,param_2,param_3);
                }
                else {
                  iVar1 = (*(code *)0x104d689e/*ROM*/)(param_3);
                  if (iVar1 == 8) {
                    iVar1 = initialize_sram_object_once_104ddb9c();
                    (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].fn)
                              (iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].adj,param_2,param_3);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}
