read s

i=0
re='^[0-9]+$'

while [ $i -lt 3 ]
do
    if ! [[ ${s:i:1} =~ $re ]]; then
        printf "error\n"
        exit 0
    fi

    i=`expr $i + 1`
done
    printf "%d\n" `expr $s \* 2`
