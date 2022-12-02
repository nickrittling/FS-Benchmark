delete=yes
for file in *
do
    if [ $delete = yes ]
    then rm -f $file; delete=no
    else delete=yes
    fi
done

