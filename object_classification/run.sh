#!/bin/bash

csolution list packs -s base_project.csolution.yml -m > packs.txt
cpackget update-index
cpackget add -f packs.txt
cbuild base_project.csolution.yml
VHT_MPS3_Corstone_SSE-300 -C cpu0.CFGDTCMSZ=15 \
                        -C cpu0.CFGITCMSZ=15 \
                        -C mps3_board.uart0.out_file=\"-\" \
                        -C mps3_board.uart0.shutdown_tag=\"EXITTHESIM\" \
                        -C mps3_board.visualisation.disable-visualisation=1 \
                        -C mps3_board.telnetterminal0.start_telnet=0 \
                        -C mps3_board.telnetterminal1.start_telnet=0 \
                        -C mps3_board.telnetterminal2.start_telnet=0 \
                        -C mps3_board.telnetterminal5.start_telnet=0 \
                        out/base_project/Target_1/base_project.axf \
                        --stat
rm -rf out
rm -rf tmp
rm -rf base_project.cbuild-idx.yml
rm -rf base_project.cbuild-pack.yml
rm -rf base_project+Target_1.cbuild.yml
rm -rf base_project+Target_1.cprj