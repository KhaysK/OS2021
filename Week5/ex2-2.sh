for i in $(seq 500) ; do
    while : ; do
        if ln file file.lock > "/dev/null" 2>&1 ; then
            break
        fi
        sleep 0.001
    done
    last_num=$(cat file | tail -n 1)
    ((last_num++))
    echo "$lastnumber" >> file
    rm file.lock
done