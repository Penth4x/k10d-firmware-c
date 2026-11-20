/* @k10d invoke_virtual_method_on_subobject_103a4bdc @ 0x103a4bdc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 on a sub-object pointer, passing a flag-dependent constant as the
 *   second argument.
 * summary:
 *   The function reads a byte flag from offset 0x65 of the input object and retrieves a
 *   sub-object pointer from offset 0x2c. It invokes virtual slot 2 (offset 0x14) on the
 *   sub-object, passing the sub-object adjusted by a this-pointer offset and a constant
 *   (0x1120004 if the flag is zero, 0x1120009 otherwise). The function returns the boolean
 *   value of the flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_virtual_method_on_subobject_103a4bdc(cls_10564c80 *param_1)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = (int *)(param_1->field_0x2c);
  bVar2 = param_1->field_0x65 == '\0';
  if (bVar2) {
    (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0x1120004,0);
  }
  else {
    (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0x1120009);
  }
  return bVar2;
}
