/* @k10d reset_eleven_subsystem_objects @ 0x104431ac
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 with argument 0 on eleven objects obtained from singleton
 *   getters.
 * summary:
 *   The function calls eleven distinct getter functions
 *   (get_or_create_singleton_object_10439b82 through
 *   get_or_create_singleton_object_10442ecc) to obtain object pointers. For each object, it
 *   performs a virtual call to slot 2 (offset 0x1c in the vtable) passing the object
 *   pointer (adjusted by the this-adjustment at vtable offset 0x18) and the integer 0. The
 *   callees are not named, so the specific subsystems being reset are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_eleven_subsystem_objects(void)

{
  int *piVar1;
  
  piVar1 = (int *)get_or_create_singleton_object_10439b82();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_1043d906();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_1043c90e();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_104418f8();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_10442b98();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_10442ecc();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_1044229a();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_10440164();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_1043effc();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_object_at_8001ef10();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_104414a2();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  return;
}
