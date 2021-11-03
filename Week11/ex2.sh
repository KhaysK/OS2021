rm ex2.txt 

sudo cp -a /bin/bash lofsdisk
sudo cp -a /bin/ls lofsdisk
sudo cp -a /bin/cat lofsdisk
sudo cp -a /bin/echo lofsdisk
sudo bash -c "echo 'Khabib' >> lofsdisk/file1"
sudo bash -c "echo 'Khaysadykov' >> lofsdisk/file2"

gcc ex2.c -o ex2.out
sudo cp -a ex2.out lofsdisk
echo "OUTPUT FROM lofsdisk:" >> ex2.txt
sudo chroot lofsdisk ./ex2.out >> ex2.txt
echo "USUAL OUTPUT:" >> ex2.txt
./ex2.out >> ex2.txt