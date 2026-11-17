/* @k10d write_object_field_byte @ 0x104642ae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 140_property_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_object_field_byte(int *param_1,int param_2,uint param_3)

{
  if (param_2 == 0x18) {
    (**(code **)(*param_1 + 0x4c))
              ((int)*(short *)(*param_1 + 0x48) + (int)param_1,0,(int)param_3 >> 0x18 & 0xff,0xff);
    (**(code **)(*param_1 + 0x4c))
              ((int)*(short *)(*param_1 + 0x48) + (int)param_1,1,(int)param_3 >> 0x10 & 0xff,0xff);
    (**(code **)(*param_1 + 0x4c))
              ((int)*(short *)(*param_1 + 0x48) + (int)param_1,2,(int)param_3 >> 8 & 0xff,0xff);
    (**(code **)(*param_1 + 0x4c))
              ((int)*(short *)(*param_1 + 0x48) + (int)param_1,3,param_3 & 0xff,0xff);
  }
  else if (param_2 == 0x19) {
    (**(code **)(*param_1 + 0x4c))
              ((int)*(short *)(*param_1 + 0x48) + (int)param_1,4,(int)param_3 >> 0x18 & 0xff,0xff);
  }
  else {
    param_2 = param_2 * 8;
    (**(code **)(*param_1 + 0x4c))
              ((int)*(short *)(*param_1 + 0x48) + (int)param_1,
               *(uint *)(&DAT_105a78c4/*ROM*/ + param_2) & 0xff,
               param_3 << ((&DAT_105a78c9/*ROM*/)[param_2] & 0xf) & 0xff,(&DAT_105a78c8/*ROM*/)[param_2]);
  }
  return;
}
