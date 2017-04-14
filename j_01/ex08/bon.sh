ldapsearch -Q -LLL "(sn=*bon*)" -o "(sn=mr*)" sn | grep 'sn: ' | sed 's/sn: //g' | wc -l
