/* @k10d reset_all_subobject_states @ 0x104fbaa8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on each sub-object pointer stored in the struct, passing 0
 *   except for one object which receives param_2.
 * summary:
 *   The function iterates through 32 pointer fields within the 0x80-byte object (param_1),
 *   dereferencing each to obtain a vtable and calling virtual slot 2 (offset 0x1c) with a
 *   this-adjustment. For 31 of these calls, the second argument is 0. For one call, it uses
 *   the object returned by get_or_create_sram_object_104ecffc and passes param_2 as the
 *   second argument. The function returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t reset_all_subobject_states(cls_105d436c *param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)param_1->field_0x14;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x14 + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  iVar2 = *(int *)param_1->field_0x28;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x28 + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  iVar2 = *(int *)param_1->field_0x48;
  (((vtbl_entry*)(iVar2))[3].fn)((int)param_1->field_0x48 + (int)((vtbl_entry*)(iVar2))[3].adj,0);
  iVar2 = *(int *)param_1->field_0x74;
  (((vtbl_entry*)(iVar2))[3].fn)((int)param_1->field_0x74 + (int)((vtbl_entry*)(iVar2))[3].adj,0);
  piVar1 = (int *)get_or_create_sram_object_104ecffc();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,param_2);
  iVar2 = *(int *)param_1->field_0x8;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  iVar2 = *(int *)param_1->field_0x10;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x10 + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  iVar2 = *(int *)param_1->field_0x1c;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x1c + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  iVar2 = *(int *)param_1->field_0x24;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x24 + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  iVar2 = *(int *)param_1->field_0x2c;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  iVar2 = *(int *)param_1->field_0x30;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x30 + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  iVar2 = *(int *)param_1->field_0x6c;
  (((vtbl_entry*)(iVar2))[3].fn)((int)param_1->field_0x6c + (int)((vtbl_entry*)(iVar2))[3].adj,0);
  iVar2 = *(int *)param_1->field_0x38;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x38 + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  iVar2 = *(int *)param_1->field_0x40;
  (((vtbl_entry*)(iVar2))[3].fn)((int)param_1->field_0x40 + (int)((vtbl_entry*)(iVar2))[3].adj,0);
  iVar2 = *(int *)param_1->field_0x5c;
  (((vtbl_entry*)(iVar2))[3].fn)((int)param_1->field_0x5c + (int)((vtbl_entry*)(iVar2))[3].adj,0);
  iVar2 = *(int *)param_1->field_0x60;
  (((vtbl_entry*)(iVar2))[3].fn)((int)param_1->field_0x60 + (int)((vtbl_entry*)(iVar2))[3].adj,0);
  iVar2 = *(int *)param_1->field_0x58;
  (((vtbl_entry*)(iVar2))[3].fn)((int)param_1->field_0x58 + (int)((vtbl_entry*)(iVar2))[3].adj,0);
  iVar2 = *(int *)param_1->field_0x78;
  (((vtbl_entry*)(iVar2))[3].fn)((int)param_1->field_0x78 + (int)((vtbl_entry*)(iVar2))[3].adj,0);
  iVar2 = *(int *)param_1->field_0x7c;
  (((vtbl_entry*)(iVar2))[3].fn)((int)param_1->field_0x7c + (int)((vtbl_entry*)(iVar2))[3].adj,0);
  iVar2 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  iVar2 = *(int *)param_1->field_0xc;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0xc + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  iVar2 = *(int *)param_1->field_0x3c;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x3c + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  iVar2 = *(int *)param_1->field_0x20;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x20 + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  iVar2 = *(int *)param_1->field_0x4c;
  (((vtbl_entry*)(iVar2))[3].fn)((int)param_1->field_0x4c + (int)((vtbl_entry*)(iVar2))[3].adj,0);
  iVar2 = *(int *)param_1->field_0x18;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x18 + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  iVar2 = *(int *)param_1->field_0x64;
  (((vtbl_entry*)(iVar2))[3].fn)((int)param_1->field_0x64 + (int)((vtbl_entry*)(iVar2))[3].adj,0);
  iVar2 = *(int *)param_1->field_0x34;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x34 + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  iVar2 = *(int *)param_1->field_0x44;
  (((vtbl_entry*)(iVar2))[3].fn)((int)param_1->field_0x44 + (int)((vtbl_entry*)(iVar2))[3].adj,0);
  iVar2 = *(int *)param_1->field_0x50;
  (((vtbl_entry*)(iVar2))[3].fn)((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar2))[3].adj,0);
  iVar2 = *(int *)param_1->field_0x54;
  (((vtbl_entry*)(iVar2))[3].fn)((int)param_1->field_0x54 + (int)((vtbl_entry*)(iVar2))[3].adj,0);
  iVar2 = *(int *)param_1->field_0x68;
  (((vtbl_entry*)(iVar2))[3].fn)((int)param_1->field_0x68 + (int)((vtbl_entry*)(iVar2))[3].adj,0);
  return 1;
}
