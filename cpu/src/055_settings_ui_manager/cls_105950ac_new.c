/* @k10d cls_105950ac_new @ 0x103c20ec
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x105950ac; returns param_1)
 * unit: 055_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105950ac (vtable 0x105950ac, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x105950ac; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int cls_105950ac_new(cls_105950ac *param_1)

{
  uint32_t extraout_r5;
  void *r6_in;
  void *r7_in;
  
  if ((param_1 != (cls_105950ac *)0x0) ||
     (param_1 = (cls_105950ac *)heap_alloc((void *)0x24), (cls_105956e0 *)param_1 != (cls_105956e0 *)0x0)) {
    cls_105956e0_new((cls_105956e0 *)param_1);
    ((cls_105956e0 *)param_1)->field_0x10 = (uintptr_t)(&DAT_105950ac/*ROM*/);
    ((cls_105956e0 *)param_1)->field_0x14 = 0;
    ((cls_105956e0 *)param_1)->field_0x18 = 0;
    ((cls_105956e0 *)param_1)->field_0x1c = 0;
    ((cls_105956e0 *)param_1)->field_0x20 = 0;
    ((cls_105956e0 *)param_1)->field_0x21 = 0;
    ((cls_105956e0 *)param_1)->field_0x22 = 0;
    (*_DAT_105950c0/*ROM*/)((int)&((cls_105956e0 *)param_1)->field_0x0 + (int)_DAT_105950bc/*ROM*/);
    (((vtbl_entry*)(((cls_105956e0 *)param_1)->field_0x10))[3].fn)
              ((int)&((cls_105956e0 *)param_1)->field_0x0 +
               (int)((vtbl_entry*)(((cls_105956e0 *)param_1)->field_0x10))[3].adj);
    instantiate_and_link_object_graph_103c0fcc(param_1,extraout_r5,r6_in,r7_in);
  }
  return (int)(cls_105956e0 *)param_1;
}
