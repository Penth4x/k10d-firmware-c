/* @k10d initialize_object_from_context @ 0x104a9e1e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Copies pointers from a context object into the target object and calls initialization
 *   routines on them.
 * summary:
 *   Retrieves a context pointer via initialize_singleton_object_1045d6a0 and extracts two
 *   sub-objects from offsets 0x1c and 0x20. It stores these into the target object
 *   (param_1) at corresponding offsets and invokes allocate_first_free_slot and
 *   allocate_free_slot_in_table_1045e7f2 with specific flags (0, 1, and 0x15) to configure
 *   them. Finally, it calls create_kernel_object on a sub-structure at offset 0xc of the
 *   target.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_from_context(cls_105b6d94 *param_1)

{
  int iVar1;
  void *pvVar2;
  uint32_t *puVar3;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  pvVar2 = *(void **)(iVar1 + 0x20);
  puVar3 = &param_1->field_0x4;
  param_1->field_0x1c = (uintptr_t)(pvVar2);
  allocate_first_free_slot((void *)(pvVar2),(int)(0),(uint32_t)(puVar3));
  allocate_first_free_slot((void *)(param_1->field_0x1c),(int)(1),(uint32_t)(puVar3));
  pvVar2 = *(void **)(iVar1 + 0x1c);
  param_1->field_0x20 = (uintptr_t)(pvVar2);
  allocate_free_slot_in_table_1045e7f2((void *)(pvVar2),(int)(0x15),(uint32_t)(puVar3));
  create_kernel_object(&param_1->field_0xc);
  return 1;
}
