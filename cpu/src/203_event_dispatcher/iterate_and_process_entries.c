/* @k10d iterate_and_process_entries @ 0x1049a1d8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Loops over entries in a list, calling virtual methods and helpers to process each one
 *   until failure or completion.
 * summary:
 *   The function iterates through a count stored at param_2+2. For each index, it invokes
 *   two virtual methods on the object in param_4 (slots at offsets 0x4c and 0x3c) and calls
 *   read_table_entry_by_index. If all three return valid non-zero results, it calls
 *   iterate_and_process_object_list with the results; if that returns NULL, it stops the
 *   loop. Otherwise, it calls store_pointer_in_array_and_notify with the result. Returns 1
 *   on success/completion, 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int iterate_and_process_entries(char *param_1,uint16_t *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  uintptr_t sp;
  int *piVar6;
  uint8_t auStack_30 [4];
  int iStack_14;
  
  piVar6 = (int *)auStack_30;
  iStack_14 = 1;
  uVar5 = 0;
  if (*(int *)(param_2 + 2) != 0) {
    do {
      iVar1 = (((vtbl_entry*)(*param_4))[9].fn)
                        ((int)((vtbl_entry*)(*param_4))[9].adj + (int)param_4,*param_2);
      piVar2 = (int *)(((vtbl_entry*)(*param_4))[7].fn)
                                ((int)((vtbl_entry*)(*param_4))[7].adj + (int)param_4,*param_2);
      iVar3 = read_table_entry_by_index(param_2,uVar5);
      if (((iVar1 != 0) && (piVar2 != (int *)0xffffffff)) && (iVar3 != 0)) {
        *piVar6 = iVar1;
        pvVar4 = (void *)iterate_and_process_object_list(param_1,piVar2,iVar3,param_3,(int *)*piVar6);
        if (pvVar4 == 0) {
          iStack_14 = 0;
        }
        else {
          store_pointer_in_array_and_notify(param_2,pvVar4,iVar3,uVar5);
        }
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 < *(uint *)(param_2 + 2)) && (iStack_14 == 1));
  }
  return iStack_14;
}
