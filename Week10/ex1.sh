rm ex1.txt
rm _ex1_1.txt
rm _ex1_2.txt

ln _ex1.txt _ex1_1.txt
ln _ex1.txt _ex1_2.txt

ls -i _ex1.txt >>ex1.txt