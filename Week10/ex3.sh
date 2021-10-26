rm ex3.txt 

chmod 666 _ex3.txt >>ex3.txt
chmod u=rwx,o=rwx _ex3.txt >>ex3.txt
chmod g=u _ex3.txt >>ex3.txt

echo -e "What does 660 mean for ex3.txt? - u=rw- g=rw- o=---\n"
echo -e "What does 775 mean for ex3.txt? - u=rwx g=rwx o=r-x\n"
echo -e "What does 777 mean for ex3.txt? - u=rwx g=rwx o=rwx\n"