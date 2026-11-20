/* @k10d process_object_event_with_semaphores @ 0x10492c36
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 196_settings_event_handler (unit names are model-proposed)
 * purpose:
 *   Acquires semaphores, dispatches virtual calls on an object, and signals completion
 *   based on state flags.
 * summary:
 *   The function locks two semaphores at offsets 0x2c and 0x34 of the first parameter. It
 *   checks a flag at offset 0x21 and calls a helper (iterate_and_check_queue_items). If
 *   successful, it retrieves an object pointer from param_2, invokes virtual slots 2 and 3,
 *   and conditionally calls console_printf with specific constants. It updates a pointer at
 *   offset 0x3c and finally signals the semaphores.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_object_event_with_semaphores(cls_105b432c *param_1,int *param_2,void *param_3,void *param_4)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  void *pvVar4;
  uint64_t uVar5;
  
  twai_sem_obj(&param_1->field_0x2c,_DAT_105a2bf0/*ROM*/);
  twai_sem_obj(&param_1->field_0x34,_DAT_105a2bf0/*ROM*/);
  if ((param_1->field_0x21 != '\0') && (iVar1 = iterate_and_check_queue_items((uint32_t)(param_1)), iVar1 == 0)) {
    piVar2 = (int *)(*(code *)0x10491edc/*ROM*/)(param_2);
    iVar1 = (((vtbl_entry*)(*piVar2))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[2].adj);
    if (iVar1 != 0) {
      pvVar4 = (void *)0x2;
      bVar3 = test_flag_bits_in_struct((int)param_2,2);
      if (bVar3) {
        if (param_1->field_0x3c != 0) {
          console_printf((void *)0x105b437c/*ROM*/,pvVar4,param_3,param_4);
        }
        iVar1 = (*(code *)0x10491edc/*ROM*/)(param_2);
        param_1->field_0x3c = iVar1;
      }
      else {
        iVar1 = param_1->field_0x3c;
        uVar5 = (*(code *)0x10491edc/*ROM*/)(param_2);
        if (iVar1 != (int)((ulonglong)uVar5 >> 0x20)) {
          console_printf((void *)0x105b439c/*ROM*/,(void *)uVar5,param_3,param_4);
        }
        bVar3 = test_flag_bits_in_struct((int)param_2,0x10);
        if (bVar3) {
          param_1->field_0x3c = 0;
        }
      }
      piVar2 = (int *)(*(code *)0x10491edc/*ROM*/)(param_2);
      (((vtbl_entry*)(*piVar2))[3].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[3].adj,0x60001,param_2);
    }
  }
  destroy_virtual_object(param_2,3);
  if (param_1->field_0x20 == '\0') {
    wait_for_flag_then_toggle_state((uint32_t)(param_1));
  }
  sig_sem_obj(&param_1->field_0x34);
  sig_sem_obj(&param_1->field_0x2c);
  return;
}
