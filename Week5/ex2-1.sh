for i in $(seq 500) ; do
    last_num=$(cat file | tail -n 1)
    ((last_num++))
    echo "$lastnumber" >> file
done