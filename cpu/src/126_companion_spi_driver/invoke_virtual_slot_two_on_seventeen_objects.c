/* @k10d invoke_virtual_slot_two_on_seventeen_objects @ 0x10438dca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_seventeen_objects(uint32_t param_x0, uint32_t param_x1)

{
  int *piVar1;
  
  piVar1 = (int *)get_or_init_singleton_object_104929a0();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)sr_driver_singleton();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_singleton_object_10485138();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_singleton_object_1046d20c();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_sensor_singleton();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)initialize_singleton_object_1045d6a0();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_camera_object();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_cls_105a7db4_singleton();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_singleton_object_104bb22a();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_singleton_object_104fb12e();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_init_singleton_object_10516bf2();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)display_mgr_getter();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_singleton_object_1046be62();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_singleton_object_1046c502();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_init_singleton_104aa272();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_create_singleton_object_10470d84();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  piVar1 = (int *)get_or_init_singleton_object_1047316c();
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  return;
}
