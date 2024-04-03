#!bin/sh
#FT_LINE2=$FT_LINE2+1
#FT_DIFF=$(($FT_LINE2-$FT_LINE1))
FT_LINE=1
FT_LINE2=15

cat /etc/passwd | cut -f1 -d: | sort -r | awk '{if(NR % 2 && NR > 1) print}' | sed "s/ /,/" | awk '{if(NR >= '$FT_LINE' && NR <= '$FT_LINE2') print}' | sed 's/$/,/g' | tr '\n' ' '
