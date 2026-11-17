/* @k10d reset_twelve_subsystem_objects @ 0x10443082
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on twelve distinct objects obtained from accessor functions,
 *   passing 0 as the argument.
 * summary:
 *   The function sequentially calls eleven different accessor functions
 *   (get_or_create_singleton_object_10439b82 through
 *   get_or_create_singleton_object_104414a2) to retrieve object pointers. For each object,
 *   it performs a virtual call to slot 2 (offset 0x14 in the vtable) with the object
 *   pointer adjusted by the this-adjustment value and an argument of 0. The specific roles
 *   of the accessed objects and the virtual method are unknown as the callees are unnamed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_twelve_subsystem_objects(void)

{
  int *piVar1;
  
  piVar1 = (int *)get_or_create_singleton_object_10439b82();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_singleton_object_1043d906();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_singleton_object_1043c90e();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_singleton_object_104418f8();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_singleton_object_10442b98();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_singleton_object_10442ecc();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_singleton_object_1044229a();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_singleton_object_10440164();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_singleton_object_1043effc();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_object_at_8001ef10();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_singleton_object_104414a2();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  return;
}
