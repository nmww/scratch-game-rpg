#!/bin/bash
 s_info=$1
 #  判断第四个参数，不传默认8；传了数字，设置成指定的 帧数
if [ ! -n "$1" ];then
  s_info='init'
else
  echo "============" ${s_info}
fi
 git add .
 git commit -m ${s_info}
 git push -u origin 'main'
