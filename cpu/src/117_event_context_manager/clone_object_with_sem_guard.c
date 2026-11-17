/* @k10d clone_object_with_sem_guard @ 0x104328be
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 117_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a copy of a 0x34-byte object under a semaphore guard,
 *   registering it with the parent.
 * summary:
 *   Acquires a semaphore associated with param_1. Allocates 0x34 bytes and constructs two
 *   sub-objects at offsets 0x0 and 0x14 using cls_1059f170_new. Copies fields from param_2
 *   to the new object. Calls send_two_byte_mailbox_message to register the new object with
 *   param_1; if this fails, destroys the sub-objects and frees the memory. Returns the
 *   semaphore acquisition status.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int clone_object_with_sem_guard(int param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  
  iVar1 = twai_sem_obj((void *)(param_1 + 0x6c),_DAT_105a2bf4/*ROM*/);
  if (iVar1 != 0) {
    pvVar2 = (void *)heap_alloc((void *)0x34);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar3 = pvVar2;
      if ((pvVar2 != (void *)0x0) || (pvVar3 = (void *)heap_alloc((void *)0x34), pvVar3 != (void *)0x0)) {
        cls_1059f170_new(pvVar3);
        cls_1059f170_new((void *)((int)pvVar3 + 0x14));
        *(uint32_t *)((int)pvVar3 + 0x28) = 0;
        *(uint8_t *)((int)pvVar3 + 0x2c) = 0;
        *(uint32_t *)((int)pvVar3 + 0x30) = 0;
      }
    }
    copy_four_words_and_byte(pvVar2,param_2);
    copy_four_words_and_byte((void *)((int)pvVar2 + 0x14),(void *)((int)param_2 + 0x14));
    *(uint32_t *)((int)pvVar2 + 0x28) = *(uint32_t *)((int)param_2 + 0x28);
    *(uint8_t *)((int)pvVar2 + 0x2c) = *(uint8_t *)((int)param_2 + 0x2c);
    *(uint32_t *)((int)pvVar2 + 0x30) = *(uint32_t *)((int)param_2 + 0x30);
    iVar4 = send_two_byte_mailbox_message(param_1,pvVar2);
    if ((iVar4 == 0) && (pvVar2 != (void *)0x0)) {
      cls_1059f170_destructor((void *)((int)pvVar2 + 0x14),2);
      cls_1059f170_destructor(pvVar2,2);
      heap_free((int)pvVar2);
    }
  }
  return iVar1;
}
