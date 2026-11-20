/* @k10d init_virtual_slot_two_object @ 0x10466352
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a 0x140-byte object by allocating a 0x18-byte sub-object and registering
 *   the parent in a global structure.
 * summary:
 *   This function is virtual slot 2 of class cls_105a7d6c. It allocates a 0x18-byte heap
 *   object, initializes it via cpucom_request_clone, and stores the pointer at offset 0x28
 *   of the parent object. It then links the parent object into a global structure returned
 *   by get_cpucom_default_context at offset 0x400. The specific subsystem role is not
 *   determinable from the provided pseudocode and unverified callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_virtual_slot_two_object(void *param_1)

{
  void *pvVar1;
  int iVar2;
  
  alloc_pool_and_init_task((int *)((int)param_1 + 4),8,0x1000,5);
  pvVar1 = (void *)heap_alloc((void *)0x18);
  if (pvVar1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    cpucom_request_clone(pvVar1,0);
  }
  *(void **)((int)param_1 + 0x28) = pvVar1;
  set_ptr_if_field_is_null(pvVar1,(void *)((int)param_1 + 0x2c));
  send_mailbox_message((int *)((int)param_1 + 0x18));
  iVar2 = get_cpucom_default_context();
  *(int *)((int)param_1 + 0x13c) = iVar2;
  *(void **)(iVar2 + 0x400) = param_1;
  return 1;
}
