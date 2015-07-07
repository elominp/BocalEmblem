#!/bin/sh
## strategic.sh for BocalEmblem in /home/guigui/BocalEmblem
## 
## Made by guigui
## Login   <guigui@epitech.net>
## 
## Started on  Sun May 17 19:01:58 2015 guigui
## Last update Sun May 17 19:44:27 2015 guigui
##

#! /bin/sh

../binaries/strategic borders1.map borders2.map > borders1.log 2> /dev/null
../binaries/strategic borders2.map borders3.map > borders2.log 2> /dev/null
../binaries/strategic borders3.map borders4.map > borders3.log 2> /dev/null
../binaries/strategic borders4.map borders5.map > borders4.log 2> /dev/null
../binaries/strategic borders5.map borders6.map > borders5.log 2> /dev/null
../binaries/strategic borders6.map borders7.map > borders6.log 2> /dev/null
../binaries/strategic borders7.map borders8.map > borders7.log 2> /dev/null
../binaries/strategic borders8.map doubleid.map > borders8.log 2> /dev/null
../binaries/strategic doubleid.map kb.map > doubleid.log 2> /dev/null
../binaries/strategic kb.map > kb.log 2> /dev/null
../binaries/strategic multipleid values1.map > multipleid.log 2> /dev/null
../binaries/strategic values1.map values2.map > values1.log 2> /dev/null
../binaries/strategic values2.map values3.map > values2.log 2> /dev/null
../binaries/strategic values3.map borders1.map > values3.log 2> /dev/null
ret=$(cat borders1.log | tail -1)
chk="An error occured"
ok="--end--"
if [ "$ret" = "$chk" ]; then
    echo -e "[ \033[32mOK\033[0m ] borders1.map"
else
    echo -e "[ \033[31;5mFail\033[0m ] borders1.map"
fi
ret=$(cat borders2.log | tail -1)
chk="An error occured"
if [ "$ret" = "$chk" ]; then
    echo -e "[ \033[32mOK\033[0m ] borders2.map"
else
    echo -e "[ \033[31;5mFail\033[0m ] borders2.map"
fi
ret=$(cat borders3.log | tail -1)
chk="An error occured"
if [ "$ret" = "$chk" ]; then
    echo -e "[ \033[32mOK\033[0m ] borders3.map"
else
    echo -e "[ \033[31;5mFail\033[0m ] borders3.map"
fi
ret=$(cat borders4.log | tail -1)
chk="An error occured"
if [ "$ret" = "$chk" ]; then
    echo -e "[ \033[32mOK\033[0m ] borders4.map"
else
    echo -e "[ \033[31;5mFail\033[0m ] borders4.map"
fi
ret=$(cat borders5.log | tail -1)
chk="An error occured"
if [ "$ret" = "$chk" ]; then
    echo -e "[ \033[32mOK\033[0m ] borders5.map"
else
    echo -e "[ \033[31;5mFail\033[0m ] borders5.map"
fi
ret=$(cat borders6.log | tail -1)
chk="An error occured"
if [ "$ret" = "$chk" ]; then
    echo -e "[ \033[32mOK\033[0m ] borders6.map"
else
    echo -e "[ \033[31;5mFail\033[0m ] borders6.map"
fi
ret=$(cat borders7.log | tail -1)
chk="An error occured"
if [ "$ret" = "$chk" ]; then
    echo -e "[ \033[32mOK\033[0m ] borders7.map"
else
    echo -e "[ \033[31;5mFail\033[0m ] borders7.map"
fi
ret=$(cat borders8.log | tail -1)
chk="An error occured"
if [ "$ret" = "$chk" ]; then
    echo -e "[ \033[32mOK\033[0m ] borders8.map"
else
    echo -e "[ \033[31;5mFail\033[0m ] borders8.map"
fi
ret=$(cat doubleid.log | tail -1)
chk="An error occured"
if [ "$ret" = "$chk" ]; then
    echo -e "[ \033[32mOK\033[0m ] doubleid.map"
else
    echo -e "[ \033[31;5mFail\033[0m ] doubleid.map"
fi
ret=$(cat kb.log | tail -1)
chk="An error occured"
if [ "$ret" = "$ok" ]; then
    echo -e "[ \033[32mOK\033[0m ] kb.map"
else
    echo -e "[ \033[31;5mFail\033[0m ] kb.map"
fi
ret=$(cat multipleid.log | tail -1)
chk="An error occured"
if [ "$ret" = "$chk" ]; then
    echo -e "[ \033[32mOK\033[0m ] multpleid.map"
else
    echo -e "[ \033[31;5mFail\033[0m ] multipleid.map"
fi
ret=$(cat values1.log | tail -1)
chk="An error occured"
if [ "$ret" = "$chk" ]; then
    echo -e "[ \033[32mOK\033[0m ] values1.map"
else
    echo -e "[ \033[31;5mFail\033[0m ] values1.map"
fi
ret=$(cat values2.log | tail -1)
chk="An error occured"
if [ "$ret" = "$chk" ]; then
    echo -e "[ \033[32mOK\033[0m ] values2.map"
else
    echo -e "[ \033[31;5mFail\033[0m ] values2.map"
fi
ret=$(cat values3.log | tail -1)
chk="An error occured"
if [ "$ret" = "$chk" ]; then
    echo -e "[ \033[32mOK\033[0m ] values3.map"
else
    echo -e "[ \033[31;5mFail\033[0m ] values3.map"
fi
rm *.log
