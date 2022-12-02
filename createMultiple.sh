for i in {1..20};
do dd if=/dev/zero bs=1000MB count=1 of=file$i; done
