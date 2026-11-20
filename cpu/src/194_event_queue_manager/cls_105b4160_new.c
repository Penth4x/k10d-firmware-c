/* @k10d cls_105b4160_new @ 0x104919d0
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105b4160; returns param_1)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b4160 (vtable 0x105b4160, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105b4160; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b4104 * cls_105b4160_new(cls_105b4160 *param_1)

{
  uint32_t *puVar1;
  int iVar2;
  uint32_t uVar3;
  void *pvVar4;
  int iVar5;
  uintptr_t sp;
  void *pvStack_1c;
  uint8_t local_18 [16];
  
  if ((param_1 != (cls_105b4160 *)0x0) ||
     (param_1 = (cls_105b4160 *)heap_alloc((void *)0x1c), param_1 != (cls_105b4160 *)0x0)) {
    cls_105b4104_new((cls_105b4104 *)param_1);
    ((cls_105b4104 *)param_1)->field_0x18 = (uintptr_t)(&DAT_105b4160/*ROM*/);
    puVar1 = (uint32_t *)get_or_init_sram_block_1052b6fc();
    init_object_with_two_ids_1052b824(local_18,puVar1);
    puVar1 = &((cls_105b4104 *)param_1)->field_0x10;
    iVar2 = 8;
    do {
      iVar5 = iVar2 + -4;
      *(uint32_t *)(iVar5 + (int)puVar1) = *(uint32_t *)(local_18 + iVar2 + -4);
      iVar2 = iVar5;
    } while (iVar5 != 0);
    free_heap_if_flagged_1045c402(local_18,2);
    pvStack_1c = (void *)get_system_heap();
    iVar2 = return_first_word_1045c514(puVar1);
    iVar5 = read_struct_field_at_offset_4(puVar1);
    uVar3 = mempool_get_block(pvStack_1c,(void *)((uint)(iVar2 * iVar5 * 3) >> 1),0);
    ((cls_105b4104 *)param_1)->field_0x0 = uVar3;
    pvVar4 = (void *)get_system_heap();
    iVar2 = return_first_word_1045c514(puVar1);
    iVar5 = read_struct_field_at_offset_4(puVar1);
    uVar3 = mempool_get_block(pvVar4,(void *)((uint)(iVar2 * iVar5 * 3) >> 1),0);
    ((cls_105b4104 *)param_1)->field_0x4 = uVar3;
    pvVar4 = (void *)get_system_heap();
    iVar2 = return_first_word_1045c514(puVar1);
    iVar5 = read_struct_field_at_offset_4(puVar1);
    uVar3 = mempool_get_block(pvVar4,(void *)((uint)(iVar2 * iVar5 * 3) >> 1),0);
    ((cls_105b4104 *)param_1)->field_0x8 = uVar3;
  }
  return (cls_105b4104 *)param_1;
}
