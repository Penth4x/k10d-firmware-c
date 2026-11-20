/* @k10d cls_105d6d68_new @ 0x1051d2da
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105d6d68; returns param_1)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6d68 (vtable 0x105d6d68, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105d6d68; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e408 * cls_105d6d68_new(cls_105d6d68 *param_1)

{
  void *pvVar1;
  void *puVar2;
  
  if ((param_1 != (cls_105d6d68 *)0x0) ||
     (param_1 = (cls_105d6d68 *)heap_alloc((void *)0x10), (cls_1059e408 *)param_1 != (cls_1059e408 *)0x0)) {
    cls_1059e408_new((cls_1059e408 *)param_1);
    ((cls_1059e408 *)param_1)->field_0x0 = (uintptr_t)((void *)0x105d6d68/*ROM*/);
    ((cls_1059e408 *)param_1)->field2_0x8 = (uintptr_t)((void *)0x0);
    ((cls_1059e408 *)param_1)->field3_0xc = (uintptr_t)((void *)0x0);
    pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
    puVar2 = (void *)read_table_entry_field(pvVar1,0xb2);
    ((cls_1059e408 *)param_1)->field2_0x8 = (uintptr_t)(puVar2);
    (((vtbl_entry*)(*(int *)((char*)puVar2 + 8)))[3].fn)
              ((char*)puVar2 + ((vtbl_entry*)(*(int *)((char*)puVar2 + 8)))[3].adj + 8,param_1,0xb);
  }
  return (cls_1059e408 *)param_1;
}
