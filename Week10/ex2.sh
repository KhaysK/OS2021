rm ex2.txt
rm week10/_ex2.txt

echo Khabib Khaysadykov >>week01/file.txt

inodenumber=$(ls -i ./week01/file.txt | awk '{print $1;}')

link week01/file.txt week10/_ex2.txt >>ex2.txt
find . -inum $inodenumber >>ex2.txt
find . -inum $inodenumber -exec rm {} \; >> ex2.txt
