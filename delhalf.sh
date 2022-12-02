delete=yes
for file in /mnt/TestDrive/Drive
do
    if [ $delete = yes ]
    then rm -f /mnt/TestDrive/Drive/$file; delete=no
    else delete=yes
    fi
done

