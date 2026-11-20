/* @k10d cls_105b4130_new @ 0x10491828
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105b4130; returns param_1)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b4130 (vtable 0x105b4130, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105b4130; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b4104 * cls_105b4130_new(cls_105b4130 *param_1)

{
  uint32_t *puVar1;
  void *pvVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  uintptr_t sp;
  uint8_t local_18 [16];
  
  if ((param_1 != (cls_105b4130 *)0x0) ||
     (param_1 = (cls_105b4130 *)heap_alloc((void *)0x1c), param_1 != (cls_105b4130 *)0x0)) {
    cls_105b4104_new((cls_105b4104 *)param_1);
    ((cls_105b4104 *)param_1)->field_0x18 = (uintptr_t)(&DAT_105b4130/*ROM*/);
    puVar1 = (uint32_t *)get_or_init_sram_block_1052b6fc();
    init_object_with_two_ids_1052b824(local_18,puVar1);
    puVar1 = &((cls_105b4104 *)param_1)->field_0x10;
    iVar3 = 8;
    do {
      iVar5 = iVar3 + -4;
      *(uint32_t *)(iVar5 + (int)puVar1) = *(uint32_t *)(&stack0xffffffe4 + iVar3);
      iVar3 = iVar5;
    } while (iVar5 != 0);
    free_heap_if_flagged_1045c402(local_18,2);
    pvVar2 = (void *)get_system_heap();
    iVar3 = return_first_word_1045c514(puVar1);
    iVar5 = read_struct_field_at_offset_4(puVar1);
    uVar4 = mempool_get_block(pvVar2,(void *)(iVar3 * iVar5 * 2),0);
    ((cls_105b4104 *)param_1)->field_0x0 = uVar4;
    pvVar2 = (void *)get_system_heap();
    iVar3 = return_first_word_1045c514(puVar1);
    iVar5 = read_struct_field_at_offset_4(puVar1);
    uVar4 = mempool_get_block(pvVar2,(void *)(iVar3 * iVar5 * 2),0);
    ((cls_105b4104 *)param_1)->field_0x4 = uVar4;
    pvVar2 = (void *)get_system_heap();
    iVar3 = return_first_word_1045c514(puVar1);
    iVar5 = read_struct_field_at_offset_4(puVar1);
    uVar4 = mempool_get_block(pvVar2,(void *)(iVar3 * iVar5 * 2),0);
    ((cls_105b4104 *)param_1)->field_0x8 = uVar4;
  }
  return (cls_105b4104 *)param_1;
}
