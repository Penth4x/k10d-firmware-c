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
    (((vtbl_entry*)(*param_1))[9].fn)
              ((int)((vtbl_entry*)(*param_1))[9].adj + (int)param_1,0,(int)param_3 >> 0x18 & 0xff,0xff);
    (((vtbl_entry*)(*param_1))[9].fn)
              ((int)((vtbl_entry*)(*param_1))[9].adj + (int)param_1,1,(int)param_3 >> 0x10 & 0xff,0xff);
    (((vtbl_entry*)(*param_1))[9].fn)
              ((int)((vtbl_entry*)(*param_1))[9].adj + (int)param_1,2,(int)param_3 >> 8 & 0xff,0xff);
    (((vtbl_entry*)(*param_1))[9].fn)
              ((int)((vtbl_entry*)(*param_1))[9].adj + (int)param_1,3,param_3 & 0xff,0xff);
  }
  else if (param_2 == 0x19) {
    (((vtbl_entry*)(*param_1))[9].fn)
              ((int)((vtbl_entry*)(*param_1))[9].adj + (int)param_1,4,(int)param_3 >> 0x18 & 0xff,0xff);
  }
  else {
    int desc = param_2 * 8;   /* field -> byte offset of its 8-byte descriptor */
    (((vtbl_entry*)(*param_1))[9].fn)
              ((int)((vtbl_entry*)(*param_1))[9].adj + (int)param_1,
               *(uint *)(DAT_105a78c4 + desc) & 0xff,           /* [+0] target offset */
               param_3 << (DAT_105a78c4[desc + 5] & 0xf) & 0xff, /* [+5] shift */
               DAT_105a78c4[desc + 4]);                          /* [+4] mask */
  }
  return;
}
