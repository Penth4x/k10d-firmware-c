/* @k10d invoke_virtual_two_byte_write @ 0x10463cfa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_two_byte_write(int *param_1,uint param_2)

{
  (((vtbl_entry*)(*param_1))[9].fn)
            ((int)((vtbl_entry*)(*param_1))[9].adj + (int)param_1,0,(int)param_2 >> 8 & 0xff,0xff);
  (((vtbl_entry*)(*param_1))[9].fn)
            ((int)((vtbl_entry*)(*param_1))[9].adj + (int)param_1,1,param_2 & 0xff,0xff);
  return;
}
