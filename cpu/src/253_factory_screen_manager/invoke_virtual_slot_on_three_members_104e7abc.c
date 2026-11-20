/* @k10d invoke_virtual_slot_on_three_members_104e7abc @ 0x104e7abc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_three_members_104e7abc(cls_105c136c *param_1,uint32_t param_2)

{
  (*(code *)((uint32_t *)(param_1->field_0x1c))[0x39])
            ((int)&param_1->field_0x10 + (int)*(short *)(param_1->field_0x1c + 0x38));
  (((vtbl_entry*)(param_1->field_0x3c))[28].fn)
            ((int)&param_1->field_0x30 + (int)((vtbl_entry*)(param_1->field_0x3c))[28].adj,param_2);
  (((vtbl_entry*)(param_1->field_0x2c))[28].fn)
            (&param_1->field_0x20 + ((vtbl_entry*)(param_1->field_0x2c))[28].adj,param_2);
  return;
}
