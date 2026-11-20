/* @k10d init_four_member_objects @ 0x104cfd1c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates four member objects and calls their virtual slot 2 with argument 0.
 * summary:
 *   The function initializes a struct by creating four instances of classes cls_105b9a7c,
 *   cls_105b9b2c, and cls_105b9a3c (twice). It stores the pointers at offsets 0x08, 0x0c,
 *   0x10, and 0x14 of the object. It then invokes virtual slot 2 (offset 0x14 in vtable) on
 *   each of the four members, passing 0 as the argument. This appears to be a constructor
 *   or initialization routine for a composite object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_four_member_objects(cls_105b9afc *param_1)

{
  void *puVar1;
  int iVar2;
  
  puVar1 = (void *)cls_105b9a7c_new((cls_105b9a7c *)0x0);
  param_1->field_0x8 = (uint32_t)(puVar1);
  puVar1 = (void *)cls_105b9b2c_new((cls_105b9b2c *)0x0);
  param_1->field_0xc = (uint32_t)(puVar1);
  puVar1 = (void *)cls_105b9a3c_new((cls_105b9a3c *)0x0);
  param_1->field_0x10 = (uint32_t)(puVar1);
  puVar1 = (void *)cls_105b9a3c_new((cls_105b9a3c *)0x0);
  param_1->field_0x14 = (uint32_t)(puVar1);
  iVar2 = *(int *)param_1->field_0x8;
  (((vtbl_entry*)(iVar2))[2].fn)
            ((void *)((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar2))[2].adj),0);
  iVar2 = *(int *)param_1->field_0xc;
  (((vtbl_entry*)(iVar2))[2].fn)
            ((void *)((int)param_1->field_0xc + (int)((vtbl_entry*)(iVar2))[2].adj),0);
  iVar2 = *(int *)param_1->field_0x10;
  (((vtbl_entry*)(iVar2))[2].fn)
            ((void *)((int)param_1->field_0x10 + (int)((vtbl_entry*)(iVar2))[2].adj),0);
  iVar2 = *(int *)param_1->field_0x14;
  (((vtbl_entry*)(iVar2))[2].fn)
            ((void *)((int)param_1->field_0x14 + (int)((vtbl_entry*)(iVar2))[2].adj),0);
  return;
}
