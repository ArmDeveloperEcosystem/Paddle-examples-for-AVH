#!/bin/bash

# download cmsis-toolbox
cmsis_toolbox_name="cmsis-toolbox-linux-arm64"
cmsis_toolbox_version="2.2.1"
cmsis_toolbox_url="https://github.com/Open-CMSIS-Pack/cmsis-toolbox/releases/download/${cmsis_toolbox_version}/${cmsis_toolbox_name}.tar.gz"
wget ${cmsis_toolbox_url}
tar -vxf ${cmsis_toolbox_name}.tar.gz
rm ${cmsis_toolbox_name}.tar.gz

# copy to opt
mv ${cmsis_toolbox_name} ctools
rm -rf /opt/ctools
mv ctools /opt
